#ifndef TRD_TFTracker
#define TRD_TFTracker

using namespace std;
#include "TString.h"
#include <algorithm>
#include <cmath>
#include <fstream>
#include <iostream>
#include <vector>

#include "TObject.h"

#include <TMath.h>

// for generator
#include "TCanvas.h"
#include "TFile.h"
#include "TGraph.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TNtuple.h"

#include "Ali_TRD_ST.h"
#include "Ali_TRD_ST_LinkDef.h"
#include "Math/Expression.h"
#include "Math/MConfig.h"
#include "Math/MatrixFunctions.h"
#include "Math/MatrixRepresentationsStatic.h"
#include "Math/SMatrix.h"
#include "TChain.h"
#include "TLorentzVector.h"
#include "TMath.h"
#include "TTree.h"
#include "TVector3.h"
#include <Math/BinaryOperators.h>
#include <iosfwd>

//#include <TPython.h>

//#include "TRD_Kalman_Tracking_Source.cxx"

class TRD_TFTrackMaker {
   public:
    TRD_TFTrackMaker();
    Int_t Trackfind(Ali_TRD_ST_Tracklets** Tracklets, Int_t Num_Tracklets);
    vector<vector<Double_t>> get_Kalman_helix_params();
    vector<vector<Ali_TRD_ST_Tracklets*>> get_Tracklets();

   private:
    vector<vector<Ali_TRD_ST_Tracklets*>> mFound_tracklets;
    vector<vector<Double_t>> mHelices;
};

#endif
