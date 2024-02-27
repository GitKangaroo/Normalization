#include "AnaIO.h"
#include "AnaCut.h"

TVector3 GetMomVectLab(const double & Px, const double & Py, const double & Pz)
{
  const TVector3 trackVectLab(Px,Py,Pz);
  return trackVectLab;
}

double mCorr( const TLorentzVector &p, const TVector3 &flightDir )
{
  const TVector3 pVec( p.Px(), p.Py(), p.Pz() );
  const double   PT = pVec.Perp( flightDir );
  return std::sqrt( p.M2() + PT * PT ) + PT;
}

void anaRec(const TString finName, TList *lout, const TString tag, const int nEntryToStop)
{
  cout << "Input file:" << endl;
  gSystem->Exec(Form("readlink -f %s", finName.Data()));
  cout << endl;
  // Open file 
  TFile * fin = new TFile(finName);
  if(!fin->IsOpen()){
    cout << "fin not open!" << endl;
    exit(1);
  }
  else cout << "fin is open!" << endl;
  // Get the TTree from input file
  TTree  * tree = AnaIO::GetInputTree(fin, "Tuple_B02DsstarPi/DecayTree", tag);
  AnaIO::IniHist(lout);
  // Initialise entry and beam counter
  int ientry = 0;

  // Loop over TTree
  while(tree->GetEntry(ientry)){
    // Break 
    if(nEntryToStop > 0 && ientry>=nEntryToStop){
      cout << "Break the loop after " << nEntryToStop << " entries!" << endl;
      break;
    }
    // update ientry after each loop
    ientry++;

    // Ds Lorentz Vector
    TLorentzVector reco4MomDs;
    double DsMass = AnaIO::Ds_M;//1968.34;
    const TVector3 recoMomDs = GetMomVectLab(AnaIO::Ds_PX,AnaIO::Ds_PY,AnaIO::Ds_PZ);
    reco4MomDs.SetVectM(recoMomDs,DsMass);

    // Ds* Lorentz Vector
    TLorentzVector reco4MomDsstar;
    double DsstarMass = AnaIO::Dsstar_M;//2112.2;
    const TVector3 recoMomDsstar = GetMomVectLab(AnaIO::Dsstar_PX,AnaIO::Dsstar_PY,AnaIO::Dsstar_PZ);
    reco4MomDsstar.SetVectM(recoMomDsstar,DsstarMass);

    // B Lorentz Vector
    TLorentzVector reco4MomB0;
    double B0Mass = AnaIO::B0_M;//5279.34;
    const TVector3 recoMomB0 = GetMomVectLab(AnaIO::B0_PX,AnaIO::B0_PY,AnaIO::B0_PZ);
    reco4MomB0.SetVectM(recoMomB0,B0Mass);

    // Soft Photon Lorentz Vector
    TLorentzVector reco4MomSoftPhoton;
    const TVector3 recoMomSoftPhoton = GetMomVectLab(AnaIO::gamma_PX,AnaIO::gamma_PY,AnaIO::gamma_PZ);
    reco4MomSoftPhoton.SetVectM(recoMomSoftPhoton,0);

    // Kaon Plus Lorentz Vector
    TLorentzVector reco4MomKPlus;
    double KPlusMass = AnaIO::Kplus_M;
    const TVector3 recoMomKPlus = GetMomVectLab(AnaIO::Kplus_PX,AnaIO::Kplus_PY,AnaIO::Kplus_PZ);
    reco4MomKPlus.SetVectM(recoMomKPlus,KPlusMass);

    // Kaon Minus Lorentz Vector
    TLorentzVector reco4MomKMinus;
    double KMinusMass = AnaIO::Kminus_M;
    const TVector3 recoMomKMinus = GetMomVectLab(AnaIO::Kminus_PX,AnaIO::Kminus_PY,AnaIO::Kminus_PZ);
    reco4MomKMinus.SetVectM(recoMomKMinus,KMinusMass);

    // Pion Minus Lorentz Vector
    TLorentzVector reco4MomPiMinus;
    double PiMinusMass = AnaIO::PiMinus_M;
    const TVector3 recoMomPiMinus = GetMomVectLab(AnaIO::PiMinus_PX,AnaIO::PiMinus_PY,AnaIO::PiMinus_PZ);
    reco4MomPiMinus.SetVectM(recoMomPiMinus,PiMinusMass);

    // B pion is this!!!
    // Pion Plus Lorentz Vector
    TLorentzVector reco4MomPiplus;
    double PiplusMass = AnaIO::Piplus_M;
    const TVector3 recoMomPiplus = GetMomVectLab(AnaIO::Piplus_PX,AnaIO::Piplus_PY,AnaIO::Piplus_PZ);
    reco4MomPiplus.SetVectM(recoMomPiplus,PiplusMass);


    double LogDsCHI2IP = TMath::Log(AnaIO::Ds_IPCHI2_OWNPV);
    AnaIO::hDsIPCHI2->Fill(LogDsCHI2IP);

    double LogPiMinusCHI2IP = TMath::Log(AnaIO::PiMinus_IPCHI2_OWNPV);
    AnaIO::hPiMinusIPCHI2->Fill(LogPiMinusCHI2IP);

    double deltaETA = AnaIO::gamma_ETA - AnaIO::Ds_ETA;
    double deltaPHI = AnaIO::gamma_PHI - AnaIO::Ds_PHI;
    double r2 = deltaETA*deltaETA + deltaPHI*deltaPHI;
    
    AnaIO::hSoftphotonPtVSConeR2->Fill(AnaIO::gamma_PT,r2);

    AnaIO::hDsIPCHI2_OWNPV->Fill(AnaIO::Ds_IPCHI2_OWNPV);

    AnaIO::hRecoPiMinus_PT->Fill(AnaIO::PiMinus_PT);

    // B0 decay vertex
    double B0CHI2perNDF = AnaIO::B0_ENDVERTEX_CHI2/AnaIO::B0_ENDVERTEX_NDOF;
    AnaIO::hRecoB0Chi2DOF->Fill(B0CHI2perNDF);
    AnaIO::hRecoB0IP->Fill(AnaIO::B0_IP_OWNPV);


    // Without applying any cuts
    AnaIO::hRecoB0_M->Fill(AnaIO::B0_M);
    AnaIO::hRecoDsstar_M->Fill(AnaIO::Dsstar_M);
    AnaIO::hRecoDs_M->Fill(AnaIO::Ds_M);

    AnaIO::hRecoSoftPhoton_PT->Fill(AnaIO::gamma_PT); // Min soft photon Pt is 145 MeV
    AnaIO::hRecoSoftPion_PT->Fill(AnaIO::PiMinus_PT);


    // Ds mass peak 
    if(AnaCut::CutDsPiMinus() && AnaCut::CutDsKplus() && AnaCut::CutDsKminus()){ // Ds daughter selections
      AnaIO::hRecoDs_PT_Selected->Fill(AnaIO::Ds_PT);
      AnaIO::hRecoDs_IPChi2->Fill(AnaIO::Ds_IPCHI2_OWNPV);
      double mass = (reco4MomPiMinus+reco4MomKPlus+reco4MomKMinus).M();
      double PT = (reco4MomPiMinus+reco4MomKPlus+reco4MomKMinus).Pt();
      if(AnaCut::CutDs(mass, PT)){ // Ds selection
        AnaIO::hRecoDs_M_Selected->Fill(AnaIO::Ds_M);
        double KKmassSq = pow((reco4MomKPlus+reco4MomKMinus).M(),2);
        double PiKmassSq = pow((reco4MomPiMinus+reco4MomKPlus).M(),2);
        AnaIO::hDsDalitzPlotKKVSKPi->Fill(KKmassSq,PiKmassSq);
        if(AnaCut::CutDsResonance(sqrt(KKmassSq),sqrt(PiKmassSq))){ // Ds resonance selection
          AnaIO::hDsDalitzPlotKKVSKPi_Selected->Fill(KKmassSq,PiKmassSq);
          AnaIO::hRecoDs_M_Selected_Resonance->Fill(AnaIO::Ds_M);
          if(AnaCut::CutSoftPhoton(sqrt(r2))){// Soft photon selection
            AnaIO::hRecoDsstar_M_Selected->Fill(AnaIO::Dsstar_M);
            if(AnaCut::CutB0Pion()){ // B pion selection
              if(AnaCut::CutB0()){  // B0 meson selection
                AnaIO::hRecoB0_M_Selected->Fill(AnaIO::B0_M);
                AnaIO::hRecoDsstar_M_SelectedFinal->Fill(AnaIO::Dsstar_M);
                AnaIO::hnCandidate->Fill(AnaIO::nCandidate);
              }
            }
          }
        }
      }

      /*if(AnaIO::Ds_IPCHI2_OWNPV > 300 && LogDsCHI2IP > 4){ // Ds IPCHI2 selections
        AnaIO::hRecoDsstar_PT_Selected->Fill(AnaIO::Dsstar_PT);
        AnaIO::hRecoB0_PT_Selected->Fill(AnaIO::B0_PT);
        if(r2 < 0.4 && AnaIO::gamma_PT < 500 && AnaIO::gamma_CL > 0.55){ // Soft photon selections
          AnaIO::hRecoDsstar_M_Selected->Fill(AnaIO::Dsstar_M);
          if(LogPiMinusCHI2IP > 4 && AnaIO::PiMinus_PT > 1000 && AnaIO::PiMinus_ProbNNpi > 0.55 && B0CHI2perNDF > 3 && AnaIO::B0_IP_OWNPV > 0.02) {
              AnaIO::hRecoB0_M_Selected->Fill(AnaIO::B0_M);
              AnaIO::hRecoDsstar_M_SelectedFinal->Fill(AnaIO::Dsstar_M);
          }
        }
      }*/
    }


    //double deltaETA_B = AnaIO::B0_ETA - AnaIO::Ds_ETA;
    //double deltaPHI_B = AnaIO::B0_PHI - AnaIO::Ds_PHI;
    //double r2_B = deltaETA_B*deltaETA_B + deltaPHI_B*deltaPHI_B;


    if(r2 < 0.4 && AnaIO::gamma_PT < 500 && AnaIO::gamma_CL > 0.55 && LogDsCHI2IP > 4){
      /*if(LogPiMinusCHI2IP > 4 && AnaIO::PiMinus_PT > 1000 && AnaIO::Piplus_ProbNNpi > 0.55 && r2_B < 0.4 && B0CHI2perNDF > 3 && AnaIO::B0_IP_OWNPV > 0.02 &&
        AnaIO::Piplus_PT > 250 && AnaIO::Kplus_PT > 250 && AnaIO::Kminus_PT > 250) 
      {*/ 
        //AnaIO::hRecoDsstar_M_Selected->Fill(AnaIO::Dsstar_M);
        //AnaIO::hRecoB0_M_Selected->Fill(AnaIO::B0_M);
      //}
    }    
  }
}

int main(int argc, char * argv[])
{
  // Initialise the input file name
  const TString mcfinName = "/eos/lhcb/user/y/yangk/normalizationData/WholeData/WholeData.root";
  // Declare output list
  TList * mclout = 0x0;
  mclout = new TList;
  // Run reco loop for both mc and data
  int nEntryToStop = -1; // Default is looping over all entries
  if(argc!=1) nEntryToStop = atoi(argv[1]);
  // Do the analysis
  anaRec(mcfinName,mclout,"mc", nEntryToStop);
  AnaUtils::ProcessHist(mclout,true);
  AnaUtils::DrawHist(mclout);

  // Declare output root file
  TFile * fout = new TFile("output/outana.root","recreate");

  // Create mc subdirectory
  TDirectory * ld_mc = gDirectory->mkdir("mc");
  ld_mc->cd();
  // Write list to the root file
  mclout->Write();
  gDirectory->cd("../");
  // Save the info
  fout->Save();
  fout->Close();
}
