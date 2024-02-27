//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Dec  7 18:19:16 2023 by ROOT version 6.30/00
// from TTree DecayTree/DecayTree
// found on file: /eos/lhcb/user/y/yangk/normalizationData/MagUp.root
//////////////////////////////////////////////////////////

#ifndef DecayTree_h
#define DecayTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class DecayTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxB0_ENDVERTEX_COV = 1;
   static constexpr Int_t kMaxB0_OWNPV_COV = 1;
   static constexpr Int_t kMaxDsstar_ENDVERTEX_COV = 1;
   static constexpr Int_t kMaxDsstar_OWNPV_COV = 1;
   static constexpr Int_t kMaxDsstar_ORIVX_COV = 1;
   static constexpr Int_t kMaxDs_ENDVERTEX_COV = 1;
   static constexpr Int_t kMaxDs_OWNPV_COV = 1;
   static constexpr Int_t kMaxDs_ORIVX_COV = 1;
   static constexpr Int_t kMaxKminus_OWNPV_COV = 1;
   static constexpr Int_t kMaxKminus_ORIVX_COV = 1;
   static constexpr Int_t kMaxKplus_OWNPV_COV = 1;
   static constexpr Int_t kMaxKplus_ORIVX_COV = 1;
   static constexpr Int_t kMaxPiMinus_OWNPV_COV = 1;
   static constexpr Int_t kMaxPiMinus_ORIVX_COV = 1;
   static constexpr Int_t kMaxPiplus_OWNPV_COV = 1;
   static constexpr Int_t kMaxPiplus_ORIVX_COV = 1;

   // Declaration of leaf types
   Double_t        B0_CL;
   Double_t        B0_ETA;
   Double_t        B0_PHI;
   Double_t        B0_DiraAngleError;
   Double_t        B0_DiraCosError;
   Double_t        B0_DiraAngle;
   Double_t        B0_DiraCos;
   Double_t        B0_ENDVERTEX_X;
   Double_t        B0_ENDVERTEX_Y;
   Double_t        B0_ENDVERTEX_Z;
   Double_t        B0_ENDVERTEX_XERR;
   Double_t        B0_ENDVERTEX_YERR;
   Double_t        B0_ENDVERTEX_ZERR;
   Double_t        B0_ENDVERTEX_CHI2;
   Int_t           B0_ENDVERTEX_NDOF;
   Float_t         B0_ENDVERTEX_COV_[3][3];
   Double_t        B0_OWNPV_X;
   Double_t        B0_OWNPV_Y;
   Double_t        B0_OWNPV_Z;
   Double_t        B0_OWNPV_XERR;
   Double_t        B0_OWNPV_YERR;
   Double_t        B0_OWNPV_ZERR;
   Double_t        B0_OWNPV_CHI2;
   Int_t           B0_OWNPV_NDOF;
   Float_t         B0_OWNPV_COV_[3][3];
   Double_t        B0_IP_OWNPV;
   Double_t        B0_IPCHI2_OWNPV;
   Double_t        B0_FD_OWNPV;
   Double_t        B0_FDCHI2_OWNPV;
   Double_t        B0_DIRA_OWNPV;
   Double_t        B0_P;
   Double_t        B0_PT;
   Double_t        B0_PE;
   Double_t        B0_PX;
   Double_t        B0_PY;
   Double_t        B0_PZ;
   Double_t        B0_MM;
   Double_t        B0_MMERR;
   Double_t        B0_M;
   Int_t           B0_ID;
   Double_t        B0_TAU;
   Double_t        B0_TAUERR;
   Double_t        B0_TAUCHI2;
   Double_t        B0_X;
   Double_t        B0_Y;
   Double_t        B0_NumVtxWithinChi2WindowOneTrack;
   Double_t        B0_SmallestDeltaChi2OneTrack;
   Double_t        B0_SmallestDeltaChi2MassOneTrack;
   Double_t        B0_SmallestDeltaChi2TwoTracks;
   Double_t        B0_SmallestDeltaChi2MassTwoTracks;
   Double_t        B0_MCORR;
   Double_t        B0_MCORRERR;
   Double_t        B0_MCORRVERTEXERR;
   Double_t        B0_PTREL;
   Double_t        Dsstar_CL;
   Double_t        Dsstar_ETA;
   Double_t        Dsstar_PHI;
   Double_t        Dsstar_CosTheta;
   Double_t        Dsstar_ENDVERTEX_X;
   Double_t        Dsstar_ENDVERTEX_Y;
   Double_t        Dsstar_ENDVERTEX_Z;
   Double_t        Dsstar_ENDVERTEX_XERR;
   Double_t        Dsstar_ENDVERTEX_YERR;
   Double_t        Dsstar_ENDVERTEX_ZERR;
   Double_t        Dsstar_ENDVERTEX_CHI2;
   Int_t           Dsstar_ENDVERTEX_NDOF;
   Float_t         Dsstar_ENDVERTEX_COV_[3][3];
   Double_t        Dsstar_OWNPV_X;
   Double_t        Dsstar_OWNPV_Y;
   Double_t        Dsstar_OWNPV_Z;
   Double_t        Dsstar_OWNPV_XERR;
   Double_t        Dsstar_OWNPV_YERR;
   Double_t        Dsstar_OWNPV_ZERR;
   Double_t        Dsstar_OWNPV_CHI2;
   Int_t           Dsstar_OWNPV_NDOF;
   Float_t         Dsstar_OWNPV_COV_[3][3];
   Double_t        Dsstar_IP_OWNPV;
   Double_t        Dsstar_IPCHI2_OWNPV;
   Double_t        Dsstar_FD_OWNPV;
   Double_t        Dsstar_FDCHI2_OWNPV;
   Double_t        Dsstar_DIRA_OWNPV;
   Double_t        Dsstar_ORIVX_X;
   Double_t        Dsstar_ORIVX_Y;
   Double_t        Dsstar_ORIVX_Z;
   Double_t        Dsstar_ORIVX_XERR;
   Double_t        Dsstar_ORIVX_YERR;
   Double_t        Dsstar_ORIVX_ZERR;
   Double_t        Dsstar_ORIVX_CHI2;
   Int_t           Dsstar_ORIVX_NDOF;
   Float_t         Dsstar_ORIVX_COV_[3][3];
   Double_t        Dsstar_FD_ORIVX;
   Double_t        Dsstar_FDCHI2_ORIVX;
   Double_t        Dsstar_DIRA_ORIVX;
   Double_t        Dsstar_P;
   Double_t        Dsstar_PT;
   Double_t        Dsstar_PE;
   Double_t        Dsstar_PX;
   Double_t        Dsstar_PY;
   Double_t        Dsstar_PZ;
   Double_t        Dsstar_MM;
   Double_t        Dsstar_MMERR;
   Double_t        Dsstar_M;
   Int_t           Dsstar_ID;
   Double_t        Dsstar_TAU;
   Double_t        Dsstar_TAUERR;
   Double_t        Dsstar_TAUCHI2;
   Double_t        Dsstar_X;
   Double_t        Dsstar_Y;
   Double_t        Dsstar_NumVtxWithinChi2WindowOneTrack;
   Double_t        Dsstar_SmallestDeltaChi2OneTrack;
   Double_t        Dsstar_SmallestDeltaChi2MassOneTrack;
   Double_t        Dsstar_SmallestDeltaChi2TwoTracks;
   Double_t        Dsstar_SmallestDeltaChi2MassTwoTracks;
   Double_t        Ds_CL;
   Double_t        Ds_ETA;
   Double_t        Ds_PHI;
   Double_t        Ds_CosTheta;
   Double_t        Ds_ENDVERTEX_X;
   Double_t        Ds_ENDVERTEX_Y;
   Double_t        Ds_ENDVERTEX_Z;
   Double_t        Ds_ENDVERTEX_XERR;
   Double_t        Ds_ENDVERTEX_YERR;
   Double_t        Ds_ENDVERTEX_ZERR;
   Double_t        Ds_ENDVERTEX_CHI2;
   Int_t           Ds_ENDVERTEX_NDOF;
   Float_t         Ds_ENDVERTEX_COV_[3][3];
   Double_t        Ds_OWNPV_X;
   Double_t        Ds_OWNPV_Y;
   Double_t        Ds_OWNPV_Z;
   Double_t        Ds_OWNPV_XERR;
   Double_t        Ds_OWNPV_YERR;
   Double_t        Ds_OWNPV_ZERR;
   Double_t        Ds_OWNPV_CHI2;
   Int_t           Ds_OWNPV_NDOF;
   Float_t         Ds_OWNPV_COV_[3][3];
   Double_t        Ds_IP_OWNPV;
   Double_t        Ds_IPCHI2_OWNPV;
   Double_t        Ds_FD_OWNPV;
   Double_t        Ds_FDCHI2_OWNPV;
   Double_t        Ds_DIRA_OWNPV;
   Double_t        Ds_ORIVX_X;
   Double_t        Ds_ORIVX_Y;
   Double_t        Ds_ORIVX_Z;
   Double_t        Ds_ORIVX_XERR;
   Double_t        Ds_ORIVX_YERR;
   Double_t        Ds_ORIVX_ZERR;
   Double_t        Ds_ORIVX_CHI2;
   Int_t           Ds_ORIVX_NDOF;
   Float_t         Ds_ORIVX_COV_[3][3];
   Double_t        Ds_FD_ORIVX;
   Double_t        Ds_FDCHI2_ORIVX;
   Double_t        Ds_DIRA_ORIVX;
   Double_t        Ds_P;
   Double_t        Ds_PT;
   Double_t        Ds_PE;
   Double_t        Ds_PX;
   Double_t        Ds_PY;
   Double_t        Ds_PZ;
   Double_t        Ds_MM;
   Double_t        Ds_MMERR;
   Double_t        Ds_M;
   Int_t           Ds_ID;
   Double_t        Ds_TAU;
   Double_t        Ds_TAUERR;
   Double_t        Ds_TAUCHI2;
   Double_t        Ds_X;
   Double_t        Ds_Y;
   Double_t        Ds_NumVtxWithinChi2WindowOneTrack;
   Double_t        Ds_SmallestDeltaChi2OneTrack;
   Double_t        Ds_SmallestDeltaChi2MassOneTrack;
   Double_t        Ds_SmallestDeltaChi2TwoTracks;
   Double_t        Ds_SmallestDeltaChi2MassTwoTracks;
   Double_t        Kminus_CL;
   Double_t        Kminus_ETA;
   Double_t        Kminus_PHI;
   Double_t        Kminus_MC12TuneV2_ProbNNe;
   Double_t        Kminus_MC12TuneV2_ProbNNmu;
   Double_t        Kminus_MC12TuneV2_ProbNNpi;
   Double_t        Kminus_MC12TuneV2_ProbNNk;
   Double_t        Kminus_MC12TuneV2_ProbNNp;
   Double_t        Kminus_MC12TuneV2_ProbNNghost;
   Double_t        Kminus_MC12TuneV3_ProbNNe;
   Double_t        Kminus_MC12TuneV3_ProbNNmu;
   Double_t        Kminus_MC12TuneV3_ProbNNpi;
   Double_t        Kminus_MC12TuneV3_ProbNNk;
   Double_t        Kminus_MC12TuneV3_ProbNNp;
   Double_t        Kminus_MC12TuneV3_ProbNNghost;
   Double_t        Kminus_MC12TuneV4_ProbNNe;
   Double_t        Kminus_MC12TuneV4_ProbNNmu;
   Double_t        Kminus_MC12TuneV4_ProbNNpi;
   Double_t        Kminus_MC12TuneV4_ProbNNk;
   Double_t        Kminus_MC12TuneV4_ProbNNp;
   Double_t        Kminus_MC12TuneV4_ProbNNghost;
   Double_t        Kminus_MC15TuneV1_ProbNNe;
   Double_t        Kminus_MC15TuneV1_ProbNNmu;
   Double_t        Kminus_MC15TuneV1_ProbNNpi;
   Double_t        Kminus_MC15TuneV1_ProbNNk;
   Double_t        Kminus_MC15TuneV1_ProbNNp;
   Double_t        Kminus_MC15TuneV1_ProbNNghost;
   Double_t        Kminus_CosTheta;
   Double_t        Kminus_OWNPV_X;
   Double_t        Kminus_OWNPV_Y;
   Double_t        Kminus_OWNPV_Z;
   Double_t        Kminus_OWNPV_XERR;
   Double_t        Kminus_OWNPV_YERR;
   Double_t        Kminus_OWNPV_ZERR;
   Double_t        Kminus_OWNPV_CHI2;
   Int_t           Kminus_OWNPV_NDOF;
   Float_t         Kminus_OWNPV_COV_[3][3];
   Double_t        Kminus_IP_OWNPV;
   Double_t        Kminus_IPCHI2_OWNPV;
   Double_t        Kminus_ORIVX_X;
   Double_t        Kminus_ORIVX_Y;
   Double_t        Kminus_ORIVX_Z;
   Double_t        Kminus_ORIVX_XERR;
   Double_t        Kminus_ORIVX_YERR;
   Double_t        Kminus_ORIVX_ZERR;
   Double_t        Kminus_ORIVX_CHI2;
   Int_t           Kminus_ORIVX_NDOF;
   Float_t         Kminus_ORIVX_COV_[3][3];
   Double_t        Kminus_P;
   Double_t        Kminus_PT;
   Double_t        Kminus_PE;
   Double_t        Kminus_PX;
   Double_t        Kminus_PY;
   Double_t        Kminus_PZ;
   Double_t        Kminus_M;
   Int_t           Kminus_ID;
   Double_t        Kminus_CombDLLMu;
   Double_t        Kminus_ProbNNmu;
   Double_t        Kminus_ProbNNghost;
   Double_t        Kminus_InMuonAcc;
   Double_t        Kminus_MuonDist2;
   Int_t           Kminus_regionInM2;
   Bool_t          Kminus_hasMuon;
   Bool_t          Kminus_isMuon;
   Bool_t          Kminus_isMuonLoose;
   Int_t           Kminus_NShared;
   Double_t        Kminus_MuonLLmu;
   Double_t        Kminus_MuonLLbg;
   Int_t           Kminus_isMuonFromProto;
   Double_t        Kminus_PIDe;
   Double_t        Kminus_PIDmu;
   Double_t        Kminus_PIDK;
   Double_t        Kminus_PIDp;
   Double_t        Kminus_PIDd;
   Double_t        Kminus_ProbNNe;
   Double_t        Kminus_ProbNNk;
   Double_t        Kminus_ProbNNp;
   Double_t        Kminus_ProbNNpi;
   Double_t        Kminus_ProbNNd;
   Bool_t          Kminus_hasRich;
   Bool_t          Kminus_UsedRichAerogel;
   Bool_t          Kminus_UsedRich1Gas;
   Bool_t          Kminus_UsedRich2Gas;
   Bool_t          Kminus_RichAboveElThres;
   Bool_t          Kminus_RichAboveMuThres;
   Bool_t          Kminus_RichAbovePiThres;
   Bool_t          Kminus_RichAboveKaThres;
   Bool_t          Kminus_RichAbovePrThres;
   Bool_t          Kminus_hasCalo;
   Int_t           Kminus_TRACK_Type;
   Int_t           Kminus_TRACK_Key;
   Double_t        Kminus_TRACK_CHI2NDOF;
   Double_t        Kminus_TRACK_PCHI2;
   Double_t        Kminus_TRACK_MatchCHI2;
   Double_t        Kminus_TRACK_GhostProb;
   Double_t        Kminus_TRACK_CloneDist;
   Double_t        Kminus_TRACK_Likelihood;
   Double_t        Kminus_X;
   Double_t        Kminus_Y;
   Double_t        Kplus_CL;
   Double_t        Kplus_ETA;
   Double_t        Kplus_PHI;
   Double_t        Kplus_MC12TuneV2_ProbNNe;
   Double_t        Kplus_MC12TuneV2_ProbNNmu;
   Double_t        Kplus_MC12TuneV2_ProbNNpi;
   Double_t        Kplus_MC12TuneV2_ProbNNk;
   Double_t        Kplus_MC12TuneV2_ProbNNp;
   Double_t        Kplus_MC12TuneV2_ProbNNghost;
   Double_t        Kplus_MC12TuneV3_ProbNNe;
   Double_t        Kplus_MC12TuneV3_ProbNNmu;
   Double_t        Kplus_MC12TuneV3_ProbNNpi;
   Double_t        Kplus_MC12TuneV3_ProbNNk;
   Double_t        Kplus_MC12TuneV3_ProbNNp;
   Double_t        Kplus_MC12TuneV3_ProbNNghost;
   Double_t        Kplus_MC12TuneV4_ProbNNe;
   Double_t        Kplus_MC12TuneV4_ProbNNmu;
   Double_t        Kplus_MC12TuneV4_ProbNNpi;
   Double_t        Kplus_MC12TuneV4_ProbNNk;
   Double_t        Kplus_MC12TuneV4_ProbNNp;
   Double_t        Kplus_MC12TuneV4_ProbNNghost;
   Double_t        Kplus_MC15TuneV1_ProbNNe;
   Double_t        Kplus_MC15TuneV1_ProbNNmu;
   Double_t        Kplus_MC15TuneV1_ProbNNpi;
   Double_t        Kplus_MC15TuneV1_ProbNNk;
   Double_t        Kplus_MC15TuneV1_ProbNNp;
   Double_t        Kplus_MC15TuneV1_ProbNNghost;
   Double_t        Kplus_CosTheta;
   Double_t        Kplus_OWNPV_X;
   Double_t        Kplus_OWNPV_Y;
   Double_t        Kplus_OWNPV_Z;
   Double_t        Kplus_OWNPV_XERR;
   Double_t        Kplus_OWNPV_YERR;
   Double_t        Kplus_OWNPV_ZERR;
   Double_t        Kplus_OWNPV_CHI2;
   Int_t           Kplus_OWNPV_NDOF;
   Float_t         Kplus_OWNPV_COV_[3][3];
   Double_t        Kplus_IP_OWNPV;
   Double_t        Kplus_IPCHI2_OWNPV;
   Double_t        Kplus_ORIVX_X;
   Double_t        Kplus_ORIVX_Y;
   Double_t        Kplus_ORIVX_Z;
   Double_t        Kplus_ORIVX_XERR;
   Double_t        Kplus_ORIVX_YERR;
   Double_t        Kplus_ORIVX_ZERR;
   Double_t        Kplus_ORIVX_CHI2;
   Int_t           Kplus_ORIVX_NDOF;
   Float_t         Kplus_ORIVX_COV_[3][3];
   Double_t        Kplus_P;
   Double_t        Kplus_PT;
   Double_t        Kplus_PE;
   Double_t        Kplus_PX;
   Double_t        Kplus_PY;
   Double_t        Kplus_PZ;
   Double_t        Kplus_M;
   Int_t           Kplus_ID;
   Double_t        Kplus_CombDLLMu;
   Double_t        Kplus_ProbNNmu;
   Double_t        Kplus_ProbNNghost;
   Double_t        Kplus_InMuonAcc;
   Double_t        Kplus_MuonDist2;
   Int_t           Kplus_regionInM2;
   Bool_t          Kplus_hasMuon;
   Bool_t          Kplus_isMuon;
   Bool_t          Kplus_isMuonLoose;
   Int_t           Kplus_NShared;
   Double_t        Kplus_MuonLLmu;
   Double_t        Kplus_MuonLLbg;
   Int_t           Kplus_isMuonFromProto;
   Double_t        Kplus_PIDe;
   Double_t        Kplus_PIDmu;
   Double_t        Kplus_PIDK;
   Double_t        Kplus_PIDp;
   Double_t        Kplus_PIDd;
   Double_t        Kplus_ProbNNe;
   Double_t        Kplus_ProbNNk;
   Double_t        Kplus_ProbNNp;
   Double_t        Kplus_ProbNNpi;
   Double_t        Kplus_ProbNNd;
   Bool_t          Kplus_hasRich;
   Bool_t          Kplus_UsedRichAerogel;
   Bool_t          Kplus_UsedRich1Gas;
   Bool_t          Kplus_UsedRich2Gas;
   Bool_t          Kplus_RichAboveElThres;
   Bool_t          Kplus_RichAboveMuThres;
   Bool_t          Kplus_RichAbovePiThres;
   Bool_t          Kplus_RichAboveKaThres;
   Bool_t          Kplus_RichAbovePrThres;
   Bool_t          Kplus_hasCalo;
   Int_t           Kplus_TRACK_Type;
   Int_t           Kplus_TRACK_Key;
   Double_t        Kplus_TRACK_CHI2NDOF;
   Double_t        Kplus_TRACK_PCHI2;
   Double_t        Kplus_TRACK_MatchCHI2;
   Double_t        Kplus_TRACK_GhostProb;
   Double_t        Kplus_TRACK_CloneDist;
   Double_t        Kplus_TRACK_Likelihood;
   Double_t        Kplus_X;
   Double_t        Kplus_Y;
   Double_t        PiMinus_CL;
   Double_t        PiMinus_ETA;
   Double_t        PiMinus_PHI;
   Double_t        PiMinus_MC12TuneV2_ProbNNe;
   Double_t        PiMinus_MC12TuneV2_ProbNNmu;
   Double_t        PiMinus_MC12TuneV2_ProbNNpi;
   Double_t        PiMinus_MC12TuneV2_ProbNNk;
   Double_t        PiMinus_MC12TuneV2_ProbNNp;
   Double_t        PiMinus_MC12TuneV2_ProbNNghost;
   Double_t        PiMinus_MC12TuneV3_ProbNNe;
   Double_t        PiMinus_MC12TuneV3_ProbNNmu;
   Double_t        PiMinus_MC12TuneV3_ProbNNpi;
   Double_t        PiMinus_MC12TuneV3_ProbNNk;
   Double_t        PiMinus_MC12TuneV3_ProbNNp;
   Double_t        PiMinus_MC12TuneV3_ProbNNghost;
   Double_t        PiMinus_MC12TuneV4_ProbNNe;
   Double_t        PiMinus_MC12TuneV4_ProbNNmu;
   Double_t        PiMinus_MC12TuneV4_ProbNNpi;
   Double_t        PiMinus_MC12TuneV4_ProbNNk;
   Double_t        PiMinus_MC12TuneV4_ProbNNp;
   Double_t        PiMinus_MC12TuneV4_ProbNNghost;
   Double_t        PiMinus_MC15TuneV1_ProbNNe;
   Double_t        PiMinus_MC15TuneV1_ProbNNmu;
   Double_t        PiMinus_MC15TuneV1_ProbNNpi;
   Double_t        PiMinus_MC15TuneV1_ProbNNk;
   Double_t        PiMinus_MC15TuneV1_ProbNNp;
   Double_t        PiMinus_MC15TuneV1_ProbNNghost;
   Double_t        PiMinus_CosTheta;
   Double_t        PiMinus_OWNPV_X;
   Double_t        PiMinus_OWNPV_Y;
   Double_t        PiMinus_OWNPV_Z;
   Double_t        PiMinus_OWNPV_XERR;
   Double_t        PiMinus_OWNPV_YERR;
   Double_t        PiMinus_OWNPV_ZERR;
   Double_t        PiMinus_OWNPV_CHI2;
   Int_t           PiMinus_OWNPV_NDOF;
   Float_t         PiMinus_OWNPV_COV_[3][3];
   Double_t        PiMinus_IP_OWNPV;
   Double_t        PiMinus_IPCHI2_OWNPV;
   Double_t        PiMinus_ORIVX_X;
   Double_t        PiMinus_ORIVX_Y;
   Double_t        PiMinus_ORIVX_Z;
   Double_t        PiMinus_ORIVX_XERR;
   Double_t        PiMinus_ORIVX_YERR;
   Double_t        PiMinus_ORIVX_ZERR;
   Double_t        PiMinus_ORIVX_CHI2;
   Int_t           PiMinus_ORIVX_NDOF;
   Float_t         PiMinus_ORIVX_COV_[3][3];
   Double_t        PiMinus_P;
   Double_t        PiMinus_PT;
   Double_t        PiMinus_PE;
   Double_t        PiMinus_PX;
   Double_t        PiMinus_PY;
   Double_t        PiMinus_PZ;
   Double_t        PiMinus_M;
   Int_t           PiMinus_ID;
   Double_t        PiMinus_CombDLLMu;
   Double_t        PiMinus_ProbNNmu;
   Double_t        PiMinus_ProbNNghost;
   Double_t        PiMinus_InMuonAcc;
   Double_t        PiMinus_MuonDist2;
   Int_t           PiMinus_regionInM2;
   Bool_t          PiMinus_hasMuon;
   Bool_t          PiMinus_isMuon;
   Bool_t          PiMinus_isMuonLoose;
   Int_t           PiMinus_NShared;
   Double_t        PiMinus_MuonLLmu;
   Double_t        PiMinus_MuonLLbg;
   Int_t           PiMinus_isMuonFromProto;
   Double_t        PiMinus_PIDe;
   Double_t        PiMinus_PIDmu;
   Double_t        PiMinus_PIDK;
   Double_t        PiMinus_PIDp;
   Double_t        PiMinus_PIDd;
   Double_t        PiMinus_ProbNNe;
   Double_t        PiMinus_ProbNNk;
   Double_t        PiMinus_ProbNNp;
   Double_t        PiMinus_ProbNNpi;
   Double_t        PiMinus_ProbNNd;
   Bool_t          PiMinus_hasRich;
   Bool_t          PiMinus_UsedRichAerogel;
   Bool_t          PiMinus_UsedRich1Gas;
   Bool_t          PiMinus_UsedRich2Gas;
   Bool_t          PiMinus_RichAboveElThres;
   Bool_t          PiMinus_RichAboveMuThres;
   Bool_t          PiMinus_RichAbovePiThres;
   Bool_t          PiMinus_RichAboveKaThres;
   Bool_t          PiMinus_RichAbovePrThres;
   Bool_t          PiMinus_hasCalo;
   Int_t           PiMinus_TRACK_Type;
   Int_t           PiMinus_TRACK_Key;
   Double_t        PiMinus_TRACK_CHI2NDOF;
   Double_t        PiMinus_TRACK_PCHI2;
   Double_t        PiMinus_TRACK_MatchCHI2;
   Double_t        PiMinus_TRACK_GhostProb;
   Double_t        PiMinus_TRACK_CloneDist;
   Double_t        PiMinus_TRACK_Likelihood;
   Double_t        PiMinus_X;
   Double_t        PiMinus_Y;
   Double_t        gamma_CL;
   Double_t        gamma_ETA;
   Double_t        gamma_PHI;
   Double_t        gamma_CosTheta;
   Int_t           gamma_hasCaloHypo;
   Double_t        gamma_CaloHypo_E;
   Double_t        gamma_CaloHypo_X;
   Double_t        gamma_CaloHypo_Y;
   Double_t        gamma_CaloHypo_Z;
   Double_t        gamma_CaloHypoPileUpEnergy;
   Double_t        gamma_CaloHypo_HypoE;
   Double_t        gamma_CaloHypo_HypoEt;
   Double_t        gamma_CaloHypo_HypoM;
   Double_t        gamma_CaloHypo_HypoPrsE;
   Double_t        gamma_CaloHypo_HypoPrsM;
   Double_t        gamma_CaloHypo_HypoSpdM;
   Double_t        gamma_CaloHypo_ClusterE;
   Double_t        gamma_CaloHypo_ToPrsE;
   Double_t        gamma_CaloHypo_ToHcalE;
   Double_t        gamma_CaloHypo_ToPrsM;
   Double_t        gamma_CaloHypo_ToSpdM;
   Double_t        gamma_CaloHypo_E1;
   Double_t        gamma_CaloHypo_E9;
   Double_t        gamma_CaloHypo_E19;
   Double_t        gamma_CaloHypo_E1Hypo;
   Double_t        gamma_CaloHypo_E4;
   Double_t        gamma_CaloHypo_E49;
   Double_t        gamma_CaloHypo_CellID;
   Double_t        gamma_CaloHypo_Hcal2Ecal;
   Double_t        gamma_CaloHypo_ClusterMatch;
   Double_t        gamma_CaloHypo_NeutralID;
   Double_t        gamma_CaloHypo_Spread;
   Double_t        gamma_CaloHypo_PrsE19;
   Double_t        gamma_CaloHypo_PrsE49;
   Double_t        gamma_CaloHypo_PrsE4Max;
   Double_t        gamma_CaloHypo_PrsE1;
   Double_t        gamma_CaloHypo_PrsE2;
   Double_t        gamma_CaloHypo_PrsE3;
   Double_t        gamma_CaloHypo_PrsE4;
   Double_t        gamma_CaloHypo_PrsE5;
   Double_t        gamma_CaloHypo_PrsE6;
   Double_t        gamma_CaloHypo_PrsE7;
   Double_t        gamma_CaloHypo_PrsE8;
   Double_t        gamma_CaloHypo_PrsE9;
   Double_t        gamma_CaloHypo_isPhoton;
   Double_t        gamma_CaloHypo_isPhoton_Ecl;
   Double_t        gamma_CaloHypo_isPhoton_Fr2;
   Double_t        gamma_CaloHypo_isPhoton_Fr2r4;
   Double_t        gamma_CaloHypo_isPhoton_Asym;
   Double_t        gamma_CaloHypo_isPhoton_Kappa;
   Double_t        gamma_CaloHypo_isPhoton_Eseed;
   Double_t        gamma_CaloHypo_isPhoton_E2;
   Double_t        gamma_CaloHypo_isPhoton_PrsFr2;
   Double_t        gamma_CaloHypo_isPhoton_PrsAsym;
   Double_t        gamma_CaloHypo_isPhoton_PrsM;
   Double_t        gamma_CaloHypo_isPhoton_PrsM15;
   Double_t        gamma_CaloHypo_isPhoton_PrsM30;
   Double_t        gamma_CaloHypo_isPhoton_PrsM45;
   Double_t        gamma_CaloHypo_isPhoton_PrsEmax;
   Double_t        gamma_CaloHypo_isPhoton_PrsE2;
   Double_t        gamma_CaloHypo_isNotH;
   Double_t        gamma_CaloHypo_isNotE;
   Double_t        gamma_CaloHypo_ClusterCode;
   Double_t        gamma_CaloHypo_ClusterFrac;
   Double_t        gamma_CaloHypo_Saturation;
   Double_t        gamma_CaloHypo_ClusterAsX;
   Double_t        gamma_CaloHypo_ClusterAsY;
   Double_t        gamma_CaloHypo_isPhotonXGB;
   Double_t        gamma_P;
   Double_t        gamma_PT;
   Double_t        gamma_PE;
   Double_t        gamma_PX;
   Double_t        gamma_PY;
   Double_t        gamma_PZ;
   Double_t        gamma_M;
   Int_t           gamma_ID;
   Double_t        gamma_Converted;
   Double_t        gamma_Prs;
   Double_t        gamma_Matching;
   Double_t        gamma_PID;
   Double_t        gamma_ShowerShape;
   Double_t        gamma_X;
   Double_t        gamma_Y;
   Double_t        Piplus_CL;
   Double_t        Piplus_ETA;
   Double_t        Piplus_PHI;
   Double_t        Piplus_MC12TuneV2_ProbNNe;
   Double_t        Piplus_MC12TuneV2_ProbNNmu;
   Double_t        Piplus_MC12TuneV2_ProbNNpi;
   Double_t        Piplus_MC12TuneV2_ProbNNk;
   Double_t        Piplus_MC12TuneV2_ProbNNp;
   Double_t        Piplus_MC12TuneV2_ProbNNghost;
   Double_t        Piplus_MC12TuneV3_ProbNNe;
   Double_t        Piplus_MC12TuneV3_ProbNNmu;
   Double_t        Piplus_MC12TuneV3_ProbNNpi;
   Double_t        Piplus_MC12TuneV3_ProbNNk;
   Double_t        Piplus_MC12TuneV3_ProbNNp;
   Double_t        Piplus_MC12TuneV3_ProbNNghost;
   Double_t        Piplus_MC12TuneV4_ProbNNe;
   Double_t        Piplus_MC12TuneV4_ProbNNmu;
   Double_t        Piplus_MC12TuneV4_ProbNNpi;
   Double_t        Piplus_MC12TuneV4_ProbNNk;
   Double_t        Piplus_MC12TuneV4_ProbNNp;
   Double_t        Piplus_MC12TuneV4_ProbNNghost;
   Double_t        Piplus_MC15TuneV1_ProbNNe;
   Double_t        Piplus_MC15TuneV1_ProbNNmu;
   Double_t        Piplus_MC15TuneV1_ProbNNpi;
   Double_t        Piplus_MC15TuneV1_ProbNNk;
   Double_t        Piplus_MC15TuneV1_ProbNNp;
   Double_t        Piplus_MC15TuneV1_ProbNNghost;
   Double_t        Piplus_CosTheta;
   Double_t        Piplus_OWNPV_X;
   Double_t        Piplus_OWNPV_Y;
   Double_t        Piplus_OWNPV_Z;
   Double_t        Piplus_OWNPV_XERR;
   Double_t        Piplus_OWNPV_YERR;
   Double_t        Piplus_OWNPV_ZERR;
   Double_t        Piplus_OWNPV_CHI2;
   Int_t           Piplus_OWNPV_NDOF;
   Float_t         Piplus_OWNPV_COV_[3][3];
   Double_t        Piplus_IP_OWNPV;
   Double_t        Piplus_IPCHI2_OWNPV;
   Double_t        Piplus_ORIVX_X;
   Double_t        Piplus_ORIVX_Y;
   Double_t        Piplus_ORIVX_Z;
   Double_t        Piplus_ORIVX_XERR;
   Double_t        Piplus_ORIVX_YERR;
   Double_t        Piplus_ORIVX_ZERR;
   Double_t        Piplus_ORIVX_CHI2;
   Int_t           Piplus_ORIVX_NDOF;
   Float_t         Piplus_ORIVX_COV_[3][3];
   Double_t        Piplus_P;
   Double_t        Piplus_PT;
   Double_t        Piplus_PE;
   Double_t        Piplus_PX;
   Double_t        Piplus_PY;
   Double_t        Piplus_PZ;
   Double_t        Piplus_M;
   Int_t           Piplus_ID;
   Double_t        Piplus_CombDLLMu;
   Double_t        Piplus_ProbNNmu;
   Double_t        Piplus_ProbNNghost;
   Double_t        Piplus_InMuonAcc;
   Double_t        Piplus_MuonDist2;
   Int_t           Piplus_regionInM2;
   Bool_t          Piplus_hasMuon;
   Bool_t          Piplus_isMuon;
   Bool_t          Piplus_isMuonLoose;
   Int_t           Piplus_NShared;
   Double_t        Piplus_MuonLLmu;
   Double_t        Piplus_MuonLLbg;
   Int_t           Piplus_isMuonFromProto;
   Double_t        Piplus_PIDe;
   Double_t        Piplus_PIDmu;
   Double_t        Piplus_PIDK;
   Double_t        Piplus_PIDp;
   Double_t        Piplus_PIDd;
   Double_t        Piplus_ProbNNe;
   Double_t        Piplus_ProbNNk;
   Double_t        Piplus_ProbNNp;
   Double_t        Piplus_ProbNNpi;
   Double_t        Piplus_ProbNNd;
   Bool_t          Piplus_hasRich;
   Bool_t          Piplus_UsedRichAerogel;
   Bool_t          Piplus_UsedRich1Gas;
   Bool_t          Piplus_UsedRich2Gas;
   Bool_t          Piplus_RichAboveElThres;
   Bool_t          Piplus_RichAboveMuThres;
   Bool_t          Piplus_RichAbovePiThres;
   Bool_t          Piplus_RichAboveKaThres;
   Bool_t          Piplus_RichAbovePrThres;
   Bool_t          Piplus_hasCalo;
   Int_t           Piplus_TRACK_Type;
   Int_t           Piplus_TRACK_Key;
   Double_t        Piplus_TRACK_CHI2NDOF;
   Double_t        Piplus_TRACK_PCHI2;
   Double_t        Piplus_TRACK_MatchCHI2;
   Double_t        Piplus_TRACK_GhostProb;
   Double_t        Piplus_TRACK_CloneDist;
   Double_t        Piplus_TRACK_Likelihood;
   Double_t        Piplus_X;
   Double_t        Piplus_Y;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   UInt_t          BCID;
   Int_t           BCType;
   UInt_t          OdinTCK;
   UInt_t          L0DUTCK;
   UInt_t          HLT1TCK;
   UInt_t          HLT2TCK;
   ULong64_t       GpsTime;
   Short_t         Polarity;
   Int_t           L0Data_DiMuon_Pt;
   Int_t           L0Data_DiMuonProd_Pt1Pt2;
   Int_t           L0Data_Electron_Et;
   Int_t           L0Data_GlobalPi0_Et;
   Int_t           L0Data_Hadron_Et;
   Int_t           L0Data_LocalPi0_Et;
   Int_t           L0Data_Muon1_Pt;
   Int_t           L0Data_Muon1_Sgn;
   Int_t           L0Data_Muon2_Pt;
   Int_t           L0Data_Muon2_Sgn;
   Int_t           L0Data_Muon3_Pt;
   Int_t           L0Data_Muon3_Sgn;
   Int_t           L0Data_PUHits_Mult;
   Int_t           L0Data_PUPeak1_Cont;
   Int_t           L0Data_PUPeak1_Pos;
   Int_t           L0Data_PUPeak2_Cont;
   Int_t           L0Data_PUPeak2_Pos;
   Int_t           L0Data_Photon_Et;
   Int_t           L0Data_Spd_Mult;
   Int_t           L0Data_Sum_Et;
   Int_t           L0Data_Sum_Et_Next1;
   Int_t           L0Data_Sum_Et_Next2;
   Int_t           L0Data_Sum_Et_Prev1;
   Int_t           L0Data_Sum_Et_Prev2;
   Int_t           nPV;
   Float_t         PVX[100];   //[nPV]
   Float_t         PVY[100];   //[nPV]
   Float_t         PVZ[100];   //[nPV]
   Float_t         PVXERR[100];   //[nPV]
   Float_t         PVYERR[100];   //[nPV]
   Float_t         PVZERR[100];   //[nPV]
   Float_t         PVCHI2[100];   //[nPV]
   Float_t         PVNDOF[100];   //[nPV]
   Float_t         PVNTRACKS[100];   //[nPV]
   Int_t           nPVs;
   Int_t           nTracks;
   Int_t           nLongTracks;
   Int_t           nDownstreamTracks;
   Int_t           nUpstreamTracks;
   Int_t           nVeloTracks;
   Int_t           nTTracks;
   Int_t           nBackTracks;
   Int_t           nRich1Hits;
   Int_t           nRich2Hits;
   Int_t           nVeloClusters;
   Int_t           nITClusters;
   Int_t           nTTClusters;
   Int_t           nOTClusters;
   Int_t           nSPDHits;
   Int_t           nMuonCoordsS0;
   Int_t           nMuonCoordsS1;
   Int_t           nMuonCoordsS2;
   Int_t           nMuonCoordsS3;
   Int_t           nMuonCoordsS4;
   Int_t           nMuonTracks;

   // List of branches
   TBranch        *b_B0_CL;   //!
   TBranch        *b_B0_ETA;   //!
   TBranch        *b_B0_PHI;   //!
   TBranch        *b_B0_DiraAngleError;   //!
   TBranch        *b_B0_DiraCosError;   //!
   TBranch        *b_B0_DiraAngle;   //!
   TBranch        *b_B0_DiraCos;   //!
   TBranch        *b_B0_ENDVERTEX_X;   //!
   TBranch        *b_B0_ENDVERTEX_Y;   //!
   TBranch        *b_B0_ENDVERTEX_Z;   //!
   TBranch        *b_B0_ENDVERTEX_XERR;   //!
   TBranch        *b_B0_ENDVERTEX_YERR;   //!
   TBranch        *b_B0_ENDVERTEX_ZERR;   //!
   TBranch        *b_B0_ENDVERTEX_CHI2;   //!
   TBranch        *b_B0_ENDVERTEX_NDOF;   //!
   TBranch        *b_B0_ENDVERTEX_COV_;   //!
   TBranch        *b_B0_OWNPV_X;   //!
   TBranch        *b_B0_OWNPV_Y;   //!
   TBranch        *b_B0_OWNPV_Z;   //!
   TBranch        *b_B0_OWNPV_XERR;   //!
   TBranch        *b_B0_OWNPV_YERR;   //!
   TBranch        *b_B0_OWNPV_ZERR;   //!
   TBranch        *b_B0_OWNPV_CHI2;   //!
   TBranch        *b_B0_OWNPV_NDOF;   //!
   TBranch        *b_B0_OWNPV_COV_;   //!
   TBranch        *b_B0_IP_OWNPV;   //!
   TBranch        *b_B0_IPCHI2_OWNPV;   //!
   TBranch        *b_B0_FD_OWNPV;   //!
   TBranch        *b_B0_FDCHI2_OWNPV;   //!
   TBranch        *b_B0_DIRA_OWNPV;   //!
   TBranch        *b_B0_P;   //!
   TBranch        *b_B0_PT;   //!
   TBranch        *b_B0_PE;   //!
   TBranch        *b_B0_PX;   //!
   TBranch        *b_B0_PY;   //!
   TBranch        *b_B0_PZ;   //!
   TBranch        *b_B0_MM;   //!
   TBranch        *b_B0_MMERR;   //!
   TBranch        *b_B0_M;   //!
   TBranch        *b_B0_ID;   //!
   TBranch        *b_B0_TAU;   //!
   TBranch        *b_B0_TAUERR;   //!
   TBranch        *b_B0_TAUCHI2;   //!
   TBranch        *b_B0_X;   //!
   TBranch        *b_B0_Y;   //!
   TBranch        *b_B0_NumVtxWithinChi2WindowOneTrack;   //!
   TBranch        *b_B0_SmallestDeltaChi2OneTrack;   //!
   TBranch        *b_B0_SmallestDeltaChi2MassOneTrack;   //!
   TBranch        *b_B0_SmallestDeltaChi2TwoTracks;   //!
   TBranch        *b_B0_SmallestDeltaChi2MassTwoTracks;   //!
   TBranch        *b_B0_MCORR;   //!
   TBranch        *b_B0_MCORRERR;   //!
   TBranch        *b_B0_MCORRVERTEXERR;   //!
   TBranch        *b_B0_PTREL;   //!
   TBranch        *b_Dsstar_CL;   //!
   TBranch        *b_Dsstar_ETA;   //!
   TBranch        *b_Dsstar_PHI;   //!
   TBranch        *b_Dsstar_CosTheta;   //!
   TBranch        *b_Dsstar_ENDVERTEX_X;   //!
   TBranch        *b_Dsstar_ENDVERTEX_Y;   //!
   TBranch        *b_Dsstar_ENDVERTEX_Z;   //!
   TBranch        *b_Dsstar_ENDVERTEX_XERR;   //!
   TBranch        *b_Dsstar_ENDVERTEX_YERR;   //!
   TBranch        *b_Dsstar_ENDVERTEX_ZERR;   //!
   TBranch        *b_Dsstar_ENDVERTEX_CHI2;   //!
   TBranch        *b_Dsstar_ENDVERTEX_NDOF;   //!
   TBranch        *b_Dsstar_ENDVERTEX_COV_;   //!
   TBranch        *b_Dsstar_OWNPV_X;   //!
   TBranch        *b_Dsstar_OWNPV_Y;   //!
   TBranch        *b_Dsstar_OWNPV_Z;   //!
   TBranch        *b_Dsstar_OWNPV_XERR;   //!
   TBranch        *b_Dsstar_OWNPV_YERR;   //!
   TBranch        *b_Dsstar_OWNPV_ZERR;   //!
   TBranch        *b_Dsstar_OWNPV_CHI2;   //!
   TBranch        *b_Dsstar_OWNPV_NDOF;   //!
   TBranch        *b_Dsstar_OWNPV_COV_;   //!
   TBranch        *b_Dsstar_IP_OWNPV;   //!
   TBranch        *b_Dsstar_IPCHI2_OWNPV;   //!
   TBranch        *b_Dsstar_FD_OWNPV;   //!
   TBranch        *b_Dsstar_FDCHI2_OWNPV;   //!
   TBranch        *b_Dsstar_DIRA_OWNPV;   //!
   TBranch        *b_Dsstar_ORIVX_X;   //!
   TBranch        *b_Dsstar_ORIVX_Y;   //!
   TBranch        *b_Dsstar_ORIVX_Z;   //!
   TBranch        *b_Dsstar_ORIVX_XERR;   //!
   TBranch        *b_Dsstar_ORIVX_YERR;   //!
   TBranch        *b_Dsstar_ORIVX_ZERR;   //!
   TBranch        *b_Dsstar_ORIVX_CHI2;   //!
   TBranch        *b_Dsstar_ORIVX_NDOF;   //!
   TBranch        *b_Dsstar_ORIVX_COV_;   //!
   TBranch        *b_Dsstar_FD_ORIVX;   //!
   TBranch        *b_Dsstar_FDCHI2_ORIVX;   //!
   TBranch        *b_Dsstar_DIRA_ORIVX;   //!
   TBranch        *b_Dsstar_P;   //!
   TBranch        *b_Dsstar_PT;   //!
   TBranch        *b_Dsstar_PE;   //!
   TBranch        *b_Dsstar_PX;   //!
   TBranch        *b_Dsstar_PY;   //!
   TBranch        *b_Dsstar_PZ;   //!
   TBranch        *b_Dsstar_MM;   //!
   TBranch        *b_Dsstar_MMERR;   //!
   TBranch        *b_Dsstar_M;   //!
   TBranch        *b_Dsstar_ID;   //!
   TBranch        *b_Dsstar_TAU;   //!
   TBranch        *b_Dsstar_TAUERR;   //!
   TBranch        *b_Dsstar_TAUCHI2;   //!
   TBranch        *b_Dsstar_X;   //!
   TBranch        *b_Dsstar_Y;   //!
   TBranch        *b_Dsstar_NumVtxWithinChi2WindowOneTrack;   //!
   TBranch        *b_Dsstar_SmallestDeltaChi2OneTrack;   //!
   TBranch        *b_Dsstar_SmallestDeltaChi2MassOneTrack;   //!
   TBranch        *b_Dsstar_SmallestDeltaChi2TwoTracks;   //!
   TBranch        *b_Dsstar_SmallestDeltaChi2MassTwoTracks;   //!
   TBranch        *b_Ds_CL;   //!
   TBranch        *b_Ds_ETA;   //!
   TBranch        *b_Ds_PHI;   //!
   TBranch        *b_Ds_CosTheta;   //!
   TBranch        *b_Ds_ENDVERTEX_X;   //!
   TBranch        *b_Ds_ENDVERTEX_Y;   //!
   TBranch        *b_Ds_ENDVERTEX_Z;   //!
   TBranch        *b_Ds_ENDVERTEX_XERR;   //!
   TBranch        *b_Ds_ENDVERTEX_YERR;   //!
   TBranch        *b_Ds_ENDVERTEX_ZERR;   //!
   TBranch        *b_Ds_ENDVERTEX_CHI2;   //!
   TBranch        *b_Ds_ENDVERTEX_NDOF;   //!
   TBranch        *b_Ds_ENDVERTEX_COV_;   //!
   TBranch        *b_Ds_OWNPV_X;   //!
   TBranch        *b_Ds_OWNPV_Y;   //!
   TBranch        *b_Ds_OWNPV_Z;   //!
   TBranch        *b_Ds_OWNPV_XERR;   //!
   TBranch        *b_Ds_OWNPV_YERR;   //!
   TBranch        *b_Ds_OWNPV_ZERR;   //!
   TBranch        *b_Ds_OWNPV_CHI2;   //!
   TBranch        *b_Ds_OWNPV_NDOF;   //!
   TBranch        *b_Ds_OWNPV_COV_;   //!
   TBranch        *b_Ds_IP_OWNPV;   //!
   TBranch        *b_Ds_IPCHI2_OWNPV;   //!
   TBranch        *b_Ds_FD_OWNPV;   //!
   TBranch        *b_Ds_FDCHI2_OWNPV;   //!
   TBranch        *b_Ds_DIRA_OWNPV;   //!
   TBranch        *b_Ds_ORIVX_X;   //!
   TBranch        *b_Ds_ORIVX_Y;   //!
   TBranch        *b_Ds_ORIVX_Z;   //!
   TBranch        *b_Ds_ORIVX_XERR;   //!
   TBranch        *b_Ds_ORIVX_YERR;   //!
   TBranch        *b_Ds_ORIVX_ZERR;   //!
   TBranch        *b_Ds_ORIVX_CHI2;   //!
   TBranch        *b_Ds_ORIVX_NDOF;   //!
   TBranch        *b_Ds_ORIVX_COV_;   //!
   TBranch        *b_Ds_FD_ORIVX;   //!
   TBranch        *b_Ds_FDCHI2_ORIVX;   //!
   TBranch        *b_Ds_DIRA_ORIVX;   //!
   TBranch        *b_Ds_P;   //!
   TBranch        *b_Ds_PT;   //!
   TBranch        *b_Ds_PE;   //!
   TBranch        *b_Ds_PX;   //!
   TBranch        *b_Ds_PY;   //!
   TBranch        *b_Ds_PZ;   //!
   TBranch        *b_Ds_MM;   //!
   TBranch        *b_Ds_MMERR;   //!
   TBranch        *b_Ds_M;   //!
   TBranch        *b_Ds_ID;   //!
   TBranch        *b_Ds_TAU;   //!
   TBranch        *b_Ds_TAUERR;   //!
   TBranch        *b_Ds_TAUCHI2;   //!
   TBranch        *b_Ds_X;   //!
   TBranch        *b_Ds_Y;   //!
   TBranch        *b_Ds_NumVtxWithinChi2WindowOneTrack;   //!
   TBranch        *b_Ds_SmallestDeltaChi2OneTrack;   //!
   TBranch        *b_Ds_SmallestDeltaChi2MassOneTrack;   //!
   TBranch        *b_Ds_SmallestDeltaChi2TwoTracks;   //!
   TBranch        *b_Ds_SmallestDeltaChi2MassTwoTracks;   //!
   TBranch        *b_Kminus_CL;   //!
   TBranch        *b_Kminus_ETA;   //!
   TBranch        *b_Kminus_PHI;   //!
   TBranch        *b_Kminus_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_Kminus_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_Kminus_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_Kminus_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_Kminus_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_Kminus_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_Kminus_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_Kminus_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_Kminus_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_Kminus_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_Kminus_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_Kminus_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_Kminus_MC12TuneV4_ProbNNe;   //!
   TBranch        *b_Kminus_MC12TuneV4_ProbNNmu;   //!
   TBranch        *b_Kminus_MC12TuneV4_ProbNNpi;   //!
   TBranch        *b_Kminus_MC12TuneV4_ProbNNk;   //!
   TBranch        *b_Kminus_MC12TuneV4_ProbNNp;   //!
   TBranch        *b_Kminus_MC12TuneV4_ProbNNghost;   //!
   TBranch        *b_Kminus_MC15TuneV1_ProbNNe;   //!
   TBranch        *b_Kminus_MC15TuneV1_ProbNNmu;   //!
   TBranch        *b_Kminus_MC15TuneV1_ProbNNpi;   //!
   TBranch        *b_Kminus_MC15TuneV1_ProbNNk;   //!
   TBranch        *b_Kminus_MC15TuneV1_ProbNNp;   //!
   TBranch        *b_Kminus_MC15TuneV1_ProbNNghost;   //!
   TBranch        *b_Kminus_CosTheta;   //!
   TBranch        *b_Kminus_OWNPV_X;   //!
   TBranch        *b_Kminus_OWNPV_Y;   //!
   TBranch        *b_Kminus_OWNPV_Z;   //!
   TBranch        *b_Kminus_OWNPV_XERR;   //!
   TBranch        *b_Kminus_OWNPV_YERR;   //!
   TBranch        *b_Kminus_OWNPV_ZERR;   //!
   TBranch        *b_Kminus_OWNPV_CHI2;   //!
   TBranch        *b_Kminus_OWNPV_NDOF;   //!
   TBranch        *b_Kminus_OWNPV_COV_;   //!
   TBranch        *b_Kminus_IP_OWNPV;   //!
   TBranch        *b_Kminus_IPCHI2_OWNPV;   //!
   TBranch        *b_Kminus_ORIVX_X;   //!
   TBranch        *b_Kminus_ORIVX_Y;   //!
   TBranch        *b_Kminus_ORIVX_Z;   //!
   TBranch        *b_Kminus_ORIVX_XERR;   //!
   TBranch        *b_Kminus_ORIVX_YERR;   //!
   TBranch        *b_Kminus_ORIVX_ZERR;   //!
   TBranch        *b_Kminus_ORIVX_CHI2;   //!
   TBranch        *b_Kminus_ORIVX_NDOF;   //!
   TBranch        *b_Kminus_ORIVX_COV_;   //!
   TBranch        *b_Kminus_P;   //!
   TBranch        *b_Kminus_PT;   //!
   TBranch        *b_Kminus_PE;   //!
   TBranch        *b_Kminus_PX;   //!
   TBranch        *b_Kminus_PY;   //!
   TBranch        *b_Kminus_PZ;   //!
   TBranch        *b_Kminus_M;   //!
   TBranch        *b_Kminus_ID;   //!
   TBranch        *b_Kminus_CombDLLMu;   //!
   TBranch        *b_Kminus_ProbNNmu;   //!
   TBranch        *b_Kminus_ProbNNghost;   //!
   TBranch        *b_Kminus_InMuonAcc;   //!
   TBranch        *b_Kminus_MuonDist2;   //!
   TBranch        *b_Kminus_regionInM2;   //!
   TBranch        *b_Kminus_hasMuon;   //!
   TBranch        *b_Kminus_isMuon;   //!
   TBranch        *b_Kminus_isMuonLoose;   //!
   TBranch        *b_Kminus_NShared;   //!
   TBranch        *b_Kminus_MuonLLmu;   //!
   TBranch        *b_Kminus_MuonLLbg;   //!
   TBranch        *b_Kminus_isMuonFromProto;   //!
   TBranch        *b_Kminus_PIDe;   //!
   TBranch        *b_Kminus_PIDmu;   //!
   TBranch        *b_Kminus_PIDK;   //!
   TBranch        *b_Kminus_PIDp;   //!
   TBranch        *b_Kminus_PIDd;   //!
   TBranch        *b_Kminus_ProbNNe;   //!
   TBranch        *b_Kminus_ProbNNk;   //!
   TBranch        *b_Kminus_ProbNNp;   //!
   TBranch        *b_Kminus_ProbNNpi;   //!
   TBranch        *b_Kminus_ProbNNd;   //!
   TBranch        *b_Kminus_hasRich;   //!
   TBranch        *b_Kminus_UsedRichAerogel;   //!
   TBranch        *b_Kminus_UsedRich1Gas;   //!
   TBranch        *b_Kminus_UsedRich2Gas;   //!
   TBranch        *b_Kminus_RichAboveElThres;   //!
   TBranch        *b_Kminus_RichAboveMuThres;   //!
   TBranch        *b_Kminus_RichAbovePiThres;   //!
   TBranch        *b_Kminus_RichAboveKaThres;   //!
   TBranch        *b_Kminus_RichAbovePrThres;   //!
   TBranch        *b_Kminus_hasCalo;   //!
   TBranch        *b_Kminus_TRACK_Type;   //!
   TBranch        *b_Kminus_TRACK_Key;   //!
   TBranch        *b_Kminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Kminus_TRACK_PCHI2;   //!
   TBranch        *b_Kminus_TRACK_MatchCHI2;   //!
   TBranch        *b_Kminus_TRACK_GhostProb;   //!
   TBranch        *b_Kminus_TRACK_CloneDist;   //!
   TBranch        *b_Kminus_TRACK_Likelihood;   //!
   TBranch        *b_Kminus_X;   //!
   TBranch        *b_Kminus_Y;   //!
   TBranch        *b_Kplus_CL;   //!
   TBranch        *b_Kplus_ETA;   //!
   TBranch        *b_Kplus_PHI;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_Kplus_MC12TuneV4_ProbNNe;   //!
   TBranch        *b_Kplus_MC12TuneV4_ProbNNmu;   //!
   TBranch        *b_Kplus_MC12TuneV4_ProbNNpi;   //!
   TBranch        *b_Kplus_MC12TuneV4_ProbNNk;   //!
   TBranch        *b_Kplus_MC12TuneV4_ProbNNp;   //!
   TBranch        *b_Kplus_MC12TuneV4_ProbNNghost;   //!
   TBranch        *b_Kplus_MC15TuneV1_ProbNNe;   //!
   TBranch        *b_Kplus_MC15TuneV1_ProbNNmu;   //!
   TBranch        *b_Kplus_MC15TuneV1_ProbNNpi;   //!
   TBranch        *b_Kplus_MC15TuneV1_ProbNNk;   //!
   TBranch        *b_Kplus_MC15TuneV1_ProbNNp;   //!
   TBranch        *b_Kplus_MC15TuneV1_ProbNNghost;   //!
   TBranch        *b_Kplus_CosTheta;   //!
   TBranch        *b_Kplus_OWNPV_X;   //!
   TBranch        *b_Kplus_OWNPV_Y;   //!
   TBranch        *b_Kplus_OWNPV_Z;   //!
   TBranch        *b_Kplus_OWNPV_XERR;   //!
   TBranch        *b_Kplus_OWNPV_YERR;   //!
   TBranch        *b_Kplus_OWNPV_ZERR;   //!
   TBranch        *b_Kplus_OWNPV_CHI2;   //!
   TBranch        *b_Kplus_OWNPV_NDOF;   //!
   TBranch        *b_Kplus_OWNPV_COV_;   //!
   TBranch        *b_Kplus_IP_OWNPV;   //!
   TBranch        *b_Kplus_IPCHI2_OWNPV;   //!
   TBranch        *b_Kplus_ORIVX_X;   //!
   TBranch        *b_Kplus_ORIVX_Y;   //!
   TBranch        *b_Kplus_ORIVX_Z;   //!
   TBranch        *b_Kplus_ORIVX_XERR;   //!
   TBranch        *b_Kplus_ORIVX_YERR;   //!
   TBranch        *b_Kplus_ORIVX_ZERR;   //!
   TBranch        *b_Kplus_ORIVX_CHI2;   //!
   TBranch        *b_Kplus_ORIVX_NDOF;   //!
   TBranch        *b_Kplus_ORIVX_COV_;   //!
   TBranch        *b_Kplus_P;   //!
   TBranch        *b_Kplus_PT;   //!
   TBranch        *b_Kplus_PE;   //!
   TBranch        *b_Kplus_PX;   //!
   TBranch        *b_Kplus_PY;   //!
   TBranch        *b_Kplus_PZ;   //!
   TBranch        *b_Kplus_M;   //!
   TBranch        *b_Kplus_ID;   //!
   TBranch        *b_Kplus_CombDLLMu;   //!
   TBranch        *b_Kplus_ProbNNmu;   //!
   TBranch        *b_Kplus_ProbNNghost;   //!
   TBranch        *b_Kplus_InMuonAcc;   //!
   TBranch        *b_Kplus_MuonDist2;   //!
   TBranch        *b_Kplus_regionInM2;   //!
   TBranch        *b_Kplus_hasMuon;   //!
   TBranch        *b_Kplus_isMuon;   //!
   TBranch        *b_Kplus_isMuonLoose;   //!
   TBranch        *b_Kplus_NShared;   //!
   TBranch        *b_Kplus_MuonLLmu;   //!
   TBranch        *b_Kplus_MuonLLbg;   //!
   TBranch        *b_Kplus_isMuonFromProto;   //!
   TBranch        *b_Kplus_PIDe;   //!
   TBranch        *b_Kplus_PIDmu;   //!
   TBranch        *b_Kplus_PIDK;   //!
   TBranch        *b_Kplus_PIDp;   //!
   TBranch        *b_Kplus_PIDd;   //!
   TBranch        *b_Kplus_ProbNNe;   //!
   TBranch        *b_Kplus_ProbNNk;   //!
   TBranch        *b_Kplus_ProbNNp;   //!
   TBranch        *b_Kplus_ProbNNpi;   //!
   TBranch        *b_Kplus_ProbNNd;   //!
   TBranch        *b_Kplus_hasRich;   //!
   TBranch        *b_Kplus_UsedRichAerogel;   //!
   TBranch        *b_Kplus_UsedRich1Gas;   //!
   TBranch        *b_Kplus_UsedRich2Gas;   //!
   TBranch        *b_Kplus_RichAboveElThres;   //!
   TBranch        *b_Kplus_RichAboveMuThres;   //!
   TBranch        *b_Kplus_RichAbovePiThres;   //!
   TBranch        *b_Kplus_RichAboveKaThres;   //!
   TBranch        *b_Kplus_RichAbovePrThres;   //!
   TBranch        *b_Kplus_hasCalo;   //!
   TBranch        *b_Kplus_TRACK_Type;   //!
   TBranch        *b_Kplus_TRACK_Key;   //!
   TBranch        *b_Kplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Kplus_TRACK_PCHI2;   //!
   TBranch        *b_Kplus_TRACK_MatchCHI2;   //!
   TBranch        *b_Kplus_TRACK_GhostProb;   //!
   TBranch        *b_Kplus_TRACK_CloneDist;   //!
   TBranch        *b_Kplus_TRACK_Likelihood;   //!
   TBranch        *b_Kplus_X;   //!
   TBranch        *b_Kplus_Y;   //!
   TBranch        *b_PiMinus_CL;   //!
   TBranch        *b_PiMinus_ETA;   //!
   TBranch        *b_PiMinus_PHI;   //!
   TBranch        *b_PiMinus_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_PiMinus_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_PiMinus_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_PiMinus_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_PiMinus_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_PiMinus_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_PiMinus_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_PiMinus_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_PiMinus_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_PiMinus_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_PiMinus_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_PiMinus_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_PiMinus_MC12TuneV4_ProbNNe;   //!
   TBranch        *b_PiMinus_MC12TuneV4_ProbNNmu;   //!
   TBranch        *b_PiMinus_MC12TuneV4_ProbNNpi;   //!
   TBranch        *b_PiMinus_MC12TuneV4_ProbNNk;   //!
   TBranch        *b_PiMinus_MC12TuneV4_ProbNNp;   //!
   TBranch        *b_PiMinus_MC12TuneV4_ProbNNghost;   //!
   TBranch        *b_PiMinus_MC15TuneV1_ProbNNe;   //!
   TBranch        *b_PiMinus_MC15TuneV1_ProbNNmu;   //!
   TBranch        *b_PiMinus_MC15TuneV1_ProbNNpi;   //!
   TBranch        *b_PiMinus_MC15TuneV1_ProbNNk;   //!
   TBranch        *b_PiMinus_MC15TuneV1_ProbNNp;   //!
   TBranch        *b_PiMinus_MC15TuneV1_ProbNNghost;   //!
   TBranch        *b_PiMinus_CosTheta;   //!
   TBranch        *b_PiMinus_OWNPV_X;   //!
   TBranch        *b_PiMinus_OWNPV_Y;   //!
   TBranch        *b_PiMinus_OWNPV_Z;   //!
   TBranch        *b_PiMinus_OWNPV_XERR;   //!
   TBranch        *b_PiMinus_OWNPV_YERR;   //!
   TBranch        *b_PiMinus_OWNPV_ZERR;   //!
   TBranch        *b_PiMinus_OWNPV_CHI2;   //!
   TBranch        *b_PiMinus_OWNPV_NDOF;   //!
   TBranch        *b_PiMinus_OWNPV_COV_;   //!
   TBranch        *b_PiMinus_IP_OWNPV;   //!
   TBranch        *b_PiMinus_IPCHI2_OWNPV;   //!
   TBranch        *b_PiMinus_ORIVX_X;   //!
   TBranch        *b_PiMinus_ORIVX_Y;   //!
   TBranch        *b_PiMinus_ORIVX_Z;   //!
   TBranch        *b_PiMinus_ORIVX_XERR;   //!
   TBranch        *b_PiMinus_ORIVX_YERR;   //!
   TBranch        *b_PiMinus_ORIVX_ZERR;   //!
   TBranch        *b_PiMinus_ORIVX_CHI2;   //!
   TBranch        *b_PiMinus_ORIVX_NDOF;   //!
   TBranch        *b_PiMinus_ORIVX_COV_;   //!
   TBranch        *b_PiMinus_P;   //!
   TBranch        *b_PiMinus_PT;   //!
   TBranch        *b_PiMinus_PE;   //!
   TBranch        *b_PiMinus_PX;   //!
   TBranch        *b_PiMinus_PY;   //!
   TBranch        *b_PiMinus_PZ;   //!
   TBranch        *b_PiMinus_M;   //!
   TBranch        *b_PiMinus_ID;   //!
   TBranch        *b_PiMinus_CombDLLMu;   //!
   TBranch        *b_PiMinus_ProbNNmu;   //!
   TBranch        *b_PiMinus_ProbNNghost;   //!
   TBranch        *b_PiMinus_InMuonAcc;   //!
   TBranch        *b_PiMinus_MuonDist2;   //!
   TBranch        *b_PiMinus_regionInM2;   //!
   TBranch        *b_PiMinus_hasMuon;   //!
   TBranch        *b_PiMinus_isMuon;   //!
   TBranch        *b_PiMinus_isMuonLoose;   //!
   TBranch        *b_PiMinus_NShared;   //!
   TBranch        *b_PiMinus_MuonLLmu;   //!
   TBranch        *b_PiMinus_MuonLLbg;   //!
   TBranch        *b_PiMinus_isMuonFromProto;   //!
   TBranch        *b_PiMinus_PIDe;   //!
   TBranch        *b_PiMinus_PIDmu;   //!
   TBranch        *b_PiMinus_PIDK;   //!
   TBranch        *b_PiMinus_PIDp;   //!
   TBranch        *b_PiMinus_PIDd;   //!
   TBranch        *b_PiMinus_ProbNNe;   //!
   TBranch        *b_PiMinus_ProbNNk;   //!
   TBranch        *b_PiMinus_ProbNNp;   //!
   TBranch        *b_PiMinus_ProbNNpi;   //!
   TBranch        *b_PiMinus_ProbNNd;   //!
   TBranch        *b_PiMinus_hasRich;   //!
   TBranch        *b_PiMinus_UsedRichAerogel;   //!
   TBranch        *b_PiMinus_UsedRich1Gas;   //!
   TBranch        *b_PiMinus_UsedRich2Gas;   //!
   TBranch        *b_PiMinus_RichAboveElThres;   //!
   TBranch        *b_PiMinus_RichAboveMuThres;   //!
   TBranch        *b_PiMinus_RichAbovePiThres;   //!
   TBranch        *b_PiMinus_RichAboveKaThres;   //!
   TBranch        *b_PiMinus_RichAbovePrThres;   //!
   TBranch        *b_PiMinus_hasCalo;   //!
   TBranch        *b_PiMinus_TRACK_Type;   //!
   TBranch        *b_PiMinus_TRACK_Key;   //!
   TBranch        *b_PiMinus_TRACK_CHI2NDOF;   //!
   TBranch        *b_PiMinus_TRACK_PCHI2;   //!
   TBranch        *b_PiMinus_TRACK_MatchCHI2;   //!
   TBranch        *b_PiMinus_TRACK_GhostProb;   //!
   TBranch        *b_PiMinus_TRACK_CloneDist;   //!
   TBranch        *b_PiMinus_TRACK_Likelihood;   //!
   TBranch        *b_PiMinus_X;   //!
   TBranch        *b_PiMinus_Y;   //!
   TBranch        *b_gamma_CL;   //!
   TBranch        *b_gamma_ETA;   //!
   TBranch        *b_gamma_PHI;   //!
   TBranch        *b_gamma_CosTheta;   //!
   TBranch        *b_gamma_hasCaloHypo;   //!
   TBranch        *b_gamma_CaloHypo_E;   //!
   TBranch        *b_gamma_CaloHypo_X;   //!
   TBranch        *b_gamma_CaloHypo_Y;   //!
   TBranch        *b_gamma_CaloHypo_Z;   //!
   TBranch        *b_gamma_CaloHypoPileUpEnergy;   //!
   TBranch        *b_gamma_CaloHypo_HypoE;   //!
   TBranch        *b_gamma_CaloHypo_HypoEt;   //!
   TBranch        *b_gamma_CaloHypo_HypoM;   //!
   TBranch        *b_gamma_CaloHypo_HypoPrsE;   //!
   TBranch        *b_gamma_CaloHypo_HypoPrsM;   //!
   TBranch        *b_gamma_CaloHypo_HypoSpdM;   //!
   TBranch        *b_gamma_CaloHypo_ClusterE;   //!
   TBranch        *b_gamma_CaloHypo_ToPrsE;   //!
   TBranch        *b_gamma_CaloHypo_ToHcalE;   //!
   TBranch        *b_gamma_CaloHypo_ToPrsM;   //!
   TBranch        *b_gamma_CaloHypo_ToSpdM;   //!
   TBranch        *b_gamma_CaloHypo_E1;   //!
   TBranch        *b_gamma_CaloHypo_E9;   //!
   TBranch        *b_gamma_CaloHypo_E19;   //!
   TBranch        *b_gamma_CaloHypo_E1Hypo;   //!
   TBranch        *b_gamma_CaloHypo_E4;   //!
   TBranch        *b_gamma_CaloHypo_E49;   //!
   TBranch        *b_gamma_CaloHypo_CellID;   //!
   TBranch        *b_gamma_CaloHypo_Hcal2Ecal;   //!
   TBranch        *b_gamma_CaloHypo_ClusterMatch;   //!
   TBranch        *b_gamma_CaloHypo_NeutralID;   //!
   TBranch        *b_gamma_CaloHypo_Spread;   //!
   TBranch        *b_gamma_CaloHypo_PrsE19;   //!
   TBranch        *b_gamma_CaloHypo_PrsE49;   //!
   TBranch        *b_gamma_CaloHypo_PrsE4Max;   //!
   TBranch        *b_gamma_CaloHypo_PrsE1;   //!
   TBranch        *b_gamma_CaloHypo_PrsE2;   //!
   TBranch        *b_gamma_CaloHypo_PrsE3;   //!
   TBranch        *b_gamma_CaloHypo_PrsE4;   //!
   TBranch        *b_gamma_CaloHypo_PrsE5;   //!
   TBranch        *b_gamma_CaloHypo_PrsE6;   //!
   TBranch        *b_gamma_CaloHypo_PrsE7;   //!
   TBranch        *b_gamma_CaloHypo_PrsE8;   //!
   TBranch        *b_gamma_CaloHypo_PrsE9;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_Ecl;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_Fr2;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_Fr2r4;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_Asym;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_Kappa;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_Eseed;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_E2;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_PrsFr2;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_PrsAsym;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_PrsM;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_PrsM15;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_PrsM30;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_PrsM45;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_PrsEmax;   //!
   TBranch        *b_gamma_CaloHypo_isPhoton_PrsE2;   //!
   TBranch        *b_gamma_CaloHypo_isNotH;   //!
   TBranch        *b_gamma_CaloHypo_isNotE;   //!
   TBranch        *b_gamma_CaloHypo_ClusterCode;   //!
   TBranch        *b_gamma_CaloHypo_ClusterFrac;   //!
   TBranch        *b_gamma_CaloHypo_Saturation;   //!
   TBranch        *b_gamma_CaloHypo_ClusterAsX;   //!
   TBranch        *b_gamma_CaloHypo_ClusterAsY;   //!
   TBranch        *b_gamma_CaloHypo_isPhotonXGB;   //!
   TBranch        *b_gamma_P;   //!
   TBranch        *b_gamma_PT;   //!
   TBranch        *b_gamma_PE;   //!
   TBranch        *b_gamma_PX;   //!
   TBranch        *b_gamma_PY;   //!
   TBranch        *b_gamma_PZ;   //!
   TBranch        *b_gamma_M;   //!
   TBranch        *b_gamma_ID;   //!
   TBranch        *b_gamma_Converted;   //!
   TBranch        *b_gamma_Prs;   //!
   TBranch        *b_gamma_Matching;   //!
   TBranch        *b_gamma_PID;   //!
   TBranch        *b_gamma_ShowerShape;   //!
   TBranch        *b_gamma_X;   //!
   TBranch        *b_gamma_Y;   //!
   TBranch        *b_Piplus_CL;   //!
   TBranch        *b_Piplus_ETA;   //!
   TBranch        *b_Piplus_PHI;   //!
   TBranch        *b_Piplus_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_Piplus_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_Piplus_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_Piplus_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_Piplus_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_Piplus_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_Piplus_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_Piplus_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_Piplus_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_Piplus_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_Piplus_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_Piplus_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_Piplus_MC12TuneV4_ProbNNe;   //!
   TBranch        *b_Piplus_MC12TuneV4_ProbNNmu;   //!
   TBranch        *b_Piplus_MC12TuneV4_ProbNNpi;   //!
   TBranch        *b_Piplus_MC12TuneV4_ProbNNk;   //!
   TBranch        *b_Piplus_MC12TuneV4_ProbNNp;   //!
   TBranch        *b_Piplus_MC12TuneV4_ProbNNghost;   //!
   TBranch        *b_Piplus_MC15TuneV1_ProbNNe;   //!
   TBranch        *b_Piplus_MC15TuneV1_ProbNNmu;   //!
   TBranch        *b_Piplus_MC15TuneV1_ProbNNpi;   //!
   TBranch        *b_Piplus_MC15TuneV1_ProbNNk;   //!
   TBranch        *b_Piplus_MC15TuneV1_ProbNNp;   //!
   TBranch        *b_Piplus_MC15TuneV1_ProbNNghost;   //!
   TBranch        *b_Piplus_CosTheta;   //!
   TBranch        *b_Piplus_OWNPV_X;   //!
   TBranch        *b_Piplus_OWNPV_Y;   //!
   TBranch        *b_Piplus_OWNPV_Z;   //!
   TBranch        *b_Piplus_OWNPV_XERR;   //!
   TBranch        *b_Piplus_OWNPV_YERR;   //!
   TBranch        *b_Piplus_OWNPV_ZERR;   //!
   TBranch        *b_Piplus_OWNPV_CHI2;   //!
   TBranch        *b_Piplus_OWNPV_NDOF;   //!
   TBranch        *b_Piplus_OWNPV_COV_;   //!
   TBranch        *b_Piplus_IP_OWNPV;   //!
   TBranch        *b_Piplus_IPCHI2_OWNPV;   //!
   TBranch        *b_Piplus_ORIVX_X;   //!
   TBranch        *b_Piplus_ORIVX_Y;   //!
   TBranch        *b_Piplus_ORIVX_Z;   //!
   TBranch        *b_Piplus_ORIVX_XERR;   //!
   TBranch        *b_Piplus_ORIVX_YERR;   //!
   TBranch        *b_Piplus_ORIVX_ZERR;   //!
   TBranch        *b_Piplus_ORIVX_CHI2;   //!
   TBranch        *b_Piplus_ORIVX_NDOF;   //!
   TBranch        *b_Piplus_ORIVX_COV_;   //!
   TBranch        *b_Piplus_P;   //!
   TBranch        *b_Piplus_PT;   //!
   TBranch        *b_Piplus_PE;   //!
   TBranch        *b_Piplus_PX;   //!
   TBranch        *b_Piplus_PY;   //!
   TBranch        *b_Piplus_PZ;   //!
   TBranch        *b_Piplus_M;   //!
   TBranch        *b_Piplus_ID;   //!
   TBranch        *b_Piplus_CombDLLMu;   //!
   TBranch        *b_Piplus_ProbNNmu;   //!
   TBranch        *b_Piplus_ProbNNghost;   //!
   TBranch        *b_Piplus_InMuonAcc;   //!
   TBranch        *b_Piplus_MuonDist2;   //!
   TBranch        *b_Piplus_regionInM2;   //!
   TBranch        *b_Piplus_hasMuon;   //!
   TBranch        *b_Piplus_isMuon;   //!
   TBranch        *b_Piplus_isMuonLoose;   //!
   TBranch        *b_Piplus_NShared;   //!
   TBranch        *b_Piplus_MuonLLmu;   //!
   TBranch        *b_Piplus_MuonLLbg;   //!
   TBranch        *b_Piplus_isMuonFromProto;   //!
   TBranch        *b_Piplus_PIDe;   //!
   TBranch        *b_Piplus_PIDmu;   //!
   TBranch        *b_Piplus_PIDK;   //!
   TBranch        *b_Piplus_PIDp;   //!
   TBranch        *b_Piplus_PIDd;   //!
   TBranch        *b_Piplus_ProbNNe;   //!
   TBranch        *b_Piplus_ProbNNk;   //!
   TBranch        *b_Piplus_ProbNNp;   //!
   TBranch        *b_Piplus_ProbNNpi;   //!
   TBranch        *b_Piplus_ProbNNd;   //!
   TBranch        *b_Piplus_hasRich;   //!
   TBranch        *b_Piplus_UsedRichAerogel;   //!
   TBranch        *b_Piplus_UsedRich1Gas;   //!
   TBranch        *b_Piplus_UsedRich2Gas;   //!
   TBranch        *b_Piplus_RichAboveElThres;   //!
   TBranch        *b_Piplus_RichAboveMuThres;   //!
   TBranch        *b_Piplus_RichAbovePiThres;   //!
   TBranch        *b_Piplus_RichAboveKaThres;   //!
   TBranch        *b_Piplus_RichAbovePrThres;   //!
   TBranch        *b_Piplus_hasCalo;   //!
   TBranch        *b_Piplus_TRACK_Type;   //!
   TBranch        *b_Piplus_TRACK_Key;   //!
   TBranch        *b_Piplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Piplus_TRACK_PCHI2;   //!
   TBranch        *b_Piplus_TRACK_MatchCHI2;   //!
   TBranch        *b_Piplus_TRACK_GhostProb;   //!
   TBranch        *b_Piplus_TRACK_CloneDist;   //!
   TBranch        *b_Piplus_TRACK_Likelihood;   //!
   TBranch        *b_Piplus_X;   //!
   TBranch        *b_Piplus_Y;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_BCID;   //!
   TBranch        *b_BCType;   //!
   TBranch        *b_OdinTCK;   //!
   TBranch        *b_L0DUTCK;   //!
   TBranch        *b_HLT1TCK;   //!
   TBranch        *b_HLT2TCK;   //!
   TBranch        *b_GpsTime;   //!
   TBranch        *b_Polarity;   //!
   TBranch        *b_L0Data_DiMuon_Pt;   //!
   TBranch        *b_L0Data_DiMuonProd_Pt1Pt2;   //!
   TBranch        *b_L0Data_Electron_Et;   //!
   TBranch        *b_L0Data_GlobalPi0_Et;   //!
   TBranch        *b_L0Data_Hadron_Et;   //!
   TBranch        *b_L0Data_LocalPi0_Et;   //!
   TBranch        *b_L0Data_Muon1_Pt;   //!
   TBranch        *b_L0Data_Muon1_Sgn;   //!
   TBranch        *b_L0Data_Muon2_Pt;   //!
   TBranch        *b_L0Data_Muon2_Sgn;   //!
   TBranch        *b_L0Data_Muon3_Pt;   //!
   TBranch        *b_L0Data_Muon3_Sgn;   //!
   TBranch        *b_L0Data_PUHits_Mult;   //!
   TBranch        *b_L0Data_PUPeak1_Cont;   //!
   TBranch        *b_L0Data_PUPeak1_Pos;   //!
   TBranch        *b_L0Data_PUPeak2_Cont;   //!
   TBranch        *b_L0Data_PUPeak2_Pos;   //!
   TBranch        *b_L0Data_Photon_Et;   //!
   TBranch        *b_L0Data_Spd_Mult;   //!
   TBranch        *b_L0Data_Sum_Et;   //!
   TBranch        *b_L0Data_Sum_Et_Next1;   //!
   TBranch        *b_L0Data_Sum_Et_Next2;   //!
   TBranch        *b_L0Data_Sum_Et_Prev1;   //!
   TBranch        *b_L0Data_Sum_Et_Prev2;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_PVX;   //!
   TBranch        *b_PVY;   //!
   TBranch        *b_PVZ;   //!
   TBranch        *b_PVXERR;   //!
   TBranch        *b_PVYERR;   //!
   TBranch        *b_PVZERR;   //!
   TBranch        *b_PVCHI2;   //!
   TBranch        *b_PVNDOF;   //!
   TBranch        *b_PVNTRACKS;   //!
   TBranch        *b_nPVs;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_nLongTracks;   //!
   TBranch        *b_nDownstreamTracks;   //!
   TBranch        *b_nUpstreamTracks;   //!
   TBranch        *b_nVeloTracks;   //!
   TBranch        *b_nTTracks;   //!
   TBranch        *b_nBackTracks;   //!
   TBranch        *b_nRich1Hits;   //!
   TBranch        *b_nRich2Hits;   //!
   TBranch        *b_nVeloClusters;   //!
   TBranch        *b_nITClusters;   //!
   TBranch        *b_nTTClusters;   //!
   TBranch        *b_nOTClusters;   //!
   TBranch        *b_nSPDHits;   //!
   TBranch        *b_nMuonCoordsS0;   //!
   TBranch        *b_nMuonCoordsS1;   //!
   TBranch        *b_nMuonCoordsS2;   //!
   TBranch        *b_nMuonCoordsS3;   //!
   TBranch        *b_nMuonCoordsS4;   //!
   TBranch        *b_nMuonTracks;   //!

   DecayTree(TTree *tree=0);
   virtual ~DecayTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef DecayTree_cxx
DecayTree::DecayTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/lhcb/user/y/yangk/normalizationData/MagUp.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/lhcb/user/y/yangk/normalizationData/MagUp.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/eos/lhcb/user/y/yangk/normalizationData/MagUp.root:/Tuple_B02DsstarPi");
      dir->GetObject("DecayTree",tree);

   }
   Init(tree);
}

DecayTree::~DecayTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t DecayTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t DecayTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void DecayTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("B0_CL", &B0_CL, &b_B0_CL);
   fChain->SetBranchAddress("B0_ETA", &B0_ETA, &b_B0_ETA);
   fChain->SetBranchAddress("B0_PHI", &B0_PHI, &b_B0_PHI);
   fChain->SetBranchAddress("B0_DiraAngleError", &B0_DiraAngleError, &b_B0_DiraAngleError);
   fChain->SetBranchAddress("B0_DiraCosError", &B0_DiraCosError, &b_B0_DiraCosError);
   fChain->SetBranchAddress("B0_DiraAngle", &B0_DiraAngle, &b_B0_DiraAngle);
   fChain->SetBranchAddress("B0_DiraCos", &B0_DiraCos, &b_B0_DiraCos);
   fChain->SetBranchAddress("B0_ENDVERTEX_X", &B0_ENDVERTEX_X, &b_B0_ENDVERTEX_X);
   fChain->SetBranchAddress("B0_ENDVERTEX_Y", &B0_ENDVERTEX_Y, &b_B0_ENDVERTEX_Y);
   fChain->SetBranchAddress("B0_ENDVERTEX_Z", &B0_ENDVERTEX_Z, &b_B0_ENDVERTEX_Z);
   fChain->SetBranchAddress("B0_ENDVERTEX_XERR", &B0_ENDVERTEX_XERR, &b_B0_ENDVERTEX_XERR);
   fChain->SetBranchAddress("B0_ENDVERTEX_YERR", &B0_ENDVERTEX_YERR, &b_B0_ENDVERTEX_YERR);
   fChain->SetBranchAddress("B0_ENDVERTEX_ZERR", &B0_ENDVERTEX_ZERR, &b_B0_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("B0_ENDVERTEX_CHI2", &B0_ENDVERTEX_CHI2, &b_B0_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("B0_ENDVERTEX_NDOF", &B0_ENDVERTEX_NDOF, &b_B0_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("B0_ENDVERTEX_COV_", B0_ENDVERTEX_COV_, &b_B0_ENDVERTEX_COV_);
   fChain->SetBranchAddress("B0_OWNPV_X", &B0_OWNPV_X, &b_B0_OWNPV_X);
   fChain->SetBranchAddress("B0_OWNPV_Y", &B0_OWNPV_Y, &b_B0_OWNPV_Y);
   fChain->SetBranchAddress("B0_OWNPV_Z", &B0_OWNPV_Z, &b_B0_OWNPV_Z);
   fChain->SetBranchAddress("B0_OWNPV_XERR", &B0_OWNPV_XERR, &b_B0_OWNPV_XERR);
   fChain->SetBranchAddress("B0_OWNPV_YERR", &B0_OWNPV_YERR, &b_B0_OWNPV_YERR);
   fChain->SetBranchAddress("B0_OWNPV_ZERR", &B0_OWNPV_ZERR, &b_B0_OWNPV_ZERR);
   fChain->SetBranchAddress("B0_OWNPV_CHI2", &B0_OWNPV_CHI2, &b_B0_OWNPV_CHI2);
   fChain->SetBranchAddress("B0_OWNPV_NDOF", &B0_OWNPV_NDOF, &b_B0_OWNPV_NDOF);
   fChain->SetBranchAddress("B0_OWNPV_COV_", B0_OWNPV_COV_, &b_B0_OWNPV_COV_);
   fChain->SetBranchAddress("B0_IP_OWNPV", &B0_IP_OWNPV, &b_B0_IP_OWNPV);
   fChain->SetBranchAddress("B0_IPCHI2_OWNPV", &B0_IPCHI2_OWNPV, &b_B0_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B0_FD_OWNPV", &B0_FD_OWNPV, &b_B0_FD_OWNPV);
   fChain->SetBranchAddress("B0_FDCHI2_OWNPV", &B0_FDCHI2_OWNPV, &b_B0_FDCHI2_OWNPV);
   fChain->SetBranchAddress("B0_DIRA_OWNPV", &B0_DIRA_OWNPV, &b_B0_DIRA_OWNPV);
   fChain->SetBranchAddress("B0_P", &B0_P, &b_B0_P);
   fChain->SetBranchAddress("B0_PT", &B0_PT, &b_B0_PT);
   fChain->SetBranchAddress("B0_PE", &B0_PE, &b_B0_PE);
   fChain->SetBranchAddress("B0_PX", &B0_PX, &b_B0_PX);
   fChain->SetBranchAddress("B0_PY", &B0_PY, &b_B0_PY);
   fChain->SetBranchAddress("B0_PZ", &B0_PZ, &b_B0_PZ);
   fChain->SetBranchAddress("B0_MM", &B0_MM, &b_B0_MM);
   fChain->SetBranchAddress("B0_MMERR", &B0_MMERR, &b_B0_MMERR);
   fChain->SetBranchAddress("B0_M", &B0_M, &b_B0_M);
   fChain->SetBranchAddress("B0_ID", &B0_ID, &b_B0_ID);
   fChain->SetBranchAddress("B0_TAU", &B0_TAU, &b_B0_TAU);
   fChain->SetBranchAddress("B0_TAUERR", &B0_TAUERR, &b_B0_TAUERR);
   fChain->SetBranchAddress("B0_TAUCHI2", &B0_TAUCHI2, &b_B0_TAUCHI2);
   fChain->SetBranchAddress("B0_X", &B0_X, &b_B0_X);
   fChain->SetBranchAddress("B0_Y", &B0_Y, &b_B0_Y);
   fChain->SetBranchAddress("B0_NumVtxWithinChi2WindowOneTrack", &B0_NumVtxWithinChi2WindowOneTrack, &b_B0_NumVtxWithinChi2WindowOneTrack);
   fChain->SetBranchAddress("B0_SmallestDeltaChi2OneTrack", &B0_SmallestDeltaChi2OneTrack, &b_B0_SmallestDeltaChi2OneTrack);
   fChain->SetBranchAddress("B0_SmallestDeltaChi2MassOneTrack", &B0_SmallestDeltaChi2MassOneTrack, &b_B0_SmallestDeltaChi2MassOneTrack);
   fChain->SetBranchAddress("B0_SmallestDeltaChi2TwoTracks", &B0_SmallestDeltaChi2TwoTracks, &b_B0_SmallestDeltaChi2TwoTracks);
   fChain->SetBranchAddress("B0_SmallestDeltaChi2MassTwoTracks", &B0_SmallestDeltaChi2MassTwoTracks, &b_B0_SmallestDeltaChi2MassTwoTracks);
   fChain->SetBranchAddress("B0_MCORR", &B0_MCORR, &b_B0_MCORR);
   fChain->SetBranchAddress("B0_MCORRERR", &B0_MCORRERR, &b_B0_MCORRERR);
   fChain->SetBranchAddress("B0_MCORRVERTEXERR", &B0_MCORRVERTEXERR, &b_B0_MCORRVERTEXERR);
   fChain->SetBranchAddress("B0_PTREL", &B0_PTREL, &b_B0_PTREL);
   fChain->SetBranchAddress("Dsstar_CL", &Dsstar_CL, &b_Dsstar_CL);
   fChain->SetBranchAddress("Dsstar_ETA", &Dsstar_ETA, &b_Dsstar_ETA);
   fChain->SetBranchAddress("Dsstar_PHI", &Dsstar_PHI, &b_Dsstar_PHI);
   fChain->SetBranchAddress("Dsstar_CosTheta", &Dsstar_CosTheta, &b_Dsstar_CosTheta);
   fChain->SetBranchAddress("Dsstar_ENDVERTEX_X", &Dsstar_ENDVERTEX_X, &b_Dsstar_ENDVERTEX_X);
   fChain->SetBranchAddress("Dsstar_ENDVERTEX_Y", &Dsstar_ENDVERTEX_Y, &b_Dsstar_ENDVERTEX_Y);
   fChain->SetBranchAddress("Dsstar_ENDVERTEX_Z", &Dsstar_ENDVERTEX_Z, &b_Dsstar_ENDVERTEX_Z);
   fChain->SetBranchAddress("Dsstar_ENDVERTEX_XERR", &Dsstar_ENDVERTEX_XERR, &b_Dsstar_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Dsstar_ENDVERTEX_YERR", &Dsstar_ENDVERTEX_YERR, &b_Dsstar_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Dsstar_ENDVERTEX_ZERR", &Dsstar_ENDVERTEX_ZERR, &b_Dsstar_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Dsstar_ENDVERTEX_CHI2", &Dsstar_ENDVERTEX_CHI2, &b_Dsstar_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Dsstar_ENDVERTEX_NDOF", &Dsstar_ENDVERTEX_NDOF, &b_Dsstar_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Dsstar_ENDVERTEX_COV_", Dsstar_ENDVERTEX_COV_, &b_Dsstar_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Dsstar_OWNPV_X", &Dsstar_OWNPV_X, &b_Dsstar_OWNPV_X);
   fChain->SetBranchAddress("Dsstar_OWNPV_Y", &Dsstar_OWNPV_Y, &b_Dsstar_OWNPV_Y);
   fChain->SetBranchAddress("Dsstar_OWNPV_Z", &Dsstar_OWNPV_Z, &b_Dsstar_OWNPV_Z);
   fChain->SetBranchAddress("Dsstar_OWNPV_XERR", &Dsstar_OWNPV_XERR, &b_Dsstar_OWNPV_XERR);
   fChain->SetBranchAddress("Dsstar_OWNPV_YERR", &Dsstar_OWNPV_YERR, &b_Dsstar_OWNPV_YERR);
   fChain->SetBranchAddress("Dsstar_OWNPV_ZERR", &Dsstar_OWNPV_ZERR, &b_Dsstar_OWNPV_ZERR);
   fChain->SetBranchAddress("Dsstar_OWNPV_CHI2", &Dsstar_OWNPV_CHI2, &b_Dsstar_OWNPV_CHI2);
   fChain->SetBranchAddress("Dsstar_OWNPV_NDOF", &Dsstar_OWNPV_NDOF, &b_Dsstar_OWNPV_NDOF);
   fChain->SetBranchAddress("Dsstar_OWNPV_COV_", Dsstar_OWNPV_COV_, &b_Dsstar_OWNPV_COV_);
   fChain->SetBranchAddress("Dsstar_IP_OWNPV", &Dsstar_IP_OWNPV, &b_Dsstar_IP_OWNPV);
   fChain->SetBranchAddress("Dsstar_IPCHI2_OWNPV", &Dsstar_IPCHI2_OWNPV, &b_Dsstar_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Dsstar_FD_OWNPV", &Dsstar_FD_OWNPV, &b_Dsstar_FD_OWNPV);
   fChain->SetBranchAddress("Dsstar_FDCHI2_OWNPV", &Dsstar_FDCHI2_OWNPV, &b_Dsstar_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Dsstar_DIRA_OWNPV", &Dsstar_DIRA_OWNPV, &b_Dsstar_DIRA_OWNPV);
   fChain->SetBranchAddress("Dsstar_ORIVX_X", &Dsstar_ORIVX_X, &b_Dsstar_ORIVX_X);
   fChain->SetBranchAddress("Dsstar_ORIVX_Y", &Dsstar_ORIVX_Y, &b_Dsstar_ORIVX_Y);
   fChain->SetBranchAddress("Dsstar_ORIVX_Z", &Dsstar_ORIVX_Z, &b_Dsstar_ORIVX_Z);
   fChain->SetBranchAddress("Dsstar_ORIVX_XERR", &Dsstar_ORIVX_XERR, &b_Dsstar_ORIVX_XERR);
   fChain->SetBranchAddress("Dsstar_ORIVX_YERR", &Dsstar_ORIVX_YERR, &b_Dsstar_ORIVX_YERR);
   fChain->SetBranchAddress("Dsstar_ORIVX_ZERR", &Dsstar_ORIVX_ZERR, &b_Dsstar_ORIVX_ZERR);
   fChain->SetBranchAddress("Dsstar_ORIVX_CHI2", &Dsstar_ORIVX_CHI2, &b_Dsstar_ORIVX_CHI2);
   fChain->SetBranchAddress("Dsstar_ORIVX_NDOF", &Dsstar_ORIVX_NDOF, &b_Dsstar_ORIVX_NDOF);
   fChain->SetBranchAddress("Dsstar_ORIVX_COV_", Dsstar_ORIVX_COV_, &b_Dsstar_ORIVX_COV_);
   fChain->SetBranchAddress("Dsstar_FD_ORIVX", &Dsstar_FD_ORIVX, &b_Dsstar_FD_ORIVX);
   fChain->SetBranchAddress("Dsstar_FDCHI2_ORIVX", &Dsstar_FDCHI2_ORIVX, &b_Dsstar_FDCHI2_ORIVX);
   fChain->SetBranchAddress("Dsstar_DIRA_ORIVX", &Dsstar_DIRA_ORIVX, &b_Dsstar_DIRA_ORIVX);
   fChain->SetBranchAddress("Dsstar_P", &Dsstar_P, &b_Dsstar_P);
   fChain->SetBranchAddress("Dsstar_PT", &Dsstar_PT, &b_Dsstar_PT);
   fChain->SetBranchAddress("Dsstar_PE", &Dsstar_PE, &b_Dsstar_PE);
   fChain->SetBranchAddress("Dsstar_PX", &Dsstar_PX, &b_Dsstar_PX);
   fChain->SetBranchAddress("Dsstar_PY", &Dsstar_PY, &b_Dsstar_PY);
   fChain->SetBranchAddress("Dsstar_PZ", &Dsstar_PZ, &b_Dsstar_PZ);
   fChain->SetBranchAddress("Dsstar_MM", &Dsstar_MM, &b_Dsstar_MM);
   fChain->SetBranchAddress("Dsstar_MMERR", &Dsstar_MMERR, &b_Dsstar_MMERR);
   fChain->SetBranchAddress("Dsstar_M", &Dsstar_M, &b_Dsstar_M);
   fChain->SetBranchAddress("Dsstar_ID", &Dsstar_ID, &b_Dsstar_ID);
   fChain->SetBranchAddress("Dsstar_TAU", &Dsstar_TAU, &b_Dsstar_TAU);
   fChain->SetBranchAddress("Dsstar_TAUERR", &Dsstar_TAUERR, &b_Dsstar_TAUERR);
   fChain->SetBranchAddress("Dsstar_TAUCHI2", &Dsstar_TAUCHI2, &b_Dsstar_TAUCHI2);
   fChain->SetBranchAddress("Dsstar_X", &Dsstar_X, &b_Dsstar_X);
   fChain->SetBranchAddress("Dsstar_Y", &Dsstar_Y, &b_Dsstar_Y);
   fChain->SetBranchAddress("Dsstar_NumVtxWithinChi2WindowOneTrack", &Dsstar_NumVtxWithinChi2WindowOneTrack, &b_Dsstar_NumVtxWithinChi2WindowOneTrack);
   fChain->SetBranchAddress("Dsstar_SmallestDeltaChi2OneTrack", &Dsstar_SmallestDeltaChi2OneTrack, &b_Dsstar_SmallestDeltaChi2OneTrack);
   fChain->SetBranchAddress("Dsstar_SmallestDeltaChi2MassOneTrack", &Dsstar_SmallestDeltaChi2MassOneTrack, &b_Dsstar_SmallestDeltaChi2MassOneTrack);
   fChain->SetBranchAddress("Dsstar_SmallestDeltaChi2TwoTracks", &Dsstar_SmallestDeltaChi2TwoTracks, &b_Dsstar_SmallestDeltaChi2TwoTracks);
   fChain->SetBranchAddress("Dsstar_SmallestDeltaChi2MassTwoTracks", &Dsstar_SmallestDeltaChi2MassTwoTracks, &b_Dsstar_SmallestDeltaChi2MassTwoTracks);
   fChain->SetBranchAddress("Ds_CL", &Ds_CL, &b_Ds_CL);
   fChain->SetBranchAddress("Ds_ETA", &Ds_ETA, &b_Ds_ETA);
   fChain->SetBranchAddress("Ds_PHI", &Ds_PHI, &b_Ds_PHI);
   fChain->SetBranchAddress("Ds_CosTheta", &Ds_CosTheta, &b_Ds_CosTheta);
   fChain->SetBranchAddress("Ds_ENDVERTEX_X", &Ds_ENDVERTEX_X, &b_Ds_ENDVERTEX_X);
   fChain->SetBranchAddress("Ds_ENDVERTEX_Y", &Ds_ENDVERTEX_Y, &b_Ds_ENDVERTEX_Y);
   fChain->SetBranchAddress("Ds_ENDVERTEX_Z", &Ds_ENDVERTEX_Z, &b_Ds_ENDVERTEX_Z);
   fChain->SetBranchAddress("Ds_ENDVERTEX_XERR", &Ds_ENDVERTEX_XERR, &b_Ds_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Ds_ENDVERTEX_YERR", &Ds_ENDVERTEX_YERR, &b_Ds_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Ds_ENDVERTEX_ZERR", &Ds_ENDVERTEX_ZERR, &b_Ds_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Ds_ENDVERTEX_CHI2", &Ds_ENDVERTEX_CHI2, &b_Ds_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Ds_ENDVERTEX_NDOF", &Ds_ENDVERTEX_NDOF, &b_Ds_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Ds_ENDVERTEX_COV_", Ds_ENDVERTEX_COV_, &b_Ds_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Ds_OWNPV_X", &Ds_OWNPV_X, &b_Ds_OWNPV_X);
   fChain->SetBranchAddress("Ds_OWNPV_Y", &Ds_OWNPV_Y, &b_Ds_OWNPV_Y);
   fChain->SetBranchAddress("Ds_OWNPV_Z", &Ds_OWNPV_Z, &b_Ds_OWNPV_Z);
   fChain->SetBranchAddress("Ds_OWNPV_XERR", &Ds_OWNPV_XERR, &b_Ds_OWNPV_XERR);
   fChain->SetBranchAddress("Ds_OWNPV_YERR", &Ds_OWNPV_YERR, &b_Ds_OWNPV_YERR);
   fChain->SetBranchAddress("Ds_OWNPV_ZERR", &Ds_OWNPV_ZERR, &b_Ds_OWNPV_ZERR);
   fChain->SetBranchAddress("Ds_OWNPV_CHI2", &Ds_OWNPV_CHI2, &b_Ds_OWNPV_CHI2);
   fChain->SetBranchAddress("Ds_OWNPV_NDOF", &Ds_OWNPV_NDOF, &b_Ds_OWNPV_NDOF);
   fChain->SetBranchAddress("Ds_OWNPV_COV_", Ds_OWNPV_COV_, &b_Ds_OWNPV_COV_);
   fChain->SetBranchAddress("Ds_IP_OWNPV", &Ds_IP_OWNPV, &b_Ds_IP_OWNPV);
   fChain->SetBranchAddress("Ds_IPCHI2_OWNPV", &Ds_IPCHI2_OWNPV, &b_Ds_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Ds_FD_OWNPV", &Ds_FD_OWNPV, &b_Ds_FD_OWNPV);
   fChain->SetBranchAddress("Ds_FDCHI2_OWNPV", &Ds_FDCHI2_OWNPV, &b_Ds_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Ds_DIRA_OWNPV", &Ds_DIRA_OWNPV, &b_Ds_DIRA_OWNPV);
   fChain->SetBranchAddress("Ds_ORIVX_X", &Ds_ORIVX_X, &b_Ds_ORIVX_X);
   fChain->SetBranchAddress("Ds_ORIVX_Y", &Ds_ORIVX_Y, &b_Ds_ORIVX_Y);
   fChain->SetBranchAddress("Ds_ORIVX_Z", &Ds_ORIVX_Z, &b_Ds_ORIVX_Z);
   fChain->SetBranchAddress("Ds_ORIVX_XERR", &Ds_ORIVX_XERR, &b_Ds_ORIVX_XERR);
   fChain->SetBranchAddress("Ds_ORIVX_YERR", &Ds_ORIVX_YERR, &b_Ds_ORIVX_YERR);
   fChain->SetBranchAddress("Ds_ORIVX_ZERR", &Ds_ORIVX_ZERR, &b_Ds_ORIVX_ZERR);
   fChain->SetBranchAddress("Ds_ORIVX_CHI2", &Ds_ORIVX_CHI2, &b_Ds_ORIVX_CHI2);
   fChain->SetBranchAddress("Ds_ORIVX_NDOF", &Ds_ORIVX_NDOF, &b_Ds_ORIVX_NDOF);
   fChain->SetBranchAddress("Ds_ORIVX_COV_", Ds_ORIVX_COV_, &b_Ds_ORIVX_COV_);
   fChain->SetBranchAddress("Ds_FD_ORIVX", &Ds_FD_ORIVX, &b_Ds_FD_ORIVX);
   fChain->SetBranchAddress("Ds_FDCHI2_ORIVX", &Ds_FDCHI2_ORIVX, &b_Ds_FDCHI2_ORIVX);
   fChain->SetBranchAddress("Ds_DIRA_ORIVX", &Ds_DIRA_ORIVX, &b_Ds_DIRA_ORIVX);
   fChain->SetBranchAddress("Ds_P", &Ds_P, &b_Ds_P);
   fChain->SetBranchAddress("Ds_PT", &Ds_PT, &b_Ds_PT);
   fChain->SetBranchAddress("Ds_PE", &Ds_PE, &b_Ds_PE);
   fChain->SetBranchAddress("Ds_PX", &Ds_PX, &b_Ds_PX);
   fChain->SetBranchAddress("Ds_PY", &Ds_PY, &b_Ds_PY);
   fChain->SetBranchAddress("Ds_PZ", &Ds_PZ, &b_Ds_PZ);
   fChain->SetBranchAddress("Ds_MM", &Ds_MM, &b_Ds_MM);
   fChain->SetBranchAddress("Ds_MMERR", &Ds_MMERR, &b_Ds_MMERR);
   fChain->SetBranchAddress("Ds_M", &Ds_M, &b_Ds_M);
   fChain->SetBranchAddress("Ds_ID", &Ds_ID, &b_Ds_ID);
   fChain->SetBranchAddress("Ds_TAU", &Ds_TAU, &b_Ds_TAU);
   fChain->SetBranchAddress("Ds_TAUERR", &Ds_TAUERR, &b_Ds_TAUERR);
   fChain->SetBranchAddress("Ds_TAUCHI2", &Ds_TAUCHI2, &b_Ds_TAUCHI2);
   fChain->SetBranchAddress("Ds_X", &Ds_X, &b_Ds_X);
   fChain->SetBranchAddress("Ds_Y", &Ds_Y, &b_Ds_Y);
   fChain->SetBranchAddress("Ds_NumVtxWithinChi2WindowOneTrack", &Ds_NumVtxWithinChi2WindowOneTrack, &b_Ds_NumVtxWithinChi2WindowOneTrack);
   fChain->SetBranchAddress("Ds_SmallestDeltaChi2OneTrack", &Ds_SmallestDeltaChi2OneTrack, &b_Ds_SmallestDeltaChi2OneTrack);
   fChain->SetBranchAddress("Ds_SmallestDeltaChi2MassOneTrack", &Ds_SmallestDeltaChi2MassOneTrack, &b_Ds_SmallestDeltaChi2MassOneTrack);
   fChain->SetBranchAddress("Ds_SmallestDeltaChi2TwoTracks", &Ds_SmallestDeltaChi2TwoTracks, &b_Ds_SmallestDeltaChi2TwoTracks);
   fChain->SetBranchAddress("Ds_SmallestDeltaChi2MassTwoTracks", &Ds_SmallestDeltaChi2MassTwoTracks, &b_Ds_SmallestDeltaChi2MassTwoTracks);
   fChain->SetBranchAddress("Kminus_CL", &Kminus_CL, &b_Kminus_CL);
   fChain->SetBranchAddress("Kminus_ETA", &Kminus_ETA, &b_Kminus_ETA);
   fChain->SetBranchAddress("Kminus_PHI", &Kminus_PHI, &b_Kminus_PHI);
   fChain->SetBranchAddress("Kminus_MC12TuneV2_ProbNNe", &Kminus_MC12TuneV2_ProbNNe, &b_Kminus_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("Kminus_MC12TuneV2_ProbNNmu", &Kminus_MC12TuneV2_ProbNNmu, &b_Kminus_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("Kminus_MC12TuneV2_ProbNNpi", &Kminus_MC12TuneV2_ProbNNpi, &b_Kminus_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("Kminus_MC12TuneV2_ProbNNk", &Kminus_MC12TuneV2_ProbNNk, &b_Kminus_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("Kminus_MC12TuneV2_ProbNNp", &Kminus_MC12TuneV2_ProbNNp, &b_Kminus_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("Kminus_MC12TuneV2_ProbNNghost", &Kminus_MC12TuneV2_ProbNNghost, &b_Kminus_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("Kminus_MC12TuneV3_ProbNNe", &Kminus_MC12TuneV3_ProbNNe, &b_Kminus_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("Kminus_MC12TuneV3_ProbNNmu", &Kminus_MC12TuneV3_ProbNNmu, &b_Kminus_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("Kminus_MC12TuneV3_ProbNNpi", &Kminus_MC12TuneV3_ProbNNpi, &b_Kminus_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("Kminus_MC12TuneV3_ProbNNk", &Kminus_MC12TuneV3_ProbNNk, &b_Kminus_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("Kminus_MC12TuneV3_ProbNNp", &Kminus_MC12TuneV3_ProbNNp, &b_Kminus_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("Kminus_MC12TuneV3_ProbNNghost", &Kminus_MC12TuneV3_ProbNNghost, &b_Kminus_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("Kminus_MC12TuneV4_ProbNNe", &Kminus_MC12TuneV4_ProbNNe, &b_Kminus_MC12TuneV4_ProbNNe);
   fChain->SetBranchAddress("Kminus_MC12TuneV4_ProbNNmu", &Kminus_MC12TuneV4_ProbNNmu, &b_Kminus_MC12TuneV4_ProbNNmu);
   fChain->SetBranchAddress("Kminus_MC12TuneV4_ProbNNpi", &Kminus_MC12TuneV4_ProbNNpi, &b_Kminus_MC12TuneV4_ProbNNpi);
   fChain->SetBranchAddress("Kminus_MC12TuneV4_ProbNNk", &Kminus_MC12TuneV4_ProbNNk, &b_Kminus_MC12TuneV4_ProbNNk);
   fChain->SetBranchAddress("Kminus_MC12TuneV4_ProbNNp", &Kminus_MC12TuneV4_ProbNNp, &b_Kminus_MC12TuneV4_ProbNNp);
   fChain->SetBranchAddress("Kminus_MC12TuneV4_ProbNNghost", &Kminus_MC12TuneV4_ProbNNghost, &b_Kminus_MC12TuneV4_ProbNNghost);
   fChain->SetBranchAddress("Kminus_MC15TuneV1_ProbNNe", &Kminus_MC15TuneV1_ProbNNe, &b_Kminus_MC15TuneV1_ProbNNe);
   fChain->SetBranchAddress("Kminus_MC15TuneV1_ProbNNmu", &Kminus_MC15TuneV1_ProbNNmu, &b_Kminus_MC15TuneV1_ProbNNmu);
   fChain->SetBranchAddress("Kminus_MC15TuneV1_ProbNNpi", &Kminus_MC15TuneV1_ProbNNpi, &b_Kminus_MC15TuneV1_ProbNNpi);
   fChain->SetBranchAddress("Kminus_MC15TuneV1_ProbNNk", &Kminus_MC15TuneV1_ProbNNk, &b_Kminus_MC15TuneV1_ProbNNk);
   fChain->SetBranchAddress("Kminus_MC15TuneV1_ProbNNp", &Kminus_MC15TuneV1_ProbNNp, &b_Kminus_MC15TuneV1_ProbNNp);
   fChain->SetBranchAddress("Kminus_MC15TuneV1_ProbNNghost", &Kminus_MC15TuneV1_ProbNNghost, &b_Kminus_MC15TuneV1_ProbNNghost);
   fChain->SetBranchAddress("Kminus_CosTheta", &Kminus_CosTheta, &b_Kminus_CosTheta);
   fChain->SetBranchAddress("Kminus_OWNPV_X", &Kminus_OWNPV_X, &b_Kminus_OWNPV_X);
   fChain->SetBranchAddress("Kminus_OWNPV_Y", &Kminus_OWNPV_Y, &b_Kminus_OWNPV_Y);
   fChain->SetBranchAddress("Kminus_OWNPV_Z", &Kminus_OWNPV_Z, &b_Kminus_OWNPV_Z);
   fChain->SetBranchAddress("Kminus_OWNPV_XERR", &Kminus_OWNPV_XERR, &b_Kminus_OWNPV_XERR);
   fChain->SetBranchAddress("Kminus_OWNPV_YERR", &Kminus_OWNPV_YERR, &b_Kminus_OWNPV_YERR);
   fChain->SetBranchAddress("Kminus_OWNPV_ZERR", &Kminus_OWNPV_ZERR, &b_Kminus_OWNPV_ZERR);
   fChain->SetBranchAddress("Kminus_OWNPV_CHI2", &Kminus_OWNPV_CHI2, &b_Kminus_OWNPV_CHI2);
   fChain->SetBranchAddress("Kminus_OWNPV_NDOF", &Kminus_OWNPV_NDOF, &b_Kminus_OWNPV_NDOF);
   fChain->SetBranchAddress("Kminus_OWNPV_COV_", Kminus_OWNPV_COV_, &b_Kminus_OWNPV_COV_);
   fChain->SetBranchAddress("Kminus_IP_OWNPV", &Kminus_IP_OWNPV, &b_Kminus_IP_OWNPV);
   fChain->SetBranchAddress("Kminus_IPCHI2_OWNPV", &Kminus_IPCHI2_OWNPV, &b_Kminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kminus_ORIVX_X", &Kminus_ORIVX_X, &b_Kminus_ORIVX_X);
   fChain->SetBranchAddress("Kminus_ORIVX_Y", &Kminus_ORIVX_Y, &b_Kminus_ORIVX_Y);
   fChain->SetBranchAddress("Kminus_ORIVX_Z", &Kminus_ORIVX_Z, &b_Kminus_ORIVX_Z);
   fChain->SetBranchAddress("Kminus_ORIVX_XERR", &Kminus_ORIVX_XERR, &b_Kminus_ORIVX_XERR);
   fChain->SetBranchAddress("Kminus_ORIVX_YERR", &Kminus_ORIVX_YERR, &b_Kminus_ORIVX_YERR);
   fChain->SetBranchAddress("Kminus_ORIVX_ZERR", &Kminus_ORIVX_ZERR, &b_Kminus_ORIVX_ZERR);
   fChain->SetBranchAddress("Kminus_ORIVX_CHI2", &Kminus_ORIVX_CHI2, &b_Kminus_ORIVX_CHI2);
   fChain->SetBranchAddress("Kminus_ORIVX_NDOF", &Kminus_ORIVX_NDOF, &b_Kminus_ORIVX_NDOF);
   fChain->SetBranchAddress("Kminus_ORIVX_COV_", Kminus_ORIVX_COV_, &b_Kminus_ORIVX_COV_);
   fChain->SetBranchAddress("Kminus_P", &Kminus_P, &b_Kminus_P);
   fChain->SetBranchAddress("Kminus_PT", &Kminus_PT, &b_Kminus_PT);
   fChain->SetBranchAddress("Kminus_PE", &Kminus_PE, &b_Kminus_PE);
   fChain->SetBranchAddress("Kminus_PX", &Kminus_PX, &b_Kminus_PX);
   fChain->SetBranchAddress("Kminus_PY", &Kminus_PY, &b_Kminus_PY);
   fChain->SetBranchAddress("Kminus_PZ", &Kminus_PZ, &b_Kminus_PZ);
   fChain->SetBranchAddress("Kminus_M", &Kminus_M, &b_Kminus_M);
   fChain->SetBranchAddress("Kminus_ID", &Kminus_ID, &b_Kminus_ID);
   fChain->SetBranchAddress("Kminus_CombDLLMu", &Kminus_CombDLLMu, &b_Kminus_CombDLLMu);
   fChain->SetBranchAddress("Kminus_ProbNNmu", &Kminus_ProbNNmu, &b_Kminus_ProbNNmu);
   fChain->SetBranchAddress("Kminus_ProbNNghost", &Kminus_ProbNNghost, &b_Kminus_ProbNNghost);
   fChain->SetBranchAddress("Kminus_InMuonAcc", &Kminus_InMuonAcc, &b_Kminus_InMuonAcc);
   fChain->SetBranchAddress("Kminus_MuonDist2", &Kminus_MuonDist2, &b_Kminus_MuonDist2);
   fChain->SetBranchAddress("Kminus_regionInM2", &Kminus_regionInM2, &b_Kminus_regionInM2);
   fChain->SetBranchAddress("Kminus_hasMuon", &Kminus_hasMuon, &b_Kminus_hasMuon);
   fChain->SetBranchAddress("Kminus_isMuon", &Kminus_isMuon, &b_Kminus_isMuon);
   fChain->SetBranchAddress("Kminus_isMuonLoose", &Kminus_isMuonLoose, &b_Kminus_isMuonLoose);
   fChain->SetBranchAddress("Kminus_NShared", &Kminus_NShared, &b_Kminus_NShared);
   fChain->SetBranchAddress("Kminus_MuonLLmu", &Kminus_MuonLLmu, &b_Kminus_MuonLLmu);
   fChain->SetBranchAddress("Kminus_MuonLLbg", &Kminus_MuonLLbg, &b_Kminus_MuonLLbg);
   fChain->SetBranchAddress("Kminus_isMuonFromProto", &Kminus_isMuonFromProto, &b_Kminus_isMuonFromProto);
   fChain->SetBranchAddress("Kminus_PIDe", &Kminus_PIDe, &b_Kminus_PIDe);
   fChain->SetBranchAddress("Kminus_PIDmu", &Kminus_PIDmu, &b_Kminus_PIDmu);
   fChain->SetBranchAddress("Kminus_PIDK", &Kminus_PIDK, &b_Kminus_PIDK);
   fChain->SetBranchAddress("Kminus_PIDp", &Kminus_PIDp, &b_Kminus_PIDp);
   fChain->SetBranchAddress("Kminus_PIDd", &Kminus_PIDd, &b_Kminus_PIDd);
   fChain->SetBranchAddress("Kminus_ProbNNe", &Kminus_ProbNNe, &b_Kminus_ProbNNe);
   fChain->SetBranchAddress("Kminus_ProbNNk", &Kminus_ProbNNk, &b_Kminus_ProbNNk);
   fChain->SetBranchAddress("Kminus_ProbNNp", &Kminus_ProbNNp, &b_Kminus_ProbNNp);
   fChain->SetBranchAddress("Kminus_ProbNNpi", &Kminus_ProbNNpi, &b_Kminus_ProbNNpi);
   fChain->SetBranchAddress("Kminus_ProbNNd", &Kminus_ProbNNd, &b_Kminus_ProbNNd);
   fChain->SetBranchAddress("Kminus_hasRich", &Kminus_hasRich, &b_Kminus_hasRich);
   fChain->SetBranchAddress("Kminus_UsedRichAerogel", &Kminus_UsedRichAerogel, &b_Kminus_UsedRichAerogel);
   fChain->SetBranchAddress("Kminus_UsedRich1Gas", &Kminus_UsedRich1Gas, &b_Kminus_UsedRich1Gas);
   fChain->SetBranchAddress("Kminus_UsedRich2Gas", &Kminus_UsedRich2Gas, &b_Kminus_UsedRich2Gas);
   fChain->SetBranchAddress("Kminus_RichAboveElThres", &Kminus_RichAboveElThres, &b_Kminus_RichAboveElThres);
   fChain->SetBranchAddress("Kminus_RichAboveMuThres", &Kminus_RichAboveMuThres, &b_Kminus_RichAboveMuThres);
   fChain->SetBranchAddress("Kminus_RichAbovePiThres", &Kminus_RichAbovePiThres, &b_Kminus_RichAbovePiThres);
   fChain->SetBranchAddress("Kminus_RichAboveKaThres", &Kminus_RichAboveKaThres, &b_Kminus_RichAboveKaThres);
   fChain->SetBranchAddress("Kminus_RichAbovePrThres", &Kminus_RichAbovePrThres, &b_Kminus_RichAbovePrThres);
   fChain->SetBranchAddress("Kminus_hasCalo", &Kminus_hasCalo, &b_Kminus_hasCalo);
   fChain->SetBranchAddress("Kminus_TRACK_Type", &Kminus_TRACK_Type, &b_Kminus_TRACK_Type);
   fChain->SetBranchAddress("Kminus_TRACK_Key", &Kminus_TRACK_Key, &b_Kminus_TRACK_Key);
   fChain->SetBranchAddress("Kminus_TRACK_CHI2NDOF", &Kminus_TRACK_CHI2NDOF, &b_Kminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kminus_TRACK_PCHI2", &Kminus_TRACK_PCHI2, &b_Kminus_TRACK_PCHI2);
   fChain->SetBranchAddress("Kminus_TRACK_MatchCHI2", &Kminus_TRACK_MatchCHI2, &b_Kminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Kminus_TRACK_GhostProb", &Kminus_TRACK_GhostProb, &b_Kminus_TRACK_GhostProb);
   fChain->SetBranchAddress("Kminus_TRACK_CloneDist", &Kminus_TRACK_CloneDist, &b_Kminus_TRACK_CloneDist);
   fChain->SetBranchAddress("Kminus_TRACK_Likelihood", &Kminus_TRACK_Likelihood, &b_Kminus_TRACK_Likelihood);
   fChain->SetBranchAddress("Kminus_X", &Kminus_X, &b_Kminus_X);
   fChain->SetBranchAddress("Kminus_Y", &Kminus_Y, &b_Kminus_Y);
   fChain->SetBranchAddress("Kplus_CL", &Kplus_CL, &b_Kplus_CL);
   fChain->SetBranchAddress("Kplus_ETA", &Kplus_ETA, &b_Kplus_ETA);
   fChain->SetBranchAddress("Kplus_PHI", &Kplus_PHI, &b_Kplus_PHI);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNe", &Kplus_MC12TuneV2_ProbNNe, &b_Kplus_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNmu", &Kplus_MC12TuneV2_ProbNNmu, &b_Kplus_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNpi", &Kplus_MC12TuneV2_ProbNNpi, &b_Kplus_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNk", &Kplus_MC12TuneV2_ProbNNk, &b_Kplus_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNp", &Kplus_MC12TuneV2_ProbNNp, &b_Kplus_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNghost", &Kplus_MC12TuneV2_ProbNNghost, &b_Kplus_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNe", &Kplus_MC12TuneV3_ProbNNe, &b_Kplus_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNmu", &Kplus_MC12TuneV3_ProbNNmu, &b_Kplus_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNpi", &Kplus_MC12TuneV3_ProbNNpi, &b_Kplus_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNk", &Kplus_MC12TuneV3_ProbNNk, &b_Kplus_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNp", &Kplus_MC12TuneV3_ProbNNp, &b_Kplus_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNghost", &Kplus_MC12TuneV3_ProbNNghost, &b_Kplus_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("Kplus_MC12TuneV4_ProbNNe", &Kplus_MC12TuneV4_ProbNNe, &b_Kplus_MC12TuneV4_ProbNNe);
   fChain->SetBranchAddress("Kplus_MC12TuneV4_ProbNNmu", &Kplus_MC12TuneV4_ProbNNmu, &b_Kplus_MC12TuneV4_ProbNNmu);
   fChain->SetBranchAddress("Kplus_MC12TuneV4_ProbNNpi", &Kplus_MC12TuneV4_ProbNNpi, &b_Kplus_MC12TuneV4_ProbNNpi);
   fChain->SetBranchAddress("Kplus_MC12TuneV4_ProbNNk", &Kplus_MC12TuneV4_ProbNNk, &b_Kplus_MC12TuneV4_ProbNNk);
   fChain->SetBranchAddress("Kplus_MC12TuneV4_ProbNNp", &Kplus_MC12TuneV4_ProbNNp, &b_Kplus_MC12TuneV4_ProbNNp);
   fChain->SetBranchAddress("Kplus_MC12TuneV4_ProbNNghost", &Kplus_MC12TuneV4_ProbNNghost, &b_Kplus_MC12TuneV4_ProbNNghost);
   fChain->SetBranchAddress("Kplus_MC15TuneV1_ProbNNe", &Kplus_MC15TuneV1_ProbNNe, &b_Kplus_MC15TuneV1_ProbNNe);
   fChain->SetBranchAddress("Kplus_MC15TuneV1_ProbNNmu", &Kplus_MC15TuneV1_ProbNNmu, &b_Kplus_MC15TuneV1_ProbNNmu);
   fChain->SetBranchAddress("Kplus_MC15TuneV1_ProbNNpi", &Kplus_MC15TuneV1_ProbNNpi, &b_Kplus_MC15TuneV1_ProbNNpi);
   fChain->SetBranchAddress("Kplus_MC15TuneV1_ProbNNk", &Kplus_MC15TuneV1_ProbNNk, &b_Kplus_MC15TuneV1_ProbNNk);
   fChain->SetBranchAddress("Kplus_MC15TuneV1_ProbNNp", &Kplus_MC15TuneV1_ProbNNp, &b_Kplus_MC15TuneV1_ProbNNp);
   fChain->SetBranchAddress("Kplus_MC15TuneV1_ProbNNghost", &Kplus_MC15TuneV1_ProbNNghost, &b_Kplus_MC15TuneV1_ProbNNghost);
   fChain->SetBranchAddress("Kplus_CosTheta", &Kplus_CosTheta, &b_Kplus_CosTheta);
   fChain->SetBranchAddress("Kplus_OWNPV_X", &Kplus_OWNPV_X, &b_Kplus_OWNPV_X);
   fChain->SetBranchAddress("Kplus_OWNPV_Y", &Kplus_OWNPV_Y, &b_Kplus_OWNPV_Y);
   fChain->SetBranchAddress("Kplus_OWNPV_Z", &Kplus_OWNPV_Z, &b_Kplus_OWNPV_Z);
   fChain->SetBranchAddress("Kplus_OWNPV_XERR", &Kplus_OWNPV_XERR, &b_Kplus_OWNPV_XERR);
   fChain->SetBranchAddress("Kplus_OWNPV_YERR", &Kplus_OWNPV_YERR, &b_Kplus_OWNPV_YERR);
   fChain->SetBranchAddress("Kplus_OWNPV_ZERR", &Kplus_OWNPV_ZERR, &b_Kplus_OWNPV_ZERR);
   fChain->SetBranchAddress("Kplus_OWNPV_CHI2", &Kplus_OWNPV_CHI2, &b_Kplus_OWNPV_CHI2);
   fChain->SetBranchAddress("Kplus_OWNPV_NDOF", &Kplus_OWNPV_NDOF, &b_Kplus_OWNPV_NDOF);
   fChain->SetBranchAddress("Kplus_OWNPV_COV_", Kplus_OWNPV_COV_, &b_Kplus_OWNPV_COV_);
   fChain->SetBranchAddress("Kplus_IP_OWNPV", &Kplus_IP_OWNPV, &b_Kplus_IP_OWNPV);
   fChain->SetBranchAddress("Kplus_IPCHI2_OWNPV", &Kplus_IPCHI2_OWNPV, &b_Kplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kplus_ORIVX_X", &Kplus_ORIVX_X, &b_Kplus_ORIVX_X);
   fChain->SetBranchAddress("Kplus_ORIVX_Y", &Kplus_ORIVX_Y, &b_Kplus_ORIVX_Y);
   fChain->SetBranchAddress("Kplus_ORIVX_Z", &Kplus_ORIVX_Z, &b_Kplus_ORIVX_Z);
   fChain->SetBranchAddress("Kplus_ORIVX_XERR", &Kplus_ORIVX_XERR, &b_Kplus_ORIVX_XERR);
   fChain->SetBranchAddress("Kplus_ORIVX_YERR", &Kplus_ORIVX_YERR, &b_Kplus_ORIVX_YERR);
   fChain->SetBranchAddress("Kplus_ORIVX_ZERR", &Kplus_ORIVX_ZERR, &b_Kplus_ORIVX_ZERR);
   fChain->SetBranchAddress("Kplus_ORIVX_CHI2", &Kplus_ORIVX_CHI2, &b_Kplus_ORIVX_CHI2);
   fChain->SetBranchAddress("Kplus_ORIVX_NDOF", &Kplus_ORIVX_NDOF, &b_Kplus_ORIVX_NDOF);
   fChain->SetBranchAddress("Kplus_ORIVX_COV_", Kplus_ORIVX_COV_, &b_Kplus_ORIVX_COV_);
   fChain->SetBranchAddress("Kplus_P", &Kplus_P, &b_Kplus_P);
   fChain->SetBranchAddress("Kplus_PT", &Kplus_PT, &b_Kplus_PT);
   fChain->SetBranchAddress("Kplus_PE", &Kplus_PE, &b_Kplus_PE);
   fChain->SetBranchAddress("Kplus_PX", &Kplus_PX, &b_Kplus_PX);
   fChain->SetBranchAddress("Kplus_PY", &Kplus_PY, &b_Kplus_PY);
   fChain->SetBranchAddress("Kplus_PZ", &Kplus_PZ, &b_Kplus_PZ);
   fChain->SetBranchAddress("Kplus_M", &Kplus_M, &b_Kplus_M);
   fChain->SetBranchAddress("Kplus_ID", &Kplus_ID, &b_Kplus_ID);
   fChain->SetBranchAddress("Kplus_CombDLLMu", &Kplus_CombDLLMu, &b_Kplus_CombDLLMu);
   fChain->SetBranchAddress("Kplus_ProbNNmu", &Kplus_ProbNNmu, &b_Kplus_ProbNNmu);
   fChain->SetBranchAddress("Kplus_ProbNNghost", &Kplus_ProbNNghost, &b_Kplus_ProbNNghost);
   fChain->SetBranchAddress("Kplus_InMuonAcc", &Kplus_InMuonAcc, &b_Kplus_InMuonAcc);
   fChain->SetBranchAddress("Kplus_MuonDist2", &Kplus_MuonDist2, &b_Kplus_MuonDist2);
   fChain->SetBranchAddress("Kplus_regionInM2", &Kplus_regionInM2, &b_Kplus_regionInM2);
   fChain->SetBranchAddress("Kplus_hasMuon", &Kplus_hasMuon, &b_Kplus_hasMuon);
   fChain->SetBranchAddress("Kplus_isMuon", &Kplus_isMuon, &b_Kplus_isMuon);
   fChain->SetBranchAddress("Kplus_isMuonLoose", &Kplus_isMuonLoose, &b_Kplus_isMuonLoose);
   fChain->SetBranchAddress("Kplus_NShared", &Kplus_NShared, &b_Kplus_NShared);
   fChain->SetBranchAddress("Kplus_MuonLLmu", &Kplus_MuonLLmu, &b_Kplus_MuonLLmu);
   fChain->SetBranchAddress("Kplus_MuonLLbg", &Kplus_MuonLLbg, &b_Kplus_MuonLLbg);
   fChain->SetBranchAddress("Kplus_isMuonFromProto", &Kplus_isMuonFromProto, &b_Kplus_isMuonFromProto);
   fChain->SetBranchAddress("Kplus_PIDe", &Kplus_PIDe, &b_Kplus_PIDe);
   fChain->SetBranchAddress("Kplus_PIDmu", &Kplus_PIDmu, &b_Kplus_PIDmu);
   fChain->SetBranchAddress("Kplus_PIDK", &Kplus_PIDK, &b_Kplus_PIDK);
   fChain->SetBranchAddress("Kplus_PIDp", &Kplus_PIDp, &b_Kplus_PIDp);
   fChain->SetBranchAddress("Kplus_PIDd", &Kplus_PIDd, &b_Kplus_PIDd);
   fChain->SetBranchAddress("Kplus_ProbNNe", &Kplus_ProbNNe, &b_Kplus_ProbNNe);
   fChain->SetBranchAddress("Kplus_ProbNNk", &Kplus_ProbNNk, &b_Kplus_ProbNNk);
   fChain->SetBranchAddress("Kplus_ProbNNp", &Kplus_ProbNNp, &b_Kplus_ProbNNp);
   fChain->SetBranchAddress("Kplus_ProbNNpi", &Kplus_ProbNNpi, &b_Kplus_ProbNNpi);
   fChain->SetBranchAddress("Kplus_ProbNNd", &Kplus_ProbNNd, &b_Kplus_ProbNNd);
   fChain->SetBranchAddress("Kplus_hasRich", &Kplus_hasRich, &b_Kplus_hasRich);
   fChain->SetBranchAddress("Kplus_UsedRichAerogel", &Kplus_UsedRichAerogel, &b_Kplus_UsedRichAerogel);
   fChain->SetBranchAddress("Kplus_UsedRich1Gas", &Kplus_UsedRich1Gas, &b_Kplus_UsedRich1Gas);
   fChain->SetBranchAddress("Kplus_UsedRich2Gas", &Kplus_UsedRich2Gas, &b_Kplus_UsedRich2Gas);
   fChain->SetBranchAddress("Kplus_RichAboveElThres", &Kplus_RichAboveElThres, &b_Kplus_RichAboveElThres);
   fChain->SetBranchAddress("Kplus_RichAboveMuThres", &Kplus_RichAboveMuThres, &b_Kplus_RichAboveMuThres);
   fChain->SetBranchAddress("Kplus_RichAbovePiThres", &Kplus_RichAbovePiThres, &b_Kplus_RichAbovePiThres);
   fChain->SetBranchAddress("Kplus_RichAboveKaThres", &Kplus_RichAboveKaThres, &b_Kplus_RichAboveKaThres);
   fChain->SetBranchAddress("Kplus_RichAbovePrThres", &Kplus_RichAbovePrThres, &b_Kplus_RichAbovePrThres);
   fChain->SetBranchAddress("Kplus_hasCalo", &Kplus_hasCalo, &b_Kplus_hasCalo);
   fChain->SetBranchAddress("Kplus_TRACK_Type", &Kplus_TRACK_Type, &b_Kplus_TRACK_Type);
   fChain->SetBranchAddress("Kplus_TRACK_Key", &Kplus_TRACK_Key, &b_Kplus_TRACK_Key);
   fChain->SetBranchAddress("Kplus_TRACK_CHI2NDOF", &Kplus_TRACK_CHI2NDOF, &b_Kplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kplus_TRACK_PCHI2", &Kplus_TRACK_PCHI2, &b_Kplus_TRACK_PCHI2);
   fChain->SetBranchAddress("Kplus_TRACK_MatchCHI2", &Kplus_TRACK_MatchCHI2, &b_Kplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Kplus_TRACK_GhostProb", &Kplus_TRACK_GhostProb, &b_Kplus_TRACK_GhostProb);
   fChain->SetBranchAddress("Kplus_TRACK_CloneDist", &Kplus_TRACK_CloneDist, &b_Kplus_TRACK_CloneDist);
   fChain->SetBranchAddress("Kplus_TRACK_Likelihood", &Kplus_TRACK_Likelihood, &b_Kplus_TRACK_Likelihood);
   fChain->SetBranchAddress("Kplus_X", &Kplus_X, &b_Kplus_X);
   fChain->SetBranchAddress("Kplus_Y", &Kplus_Y, &b_Kplus_Y);
   fChain->SetBranchAddress("PiMinus_CL", &PiMinus_CL, &b_PiMinus_CL);
   fChain->SetBranchAddress("PiMinus_ETA", &PiMinus_ETA, &b_PiMinus_ETA);
   fChain->SetBranchAddress("PiMinus_PHI", &PiMinus_PHI, &b_PiMinus_PHI);
   fChain->SetBranchAddress("PiMinus_MC12TuneV2_ProbNNe", &PiMinus_MC12TuneV2_ProbNNe, &b_PiMinus_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("PiMinus_MC12TuneV2_ProbNNmu", &PiMinus_MC12TuneV2_ProbNNmu, &b_PiMinus_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("PiMinus_MC12TuneV2_ProbNNpi", &PiMinus_MC12TuneV2_ProbNNpi, &b_PiMinus_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("PiMinus_MC12TuneV2_ProbNNk", &PiMinus_MC12TuneV2_ProbNNk, &b_PiMinus_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("PiMinus_MC12TuneV2_ProbNNp", &PiMinus_MC12TuneV2_ProbNNp, &b_PiMinus_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("PiMinus_MC12TuneV2_ProbNNghost", &PiMinus_MC12TuneV2_ProbNNghost, &b_PiMinus_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("PiMinus_MC12TuneV3_ProbNNe", &PiMinus_MC12TuneV3_ProbNNe, &b_PiMinus_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("PiMinus_MC12TuneV3_ProbNNmu", &PiMinus_MC12TuneV3_ProbNNmu, &b_PiMinus_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("PiMinus_MC12TuneV3_ProbNNpi", &PiMinus_MC12TuneV3_ProbNNpi, &b_PiMinus_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("PiMinus_MC12TuneV3_ProbNNk", &PiMinus_MC12TuneV3_ProbNNk, &b_PiMinus_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("PiMinus_MC12TuneV3_ProbNNp", &PiMinus_MC12TuneV3_ProbNNp, &b_PiMinus_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("PiMinus_MC12TuneV3_ProbNNghost", &PiMinus_MC12TuneV3_ProbNNghost, &b_PiMinus_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("PiMinus_MC12TuneV4_ProbNNe", &PiMinus_MC12TuneV4_ProbNNe, &b_PiMinus_MC12TuneV4_ProbNNe);
   fChain->SetBranchAddress("PiMinus_MC12TuneV4_ProbNNmu", &PiMinus_MC12TuneV4_ProbNNmu, &b_PiMinus_MC12TuneV4_ProbNNmu);
   fChain->SetBranchAddress("PiMinus_MC12TuneV4_ProbNNpi", &PiMinus_MC12TuneV4_ProbNNpi, &b_PiMinus_MC12TuneV4_ProbNNpi);
   fChain->SetBranchAddress("PiMinus_MC12TuneV4_ProbNNk", &PiMinus_MC12TuneV4_ProbNNk, &b_PiMinus_MC12TuneV4_ProbNNk);
   fChain->SetBranchAddress("PiMinus_MC12TuneV4_ProbNNp", &PiMinus_MC12TuneV4_ProbNNp, &b_PiMinus_MC12TuneV4_ProbNNp);
   fChain->SetBranchAddress("PiMinus_MC12TuneV4_ProbNNghost", &PiMinus_MC12TuneV4_ProbNNghost, &b_PiMinus_MC12TuneV4_ProbNNghost);
   fChain->SetBranchAddress("PiMinus_MC15TuneV1_ProbNNe", &PiMinus_MC15TuneV1_ProbNNe, &b_PiMinus_MC15TuneV1_ProbNNe);
   fChain->SetBranchAddress("PiMinus_MC15TuneV1_ProbNNmu", &PiMinus_MC15TuneV1_ProbNNmu, &b_PiMinus_MC15TuneV1_ProbNNmu);
   fChain->SetBranchAddress("PiMinus_MC15TuneV1_ProbNNpi", &PiMinus_MC15TuneV1_ProbNNpi, &b_PiMinus_MC15TuneV1_ProbNNpi);
   fChain->SetBranchAddress("PiMinus_MC15TuneV1_ProbNNk", &PiMinus_MC15TuneV1_ProbNNk, &b_PiMinus_MC15TuneV1_ProbNNk);
   fChain->SetBranchAddress("PiMinus_MC15TuneV1_ProbNNp", &PiMinus_MC15TuneV1_ProbNNp, &b_PiMinus_MC15TuneV1_ProbNNp);
   fChain->SetBranchAddress("PiMinus_MC15TuneV1_ProbNNghost", &PiMinus_MC15TuneV1_ProbNNghost, &b_PiMinus_MC15TuneV1_ProbNNghost);
   fChain->SetBranchAddress("PiMinus_CosTheta", &PiMinus_CosTheta, &b_PiMinus_CosTheta);
   fChain->SetBranchAddress("PiMinus_OWNPV_X", &PiMinus_OWNPV_X, &b_PiMinus_OWNPV_X);
   fChain->SetBranchAddress("PiMinus_OWNPV_Y", &PiMinus_OWNPV_Y, &b_PiMinus_OWNPV_Y);
   fChain->SetBranchAddress("PiMinus_OWNPV_Z", &PiMinus_OWNPV_Z, &b_PiMinus_OWNPV_Z);
   fChain->SetBranchAddress("PiMinus_OWNPV_XERR", &PiMinus_OWNPV_XERR, &b_PiMinus_OWNPV_XERR);
   fChain->SetBranchAddress("PiMinus_OWNPV_YERR", &PiMinus_OWNPV_YERR, &b_PiMinus_OWNPV_YERR);
   fChain->SetBranchAddress("PiMinus_OWNPV_ZERR", &PiMinus_OWNPV_ZERR, &b_PiMinus_OWNPV_ZERR);
   fChain->SetBranchAddress("PiMinus_OWNPV_CHI2", &PiMinus_OWNPV_CHI2, &b_PiMinus_OWNPV_CHI2);
   fChain->SetBranchAddress("PiMinus_OWNPV_NDOF", &PiMinus_OWNPV_NDOF, &b_PiMinus_OWNPV_NDOF);
   fChain->SetBranchAddress("PiMinus_OWNPV_COV_", PiMinus_OWNPV_COV_, &b_PiMinus_OWNPV_COV_);
   fChain->SetBranchAddress("PiMinus_IP_OWNPV", &PiMinus_IP_OWNPV, &b_PiMinus_IP_OWNPV);
   fChain->SetBranchAddress("PiMinus_IPCHI2_OWNPV", &PiMinus_IPCHI2_OWNPV, &b_PiMinus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("PiMinus_ORIVX_X", &PiMinus_ORIVX_X, &b_PiMinus_ORIVX_X);
   fChain->SetBranchAddress("PiMinus_ORIVX_Y", &PiMinus_ORIVX_Y, &b_PiMinus_ORIVX_Y);
   fChain->SetBranchAddress("PiMinus_ORIVX_Z", &PiMinus_ORIVX_Z, &b_PiMinus_ORIVX_Z);
   fChain->SetBranchAddress("PiMinus_ORIVX_XERR", &PiMinus_ORIVX_XERR, &b_PiMinus_ORIVX_XERR);
   fChain->SetBranchAddress("PiMinus_ORIVX_YERR", &PiMinus_ORIVX_YERR, &b_PiMinus_ORIVX_YERR);
   fChain->SetBranchAddress("PiMinus_ORIVX_ZERR", &PiMinus_ORIVX_ZERR, &b_PiMinus_ORIVX_ZERR);
   fChain->SetBranchAddress("PiMinus_ORIVX_CHI2", &PiMinus_ORIVX_CHI2, &b_PiMinus_ORIVX_CHI2);
   fChain->SetBranchAddress("PiMinus_ORIVX_NDOF", &PiMinus_ORIVX_NDOF, &b_PiMinus_ORIVX_NDOF);
   fChain->SetBranchAddress("PiMinus_ORIVX_COV_", PiMinus_ORIVX_COV_, &b_PiMinus_ORIVX_COV_);
   fChain->SetBranchAddress("PiMinus_P", &PiMinus_P, &b_PiMinus_P);
   fChain->SetBranchAddress("PiMinus_PT", &PiMinus_PT, &b_PiMinus_PT);
   fChain->SetBranchAddress("PiMinus_PE", &PiMinus_PE, &b_PiMinus_PE);
   fChain->SetBranchAddress("PiMinus_PX", &PiMinus_PX, &b_PiMinus_PX);
   fChain->SetBranchAddress("PiMinus_PY", &PiMinus_PY, &b_PiMinus_PY);
   fChain->SetBranchAddress("PiMinus_PZ", &PiMinus_PZ, &b_PiMinus_PZ);
   fChain->SetBranchAddress("PiMinus_M", &PiMinus_M, &b_PiMinus_M);
   fChain->SetBranchAddress("PiMinus_ID", &PiMinus_ID, &b_PiMinus_ID);
   fChain->SetBranchAddress("PiMinus_CombDLLMu", &PiMinus_CombDLLMu, &b_PiMinus_CombDLLMu);
   fChain->SetBranchAddress("PiMinus_ProbNNmu", &PiMinus_ProbNNmu, &b_PiMinus_ProbNNmu);
   fChain->SetBranchAddress("PiMinus_ProbNNghost", &PiMinus_ProbNNghost, &b_PiMinus_ProbNNghost);
   fChain->SetBranchAddress("PiMinus_InMuonAcc", &PiMinus_InMuonAcc, &b_PiMinus_InMuonAcc);
   fChain->SetBranchAddress("PiMinus_MuonDist2", &PiMinus_MuonDist2, &b_PiMinus_MuonDist2);
   fChain->SetBranchAddress("PiMinus_regionInM2", &PiMinus_regionInM2, &b_PiMinus_regionInM2);
   fChain->SetBranchAddress("PiMinus_hasMuon", &PiMinus_hasMuon, &b_PiMinus_hasMuon);
   fChain->SetBranchAddress("PiMinus_isMuon", &PiMinus_isMuon, &b_PiMinus_isMuon);
   fChain->SetBranchAddress("PiMinus_isMuonLoose", &PiMinus_isMuonLoose, &b_PiMinus_isMuonLoose);
   fChain->SetBranchAddress("PiMinus_NShared", &PiMinus_NShared, &b_PiMinus_NShared);
   fChain->SetBranchAddress("PiMinus_MuonLLmu", &PiMinus_MuonLLmu, &b_PiMinus_MuonLLmu);
   fChain->SetBranchAddress("PiMinus_MuonLLbg", &PiMinus_MuonLLbg, &b_PiMinus_MuonLLbg);
   fChain->SetBranchAddress("PiMinus_isMuonFromProto", &PiMinus_isMuonFromProto, &b_PiMinus_isMuonFromProto);
   fChain->SetBranchAddress("PiMinus_PIDe", &PiMinus_PIDe, &b_PiMinus_PIDe);
   fChain->SetBranchAddress("PiMinus_PIDmu", &PiMinus_PIDmu, &b_PiMinus_PIDmu);
   fChain->SetBranchAddress("PiMinus_PIDK", &PiMinus_PIDK, &b_PiMinus_PIDK);
   fChain->SetBranchAddress("PiMinus_PIDp", &PiMinus_PIDp, &b_PiMinus_PIDp);
   fChain->SetBranchAddress("PiMinus_PIDd", &PiMinus_PIDd, &b_PiMinus_PIDd);
   fChain->SetBranchAddress("PiMinus_ProbNNe", &PiMinus_ProbNNe, &b_PiMinus_ProbNNe);
   fChain->SetBranchAddress("PiMinus_ProbNNk", &PiMinus_ProbNNk, &b_PiMinus_ProbNNk);
   fChain->SetBranchAddress("PiMinus_ProbNNp", &PiMinus_ProbNNp, &b_PiMinus_ProbNNp);
   fChain->SetBranchAddress("PiMinus_ProbNNpi", &PiMinus_ProbNNpi, &b_PiMinus_ProbNNpi);
   fChain->SetBranchAddress("PiMinus_ProbNNd", &PiMinus_ProbNNd, &b_PiMinus_ProbNNd);
   fChain->SetBranchAddress("PiMinus_hasRich", &PiMinus_hasRich, &b_PiMinus_hasRich);
   fChain->SetBranchAddress("PiMinus_UsedRichAerogel", &PiMinus_UsedRichAerogel, &b_PiMinus_UsedRichAerogel);
   fChain->SetBranchAddress("PiMinus_UsedRich1Gas", &PiMinus_UsedRich1Gas, &b_PiMinus_UsedRich1Gas);
   fChain->SetBranchAddress("PiMinus_UsedRich2Gas", &PiMinus_UsedRich2Gas, &b_PiMinus_UsedRich2Gas);
   fChain->SetBranchAddress("PiMinus_RichAboveElThres", &PiMinus_RichAboveElThres, &b_PiMinus_RichAboveElThres);
   fChain->SetBranchAddress("PiMinus_RichAboveMuThres", &PiMinus_RichAboveMuThres, &b_PiMinus_RichAboveMuThres);
   fChain->SetBranchAddress("PiMinus_RichAbovePiThres", &PiMinus_RichAbovePiThres, &b_PiMinus_RichAbovePiThres);
   fChain->SetBranchAddress("PiMinus_RichAboveKaThres", &PiMinus_RichAboveKaThres, &b_PiMinus_RichAboveKaThres);
   fChain->SetBranchAddress("PiMinus_RichAbovePrThres", &PiMinus_RichAbovePrThres, &b_PiMinus_RichAbovePrThres);
   fChain->SetBranchAddress("PiMinus_hasCalo", &PiMinus_hasCalo, &b_PiMinus_hasCalo);
   fChain->SetBranchAddress("PiMinus_TRACK_Type", &PiMinus_TRACK_Type, &b_PiMinus_TRACK_Type);
   fChain->SetBranchAddress("PiMinus_TRACK_Key", &PiMinus_TRACK_Key, &b_PiMinus_TRACK_Key);
   fChain->SetBranchAddress("PiMinus_TRACK_CHI2NDOF", &PiMinus_TRACK_CHI2NDOF, &b_PiMinus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("PiMinus_TRACK_PCHI2", &PiMinus_TRACK_PCHI2, &b_PiMinus_TRACK_PCHI2);
   fChain->SetBranchAddress("PiMinus_TRACK_MatchCHI2", &PiMinus_TRACK_MatchCHI2, &b_PiMinus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("PiMinus_TRACK_GhostProb", &PiMinus_TRACK_GhostProb, &b_PiMinus_TRACK_GhostProb);
   fChain->SetBranchAddress("PiMinus_TRACK_CloneDist", &PiMinus_TRACK_CloneDist, &b_PiMinus_TRACK_CloneDist);
   fChain->SetBranchAddress("PiMinus_TRACK_Likelihood", &PiMinus_TRACK_Likelihood, &b_PiMinus_TRACK_Likelihood);
   fChain->SetBranchAddress("PiMinus_X", &PiMinus_X, &b_PiMinus_X);
   fChain->SetBranchAddress("PiMinus_Y", &PiMinus_Y, &b_PiMinus_Y);
   fChain->SetBranchAddress("gamma_CL", &gamma_CL, &b_gamma_CL);
   fChain->SetBranchAddress("gamma_ETA", &gamma_ETA, &b_gamma_ETA);
   fChain->SetBranchAddress("gamma_PHI", &gamma_PHI, &b_gamma_PHI);
   fChain->SetBranchAddress("gamma_CosTheta", &gamma_CosTheta, &b_gamma_CosTheta);
   fChain->SetBranchAddress("gamma_hasCaloHypo", &gamma_hasCaloHypo, &b_gamma_hasCaloHypo);
   fChain->SetBranchAddress("gamma_CaloHypo_E", &gamma_CaloHypo_E, &b_gamma_CaloHypo_E);
   fChain->SetBranchAddress("gamma_CaloHypo_X", &gamma_CaloHypo_X, &b_gamma_CaloHypo_X);
   fChain->SetBranchAddress("gamma_CaloHypo_Y", &gamma_CaloHypo_Y, &b_gamma_CaloHypo_Y);
   fChain->SetBranchAddress("gamma_CaloHypo_Z", &gamma_CaloHypo_Z, &b_gamma_CaloHypo_Z);
   fChain->SetBranchAddress("gamma_CaloHypoPileUpEnergy", &gamma_CaloHypoPileUpEnergy, &b_gamma_CaloHypoPileUpEnergy);
   fChain->SetBranchAddress("gamma_CaloHypo_HypoE", &gamma_CaloHypo_HypoE, &b_gamma_CaloHypo_HypoE);
   fChain->SetBranchAddress("gamma_CaloHypo_HypoEt", &gamma_CaloHypo_HypoEt, &b_gamma_CaloHypo_HypoEt);
   fChain->SetBranchAddress("gamma_CaloHypo_HypoM", &gamma_CaloHypo_HypoM, &b_gamma_CaloHypo_HypoM);
   fChain->SetBranchAddress("gamma_CaloHypo_HypoPrsE", &gamma_CaloHypo_HypoPrsE, &b_gamma_CaloHypo_HypoPrsE);
   fChain->SetBranchAddress("gamma_CaloHypo_HypoPrsM", &gamma_CaloHypo_HypoPrsM, &b_gamma_CaloHypo_HypoPrsM);
   fChain->SetBranchAddress("gamma_CaloHypo_HypoSpdM", &gamma_CaloHypo_HypoSpdM, &b_gamma_CaloHypo_HypoSpdM);
   fChain->SetBranchAddress("gamma_CaloHypo_ClusterE", &gamma_CaloHypo_ClusterE, &b_gamma_CaloHypo_ClusterE);
   fChain->SetBranchAddress("gamma_CaloHypo_ToPrsE", &gamma_CaloHypo_ToPrsE, &b_gamma_CaloHypo_ToPrsE);
   fChain->SetBranchAddress("gamma_CaloHypo_ToHcalE", &gamma_CaloHypo_ToHcalE, &b_gamma_CaloHypo_ToHcalE);
   fChain->SetBranchAddress("gamma_CaloHypo_ToPrsM", &gamma_CaloHypo_ToPrsM, &b_gamma_CaloHypo_ToPrsM);
   fChain->SetBranchAddress("gamma_CaloHypo_ToSpdM", &gamma_CaloHypo_ToSpdM, &b_gamma_CaloHypo_ToSpdM);
   fChain->SetBranchAddress("gamma_CaloHypo_E1", &gamma_CaloHypo_E1, &b_gamma_CaloHypo_E1);
   fChain->SetBranchAddress("gamma_CaloHypo_E9", &gamma_CaloHypo_E9, &b_gamma_CaloHypo_E9);
   fChain->SetBranchAddress("gamma_CaloHypo_E19", &gamma_CaloHypo_E19, &b_gamma_CaloHypo_E19);
   fChain->SetBranchAddress("gamma_CaloHypo_E1Hypo", &gamma_CaloHypo_E1Hypo, &b_gamma_CaloHypo_E1Hypo);
   fChain->SetBranchAddress("gamma_CaloHypo_E4", &gamma_CaloHypo_E4, &b_gamma_CaloHypo_E4);
   fChain->SetBranchAddress("gamma_CaloHypo_E49", &gamma_CaloHypo_E49, &b_gamma_CaloHypo_E49);
   fChain->SetBranchAddress("gamma_CaloHypo_CellID", &gamma_CaloHypo_CellID, &b_gamma_CaloHypo_CellID);
   fChain->SetBranchAddress("gamma_CaloHypo_Hcal2Ecal", &gamma_CaloHypo_Hcal2Ecal, &b_gamma_CaloHypo_Hcal2Ecal);
   fChain->SetBranchAddress("gamma_CaloHypo_ClusterMatch", &gamma_CaloHypo_ClusterMatch, &b_gamma_CaloHypo_ClusterMatch);
   fChain->SetBranchAddress("gamma_CaloHypo_NeutralID", &gamma_CaloHypo_NeutralID, &b_gamma_CaloHypo_NeutralID);
   fChain->SetBranchAddress("gamma_CaloHypo_Spread", &gamma_CaloHypo_Spread, &b_gamma_CaloHypo_Spread);
   fChain->SetBranchAddress("gamma_CaloHypo_PrsE19", &gamma_CaloHypo_PrsE19, &b_gamma_CaloHypo_PrsE19);
   fChain->SetBranchAddress("gamma_CaloHypo_PrsE49", &gamma_CaloHypo_PrsE49, &b_gamma_CaloHypo_PrsE49);
   fChain->SetBranchAddress("gamma_CaloHypo_PrsE4Max", &gamma_CaloHypo_PrsE4Max, &b_gamma_CaloHypo_PrsE4Max);
   fChain->SetBranchAddress("gamma_CaloHypo_PrsE1", &gamma_CaloHypo_PrsE1, &b_gamma_CaloHypo_PrsE1);
   fChain->SetBranchAddress("gamma_CaloHypo_PrsE2", &gamma_CaloHypo_PrsE2, &b_gamma_CaloHypo_PrsE2);
   fChain->SetBranchAddress("gamma_CaloHypo_PrsE3", &gamma_CaloHypo_PrsE3, &b_gamma_CaloHypo_PrsE3);
   fChain->SetBranchAddress("gamma_CaloHypo_PrsE4", &gamma_CaloHypo_PrsE4, &b_gamma_CaloHypo_PrsE4);
   fChain->SetBranchAddress("gamma_CaloHypo_PrsE5", &gamma_CaloHypo_PrsE5, &b_gamma_CaloHypo_PrsE5);
   fChain->SetBranchAddress("gamma_CaloHypo_PrsE6", &gamma_CaloHypo_PrsE6, &b_gamma_CaloHypo_PrsE6);
   fChain->SetBranchAddress("gamma_CaloHypo_PrsE7", &gamma_CaloHypo_PrsE7, &b_gamma_CaloHypo_PrsE7);
   fChain->SetBranchAddress("gamma_CaloHypo_PrsE8", &gamma_CaloHypo_PrsE8, &b_gamma_CaloHypo_PrsE8);
   fChain->SetBranchAddress("gamma_CaloHypo_PrsE9", &gamma_CaloHypo_PrsE9, &b_gamma_CaloHypo_PrsE9);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton", &gamma_CaloHypo_isPhoton, &b_gamma_CaloHypo_isPhoton);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_Ecl", &gamma_CaloHypo_isPhoton_Ecl, &b_gamma_CaloHypo_isPhoton_Ecl);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_Fr2", &gamma_CaloHypo_isPhoton_Fr2, &b_gamma_CaloHypo_isPhoton_Fr2);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_Fr2r4", &gamma_CaloHypo_isPhoton_Fr2r4, &b_gamma_CaloHypo_isPhoton_Fr2r4);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_Asym", &gamma_CaloHypo_isPhoton_Asym, &b_gamma_CaloHypo_isPhoton_Asym);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_Kappa", &gamma_CaloHypo_isPhoton_Kappa, &b_gamma_CaloHypo_isPhoton_Kappa);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_Eseed", &gamma_CaloHypo_isPhoton_Eseed, &b_gamma_CaloHypo_isPhoton_Eseed);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_E2", &gamma_CaloHypo_isPhoton_E2, &b_gamma_CaloHypo_isPhoton_E2);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_PrsFr2", &gamma_CaloHypo_isPhoton_PrsFr2, &b_gamma_CaloHypo_isPhoton_PrsFr2);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_PrsAsym", &gamma_CaloHypo_isPhoton_PrsAsym, &b_gamma_CaloHypo_isPhoton_PrsAsym);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_PrsM", &gamma_CaloHypo_isPhoton_PrsM, &b_gamma_CaloHypo_isPhoton_PrsM);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_PrsM15", &gamma_CaloHypo_isPhoton_PrsM15, &b_gamma_CaloHypo_isPhoton_PrsM15);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_PrsM30", &gamma_CaloHypo_isPhoton_PrsM30, &b_gamma_CaloHypo_isPhoton_PrsM30);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_PrsM45", &gamma_CaloHypo_isPhoton_PrsM45, &b_gamma_CaloHypo_isPhoton_PrsM45);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_PrsEmax", &gamma_CaloHypo_isPhoton_PrsEmax, &b_gamma_CaloHypo_isPhoton_PrsEmax);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhoton_PrsE2", &gamma_CaloHypo_isPhoton_PrsE2, &b_gamma_CaloHypo_isPhoton_PrsE2);
   fChain->SetBranchAddress("gamma_CaloHypo_isNotH", &gamma_CaloHypo_isNotH, &b_gamma_CaloHypo_isNotH);
   fChain->SetBranchAddress("gamma_CaloHypo_isNotE", &gamma_CaloHypo_isNotE, &b_gamma_CaloHypo_isNotE);
   fChain->SetBranchAddress("gamma_CaloHypo_ClusterCode", &gamma_CaloHypo_ClusterCode, &b_gamma_CaloHypo_ClusterCode);
   fChain->SetBranchAddress("gamma_CaloHypo_ClusterFrac", &gamma_CaloHypo_ClusterFrac, &b_gamma_CaloHypo_ClusterFrac);
   fChain->SetBranchAddress("gamma_CaloHypo_Saturation", &gamma_CaloHypo_Saturation, &b_gamma_CaloHypo_Saturation);
   fChain->SetBranchAddress("gamma_CaloHypo_ClusterAsX", &gamma_CaloHypo_ClusterAsX, &b_gamma_CaloHypo_ClusterAsX);
   fChain->SetBranchAddress("gamma_CaloHypo_ClusterAsY", &gamma_CaloHypo_ClusterAsY, &b_gamma_CaloHypo_ClusterAsY);
   fChain->SetBranchAddress("gamma_CaloHypo_isPhotonXGB", &gamma_CaloHypo_isPhotonXGB, &b_gamma_CaloHypo_isPhotonXGB);
   fChain->SetBranchAddress("gamma_P", &gamma_P, &b_gamma_P);
   fChain->SetBranchAddress("gamma_PT", &gamma_PT, &b_gamma_PT);
   fChain->SetBranchAddress("gamma_PE", &gamma_PE, &b_gamma_PE);
   fChain->SetBranchAddress("gamma_PX", &gamma_PX, &b_gamma_PX);
   fChain->SetBranchAddress("gamma_PY", &gamma_PY, &b_gamma_PY);
   fChain->SetBranchAddress("gamma_PZ", &gamma_PZ, &b_gamma_PZ);
   fChain->SetBranchAddress("gamma_M", &gamma_M, &b_gamma_M);
   fChain->SetBranchAddress("gamma_ID", &gamma_ID, &b_gamma_ID);
   fChain->SetBranchAddress("gamma_Converted", &gamma_Converted, &b_gamma_Converted);
   fChain->SetBranchAddress("gamma_Prs", &gamma_Prs, &b_gamma_Prs);
   fChain->SetBranchAddress("gamma_Matching", &gamma_Matching, &b_gamma_Matching);
   fChain->SetBranchAddress("gamma_PID", &gamma_PID, &b_gamma_PID);
   fChain->SetBranchAddress("gamma_ShowerShape", &gamma_ShowerShape, &b_gamma_ShowerShape);
   fChain->SetBranchAddress("gamma_X", &gamma_X, &b_gamma_X);
   fChain->SetBranchAddress("gamma_Y", &gamma_Y, &b_gamma_Y);
   fChain->SetBranchAddress("Piplus_CL", &Piplus_CL, &b_Piplus_CL);
   fChain->SetBranchAddress("Piplus_ETA", &Piplus_ETA, &b_Piplus_ETA);
   fChain->SetBranchAddress("Piplus_PHI", &Piplus_PHI, &b_Piplus_PHI);
   fChain->SetBranchAddress("Piplus_MC12TuneV2_ProbNNe", &Piplus_MC12TuneV2_ProbNNe, &b_Piplus_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("Piplus_MC12TuneV2_ProbNNmu", &Piplus_MC12TuneV2_ProbNNmu, &b_Piplus_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("Piplus_MC12TuneV2_ProbNNpi", &Piplus_MC12TuneV2_ProbNNpi, &b_Piplus_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("Piplus_MC12TuneV2_ProbNNk", &Piplus_MC12TuneV2_ProbNNk, &b_Piplus_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("Piplus_MC12TuneV2_ProbNNp", &Piplus_MC12TuneV2_ProbNNp, &b_Piplus_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("Piplus_MC12TuneV2_ProbNNghost", &Piplus_MC12TuneV2_ProbNNghost, &b_Piplus_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("Piplus_MC12TuneV3_ProbNNe", &Piplus_MC12TuneV3_ProbNNe, &b_Piplus_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("Piplus_MC12TuneV3_ProbNNmu", &Piplus_MC12TuneV3_ProbNNmu, &b_Piplus_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("Piplus_MC12TuneV3_ProbNNpi", &Piplus_MC12TuneV3_ProbNNpi, &b_Piplus_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("Piplus_MC12TuneV3_ProbNNk", &Piplus_MC12TuneV3_ProbNNk, &b_Piplus_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("Piplus_MC12TuneV3_ProbNNp", &Piplus_MC12TuneV3_ProbNNp, &b_Piplus_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("Piplus_MC12TuneV3_ProbNNghost", &Piplus_MC12TuneV3_ProbNNghost, &b_Piplus_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("Piplus_MC12TuneV4_ProbNNe", &Piplus_MC12TuneV4_ProbNNe, &b_Piplus_MC12TuneV4_ProbNNe);
   fChain->SetBranchAddress("Piplus_MC12TuneV4_ProbNNmu", &Piplus_MC12TuneV4_ProbNNmu, &b_Piplus_MC12TuneV4_ProbNNmu);
   fChain->SetBranchAddress("Piplus_MC12TuneV4_ProbNNpi", &Piplus_MC12TuneV4_ProbNNpi, &b_Piplus_MC12TuneV4_ProbNNpi);
   fChain->SetBranchAddress("Piplus_MC12TuneV4_ProbNNk", &Piplus_MC12TuneV4_ProbNNk, &b_Piplus_MC12TuneV4_ProbNNk);
   fChain->SetBranchAddress("Piplus_MC12TuneV4_ProbNNp", &Piplus_MC12TuneV4_ProbNNp, &b_Piplus_MC12TuneV4_ProbNNp);
   fChain->SetBranchAddress("Piplus_MC12TuneV4_ProbNNghost", &Piplus_MC12TuneV4_ProbNNghost, &b_Piplus_MC12TuneV4_ProbNNghost);
   fChain->SetBranchAddress("Piplus_MC15TuneV1_ProbNNe", &Piplus_MC15TuneV1_ProbNNe, &b_Piplus_MC15TuneV1_ProbNNe);
   fChain->SetBranchAddress("Piplus_MC15TuneV1_ProbNNmu", &Piplus_MC15TuneV1_ProbNNmu, &b_Piplus_MC15TuneV1_ProbNNmu);
   fChain->SetBranchAddress("Piplus_MC15TuneV1_ProbNNpi", &Piplus_MC15TuneV1_ProbNNpi, &b_Piplus_MC15TuneV1_ProbNNpi);
   fChain->SetBranchAddress("Piplus_MC15TuneV1_ProbNNk", &Piplus_MC15TuneV1_ProbNNk, &b_Piplus_MC15TuneV1_ProbNNk);
   fChain->SetBranchAddress("Piplus_MC15TuneV1_ProbNNp", &Piplus_MC15TuneV1_ProbNNp, &b_Piplus_MC15TuneV1_ProbNNp);
   fChain->SetBranchAddress("Piplus_MC15TuneV1_ProbNNghost", &Piplus_MC15TuneV1_ProbNNghost, &b_Piplus_MC15TuneV1_ProbNNghost);
   fChain->SetBranchAddress("Piplus_CosTheta", &Piplus_CosTheta, &b_Piplus_CosTheta);
   fChain->SetBranchAddress("Piplus_OWNPV_X", &Piplus_OWNPV_X, &b_Piplus_OWNPV_X);
   fChain->SetBranchAddress("Piplus_OWNPV_Y", &Piplus_OWNPV_Y, &b_Piplus_OWNPV_Y);
   fChain->SetBranchAddress("Piplus_OWNPV_Z", &Piplus_OWNPV_Z, &b_Piplus_OWNPV_Z);
   fChain->SetBranchAddress("Piplus_OWNPV_XERR", &Piplus_OWNPV_XERR, &b_Piplus_OWNPV_XERR);
   fChain->SetBranchAddress("Piplus_OWNPV_YERR", &Piplus_OWNPV_YERR, &b_Piplus_OWNPV_YERR);
   fChain->SetBranchAddress("Piplus_OWNPV_ZERR", &Piplus_OWNPV_ZERR, &b_Piplus_OWNPV_ZERR);
   fChain->SetBranchAddress("Piplus_OWNPV_CHI2", &Piplus_OWNPV_CHI2, &b_Piplus_OWNPV_CHI2);
   fChain->SetBranchAddress("Piplus_OWNPV_NDOF", &Piplus_OWNPV_NDOF, &b_Piplus_OWNPV_NDOF);
   fChain->SetBranchAddress("Piplus_OWNPV_COV_", Piplus_OWNPV_COV_, &b_Piplus_OWNPV_COV_);
   fChain->SetBranchAddress("Piplus_IP_OWNPV", &Piplus_IP_OWNPV, &b_Piplus_IP_OWNPV);
   fChain->SetBranchAddress("Piplus_IPCHI2_OWNPV", &Piplus_IPCHI2_OWNPV, &b_Piplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Piplus_ORIVX_X", &Piplus_ORIVX_X, &b_Piplus_ORIVX_X);
   fChain->SetBranchAddress("Piplus_ORIVX_Y", &Piplus_ORIVX_Y, &b_Piplus_ORIVX_Y);
   fChain->SetBranchAddress("Piplus_ORIVX_Z", &Piplus_ORIVX_Z, &b_Piplus_ORIVX_Z);
   fChain->SetBranchAddress("Piplus_ORIVX_XERR", &Piplus_ORIVX_XERR, &b_Piplus_ORIVX_XERR);
   fChain->SetBranchAddress("Piplus_ORIVX_YERR", &Piplus_ORIVX_YERR, &b_Piplus_ORIVX_YERR);
   fChain->SetBranchAddress("Piplus_ORIVX_ZERR", &Piplus_ORIVX_ZERR, &b_Piplus_ORIVX_ZERR);
   fChain->SetBranchAddress("Piplus_ORIVX_CHI2", &Piplus_ORIVX_CHI2, &b_Piplus_ORIVX_CHI2);
   fChain->SetBranchAddress("Piplus_ORIVX_NDOF", &Piplus_ORIVX_NDOF, &b_Piplus_ORIVX_NDOF);
   fChain->SetBranchAddress("Piplus_ORIVX_COV_", Piplus_ORIVX_COV_, &b_Piplus_ORIVX_COV_);
   fChain->SetBranchAddress("Piplus_P", &Piplus_P, &b_Piplus_P);
   fChain->SetBranchAddress("Piplus_PT", &Piplus_PT, &b_Piplus_PT);
   fChain->SetBranchAddress("Piplus_PE", &Piplus_PE, &b_Piplus_PE);
   fChain->SetBranchAddress("Piplus_PX", &Piplus_PX, &b_Piplus_PX);
   fChain->SetBranchAddress("Piplus_PY", &Piplus_PY, &b_Piplus_PY);
   fChain->SetBranchAddress("Piplus_PZ", &Piplus_PZ, &b_Piplus_PZ);
   fChain->SetBranchAddress("Piplus_M", &Piplus_M, &b_Piplus_M);
   fChain->SetBranchAddress("Piplus_ID", &Piplus_ID, &b_Piplus_ID);
   fChain->SetBranchAddress("Piplus_CombDLLMu", &Piplus_CombDLLMu, &b_Piplus_CombDLLMu);
   fChain->SetBranchAddress("Piplus_ProbNNmu", &Piplus_ProbNNmu, &b_Piplus_ProbNNmu);
   fChain->SetBranchAddress("Piplus_ProbNNghost", &Piplus_ProbNNghost, &b_Piplus_ProbNNghost);
   fChain->SetBranchAddress("Piplus_InMuonAcc", &Piplus_InMuonAcc, &b_Piplus_InMuonAcc);
   fChain->SetBranchAddress("Piplus_MuonDist2", &Piplus_MuonDist2, &b_Piplus_MuonDist2);
   fChain->SetBranchAddress("Piplus_regionInM2", &Piplus_regionInM2, &b_Piplus_regionInM2);
   fChain->SetBranchAddress("Piplus_hasMuon", &Piplus_hasMuon, &b_Piplus_hasMuon);
   fChain->SetBranchAddress("Piplus_isMuon", &Piplus_isMuon, &b_Piplus_isMuon);
   fChain->SetBranchAddress("Piplus_isMuonLoose", &Piplus_isMuonLoose, &b_Piplus_isMuonLoose);
   fChain->SetBranchAddress("Piplus_NShared", &Piplus_NShared, &b_Piplus_NShared);
   fChain->SetBranchAddress("Piplus_MuonLLmu", &Piplus_MuonLLmu, &b_Piplus_MuonLLmu);
   fChain->SetBranchAddress("Piplus_MuonLLbg", &Piplus_MuonLLbg, &b_Piplus_MuonLLbg);
   fChain->SetBranchAddress("Piplus_isMuonFromProto", &Piplus_isMuonFromProto, &b_Piplus_isMuonFromProto);
   fChain->SetBranchAddress("Piplus_PIDe", &Piplus_PIDe, &b_Piplus_PIDe);
   fChain->SetBranchAddress("Piplus_PIDmu", &Piplus_PIDmu, &b_Piplus_PIDmu);
   fChain->SetBranchAddress("Piplus_PIDK", &Piplus_PIDK, &b_Piplus_PIDK);
   fChain->SetBranchAddress("Piplus_PIDp", &Piplus_PIDp, &b_Piplus_PIDp);
   fChain->SetBranchAddress("Piplus_PIDd", &Piplus_PIDd, &b_Piplus_PIDd);
   fChain->SetBranchAddress("Piplus_ProbNNe", &Piplus_ProbNNe, &b_Piplus_ProbNNe);
   fChain->SetBranchAddress("Piplus_ProbNNk", &Piplus_ProbNNk, &b_Piplus_ProbNNk);
   fChain->SetBranchAddress("Piplus_ProbNNp", &Piplus_ProbNNp, &b_Piplus_ProbNNp);
   fChain->SetBranchAddress("Piplus_ProbNNpi", &Piplus_ProbNNpi, &b_Piplus_ProbNNpi);
   fChain->SetBranchAddress("Piplus_ProbNNd", &Piplus_ProbNNd, &b_Piplus_ProbNNd);
   fChain->SetBranchAddress("Piplus_hasRich", &Piplus_hasRich, &b_Piplus_hasRich);
   fChain->SetBranchAddress("Piplus_UsedRichAerogel", &Piplus_UsedRichAerogel, &b_Piplus_UsedRichAerogel);
   fChain->SetBranchAddress("Piplus_UsedRich1Gas", &Piplus_UsedRich1Gas, &b_Piplus_UsedRich1Gas);
   fChain->SetBranchAddress("Piplus_UsedRich2Gas", &Piplus_UsedRich2Gas, &b_Piplus_UsedRich2Gas);
   fChain->SetBranchAddress("Piplus_RichAboveElThres", &Piplus_RichAboveElThres, &b_Piplus_RichAboveElThres);
   fChain->SetBranchAddress("Piplus_RichAboveMuThres", &Piplus_RichAboveMuThres, &b_Piplus_RichAboveMuThres);
   fChain->SetBranchAddress("Piplus_RichAbovePiThres", &Piplus_RichAbovePiThres, &b_Piplus_RichAbovePiThres);
   fChain->SetBranchAddress("Piplus_RichAboveKaThres", &Piplus_RichAboveKaThres, &b_Piplus_RichAboveKaThres);
   fChain->SetBranchAddress("Piplus_RichAbovePrThres", &Piplus_RichAbovePrThres, &b_Piplus_RichAbovePrThres);
   fChain->SetBranchAddress("Piplus_hasCalo", &Piplus_hasCalo, &b_Piplus_hasCalo);
   fChain->SetBranchAddress("Piplus_TRACK_Type", &Piplus_TRACK_Type, &b_Piplus_TRACK_Type);
   fChain->SetBranchAddress("Piplus_TRACK_Key", &Piplus_TRACK_Key, &b_Piplus_TRACK_Key);
   fChain->SetBranchAddress("Piplus_TRACK_CHI2NDOF", &Piplus_TRACK_CHI2NDOF, &b_Piplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Piplus_TRACK_PCHI2", &Piplus_TRACK_PCHI2, &b_Piplus_TRACK_PCHI2);
   fChain->SetBranchAddress("Piplus_TRACK_MatchCHI2", &Piplus_TRACK_MatchCHI2, &b_Piplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Piplus_TRACK_GhostProb", &Piplus_TRACK_GhostProb, &b_Piplus_TRACK_GhostProb);
   fChain->SetBranchAddress("Piplus_TRACK_CloneDist", &Piplus_TRACK_CloneDist, &b_Piplus_TRACK_CloneDist);
   fChain->SetBranchAddress("Piplus_TRACK_Likelihood", &Piplus_TRACK_Likelihood, &b_Piplus_TRACK_Likelihood);
   fChain->SetBranchAddress("Piplus_X", &Piplus_X, &b_Piplus_X);
   fChain->SetBranchAddress("Piplus_Y", &Piplus_Y, &b_Piplus_Y);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("BCID", &BCID, &b_BCID);
   fChain->SetBranchAddress("BCType", &BCType, &b_BCType);
   fChain->SetBranchAddress("OdinTCK", &OdinTCK, &b_OdinTCK);
   fChain->SetBranchAddress("L0DUTCK", &L0DUTCK, &b_L0DUTCK);
   fChain->SetBranchAddress("HLT1TCK", &HLT1TCK, &b_HLT1TCK);
   fChain->SetBranchAddress("HLT2TCK", &HLT2TCK, &b_HLT2TCK);
   fChain->SetBranchAddress("GpsTime", &GpsTime, &b_GpsTime);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
   fChain->SetBranchAddress("L0Data_DiMuon_Pt", &L0Data_DiMuon_Pt, &b_L0Data_DiMuon_Pt);
   fChain->SetBranchAddress("L0Data_DiMuonProd_Pt1Pt2", &L0Data_DiMuonProd_Pt1Pt2, &b_L0Data_DiMuonProd_Pt1Pt2);
   fChain->SetBranchAddress("L0Data_Electron_Et", &L0Data_Electron_Et, &b_L0Data_Electron_Et);
   fChain->SetBranchAddress("L0Data_GlobalPi0_Et", &L0Data_GlobalPi0_Et, &b_L0Data_GlobalPi0_Et);
   fChain->SetBranchAddress("L0Data_Hadron_Et", &L0Data_Hadron_Et, &b_L0Data_Hadron_Et);
   fChain->SetBranchAddress("L0Data_LocalPi0_Et", &L0Data_LocalPi0_Et, &b_L0Data_LocalPi0_Et);
   fChain->SetBranchAddress("L0Data_Muon1_Pt", &L0Data_Muon1_Pt, &b_L0Data_Muon1_Pt);
   fChain->SetBranchAddress("L0Data_Muon1_Sgn", &L0Data_Muon1_Sgn, &b_L0Data_Muon1_Sgn);
   fChain->SetBranchAddress("L0Data_Muon2_Pt", &L0Data_Muon2_Pt, &b_L0Data_Muon2_Pt);
   fChain->SetBranchAddress("L0Data_Muon2_Sgn", &L0Data_Muon2_Sgn, &b_L0Data_Muon2_Sgn);
   fChain->SetBranchAddress("L0Data_Muon3_Pt", &L0Data_Muon3_Pt, &b_L0Data_Muon3_Pt);
   fChain->SetBranchAddress("L0Data_Muon3_Sgn", &L0Data_Muon3_Sgn, &b_L0Data_Muon3_Sgn);
   fChain->SetBranchAddress("L0Data_PUHits_Mult", &L0Data_PUHits_Mult, &b_L0Data_PUHits_Mult);
   fChain->SetBranchAddress("L0Data_PUPeak1_Cont", &L0Data_PUPeak1_Cont, &b_L0Data_PUPeak1_Cont);
   fChain->SetBranchAddress("L0Data_PUPeak1_Pos", &L0Data_PUPeak1_Pos, &b_L0Data_PUPeak1_Pos);
   fChain->SetBranchAddress("L0Data_PUPeak2_Cont", &L0Data_PUPeak2_Cont, &b_L0Data_PUPeak2_Cont);
   fChain->SetBranchAddress("L0Data_PUPeak2_Pos", &L0Data_PUPeak2_Pos, &b_L0Data_PUPeak2_Pos);
   fChain->SetBranchAddress("L0Data_Photon_Et", &L0Data_Photon_Et, &b_L0Data_Photon_Et);
   fChain->SetBranchAddress("L0Data_Spd_Mult", &L0Data_Spd_Mult, &b_L0Data_Spd_Mult);
   fChain->SetBranchAddress("L0Data_Sum_Et", &L0Data_Sum_Et, &b_L0Data_Sum_Et);
   fChain->SetBranchAddress("L0Data_Sum_Et,Next1", &L0Data_Sum_Et_Next1, &b_L0Data_Sum_Et_Next1);
   fChain->SetBranchAddress("L0Data_Sum_Et,Next2", &L0Data_Sum_Et_Next2, &b_L0Data_Sum_Et_Next2);
   fChain->SetBranchAddress("L0Data_Sum_Et,Prev1", &L0Data_Sum_Et_Prev1, &b_L0Data_Sum_Et_Prev1);
   fChain->SetBranchAddress("L0Data_Sum_Et,Prev2", &L0Data_Sum_Et_Prev2, &b_L0Data_Sum_Et_Prev2);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("PVX", PVX, &b_PVX);
   fChain->SetBranchAddress("PVY", PVY, &b_PVY);
   fChain->SetBranchAddress("PVZ", PVZ, &b_PVZ);
   fChain->SetBranchAddress("PVXERR", PVXERR, &b_PVXERR);
   fChain->SetBranchAddress("PVYERR", PVYERR, &b_PVYERR);
   fChain->SetBranchAddress("PVZERR", PVZERR, &b_PVZERR);
   fChain->SetBranchAddress("PVCHI2", PVCHI2, &b_PVCHI2);
   fChain->SetBranchAddress("PVNDOF", PVNDOF, &b_PVNDOF);
   fChain->SetBranchAddress("PVNTRACKS", PVNTRACKS, &b_PVNTRACKS);
   fChain->SetBranchAddress("nPVs", &nPVs, &b_nPVs);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("nLongTracks", &nLongTracks, &b_nLongTracks);
   fChain->SetBranchAddress("nDownstreamTracks", &nDownstreamTracks, &b_nDownstreamTracks);
   fChain->SetBranchAddress("nUpstreamTracks", &nUpstreamTracks, &b_nUpstreamTracks);
   fChain->SetBranchAddress("nVeloTracks", &nVeloTracks, &b_nVeloTracks);
   fChain->SetBranchAddress("nTTracks", &nTTracks, &b_nTTracks);
   fChain->SetBranchAddress("nBackTracks", &nBackTracks, &b_nBackTracks);
   fChain->SetBranchAddress("nRich1Hits", &nRich1Hits, &b_nRich1Hits);
   fChain->SetBranchAddress("nRich2Hits", &nRich2Hits, &b_nRich2Hits);
   fChain->SetBranchAddress("nVeloClusters", &nVeloClusters, &b_nVeloClusters);
   fChain->SetBranchAddress("nITClusters", &nITClusters, &b_nITClusters);
   fChain->SetBranchAddress("nTTClusters", &nTTClusters, &b_nTTClusters);
   fChain->SetBranchAddress("nOTClusters", &nOTClusters, &b_nOTClusters);
   fChain->SetBranchAddress("nSPDHits", &nSPDHits, &b_nSPDHits);
   fChain->SetBranchAddress("nMuonCoordsS0", &nMuonCoordsS0, &b_nMuonCoordsS0);
   fChain->SetBranchAddress("nMuonCoordsS1", &nMuonCoordsS1, &b_nMuonCoordsS1);
   fChain->SetBranchAddress("nMuonCoordsS2", &nMuonCoordsS2, &b_nMuonCoordsS2);
   fChain->SetBranchAddress("nMuonCoordsS3", &nMuonCoordsS3, &b_nMuonCoordsS3);
   fChain->SetBranchAddress("nMuonCoordsS4", &nMuonCoordsS4, &b_nMuonCoordsS4);
   fChain->SetBranchAddress("nMuonTracks", &nMuonTracks, &b_nMuonTracks);
   Notify();
}

Bool_t DecayTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void DecayTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t DecayTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef DecayTree_cxx
