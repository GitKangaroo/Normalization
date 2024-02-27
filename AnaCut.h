#ifndef _ANACUT_H_
#define _ANACUT_H_

using namespace std;

namespace AnaCut
{
    // Particle Selections
    bool CutDsPiMinus(){
    if(AnaIO::PiMinus_PT < 300 || AnaIO::PiMinus_P < 2000 || AnaIO::PiMinus_ProbNNghost > 0.5 
        || AnaIO::PiMinus_IPCHI2_OWNPV < 9 || AnaIO::PiMinus_TRACK_CHI2NDOF > 3) return false;
    if(AnaIO::PiMinus_ProbNNpi < 0.5) return false;
    
    return true;
    }

    bool CutDsKplus(){
    if(AnaIO::Kplus_PT < 300 || AnaIO::Kplus_P < 2000 || AnaIO::Kplus_ProbNNghost > 0.5 
        || AnaIO::Kplus_IPCHI2_OWNPV < 9 || AnaIO::Kplus_TRACK_CHI2NDOF > 3) return false;
    if(AnaIO::Kplus_ProbNNk < 0.5) return false;
    
    return true;
    }

    bool CutDsKminus(){
    if(AnaIO::Kminus_PT < 300 || AnaIO::Kminus_P < 2000 || AnaIO::Kminus_ProbNNghost > 0.5 
        || AnaIO::Kminus_IPCHI2_OWNPV < 9 || AnaIO::Kminus_TRACK_CHI2NDOF > 3) return false;
    if(AnaIO::Kminus_ProbNNk < 0.5) return false;
    return true;
    }

    bool CutDs(double mass, double daughterPT){
    double VertexFit_Chi2 = AnaIO::Ds_ENDVERTEX_CHI2/AnaIO::Ds_ENDVERTEX_NDOF;
    if(abs(mass - 1968.47) > 100 || daughterPT < 2500 || VertexFit_Chi2 > 4 
        || AnaIO::Ds_DIRA_OWNPV < 0.999 || AnaIO::Ds_FDCHI2_OWNPV < 25) return false;
    return true;
    }

    bool CutSoftPhoton(double r){
    if(r > 0.4 || AnaIO::gamma_CL < 0.6) return false;
    return true;
    }

    bool CutB0Pion(){
    if(AnaIO::Piplus_PT < 300 || AnaIO::Piplus_P < 2000 || AnaIO::Piplus_ProbNNghost > 0.5 
        || AnaIO::Piplus_IPCHI2_OWNPV < 9 || AnaIO::Piplus_TRACK_CHI2NDOF > 3) return false;
    if(AnaIO::Piplus_ProbNNpi < 0.5) return false;
    return true;
    }

    bool CutB0(){
    double VertexFit_Chi2 = AnaIO::B0_ENDVERTEX_CHI2/AnaIO::B0_ENDVERTEX_NDOF;
    if(VertexFit_Chi2 > 6 || AnaIO::B0_DIRA_OWNPV < 0.999) return false;
    return true;
    }

    bool CutDsResonance(double KKmass, double PiKmass){
    if(abs(KKmass - 1019) > 20 && abs(PiKmass - 892) > 90) return false;
    return true;
    }

//end of namespace
}

#endif