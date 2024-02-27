#ifndef _PLOTUTILS_H_
#define _PLOTUTILS_H_


#include <math.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>
#include "TAxis.h"
#include "TColor.h"
#include "TCut.h"
#include "TCanvas.h"
#include "TChain.h"
#include "TDecompLU.h"
#include "TDecompSVD.h"
#include "TDirectory.h"
#include "TEventList.h"
#include "TF1.h"
#include "TF2.h"
#include "TFile.h"
#include "TGaxis.h"
#include "TRandom3.h"
#include "TGraph.h"
#include "TGraphAsymmErrors.h"
#include "TGraphErrors.h"
#include "TGraphPolar.h"
#include "TGrid.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TH3D.h"
#include "THnSparse.h"
#include "TLatex.h"
#include "TLegend.h"
#include "TLegendEntry.h"
#include "TLinearFitter.h"
#include "TMarker.h"
#include "TMath.h"
#include "TMatrixD.h"
#include "TMinuit.h"
#include "TPaletteAxis.h"
#include "TPaveStats.h"
#include "TPaveText.h"
#include "TPolyMarker.h"
#include "TProfile.h"
#include "TROOT.h"
#include "TStopwatch.h"
#include "TString.h"
#include "TRegexp.h"
#include "TStyle.h"
#include "TSystem.h"
#include "TSystemDirectory.h"
#include "TTree.h"
#include "TTimeStamp.h"
#include "TUUID.h"
#include "TVector3.h"
#include "TVectorD.h"
#include "TVirtualPad.h"
#include "THStack.h"
#include "TLorentzVector.h"
#include "TFitter.h"
#include "TMinuit.h"

#ifndef EPSILON
#define EPSILON 1E-12
#endif

using namespace std;

namespace AnaUtils
{

void IniColorCB()
{ 
  static bool kset = false;
  if(kset){
    printf("PlotUtils::IniColorCB arleady set\n");
    return;
  }
  else{
    printf("PlotUtils::IniColorCB creating new color\n");
  }
  const int fgkColorBase = 1500;  
  //http://www.somersault1824.com/tips-for-designing-scientific-figures-for-color-blind-readers/
  Int_t id=fgkColorBase+1;
  new TColor(id++, 0./255., 0./255., 0./255., "CB1_Black",1.0);
  new TColor(id++, 0./255., 73./255., 73./255., "CB2_Forest",1.0);
  new TColor(id++, 0./255., 146./255., 146./255., "CB3_Teal",1.0);
  new TColor(id++, 255./255., 109./255., 182./255., "CB4_HotPink",1.0);
  new TColor(id++, 255./255., 182./255., 119./255., "CB5_BabyPink",1.0);
  new TColor(id++, 73./255., 0./255., 146./255., "CB6_Purple",1.0);
  new TColor(id++, 0./255., 109./255., 219./255., "CB7_RoyalBlue",1.0);
  new TColor(id++, 182./255., 109./255., 255./255., "CB8_Lilac",1.0);
  new TColor(id++, 109./255., 182./255., 255./255., "CB9_BlueGrey",1.0);
  new TColor(id++, 182./255., 219./255., 255./255., "CB10_SpaceWolves",1.0);
  new TColor(id++, 146./255., 0./255., 0./255., "CB11_Maroon",1.0);
  new TColor(id++, 146./255., 73./255., 0./255., "CB12_Tan",1.0);
  new TColor(id++, 219./255., 209./255., 0./255., "CB13_Orange",1.0);
  new TColor(id++, 36./255., 255./255., 36./255., "CB14_DayGleen",1.0);
  new TColor(id++, 255./255., 255./255., 109./255., "CB15_SunFlower",1.0);
  
  const int fgkColorBase_solid = 1700;  
  //http://www.somersault1824.com/tips-for-designing-scientific-figures-for-color-blind-readers/
  Int_t ids=fgkColorBase_solid+1;
  new TColor(ids++, 0./255., 0./255., 0./255., "CB1_Black",0.35);
  new TColor(ids++, 0./255., 73./255., 73./255., "CB2_Forest",0.35);
  new TColor(ids++, 0./255., 146./255., 146./255., "CB3_Teal",0.35);
  new TColor(ids++, 255./255., 109./255., 182./255., "CB4_HotPink",0.35);
  new TColor(ids++, 255./255., 182./255., 119./255., "CB5_BabyPink",0.35);
  new TColor(ids++, 73./255., 0./255., 146./255., "CB6_Purple",0.35);
  new TColor(ids++, 0./255., 109./255., 219./255., "CB7_RoyalBlue",0.35);
  new TColor(ids++, 182./255., 109./255., 255./255., "CB8_Lilac",0.35);
  new TColor(ids++, 109./255., 182./255., 255./255., "CB9_BlueGrey",0.35);
  new TColor(ids++, 182./255., 219./255., 255./255., "CB10_SpaceWolves",0.35);
  new TColor(ids++, 146./255., 0./255., 0./255., "CB11_Maroon",0.35);
  new TColor(ids++, 146./255., 73./255., 0./255., "CB12_Tan",0.35);
  new TColor(ids++, 219./255., 209./255., 0./255., "CB13_Orange",0.35);
  new TColor(ids++, 36./255., 255./255., 36./255., "CB14_DayGleen",0.35);
  new TColor(ids++, 255./255., 255./255., 109./255., "CB15_SunFlower",0.35);
  

  kset = true;
}

TH1D * GetCDF(const TH2D *hraw, const TString hname){

  TH1D * hcdf = hraw->ProjectionX(hname);
  TH1D * hold = (TH1D*) hcdf->Clone("hold");

  hcdf->Scale(0);

  const Int_t n2 = hold->GetNbinsX()+1;
  const Double_t ntot = hold->Integral(0, n2);

  for(Int_t ii=0; ii<= n2; ii++){
    const Double_t num = hold->Integral(0, ii);
    if(num<EPSILON){
      continue;
    }

    const Double_t nee = TMath::Sqrt(num);

    const Double_t fra = num/(ntot+EPSILON);
    const Double_t fee = nee/(ntot+EPSILON);

    hcdf->SetBinContent(ii, fra);
    hcdf->SetBinError(ii, fee);
  }

  delete hold;

  return hcdf;
}


void SetTitleFormat(TH1 * hh){
  hh->SetTitle(" ");
  hh->GetYaxis()->CenterTitle();
  //hh->GetYaxis()->SetTitleFont(22);
  hh->GetYaxis()->SetTitleSize(0.05);
  hh->GetYaxis()->SetTitleOffset(0.99);
  hh->GetXaxis()->CenterTitle();
  //hh->GetXaxis()->SetTitleFont(22);
  hh->GetXaxis()->SetTitleSize(0.05);
  hh->GetXaxis()->SetTitleOffset(0.9);

}

void SetTitleFormat(TH2 * hh){
  hh->SetTitle(" ");
  hh->GetYaxis()->CenterTitle();
  //hh->GetYaxis()->SetTitleFont(22);
  hh->GetYaxis()->SetTitleSize(0.05);
  hh->GetYaxis()->SetTitleOffset(0.99);
  hh->GetXaxis()->CenterTitle();
  //hh->GetXaxis()->SetTitleFont(22);
  hh->GetXaxis()->SetTitleSize(0.05);
  hh->GetXaxis()->SetTitleOffset(0.9);

}

void ProcessHist(TList *lout, const bool kMC)
{
  // Get the size of TList
  const int nhist = lout->GetSize();
  // Loop over each histogram
  for(int ii=0; ii<nhist; ii++){
    TH2D * htmp = dynamic_cast<TH2D *>( lout->At(ii) );
    if(htmp){
      const TString tag = htmp->GetName();

    }
  }
}

void DrawHist(TList *lout)
{
  IniColorCB();
  // Create new canvas for drawing histogram 
  TCanvas * c1 = new TCanvas("c1", "", 1200, 800);
  c1->SetTopMargin(0.09);
  c1->SetBottomMargin(0.12);
  c1->SetLeftMargin(0.12);
  c1->SetRightMargin(0.13);
  gStyle->SetHistFillColor(0);
  gStyle->SetFrameFillColor(0);
  gStyle->SetPadColor(0);
  gStyle->SetCanvasColor(0);
  gStyle->SetStatColor(0);
  gStyle->SetTitleFillColor(0);
  gStyle->SetOptStat(0); // Stats box
  gStyle->SetPalette(56);//only 56 available

  // Loop over all histograms inside Tlist
  for(int ii=0; ii<lout->GetSize(); ii++){
    // Get the name of the histogram
    const TString tag = lout->At(ii)->GetName();
    
    // 1D histogram
    TH1 * hh = dynamic_cast<TH1*> (lout->At(ii));
    // Stack histogram
    //THStack * hstk = dynamic_cast<THStack *>(lout->At(ii));
    // 2D histogram
    TH2 * h2d = 0x0;

    if(hh){
      // Cast to 2D histogram
      h2d = dynamic_cast<TH2 *>(hh);
      // Check if h2d exist
      if(h2d){
        SetTitleFormat(h2d);
        h2d->Draw("colz");
      }
      // 1D only
      else{
        // Draw overlay
        if(tag.Contains("b003hCalB0_noSoftPhoton_Mass")){
          TH1D *hoverlay = (TH1D*)lout->FindObject("b001hCalB0_Mass");
          SetTitleFormat(hh);
          hh->SetMaximum(hoverlay->GetMaximum()*1.3);

          hh->SetLineWidth(2);
          hh->SetMarkerColor(46);
          hh->SetLineWidth(3);
          hh->SetLineStyle(1);
          hh->SetLineColor(kRed);
          hh->SetFillStyle(0);

          hoverlay->SetLineWidth(2);
          hoverlay->SetMarkerColor(kBlue);
          hoverlay->SetLineWidth(3);
          hoverlay->SetLineStyle(1);

          hoverlay->SetLineColor(kBlue);
          hoverlay->SetFillColor(kBlue);
          hoverlay->SetFillStyle(3005);

          hh->Draw("HISTS");
          hoverlay->Draw("HISTS same");

          TLine *line = new TLine(5279.34,0,5279.34,hoverlay->GetMaximum()*1.3);
          line->SetLineColor(kBlack);
          line->SetLineStyle(kDashed);
          line->SetLineWidth(2);
          line->Draw();

          TLegend *legend = new TLegend(0.18,0.6,0.40,0.88);
          //TLegendEntry *entry_reco = legend->AddEntry(graph_slshower, "Simulation (stats.)", "lep");
          legend->AddEntry(hh, "#it{m} (D^{+}_{s} #gamma_{hard})", "l");
          legend->AddEntry(hoverlay, "#it{m} (D^{* +}_{s} #gamma_{hard})", "f");
          legend->AddEntry(line, "PDG B^{+} Mass", "l");
          legend->SetBorderSize(0);
          legend->Draw("same");
        }
        else if(tag.Contains("b008hCalB0Base_noSoftPhoton_Mass")){
          TH1D *hoverlay = (TH1D*)lout->FindObject("b007hCalB0Base_withSoftPhoton_Mass");
          TH1D *hoverlay_relDs = (TH1D*)lout->FindObject("b008hCalB0_CorrMass_relDs");
          TH1D *hoverlay_relB = (TH1D*)lout->FindObject("b008hCalB0_CorrMass_relB");

          SetTitleFormat(hh);
          hh->SetMaximum(hoverlay->GetMaximum()*1.3);

          hh->SetLineWidth(2);
          hh->SetMarkerColor(46);
          hh->SetLineWidth(3);
          hh->SetLineStyle(1);
          hh->SetLineColor(kRed);
          hh->SetFillStyle(0);

          hoverlay->SetLineWidth(2);
          hoverlay->SetMarkerColor(kBlue);
          hoverlay->SetLineWidth(3);
          hoverlay->SetLineStyle(1);

          hoverlay->SetLineColor(kBlue);
          hoverlay->SetFillColor(kBlue);
          hoverlay->SetFillStyle(3005);

          hoverlay_relDs->SetLineWidth(2);
          hoverlay_relDs->SetMarkerColor(46);
          hoverlay_relDs->SetLineWidth(3);
          hoverlay_relDs->SetLineStyle(1);
          hoverlay_relDs->SetLineColor(1505);
          hoverlay_relDs->SetFillStyle(0);
          hoverlay_relDs->SetFillColorAlpha(1505, 0.35); 
          hoverlay_relDs->SetLineColor(1505);
          hoverlay_relDs->SetFillStyle(1001);
          hoverlay_relDs->SetLineWidth(2);

          hoverlay_relB->SetLineWidth(2);
          hoverlay_relB->SetMarkerColor(46);
          hoverlay_relB->SetLineWidth(3);
          //hoverlay_relB->SetLineStyle(kDashed);
          hoverlay_relB->SetFillStyle(0);
          hoverlay_relB->SetLineColor(1503);

          hh->Draw("HISTS");
          hoverlay->Draw("HISTS same");
          hoverlay_relDs->Draw("HISTS same");
          hoverlay_relB->Draw("HISTS same");

          TLine *line = new TLine(5279.34,0,5279.34,hoverlay->GetMaximum()*1.3);
          line->SetLineColor(kBlack);
          line->SetLineStyle(kDashed);
          line->SetLineWidth(2);
          line->Draw();

          TLegend *legend = new TLegend(0.18,0.6,0.43,0.88);
          //TLegendEntry *entry_reco = legend->AddEntry(graph_slshower, "Simulation (stats.)", "lep");
          legend->AddEntry(hh, "#it{m} (K^{+}K^{-}#pi^{+} #gamma_{hard})", "l");
          legend->AddEntry(hoverlay, "#it{m} (K^{+}K^{-}#pi^{+} #gamma_{soft}#gamma_{hard})", "f");
          legend->AddEntry(line, "PDG B^{+} Mass", "l");
          legend->SetBorderSize(0);
          legend->Draw("same");

          TLegend *legend1 = new TLegend(0.60,0.69,0.82,0.88);
          //TLegendEntry *entry_reco = legend->AddEntry(graph_slshower, "Simulation (stats.)", "lep");
          legend1->AddEntry(hoverlay_relDs, "#it{p}_{T}_{missing} wrt D_{s}^{+} DIR", "f");
          legend1->AddEntry(hoverlay_relB, "#it{p}_{T}_{missing} wrt B^{+} DIR", "l");
          legend1->SetBorderSize(0);
          legend1->Draw("same");

        }
        else if(tag.Contains("ID")){
          SetTitleFormat(hh);
          hh->SetLineWidth(2);
          hh->Draw("hist");

          // B meson ID
          TLine *line_B0 = new TLine(521,0,521,hh->GetMaximum()/2);
          line_B0->SetLineColor(kOrange);
          line_B0->SetLineStyle(kDashed);
          line_B0->SetLineWidth(2);
          line_B0->Draw();

          TLine *line_Bminus = new TLine(-521,0,-521,hh->GetMaximum()/2);
          line_Bminus->SetLineColor(kOrange);
          line_Bminus->SetLineStyle(kDashed);
          line_Bminus->SetLineWidth(2);
          line_Bminus->Draw();

          // Dsst meson ID
          TLine *line_Dsstplus = new TLine(433,0,433,hh->GetMaximum()/2);
          line_Dsstplus->SetLineColor(kRed);
          line_Dsstplus->SetLineStyle(kDashed);
          line_Dsstplus->SetLineWidth(2);
          line_Dsstplus->Draw();

          TLine *line_Dsstminus = new TLine(-433,0,-433,hh->GetMaximum()/2);
          line_Dsstminus->SetLineColor(kRed);
          line_Dsstminus->SetLineStyle(kDashed);
          line_Dsstminus->SetLineWidth(2);
          line_Dsstminus->Draw();

          // Ds meson ID
          TLine *line_Dstplus = new TLine(431,0,431,hh->GetMaximum()/2);
          line_Dstplus->SetLineColor(kGreen);
          line_Dstplus->SetLineStyle(kDashed);
          line_Dstplus->SetLineWidth(2);
          line_Dstplus->Draw();

          TLine *line_Dstminus = new TLine(-431,0,-431,hh->GetMaximum()/2);
          line_Dstminus->SetLineColor(kGreen);
          line_Dstminus->SetLineStyle(kDashed);
          line_Dstminus->SetLineWidth(2);
          line_Dstminus->Draw();


        }
        else if(tag.Contains("m002hKplusIPCHI2")){
          TH1D *hoverlay_Kmiuns = (TH1D*)lout->FindObject("m003hKminusIPCHI2");
          TH1D *hoverlay_Piplus = (TH1D*)lout->FindObject("m004hPiplusIPCHI2");
          SetTitleFormat(hh);
          hh->SetMaximum(hh->GetMaximum()*1.3);

          hh->SetLineWidth(2);
          hh->SetMarkerColor(46);
          hh->SetLineWidth(5);
          hh->SetLineStyle(1);
          hh->SetLineColor(kRed);
          hh->SetFillStyle(0);

          hoverlay_Kmiuns->SetLineWidth(2);
          hoverlay_Kmiuns->SetMarkerColor(kBlue);
          hoverlay_Kmiuns->SetLineWidth(2);
          hoverlay_Kmiuns->SetLineStyle(1);

          hoverlay_Kmiuns->SetLineColor(kBlue);
          hoverlay_Kmiuns->SetFillColor(kBlue);
          hoverlay_Kmiuns->SetFillStyle(3005);

          hoverlay_Piplus->SetLineWidth(2);
          hoverlay_Piplus->SetMarkerColor(46);
          hoverlay_Piplus->SetLineWidth(5);
          hoverlay_Piplus->SetLineStyle(kDashed);
          hoverlay_Piplus->SetLineColor(kGreen);
          hoverlay_Piplus->SetFillStyle(0);

          hh->Draw("HISTS");
          hoverlay_Kmiuns->Draw("HISTS same");
          hoverlay_Piplus->Draw("HISTS same");


          TLegend *legend = new TLegend(0.5,0.6,0.65,0.88);
          //TLegendEntry *entry_reco = legend->AddEntry(graph_slshower, "Simulation (stats.)", "lep");
          legend->AddEntry(hh, "K^{+}", "l");
          legend->AddEntry(hoverlay_Kmiuns, "K^{-}", "lf");
          legend->AddEntry(hoverlay_Piplus, "#pi^{+}", "l");
          legend->SetBorderSize(0);
          legend->Draw("same");
          
        }
        else if(tag.Contains("k004hTruthMatchedHelicityAngle_Piplus")){
          TH1D *hoverlay = (TH1D*)lout->FindObject("k005hTruthMatchedHelicityAngle_DsB0");
          SetTitleFormat(hh);
          hh->SetMaximum(hoverlay->GetMaximum()*1.3);
          hh->GetXaxis()->SetTitle("#theta_{H} [degree]");
          
          hh->SetLineWidth(2);
          hh->SetMarkerColor(46);
          hh->SetLineWidth(3);
          hh->SetLineStyle(1);
          hh->SetLineColor(kRed);
          hh->SetFillStyle(0);

          hoverlay->SetLineWidth(2);
          hoverlay->SetMarkerColor(46);
          hoverlay->SetLineWidth(3);
          hoverlay->SetLineStyle(kDashed);
          hoverlay->SetLineColor(kOrange);
          hoverlay->SetFillStyle(0);

          hh->Draw("HISTS");
          hoverlay->Draw("HISTS same");

          TLegend *legend = new TLegend(0.5,0.82,0.85,0.88);
          //TLegendEntry *entry_reco = legend->AddEntry(graph_slshower, "Simulation (stats.)", "lep");
          legend->AddEntry(hh, "B^{+} #gamma", "l");
          legend->AddEntry(hoverlay, "B^{+} D^{+}_{s}", "l");
          legend->SetBorderSize(0);
          legend->SetNColumns(2);
          legend->Draw("same");

        }
        else if(tag.Contains("ConvertRate")){
          SetTitleFormat(hh);
          hh->SetLineWidth(2);
          hh->Draw("hist text");
        }
        else if(tag.Contains("hRecoB0_M_Selected")){
          SetTitleFormat(hh);
          hh->SetLineWidth(2);
          hh->SetLineColor(kBlack);
          hh->SetMarkerStyle(8);
          //hh->SetMinimum(0);
          hh->Draw("e1");
        }
        else{
          SetTitleFormat(hh);
          hh->SetLineWidth(2);
          hh->SetMarkerStyle(8);
          hh->SetLineColor(kBlack);
          hh->Draw("e1");
        }
      }
    }
    c1->Print("output/"+tag+".png");
    c1->Print("output/"+tag+".pdf");

  }
}

//end of namespace
}

#endif