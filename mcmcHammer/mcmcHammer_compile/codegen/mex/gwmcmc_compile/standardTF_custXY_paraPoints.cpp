//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// standardTF_custXY_paraPoints.cpp
//
// Code generation for function 'standardTF_custXY_paraPoints'
//

// Include files
#include "standardTF_custXY_paraPoints.h"
#include "backSort.h"
#include "callReflectivity.h"
#include "chiSquared.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "gwmcmc_compile_mexutil.h"
#include "gwmcmc_compile_types.h"
#include "loopCppCustlayWrapper_XYPoints.h"
#include "resampleLayers.h"
#include "rt_nonfinite.h"
#include "shiftdata.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo gj_emlrtRSI{
    69,                             // lineNo
    "standardTF_custXY_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pathName
};

static emlrtRSInfo hj_emlrtRSI{
    73,                             // lineNo
    "standardTF_custXY_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pathName
};

static emlrtRSInfo ij_emlrtRSI{
    81,                             // lineNo
    "standardTF_custXY_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pathName
};

static emlrtRSInfo jj_emlrtRSI{
    89,                             // lineNo
    "standardTF_custXY_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pathName
};

static emlrtRSInfo kj_emlrtRSI{
    92,                             // lineNo
    "standardTF_custXY_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pathName
};

static emlrtRSInfo lj_emlrtRSI{
    96,                             // lineNo
    "standardTF_custXY_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pathName
};

static emlrtRSInfo mj_emlrtRSI{
    98,                             // lineNo
    "standardTF_custXY_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pathName
};

static emlrtRSInfo nj_emlrtRSI{
    103,                            // lineNo
    "standardTF_custXY_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pathName
};

static emlrtRSInfo oj_emlrtRSI{
    104,                            // lineNo
    "standardTF_custXY_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pathName
};

static emlrtMCInfo h_emlrtMCI{
    23,                                  // lineNo
    2,                                   // colNo
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m" // pName
};

static emlrtDCInfo ud_emlrtDCI{
    34,                             // lineNo
    18,                             // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    1                                                   // checkKind
};

static emlrtDCInfo vd_emlrtDCI{
    36,                             // lineNo
    20,                             // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    1                                                   // checkKind
};

static emlrtRTEInfo pd_emlrtRTEI{
    40,                             // lineNo
    9,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo qd_emlrtRTEI{
    46,                             // lineNo
    9,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo rd_emlrtRTEI{
    52,                             // lineNo
    9,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo sd_emlrtRTEI{
    56,                             // lineNo
    9,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo td_emlrtRTEI{
    60,                             // lineNo
    9,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo ud_emlrtRTEI{
    80,                             // lineNo
    9,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtBCInfo yu_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    92,                             // lineNo
    34,                             // colNo
    "sfs",                          // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo av_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    92,                             // lineNo
    45,                             // colNo
    "qshifts",                      // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo bv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    92,                             // lineNo
    60,                             // colNo
    "dataPresent",                  // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo cv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    96,                             // lineNo
    45,                             // colNo
    "nbas",                         // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo dv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    96,                             // lineNo
    53,                             // colNo
    "nbss",                         // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo ev_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    96,                             // lineNo
    115,                            // colNo
    "outSsubs",                     // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo fv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    96,                             // lineNo
    125,                            // colNo
    "resols",                       // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo gv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    98,                             // lineNo
    94,                             // colNo
    "backgs",                       // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo hv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    98,                             // lineNo
    107,                            // colNo
    "backsType",                    // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo iv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    103,                            // lineNo
    20,                             // colNo
    "dataPresent",                  // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo jv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    104,                            // lineNo
    14,                             // colNo
    "chis",                         // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo kv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    106,                            // lineNo
    14,                             // colNo
    "chis",                         // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo lv_emlrtBCI{
    0,                              // iFirst
    0,                              // iLast
    92,                             // lineNo
    71,                             // colNo
    "allData",                      // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo mv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    93,                             // lineNo
    18,                             // colNo
    "shifted_data",                 // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo nv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    100,                            // lineNo
    18,                             // colNo
    "reflectivity",                 // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtDCInfo wd_emlrtDCI{
    9,                                   // lineNo
    23,                                  // colNo
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m", // pName
    1        // checkKind
};

static emlrtDCInfo xd_emlrtDCI{
    11,                                  // lineNo
    20,                                  // colNo
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m", // pName
    1        // checkKind
};

static emlrtRTEInfo vd_emlrtRTEI{
    13,                                  // lineNo
    10,                                  // colNo
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m" // pName
};

static emlrtRTEInfo wd_emlrtRTEI{
    28,                                  // lineNo
    10,                                  // colNo
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m" // pName
};

static emlrtBCInfo ov_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    29,                                  // lineNo
    30,                                  // colNo
    "tempAllLayers",                     // aName
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m", // pName
    0        // checkKind
};

static emlrtBCInfo pv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    101,                            // lineNo
    16,                             // colNo
    "Simulation",                   // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo qv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    41,                             // lineNo
    18,                             // colNo
    "reflectivity",                 // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo rv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    47,                             // lineNo
    16,                             // colNo
    "Simulation",                   // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo sv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    53,                             // lineNo
    15,                             // colNo
    "allLayers",                    // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo tv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    57,                             // lineNo
    13,                             // colNo
    "sldProf",                      // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo uv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    61,                             // lineNo
    17,                             // colNo
    "sldProfiles",                  // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo vv_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    14,                                  // lineNo
    16,                                  // colNo
    "allLayers",                         // aName
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m", // pName
    0        // checkKind
};

static emlrtBCInfo wv_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    15,                                  // lineNo
    20,                                  // colNo
    "tempAllLayers",                     // aName
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m", // pName
    0        // checkKind
};

static emlrtBCInfo xv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    86,                             // lineNo
    30,                             // colNo
    "sldProf",                      // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo yv_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    86,                             // lineNo
    17,                             // colNo
    "sldProfiles",                  // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo aw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    90,                             // lineNo
    15,                             // colNo
    "layerSlds",                    // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo bw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    91,                             // lineNo
    15,                             // colNo
    "allLayers",                    // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo cw_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    34,                                  // lineNo
    16,                                  // colNo
    "allLayers",                         // aName
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m", // pName
    0        // checkKind
};

static emlrtDCInfo yd_emlrtDCI{
    26,                             // lineNo
    17,                             // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    1                                                   // checkKind
};

static emlrtDCInfo ae_emlrtDCI{
    25,                             // lineNo
    16,                             // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    1                                                   // checkKind
};

static emlrtDCInfo be_emlrtDCI{
    25,                             // lineNo
    16,                             // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    4                                                   // checkKind
};

static emlrtDCInfo ce_emlrtDCI{
    31,                             // lineNo
    1,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    1                                                   // checkKind
};

static emlrtDCInfo de_emlrtDCI{
    32,                             // lineNo
    1,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    1                                                   // checkKind
};

static emlrtBCInfo dw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    34,                             // lineNo
    36,                             // colNo
    "layerSlds",                    // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo ew_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    34,                             // lineNo
    36,                             // colNo
    "shifted_data",                 // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo fw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    34,                             // lineNo
    36,                             // colNo
    "reflectivity",                 // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo gw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    34,                             // lineNo
    36,                             // colNo
    "Simulation",                   // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo hw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    34,                             // lineNo
    36,                             // colNo
    "allLayers",                    // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo iw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    34,                             // lineNo
    36,                             // colNo
    "sldProf",                      // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo jw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    34,                             // lineNo
    36,                             // colNo
    "sldProfiles",                  // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo kw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    69,                             // lineNo
    5,                              // colNo
    "tempAllLayers",                // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo lw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    69,                             // lineNo
    5,                              // colNo
    "allLayers",                    // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo mw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    81,                             // lineNo
    79,                             // colNo
    "cBacks",                       // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo nw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    81,                             // lineNo
    90,                             // colNo
    "cShifts",                      // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo ow_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    81,                             // lineNo
    101,                            // colNo
    "cScales",                      // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo pw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    81,                             // lineNo
    110,                            // colNo
    "cNbas",                        // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo qw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    81,                             // lineNo
    119,                            // colNo
    "cNbss",                        // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo rw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    81,                             // lineNo
    127,                            // colNo
    "cRes",                         // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo sw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    81,                             // lineNo
    13,                             // colNo
    "backgs",                       // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo tw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    81,                             // lineNo
    24,                             // colNo
    "qshifts",                      // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo uw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    81,                             // lineNo
    31,                             // colNo
    "sfs",                          // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo vw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    81,                             // lineNo
    39,                             // colNo
    "nbas",                         // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo ww_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    81,                             // lineNo
    47,                             // colNo
    "nbss",                         // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo xw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    81,                             // lineNo
    57,                             // colNo
    "resols",                       // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo yw_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    86,                             // lineNo
    5,                              // colNo
    "sldProfiles",                  // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo ax_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    15,                                  // lineNo
    6,                                   // colNo
    "tempAllLayers",                     // aName
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m", // pName
    0        // checkKind
};

static emlrtBCInfo bx_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    89,                             // lineNo
    43,                             // colNo
    "sldProfiles",                  // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo cx_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    90,                             // lineNo
    5,                              // colNo
    "layerSlds",                    // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo dx_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    34,                                  // lineNo
    6,                                   // colNo
    "allLayers",                         // aName
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m", // pName
    0        // checkKind
};

static emlrtBCInfo ex_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    91,                             // lineNo
    5,                              // colNo
    "allLayers",                    // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo fx_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    14,                                  // lineNo
    6,                                   // colNo
    "allLayers",                         // aName
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m", // pName
    0        // checkKind
};

static emlrtBCInfo gx_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    61,                             // lineNo
    5,                              // colNo
    "sldProfiles",                  // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo hx_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    57,                             // lineNo
    5,                              // colNo
    "sldProf",                      // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo ix_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    53,                             // lineNo
    5,                              // colNo
    "allLayers",                    // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo jx_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    47,                             // lineNo
    5,                              // colNo
    "Simulation",                   // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo kx_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    41,                             // lineNo
    5,                              // colNo
    "reflectivity",                 // aName
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m", // pName
    0                                                   // checkKind
};

static emlrtRTEInfo er_emlrtRTEI{
    25,                             // lineNo
    10,                             // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo fr_emlrtRTEI{
    31,                             // lineNo
    1,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo gr_emlrtRTEI{
    32,                             // lineNo
    1,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo hr_emlrtRTEI{
    3,                              // lineNo
    18,                             // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo ir_emlrtRTEI{
    34,                             // lineNo
    36,                             // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo jr_emlrtRTEI{
    41,                             // lineNo
    5,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo kr_emlrtRTEI{
    47,                             // lineNo
    5,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo lr_emlrtRTEI{
    53,                             // lineNo
    5,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo mr_emlrtRTEI{
    57,                             // lineNo
    5,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo nr_emlrtRTEI{
    61,                             // lineNo
    5,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo or_emlrtRTEI{
    69,                             // lineNo
    5,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo pr_emlrtRTEI{
    9,                                   // lineNo
    41,                                  // colNo
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m" // pName
};

static emlrtRTEInfo qr_emlrtRTEI{
    14,                                  // lineNo
    6,                                   // colNo
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m" // pName
};

static emlrtRTEInfo rr_emlrtRTEI{
    15,                                  // lineNo
    6,                                   // colNo
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m" // pName
};

static emlrtRTEInfo sr_emlrtRTEI{
    34,                                  // lineNo
    6,                                   // colNo
    "loopMatalbCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m" // pName
};

static emlrtRTEInfo tr_emlrtRTEI{
    73,                             // lineNo
    6,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo ur_emlrtRTEI{
    86,                             // lineNo
    5,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo vr_emlrtRTEI{
    90,                             // lineNo
    5,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo wr_emlrtRTEI{
    91,                             // lineNo
    5,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo xr_emlrtRTEI{
    92,                             // lineNo
    63,                             // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo yr_emlrtRTEI{
    93,                             // lineNo
    5,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo as_emlrtRTEI{
    101,                            // lineNo
    5,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRTEInfo bs_emlrtRTEI{
    100,                            // lineNo
    5,                              // colNo
    "standardTF_custXY_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_paraPoints.m" // pName
};

static emlrtRSInfo jk_emlrtRSI{
    24,                                  // lineNo
    "loopMatalbCustlayWrapper_XYPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m" // pathName
};

static emlrtRSInfo ok_emlrtRSI{
    23,                                  // lineNo
    "loopMatalbCustlayWrapper_XYPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m" // pathName
};

static emlrtRSInfo hl_emlrtRSI{
    38,                                  // lineNo
    "loopMatalbCustlayWrapper_XYPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYPoi"
    "nts.m" // pathName
};

// Function Definitions
void standardTF_custXY_paraPoints(
    const emlrtStack *sp, const struct_T *problemDef,
    const cell_5 *problemDef_cells, const struct3_T *controls,
    coder::array<real_T, 1U> &outSsubs, coder::array<real_T, 1U> &backgs,
    coder::array<real_T, 1U> &qshifts, coder::array<real_T, 1U> &sfs,
    coder::array<real_T, 1U> &nbas, coder::array<real_T, 1U> &nbss,
    coder::array<real_T, 1U> &resols, coder::array<real_T, 1U> &chis,
    coder::array<cell_wrap_10, 1U> &reflectivity,
    coder::array<cell_wrap_10, 1U> &Simulation,
    coder::array<cell_wrap_1, 1U> &shifted_data,
    coder::array<cell_wrap_11, 1U> &layerSlds,
    coder::array<cell_wrap_1, 1U> &sldProfiles,
    coder::array<cell_wrap_1, 1U> &allLayers,
    coder::array<real_T, 1U> &allRoughs)
{
  static const int32_T iv[2]{1, 29};
  static const char_T b_cv[6]{'m', 'a', 't', 'l', 'a', 'b'};
  static const char_T b_cv1[3]{'c', 'p', 'p'};
  coder::array<cell_wrap_1, 1U> b_sldProf;
  coder::array<cell_wrap_1, 1U> sldProf;
  coder::array<cell_wrap_25, 1U> r;
  coder::array<cell_wrap_26, 1U> b_tempAllLayers;
  coder::array<real_T, 2U> Simul;
  coder::array<real_T, 2U> b_problemDef_cells;
  coder::array<real_T, 2U> b_reflect;
  coder::array<real_T, 2U> layerSld;
  coder::array<real_T, 2U> shifted_dat;
  coder::array<real_T, 1U> c_reflect;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *tempAllLayers;
  const mxArray *tempAllRoughs;
  const mxArray *y;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  int32_T reflect;
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Multi threaded version of the custom XY profile over reflectivity points
  //  for standardTF reflectivity calculation.
  //  Extract individual cell arrays
  //  Splits up the master input list of all arrays into separate arrays
  //  The min input array 'problemDef_cells' is a master array where
  //  all the cell arrays are grouped together. There are
  //  repeatLayers      - controls repeating of the layers stack
  //  allData           - Array of all the data arrays
  //  dataLimits        - Min max limits in q for the data arrays
  //  simLimits         - Limits in Q for the reflkectivity simulations
  //  Layers details    - Master array of all available layers
  //  contrastLayers    - Which specific combination of arrays are needed for
  //                      each contrast.
  //  Custom files      - Filenames and path for any custom files used
  //  Extract individual parameters from problemDef struct
  // Extract individual parameters from problemDef
  // Pre-Allocation...
  if (!(problemDef->numberOfContrasts >= 0.0)) {
    emlrtNonNegativeCheckR2012b(problemDef->numberOfContrasts, &be_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &ae_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  backgs.set_size(&er_emlrtRTEI, sp,
                  static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &yd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(problemDef->numberOfContrasts);
  allRoughs.set_size(&fr_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &ce_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T i1{0}; i1 < loop_ub; i1++) {
    allRoughs[i1] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &de_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  outSsubs.set_size(&gr_emlrtRTEI, sp,
                    static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &de_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T i1{0}; i1 < loop_ub; i1++) {
    outSsubs[i1] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &ud_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  reflect = static_cast<int32_T>(problemDef->numberOfContrasts);
  layerSlds.set_size(&hr_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, layerSlds.size(0) - 1, &dw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i1].f1.set_size(&hr_emlrtRTEI, sp, 0, layerSlds[i1].f1.size(1));
    if (i1 > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, layerSlds.size(0) - 1, &dw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i1].f1.set_size(&hr_emlrtRTEI, sp, layerSlds[i1].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &vd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  shifted_data.set_size(&hr_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, shifted_data.size(0) - 1,
                                    &ew_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i1].f1.set_size(&hr_emlrtRTEI, sp, 0,
                                 shifted_data[i1].f1.size(1));
    if (i1 > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, shifted_data.size(0) - 1,
                                    &ew_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i1].f1.set_size(&hr_emlrtRTEI, sp, shifted_data[i1].f1.size(0),
                                 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  reflectivity.set_size(&hr_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, reflectivity.size(0) - 1,
                                    &fw_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i1].f1.set_size(&hr_emlrtRTEI, sp, 0,
                                 reflectivity[i1].f1.size(1));
    if (i1 > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, reflectivity.size(0) - 1,
                                    &fw_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i1].f1.set_size(&hr_emlrtRTEI, sp, reflectivity[i1].f1.size(0),
                                 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &pd_emlrtRTEI,
      (emlrtConstCTX)sp);
  reflectivity.set_size(&ir_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &qv_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&jr_emlrtRTEI, sp, 2,
                                  reflectivity[b_i].f1.size(1));
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &qv_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&jr_emlrtRTEI, sp,
                                  reflectivity[b_i].f1.size(0), 2);
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &qv_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[0] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &kx_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[1] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &kx_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[2] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &kx_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  // coder.varsize('reflectivity{:}',[10000 2],[1 0]);
  Simulation.set_size(&hr_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, Simulation.size(0) - 1, &gw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i1].f1.set_size(&hr_emlrtRTEI, sp, 0, Simulation[i1].f1.size(1));
    if (i1 > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, Simulation.size(0) - 1, &gw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i1].f1.set_size(&hr_emlrtRTEI, sp, Simulation[i1].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &qd_emlrtRTEI,
      (emlrtConstCTX)sp);
  Simulation.set_size(&ir_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &rv_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&kr_emlrtRTEI, sp, 2,
                                Simulation[b_i].f1.size(1));
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &rv_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&kr_emlrtRTEI, sp, Simulation[b_i].f1.size(0),
                                2);
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &rv_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[0] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &jx_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[1] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &jx_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[2] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &jx_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  // coder.varsize('Simulation{:}',[10000 2],[1 0]);
  allLayers.set_size(&hr_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, allLayers.size(0) - 1, &hw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i1].f1.set_size(&hr_emlrtRTEI, sp, 0, allLayers[i1].f1.size(1));
    if (i1 > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, allLayers.size(0) - 1, &hw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i1].f1.set_size(&hr_emlrtRTEI, sp, allLayers[i1].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &rd_emlrtRTEI,
      (emlrtConstCTX)sp);
  allLayers.set_size(&ir_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &sv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&lr_emlrtRTEI, sp, 2, allLayers[b_i].f1.size(1));
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &sv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&lr_emlrtRTEI, sp, allLayers[b_i].f1.size(0), 1);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &sv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[0] = 1.0;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &ix_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[1] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  sldProf.set_size(&hr_emlrtRTEI, sp,
                   static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, sldProf.size(0) - 1, &iw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProf[i1].f1.set_size(&hr_emlrtRTEI, sp, 0, sldProf[i1].f1.size(1));
    if (i1 > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, sldProf.size(0) - 1, &iw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProf[i1].f1.set_size(&hr_emlrtRTEI, sp, sldProf[i1].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &sd_emlrtRTEI,
      (emlrtConstCTX)sp);
  sldProf.set_size(&ir_emlrtRTEI, sp,
                   static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &tv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProf[b_i].f1.set_size(&mr_emlrtRTEI, sp, 2, sldProf[b_i].f1.size(1));
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &tv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProf[b_i].f1.set_size(&mr_emlrtRTEI, sp, sldProf[b_i].f1.size(0), 1);
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &tv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProf[b_i].f1[0] = 1.0;
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &hx_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProf[b_i].f1[1] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  sldProfiles.set_size(&hr_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, sldProfiles.size(0) - 1,
                                    &jw_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[i1].f1.set_size(&hr_emlrtRTEI, sp, 0,
                                sldProfiles[i1].f1.size(1));
    if (i1 > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, sldProfiles.size(0) - 1,
                                    &jw_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[i1].f1.set_size(&hr_emlrtRTEI, sp, sldProfiles[i1].f1.size(0),
                                0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &td_emlrtRTEI,
      (emlrtConstCTX)sp);
  sldProfiles.set_size(&ir_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &uv_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&nr_emlrtRTEI, sp, 2,
                                 sldProfiles[b_i].f1.size(1));
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &uv_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&nr_emlrtRTEI, sp, sldProfiles[b_i].f1.size(0),
                                 1);
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &uv_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[0] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &gx_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[1] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  // coder.varsize('allLayers{:}',[10000 3],[1 1]);
  //  Depending on custom layer language we change the functions used
  //  so if there are multiple language models we should have a variable that
  //  seeks what language model is being used
  b_bool = false;
  if ((problemDef_cells->f14[0].f1[1].f1.size(0) == 1) &&
      (problemDef_cells->f14[0].f1[1].f1.size(1) == 6)) {
    reflect = 0;
    do {
      exitg1 = 0;
      if (reflect < 6) {
        if (problemDef_cells->f14[0].f1[1].f1[reflect] != b_cv[reflect]) {
          exitg1 = 1;
        } else {
          reflect++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  if (b_bool) {
    reflect = 0;
  } else {
    b_bool = false;
    if ((problemDef_cells->f14[0].f1[1].f1.size(0) == 1) &&
        (problemDef_cells->f14[0].f1[1].f1.size(1) == 3)) {
      reflect = 0;
      do {
        exitg1 = 0;
        if (reflect < 3) {
          if (problemDef_cells->f14[0].f1[1].f1[reflect] != b_cv1[reflect]) {
            exitg1 = 1;
          } else {
            reflect++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      reflect = 1;
    } else {
      reflect = -1;
    }
  }
  switch (reflect) {
  case 0:
    //  Call the Matlab parallel loop to process the custom models.....
    st.site = &gj_emlrtRSI;
    tempAllLayers = nullptr;
    tempAllRoughs = nullptr;
    //  Wrapper function for calling 'loopMatlabCustomLayers'. This wrapper is
    //  necessary to deal with typedef problems for the coder if feval is used
    //  directly from the main function
    if (problemDef->numberOfContrasts != i) {
      emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &wd_emlrtDCI, &st);
    }
    b_tempAllLayers.set_size(
        &or_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      if (i1 > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, b_tempAllLayers.size(0) - 1,
                                      &kw_emlrtBCI, &st);
      }
      b_tempAllLayers[i1].f1.set_size(&or_emlrtRTEI, &st, 0,
                                      b_tempAllLayers[i1].f1.size(1));
      if (i1 > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, b_tempAllLayers.size(0) - 1,
                                      &kw_emlrtBCI, &st);
      }
      b_tempAllLayers[i1].f1.set_size(&or_emlrtRTEI, &st,
                                      b_tempAllLayers[i1].f1.size(0), 0);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    sldProf.set_size(&or_emlrtRTEI, &st,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      if (i1 > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, sldProf.size(0) - 1, &lw_emlrtBCI,
                                      &st);
      }
      sldProf[i1].f1.set_size(&or_emlrtRTEI, &st, 0, sldProf[i1].f1.size(1));
      if (i1 > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, sldProf.size(0) - 1, &lw_emlrtBCI,
                                      &st);
      }
      sldProf[i1].f1.set_size(&or_emlrtRTEI, &st, sldProf[i1].f1.size(0), 0);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    if (problemDef->numberOfContrasts != i) {
      emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &xd_emlrtDCI, &st);
    }
    emlrtForLoopVectorCheckR2021a(
        1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
        static_cast<int32_T>(problemDef->numberOfContrasts), &vd_emlrtRTEI,
        &st);
    sldProf.set_size(&pr_emlrtRTEI, &st,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
    b_tempAllLayers.set_size(
        &pr_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &vv_emlrtBCI,
                                      &st);
      }
      sldProf[b_i].f1.set_size(&qr_emlrtRTEI, &st, 1, sldProf[b_i].f1.size(1));
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &vv_emlrtBCI,
                                      &st);
      }
      sldProf[b_i].f1.set_size(&qr_emlrtRTEI, &st, sldProf[b_i].f1.size(0), 2);
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &vv_emlrtBCI,
                                      &st);
      }
      sldProf[b_i].f1[0] = 1.0;
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &fx_emlrtBCI,
                                      &st);
      }
      sldProf[b_i].f1[1] = 1.0;
      //  Type def as double (size not important)
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &wv_emlrtBCI, &st);
      }
      b_tempAllLayers[b_i].f1.set_size(&rr_emlrtRTEI, &st, 1,
                                       b_tempAllLayers[b_i].f1.size(1));
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &wv_emlrtBCI, &st);
      }
      b_tempAllLayers[b_i].f1.set_size(&rr_emlrtRTEI, &st,
                                       b_tempAllLayers[b_i].f1.size(0), 5);
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &wv_emlrtBCI, &st);
      }
      for (i = 0; i < 5; i++) {
        if (b_i > b_tempAllLayers.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                        &ax_emlrtBCI, &st);
        }
        b_tempAllLayers[b_i].f1[i] = 0.0;
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    //  Call the Matlab parallel loop for the custom models.....
    //  We do this using feval, which automatically makes this function call
    //  only extrinsic... the loop is then handled in the matlab file (using
    //  paralell computing toolbox)
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 29, m, &cv2[0]);
    emlrtAssign(&y, m);
    b_y = nullptr;
    m = emlrtCreateDoubleScalar(problemDef->numberOfContrasts);
    emlrtAssign(&b_y, m);
    b_st.site = &ok_emlrtRSI;
    c_st.site = &jk_emlrtRSI;
    feval(&b_st, y, emlrt_marshallOut(problemDef->contrastBacks),
          emlrt_marshallOut(problemDef->contrastShifts),
          emlrt_marshallOut(problemDef->contrastScales),
          emlrt_marshallOut(problemDef->contrastNbas),
          emlrt_marshallOut(problemDef->contrastNbss),
          emlrt_marshallOut(problemDef->contrastRes),
          emlrt_marshallOut(problemDef->backs),
          emlrt_marshallOut(problemDef->shifts),
          emlrt_marshallOut(problemDef->sf), emlrt_marshallOut(problemDef->nba),
          emlrt_marshallOut(problemDef->nbs),
          emlrt_marshallOut(problemDef->res),
          emlrt_marshallOut(problemDef->contrastCustomFiles), b_y,
          emlrt_marshallOut(&c_st, &problemDef_cells->f14[0]),
          emlrt_marshallOut(problemDef->params), &h_emlrtMCI, &tempAllLayers,
          &tempAllRoughs);
    b_st.site = &ok_emlrtRSI;
    emlrt_marshallIn(&b_st, emlrtAlias(tempAllLayers), "tempAllLayers",
                     b_tempAllLayers);
    //  All the following is intended to be casting from mxArray's to doubles.
    //  I'm not sure if all of this is necessary, but it compiles...
    emlrtForLoopVectorCheckR2021a(
        1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
        static_cast<int32_T>(problemDef->numberOfContrasts), &wd_emlrtRTEI,
        &st);
    sldProf.set_size(&pr_emlrtRTEI, &st,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &ov_emlrtBCI, &st);
      }
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &cw_emlrtBCI,
                                      &st);
      }
      sldProf[b_i].f1.set_size(&sr_emlrtRTEI, &st,
                               b_tempAllLayers[b_i].f1.size(0),
                               sldProf[b_i].f1.size(1));
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &cw_emlrtBCI,
                                      &st);
      }
      sldProf[b_i].f1.set_size(&sr_emlrtRTEI, &st, sldProf[b_i].f1.size(0),
                               b_tempAllLayers[b_i].f1.size(1));
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &cw_emlrtBCI,
                                      &st);
      }
      reflect =
          b_tempAllLayers[b_i].f1.size(0) * b_tempAllLayers[b_i].f1.size(1);
      for (i = 0; i < reflect; i++) {
        if (b_i > sldProf.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1,
                                        &dx_emlrtBCI, &st);
        }
        sldProf[b_i].f1[i] = b_tempAllLayers[b_i].f1[i];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    // allLayers = tempAllLayers;
    b_st.site = &hl_emlrtRSI;
    emlrt_marshallIn(&b_st, emlrtAlias(tempAllRoughs), "tempAllRoughs",
                     allRoughs);
    emlrtDestroyArray(&tempAllLayers);
    emlrtDestroyArray(&tempAllRoughs);
    //
    break;
  case 1:
    st.site = &hj_emlrtRSI;
    loopCppCustlayWrapper_XYPoints(
        &st, problemDef->nba, problemDef->nbs, problemDef->numberOfContrasts,
        &problemDef_cells->f14[0], problemDef->params, r, allRoughs);
    b_sldProf.set_size(&tn_emlrtRTEI, sp, r.size(0));
    i = r.size(0);
    for (int32_T i1{0}; i1 < i; i1++) {
      b_sldProf[i1].f1.set_size(&tn_emlrtRTEI, sp, r[i1].f1.size[0],
                                r[i1].f1.size[1]);
      reflect = r[i1].f1.size[0] * r[i1].f1.size[1];
      for (int32_T b_i{0}; b_i < reflect; b_i++) {
        b_sldProf[i1].f1[b_i] = r[i1].f1.data[b_i];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    sldProf.set_size(&tr_emlrtRTEI, sp, b_sldProf.size(0));
    reflect = b_sldProf.size(0);
    for (i = 0; i < reflect; i++) {
      sldProf[i] = b_sldProf[i];
    }
    break;
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &ud_emlrtRTEI,
      (emlrtConstCTX)sp);
  qshifts.set_size(&er_emlrtRTEI, sp,
                   static_cast<int32_T>(problemDef->numberOfContrasts));
  sfs.set_size(&er_emlrtRTEI, sp,
               static_cast<int32_T>(problemDef->numberOfContrasts));
  nbas.set_size(&er_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  nbss.set_size(&er_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  resols.set_size(&er_emlrtRTEI, sp,
                  static_cast<int32_T>(problemDef->numberOfContrasts));
  layerSlds.set_size(&ir_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  allLayers.set_size(&ir_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  shifted_data.set_size(&ir_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  chis.set_size(&er_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  Simulation.set_size(&ir_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  reflectivity.set_size(&ir_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastBacks.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastBacks.size(1), &mw_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastShifts.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastShifts.size(1), &nw_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastScales.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastScales.size(1), &ow_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastNbas.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastNbas.size(1), &pw_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastNbss.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastNbss.size(1), &qw_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastRes.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastRes.size(1), &rw_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         backgs.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          backgs.size(0), &sw_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         qshifts.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          qshifts.size(0), &tw_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) > sfs.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1, sfs.size(0),
          &uw_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         nbas.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          nbas.size(0), &vw_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         nbss.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          nbss.size(0), &ww_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         resols.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          resols.size(0), &xw_emlrtBCI, (emlrtConstCTX)sp);
    }
    st.site = &ij_emlrtRSI;
    backSort(&st, problemDef->contrastBacks[b_i],
             problemDef->contrastShifts[b_i], problemDef->contrastScales[b_i],
             problemDef->contrastNbas[b_i], problemDef->contrastNbss[b_i],
             problemDef->contrastRes[b_i], problemDef->backs,
             problemDef->shifts, problemDef->sf, problemDef->nba,
             problemDef->nbs, problemDef->res, &d, &d1, &d2, &d3, &d4, &d5);
    resols[b_i] = d5;
    nbss[b_i] = d4;
    nbas[b_i] = d3;
    sfs[b_i] = d2;
    qshifts[b_i] = d1;
    backgs[b_i] = d;
    //      thisCustomFile = customFiles{cCustFiles(i)};
    //      [sldProfile,allRoughs(i)] =
    //      call_customLayers(params,i,thisCustomFile,nbas,nbss(i),numberOfContrasts);
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &xv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &yv_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&ur_emlrtRTEI, sp, sldProf[b_i].f1.size(0),
                                 sldProfiles[b_i].f1.size(1));
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &xv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &yv_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&ur_emlrtRTEI, sp, sldProfiles[b_i].f1.size(0),
                                 sldProf[b_i].f1.size(1));
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &xv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &yv_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflect = sldProf[b_i].f1.size(0) * sldProf[b_i].f1.size(1);
    for (i = 0; i < reflect; i++) {
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &xv_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_i > sldProfiles.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                      &yw_emlrtBCI, (emlrtConstCTX)sp);
      }
      sldProfiles[b_i].f1[i] = sldProf[b_i].f1[i];
    }
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &bx_emlrtBCI, (emlrtConstCTX)sp);
    }
    st.site = &jj_emlrtRSI;
    b_resampleLayers(&st, sldProfiles[b_i].f1, controls->resamPars, layerSld);
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &aw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&vr_emlrtRTEI, sp, layerSld.size(0),
                               layerSlds[b_i].f1.size(1));
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &aw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&vr_emlrtRTEI, sp, layerSlds[b_i].f1.size(0), 3);
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &aw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    reflect = layerSld.size(0) * 3;
    for (i = 0; i < reflect; i++) {
      if (b_i > layerSlds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1,
                                      &cx_emlrtBCI, (emlrtConstCTX)sp);
      }
      layerSlds[b_i].f1[i] = layerSld[i];
    }
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &bw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&wr_emlrtRTEI, sp, layerSld.size(0),
                               allLayers[b_i].f1.size(1));
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &bw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&wr_emlrtRTEI, sp, allLayers[b_i].f1.size(0), 3);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &bw_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    reflect = layerSld.size(0) * 3;
    for (i = 0; i < reflect; i++) {
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &ex_emlrtBCI, (emlrtConstCTX)sp);
      }
      allLayers[b_i].f1[i] = layerSld[i];
    }
    if (b_i > 0) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, 0, &lv_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (sfs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, sfs.size(0), &yu_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (qshifts.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, qshifts.size(0), &av_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (problemDef->dataPresent.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->dataPresent.size(1),
                                    &bv_emlrtBCI, (emlrtConstCTX)sp);
    }
    b_problemDef_cells.set_size(&xr_emlrtRTEI, sp,
                                problemDef_cells->f2[0].f1.size(0),
                                problemDef_cells->f2[0].f1.size(1));
    reflect = problemDef_cells->f2[0].f1.size(0) *
                  problemDef_cells->f2[0].f1.size(1) -
              1;
    for (i = 0; i <= reflect; i++) {
      b_problemDef_cells[i] = problemDef_cells->f2[0].f1[i];
    }
    st.site = &kj_emlrtRSI;
    shiftdata(&st, sfs[0], qshifts[0], problemDef->dataPresent[0],
              b_problemDef_cells, problemDef_cells->f3[0].f1,
              problemDef_cells->f4[0].f1, shifted_dat);
    if (shifted_data.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, shifted_data.size(0) - 1,
                                    &mv_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[0].f1.set_size(&yr_emlrtRTEI, sp, shifted_dat.size(0),
                                shifted_dat.size(1));
    reflect = shifted_dat.size(0) * shifted_dat.size(1);
    for (i = 0; i < reflect; i++) {
      shifted_data[0].f1[i] = shifted_dat[i];
    }
    if (loop_ub < 1) {
      emlrtDynamicBoundsCheckR2012b(
          1, 1, static_cast<int32_T>(problemDef->numberOfContrasts),
          &ev_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (nbas.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nbas.size(0), &cv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (nbss.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nbss.size(0), &dv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (resols.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, resols.size(0), &fv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &lj_emlrtRSI;
    b_callReflectivity(&st, nbas[0], nbss[0], problemDef_cells->f4[0].f1,
                       problemDef_cells->f1[0].f1, shifted_dat, layerSld, 0.0,
                       resols[0], b_reflect, Simul);
    st.site = &mj_emlrtRSI;
    if (backgs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, backgs.size(0), &gv_emlrtBCI, &st);
    }
    if (problemDef->contrastBacksType.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->contrastBacksType.size(1),
                                    &hv_emlrtBCI, &st);
    }
    if (Simulation.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, Simulation.size(0) - 1, &pv_emlrtBCI,
                                    &st);
    }
    Simulation[0].f1.set_size(&as_emlrtRTEI, &st, Simul.size(0), 2);
    reflect = Simul.size(0) * 2;
    for (i = 0; i < reflect; i++) {
      Simulation[0].f1[i] = Simul[i];
    }
    if (problemDef->contrastBacksType[0] !=
        static_cast<int32_T>(
            muDoubleScalarFloor(problemDef->contrastBacksType[0]))) {
      emlrtIntegerCheckR2012b(problemDef->contrastBacksType[0], &gb_emlrtDCI,
                              &st);
    }
    switch (static_cast<int32_T>(problemDef->contrastBacksType[0])) {
    case 1:
      // Add background to the simulation
      reflect = b_reflect.size(0);
      emlrtSubAssignSizeCheckR2012b(b_reflect.size(), 1, b_reflect.size(), 1,
                                    &h_emlrtECI, &st);
      c_reflect.set_size(&fi_emlrtRTEI, &st, b_reflect.size(0));
      for (i = 0; i < reflect; i++) {
        c_reflect[i] = b_reflect[i + b_reflect.size(0)] + backgs[0];
      }
      reflect = c_reflect.size(0);
      for (i = 0; i < reflect; i++) {
        b_reflect[i + b_reflect.size(0)] = c_reflect[i];
      }
      if (Simulation.size(0) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, Simulation.size(0) - 1,
                                      &pv_emlrtBCI, &st);
      }
      emlrtSubAssignSizeCheckR2012b(Simulation[0].f1.size(), 1,
                                    Simulation[0].f1.size(), 1, &i_emlrtECI,
                                    &st);
      if (Simulation.size(0) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, Simulation.size(0) - 1,
                                      &pv_emlrtBCI, &st);
      }
      reflect = Simulation[0].f1.size(0);
      c_reflect.set_size(&gi_emlrtRTEI, &st, Simulation[0].f1.size(0));
      for (i = 0; i < reflect; i++) {
        c_reflect[i] =
            Simulation[0].f1[i + Simulation[0].f1.size(0)] + backgs[0];
      }
      reflect = c_reflect.size(0);
      for (i = 0; i < reflect; i++) {
        Simulation[0].f1[i + Simulation[0].f1.size(0)] = c_reflect[i];
      }
      break;
    case 2:
      //          %Subtract the background from the data..
      if (shifted_dat.size(1) < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, shifted_dat.size(1), &bh_emlrtBCI,
                                      &st);
      }
      emlrtSubAssignSizeCheckR2012b(shifted_dat.size(), 1, shifted_dat.size(),
                                    1, &j_emlrtECI, &st);
      c_reflect.set_size(&hi_emlrtRTEI, &st, shifted_dat.size(0));
      reflect = shifted_dat.size(0);
      for (i = 0; i < reflect; i++) {
        c_reflect[i] = shifted_dat[i + shifted_dat.size(0)] - backgs[0];
      }
      reflect = c_reflect.size(0);
      for (i = 0; i < reflect; i++) {
        shifted_dat[i + shifted_dat.size(0)] = c_reflect[i];
      }
      // shifted_dat(:,3) = shifted_dat(:,3) - backg;
      break;
    }
    if (reflectivity.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, reflectivity.size(0) - 1,
                                    &nv_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[0].f1.set_size(&bs_emlrtRTEI, sp, b_reflect.size(0), 2);
    reflect = b_reflect.size(0) * 2;
    for (i = 0; i < reflect; i++) {
      reflectivity[0].f1[i] = b_reflect[i];
    }
    if (problemDef->dataPresent.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->dataPresent.size(1),
                                    &iv_emlrtBCI, (emlrtConstCTX)sp);
    }
    st.site = &nj_emlrtRSI;
    if (muDoubleScalarIsNaN(problemDef->dataPresent[0])) {
      emlrtErrorWithMessageIdR2018a(&st, &ld_emlrtRTEI, "MATLAB:nologicalnan",
                                    "MATLAB:nologicalnan", 0);
    }
    if (problemDef->dataPresent[0] != 0.0) {
      if (chis.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, chis.size(0), &jv_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      st.site = &oj_emlrtRSI;
      chis[0] = chiSquared(&st, shifted_dat, b_reflect,
                           static_cast<real_T>(problemDef->params.size(1)));
    } else {
      if (chis.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, chis.size(0), &kv_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      chis[0] = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (standardTF_custXY_paraPoints.cpp)
