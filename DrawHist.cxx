#include <Math/MinimizerOptions.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TF1NormSum.h>
#include <TFitResult.h>
#include <TH1.h>
#include <TLatex.h>
#include <TMath.h>
#include <TStopwatch.h>
#include <TStyle.h>
#include "TLorentzVector.h"
#include <vector>
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooDataHist.h"
#include "RooGaussian.h"
#include "TCanvas.h"
#include "RooPlot.h"
#include "TTree.h"
#include "TH1D.h"
#include "TRandom.h"
#include "RooGenericPdf.h"
#include "RooTFnBinding.h"

using namespace RooFit;

void SetPad(TCanvas * cc){
  cc->SetTopMargin(0.09);
  cc->SetBottomMargin(0.12);
  cc->SetLeftMargin(0.12);
  cc->SetRightMargin(0.13);
  gStyle->SetHistFillColor(0);
  gStyle->SetFrameFillColor(0);
  gStyle->SetPadColor(0);
  gStyle->SetCanvasColor(0);
  gStyle->SetStatColor(0);
  gStyle->SetTitleFillColor(0);
  gStyle->SetOptStat(0); // Stats box
  gStyle->SetPalette(56);//only 56 available
}
void SetTitleFormat(TH1 * hh){
  hh->SetTitle(" ");
  hh->GetYaxis()->CenterTitle();
  //hh->GetYaxis()->SetTitleFont(22);
  hh->GetYaxis()->SetTitleSize(0.05);
  hh->GetYaxis()->SetTitleOffset(1.15);
  hh->GetXaxis()->CenterTitle();
  //hh->GetXaxis()->SetTitleFont(22);
  hh->GetXaxis()->SetTitleSize(0.05);
  hh->GetXaxis()->SetTitleOffset(0.9);

}

Double_t DoubleSidedCB2(double x, double mu, double width, double a1, double p1, double a2, double p2)
{
  double u   = (x-mu)/width;
  double A1  = TMath::Power(p1/TMath::Abs(a1),p1)*TMath::Exp(-a1*a1/2);
  double A2  = TMath::Power(p2/TMath::Abs(a2),p2)*TMath::Exp(-a2*a2/2);
  double B1  = p1/TMath::Abs(a1) - TMath::Abs(a1);
  double B2  = p2/TMath::Abs(a2) - TMath::Abs(a2);

  double result(1);
  if      (u<-a1) result *= A1*TMath::Power(B1-u,-p1);
  else if (u<a2)  result *= TMath::Exp(-u*u/2);
  else            result *= A2*TMath::Power(B2+u,-p2);
  return result;
}


double DoubleSidedCB(double* x, double *par)
{
  return(par[0] * DoubleSidedCB2(x[0], par[1],par[2],par[3],par[4],par[5],par[6]));
}


// Sum of two DSCB functions
Double_t TwoDoubleSidedCB(Double_t *x, Double_t *par) {
  return DoubleSidedCB(x,par) + DoubleSidedCB(x,&par[7]);
}

// Background function
Double_t background(Double_t *x, Double_t *par) {
  return par[0] + x[0]*par[1];
}

Double_t Bs0FitFun(Double_t *x, Double_t *par) {
  return DoubleSidedCB(x,par) + background(x,&par[7]);
}

void DrawDs(TH1D* hDsMass_BeforeResCut, TH1D* hDsMass_AfterResCut, TString tag){
    SetTitleFormat(hDsMass_BeforeResCut);
    
    cout << "Sig: " << hDsMass_BeforeResCut->Integral(0,10000) << endl;
    cout << "DsPi0: " << hDsMass_AfterResCut->Integral(0,10000) << endl;

    TF1 *f_cb_before = new TF1("MyCrystalBall_before", "DoubleSidedCB", 1900., 2100., 7);
    TF1 *f_cb_after = new TF1("MyCrystalBall_after", "DoubleSidedCB", 1900., 2100., 7);

    double par[7];
    par[0]=70000;
    par[1]=hDsMass_BeforeResCut->GetMean();
    par[2]=hDsMass_BeforeResCut->GetRMS();
    par[3]=1;
    par[4]=1;
    par[5]=1;
    par[6]=1;
    f_cb_before->SetParNames("N","mu","width","a1","p1","a2","p2");
    f_cb_before->SetLineColor(kBlue);
    f_cb_before->SetParameters(&par[0]);

    double par1[7];
    par1[0]=60000;
    par1[1]=hDsMass_AfterResCut->GetMean();
    par1[2]=hDsMass_AfterResCut->GetRMS();
    par1[3]=1;
    par1[4]=1;
    par1[5]=1;
    par1[6]=1;
    f_cb_after->SetLineColor(kBlack);
    f_cb_after->SetParNames("N","mu","width","a1","p1","a2","p2");
    f_cb_after->SetParameters(&par1[0]);


    hDsMass_BeforeResCut->SetMaximum(hDsMass_BeforeResCut->GetMaximum()*1.3);
    hDsMass_BeforeResCut->SetLineWidth(2);
    hDsMass_BeforeResCut->SetMarkerColor(kBlue);
    hDsMass_BeforeResCut->SetMarkerStyle(8);
    hDsMass_BeforeResCut->SetLineWidth(3);
    hDsMass_BeforeResCut->SetLineStyle(1);
    hDsMass_BeforeResCut->SetLineColor(kBlue);
    hDsMass_BeforeResCut->SetFillStyle(0);

    hDsMass_AfterResCut->SetLineWidth(2);

    hDsMass_AfterResCut->SetMarkerColor(kBlack);
    hDsMass_AfterResCut->SetLineWidth(3);
    hDsMass_AfterResCut->SetLineStyle(1);
    hDsMass_AfterResCut->SetMarkerStyle(8);

    hDsMass_AfterResCut->SetLineColor(kBlack);
    hDsMass_AfterResCut->SetFillColor(kBlack);
    hDsMass_AfterResCut->SetFillStyle(3005);

    hDsMass_BeforeResCut->Draw("E1");
    hDsMass_AfterResCut->Draw("E1 same");
    
    hDsMass_BeforeResCut->Fit("MyCrystalBall_before");
    hDsMass_AfterResCut->Fit("MyCrystalBall_after");

    TLegend *legend = new TLegend(0.6,0.6,0.85,0.88);
    legend->AddEntry(hDsMass_BeforeResCut, "#it{m}(D_{s}^{-}) no Dalitz cut", "lp");
    TLegendEntry* l1 = legend->AddEntry((TObject*)0, Form("( #mu: %.2f #sigma: %.2f )",f_cb_before->GetParameter(1),abs(f_cb_before->GetParameter(2))), "");
    l1->SetTextSize(0.03);
    l1->SetTextColor(kBlue);

    legend->AddEntry(hDsMass_AfterResCut, "#it{m}(D_{s}^{-}) w/ Dalitz cut", "lp");
    TLegendEntry* l2 = legend->AddEntry((TObject*)0, Form("( #mu: %.2f #sigma: %.2f )",f_cb_after->GetParameter(1),abs(f_cb_after->GetParameter(2))), "");
    l2->SetTextSize(0.03);
    l2->SetTextColor(kBlack);

    legend->SetBorderSize(0);
    legend->Draw("same");

    /*TLine *line = new TLine(1968.34,0,1968.34,hDsMass_BeforeResCut->GetMaximum());
    line->SetLineColor(kBlack);
    line->SetLineStyle(kDashed);
    line->SetLineWidth(2);
    line->Draw();*/

    TLatex tt;
    tt.SetNDC();
    tt.SetTextSize(0.035);
    tt.DrawLatex(0.685,0.925,"LHCb Preliminary");
    tt.DrawLatex(0.125,0.925,"Normalisation Mode: B^{0}_{s} #rightarrow D_{s}^{* -} #pi^{+}");

}

void DrawDsstar(TH1D* hDsstarMass, TString tag){
    SetTitleFormat(hDsstarMass);
    TF1 *f_cb_sum = new TF1("MyCrystalBallSum", "TwoDoubleSidedCB", 2000., 2300., 14);
    double par[14];
    par[0]=5500;
    par[1]=2060;
    par[2]=15;
    par[3]=1;
    par[4]=1;
    par[5]=1;
    par[6]=1;
    par[7]=8000;
    par[8]=2112;
    par[9]=15;
    par[10]=1;
    par[11]=1;
    par[12]=1;
    par[13]=1;

    //f_cb_sum->SetParNames("N_Pi0","mu_Pi0","width_Pi0","a1_Pi0","p1_Pi0","a2_Pi0","p2_Pi0","N_Dsstar","mu_Dsstar","width_Dsstar","a1_Dsstar","p1_Dsstar","a2_Dsstar","p2_Dsstar");
    f_cb_sum->SetLineColor(kBlue);
    f_cb_sum->SetParameters(&par[0]);



    hDsstarMass->SetMaximum(hDsstarMass->GetMaximum()*1.3);
    hDsstarMass->SetLineWidth(2);
    hDsstarMass->SetMarkerColor(kBlack);
    hDsstarMass->SetMarkerStyle(8);
    hDsstarMass->SetLineWidth(3);
    hDsstarMass->SetLineStyle(1);
    hDsstarMass->SetLineColor(kBlack);
    hDsstarMass->SetFillStyle(0);

    hDsstarMass->Draw("E1");
    
    hDsstarMass->Fit("MyCrystalBallSum");


    // improve the picture:
    TF1 *backFcn = new TF1("backFcn",DoubleSidedCB,2000,2300,7);
    backFcn->SetLineColor(kOrange+1);
    backFcn->SetLineStyle(7);
    //TF1 *signalFcn = new TF1("signalFcn",DoubleSidedCB,2000,2300,7);
    TF1 *signalFcn = new TF1("signalFcn","gaus",2070,2160);

    signalFcn->SetLineColor(kViolet);
    //signalFcn->SetLineStyle(7);
    //signalFcn->SetLineWidth(2);

    //signalFcn->SetNpx(70);
    Double_t par_output[14];
    
    // writes the fit results into the par array
    f_cb_sum->GetParameters(par_output);
      
    backFcn->SetParameters(par_output);
    backFcn->Draw("same");
  
    signalFcn->SetParameters(&par_output[7]);
    signalFcn->Draw("same"); 
  

    TLegend *legend = new TLegend(0.6,0.6,0.85,0.88);
    legend->AddEntry(signalFcn, "D_{s}^{* -} #rightarrow D_{s}^{-} #gamma", "l");
    TLegendEntry* l1 = legend->AddEntry((TObject*)0, Form("( #mu: %.2f #sigma: %.2f )",f_cb_sum->GetParameter(8),abs(f_cb_sum->GetParameter(9))), "");
    l1->SetTextSize(0.03);
    l1->SetTextColor(kViolet);

    legend->AddEntry(backFcn, "D_{s}^{* -} #rightarrow D_{s}^{-} #pi^{0}", "l");
    TLegendEntry* l2 = legend->AddEntry((TObject*)0, Form("( #mu: %.2f #sigma: %.2f )",f_cb_sum->GetParameter(1),abs(f_cb_sum->GetParameter(2))), "");
    l2->SetTextSize(0.03);
    l2->SetTextColor(kOrange+1);

    legend->SetBorderSize(0);
    legend->Draw("same");

    TLegend *lg = new TLegend(0.18,0.68,0.35,0.85);
    lg->AddEntry(hDsstarMass, "Data (2018)", "lep");
    TLegendEntry* l11 = lg->AddEntry((TObject*)0, "", "");

    lg->AddEntry(f_cb_sum, "Sum", "l");
    lg->SetBorderSize(0);
    lg->Draw("same");

    TLatex tt;
    tt.SetNDC();
    tt.SetTextSize(0.035);
    tt.DrawLatex(0.685,0.925,"LHCb Preliminary");
    tt.DrawLatex(0.125,0.925,"Normalisation Mode: B^{0}_{s} #rightarrow D_{s}^{* -} #pi^{+}");


}

void DrawBs0(TH1D* hBs0Mass, TString tag){
    SetTitleFormat(hBs0Mass);
    
    TF1 *f_gaus = new TF1("sigGaus", "gaus", 5316., 5416);
    TF1 *f_exp1 = new TF1("sigBck1", "expo", 5200., 5316);

    TF1 *f_total = new TF1("mstotal","expo(0)+gaus(2)",5200., 5500);


    hBs0Mass->SetMaximum(hBs0Mass->GetMaximum()*1.6);
    hBs0Mass->SetMinimum(0);
  
    hBs0Mass->SetLineWidth(2);
    hBs0Mass->SetMarkerColor(kBlack);
    hBs0Mass->SetMarkerStyle(8);
    hBs0Mass->SetLineWidth(3);
    hBs0Mass->SetLineStyle(1);
    hBs0Mass->SetLineColor(kBlack);
    hBs0Mass->SetFillStyle(0);

    hBs0Mass->Draw("E1");

    hBs0Mass->Fit(f_exp1, "R0");
    hBs0Mass->Fit(f_gaus, "R+0");

    Double_t par_output[9];

    f_exp1->GetParameters(&par_output[0]);
    f_gaus->GetParameters(&par_output[2]);

    f_total->SetParameters(par_output);
    f_total->SetLineColor(kBlue);

    hBs0Mass->Fit(f_total,"R+");

    Double_t par_output1[9];
    f_total->GetParameters(&par_output1[0]);

    TF1 *backFcn = new TF1("backFcn","expo", 5200., 5500.);
    backFcn->SetParameters(par_output1);
    backFcn->SetLineColor(kGreen-3);
    backFcn->SetLineStyle(5);
    backFcn->SetLineWidth(2);

    backFcn->Draw("same");

    TF1 *signalFcn = new TF1("signalFcn","gaus", 5290., 5450);
    Double_t par_outputGaus[3];
    par_outputGaus[0]=1057.02;
    par_outputGaus[1]=5366.85;
    par_outputGaus[2]=22.026;
    signalFcn->SetParameters(par_outputGaus);

    signalFcn->Draw("same");

    TLegend *legend = new TLegend(0.6,0.6,0.85,0.88);
    legend->AddEntry(signalFcn, "B_{s}^{0} #rightarrow D_{s}^{* -} #pi^{+}", "l");
    TLegendEntry* l1 = legend->AddEntry((TObject*)0, Form("( #mu: %.2f #sigma: %.2f )",signalFcn->GetParameter(1),abs(signalFcn->GetParameter(2))), "");
    l1->SetTextSize(0.03);
    l1->SetTextColor(kRed);

    legend->AddEntry(backFcn, "Comb. + Other Bck ", "l");

    legend->SetBorderSize(0);
    legend->Draw("same");


    TLegend *lg = new TLegend(0.18,0.68,0.35,0.85);
    lg->AddEntry(hBs0Mass, "Data (2018)", "lep");
    TLegendEntry* l11 = lg->AddEntry((TObject*)0, "", "");

    lg->AddEntry(f_total, "Sum", "l");
    lg->SetBorderSize(0);
    lg->Draw("same");

    TLatex tt;
    tt.SetNDC();
    tt.SetTextSize(0.035);
    tt.DrawLatex(0.685,0.925,"LHCb Preliminary");
    tt.DrawLatex(0.125,0.925,"Normalisation Mode: B^{0}_{s} #rightarrow D_{s}^{* -} #pi^{+}");


}

void DrawHist()
{
    TString finName = "./anaHist.root";

    TFile *file = TFile::Open(finName);

    if(!file->IsOpen()){
        cout << "file file not open" << endl;
        exit(1);
    }

    // Draw Ds mass
    TH1D * hDsMass_BeforeResCut = (TH1D*) file->Get("mc/a012hRecoDs_M_Selected;1");
    TH1D * hDsMass_AfterResCut = (TH1D*) file->Get("mc/a017hRecoDs_M_Selected_Resonance;1");
    hDsMass_BeforeResCut->SetStats(kFALSE);
    hDsMass_BeforeResCut->GetXaxis()->SetTitle("#it{m}(K^{-}K^{+}#pi^{-}) [MeV/c^{2}]");
    hDsMass_BeforeResCut->GetYaxis()->SetTitle("Candidates / [ 2 MeV/c^{2} ]");
    hDsMass_AfterResCut->SetStats(kFALSE);
    
    TCanvas * c0 = new TCanvas("c0", "", 1200, 800);
    SetPad(c0);
    DrawDs(hDsMass_BeforeResCut,hDsMass_AfterResCut,"Ds");
    c0->Print("Hists/Compare_DsMass.pdf");
    c0->Print("Hists/Compare_DsMass.png");

    // Draw Ds* mass
    TH1D * hDsstarMass = (TH1D*) file->Get("mc/c001hRecoDsstar_M_Selected;1");
    hDsstarMass->SetStats(kFALSE);
    hDsstarMass->GetXaxis()->SetTitle("#it{m}(D_{s}^{-} #gamma) [MeV/c^{2}]");
    hDsstarMass->GetYaxis()->SetTitle("Candidates / [ 8 MeV/c^{2} ]");

    TCanvas * c1 = new TCanvas("c1", "", 1200, 800);
    SetPad(c1);
    DrawDsstar(hDsstarMass,"Dsstar");
    c1->Print("Hists/DsstarMass.pdf");
    c1->Print("Hists/DsstarMass.png");

    // Draw Bs0 mass
    TH1D * hBs0Mass = (TH1D*) file->Get("mc/c002hRecoB0_M_Selected;1");
    hBs0Mass->SetStats(kFALSE);
    hBs0Mass->GetXaxis()->SetTitle("#it{m}(D_{s}^{* -} #pi^{+}) [MeV/c^{2}]");
    hBs0Mass->GetYaxis()->SetTitle("Candidates / [ 15 MeV/c^{2} ]");

    TCanvas * c2 = new TCanvas("c2", "", 1200, 800);
    SetPad(c2);
    DrawBs0(hBs0Mass,"Bs0");
    c2->Print("Hists/Bs0Mass.pdf");
    c2->Print("Hists/Bs0Mass.png");


}
