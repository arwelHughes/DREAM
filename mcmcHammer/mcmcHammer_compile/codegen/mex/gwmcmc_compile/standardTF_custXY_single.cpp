//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// standardTF_custXY_single.cpp
//
// Code generation for function 'standardTF_custXY_single'
//

// Include files
#include "standardTF_custXY_single.h"
#include "backSort.h"
#include "callReflectivity.h"
#include "chiSquared.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "gwmcmc_compile_mexutil.h"
#include "gwmcmc_compile_types.h"
#include "loopCppCustlayWrapper_XYSingle.h"
#include "resampleLayers.h"
#include "rt_nonfinite.h"
#include "shiftdata.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo ti_emlrtRSI{
    70,                         // lineNo
    "standardTF_custXY_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pathName
};

static emlrtRSInfo ui_emlrtRSI{
    74,                         // lineNo
    "standardTF_custXY_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pathName
};

static emlrtRSInfo vi_emlrtRSI{
    80,                         // lineNo
    "standardTF_custXY_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pathName
};

static emlrtRSInfo wi_emlrtRSI{
    84,                         // lineNo
    "standardTF_custXY_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pathName
};

static emlrtRSInfo xi_emlrtRSI{
    88,                         // lineNo
    "standardTF_custXY_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pathName
};

static emlrtRSInfo yi_emlrtRSI{
    92,                         // lineNo
    "standardTF_custXY_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pathName
};

static emlrtRSInfo aj_emlrtRSI{
    94,                         // lineNo
    "standardTF_custXY_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pathName
};

static emlrtRSInfo bj_emlrtRSI{
    99,                         // lineNo
    "standardTF_custXY_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pathName
};

static emlrtRSInfo cj_emlrtRSI{
    100,                        // lineNo
    "standardTF_custXY_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pathName
};

static emlrtMCInfo f_emlrtMCI{
    23,                                  // lineNo
    2,                                   // colNo
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m" // pName
};

static emlrtDCInfo jd_emlrtDCI{
    31,                         // lineNo
    18,                         // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo kd_emlrtDCI{
    33,                         // lineNo
    20,                         // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    1                                               // checkKind
};

static emlrtRTEInfo fd_emlrtRTEI{
    37,                         // lineNo
    9,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo gd_emlrtRTEI{
    42,                         // lineNo
    9,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo hd_emlrtRTEI{
    47,                         // lineNo
    9,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo id_emlrtRTEI{
    51,                         // lineNo
    9,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo jd_emlrtRTEI{
    56,                         // lineNo
    9,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo kd_emlrtRTEI{
    79,                         // lineNo
    9,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtBCInfo cs_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    88,                         // lineNo
    34,                         // colNo
    "sfs",                      // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ds_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    88,                         // lineNo
    45,                         // colNo
    "qshifts",                  // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo es_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    88,                         // lineNo
    60,                         // colNo
    "dataPresent",              // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo fs_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    92,                         // lineNo
    45,                         // colNo
    "nbas",                     // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo gs_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    92,                         // lineNo
    53,                         // colNo
    "nbss",                     // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo hs_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    92,                         // lineNo
    115,                        // colNo
    "outSsubs",                 // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo is_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    92,                         // lineNo
    125,                        // colNo
    "resols",                   // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo js_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    94,                         // lineNo
    94,                         // colNo
    "backgs",                   // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ks_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    94,                         // lineNo
    107,                        // colNo
    "backsType",                // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ls_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    99,                         // lineNo
    20,                         // colNo
    "dataPresent",              // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ms_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    100,                        // lineNo
    14,                         // colNo
    "chis",                     // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ns_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    102,                        // lineNo
    14,                         // colNo
    "chis",                     // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo os_emlrtBCI{
    0,                          // iFirst
    0,                          // iLast
    88,                         // lineNo
    71,                         // colNo
    "allData",                  // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ps_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    89,                         // lineNo
    18,                         // colNo
    "shifted_data",             // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo qs_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    96,                         // lineNo
    18,                         // colNo
    "reflectivity",             // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo ld_emlrtDCI{
    9,                                   // lineNo
    23,                                  // colNo
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m", // pName
    1        // checkKind
};

static emlrtDCInfo md_emlrtDCI{
    11,                                  // lineNo
    20,                                  // colNo
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m", // pName
    1        // checkKind
};

static emlrtRTEInfo md_emlrtRTEI{
    13,                                  // lineNo
    10,                                  // colNo
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m" // pName
};

static emlrtRTEInfo nd_emlrtRTEI{
    28,                                  // lineNo
    10,                                  // colNo
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m" // pName
};

static emlrtBCInfo rs_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    29,                                  // lineNo
    30,                                  // colNo
    "tempAllLayers",                     // aName
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m", // pName
    0        // checkKind
};

static emlrtBCInfo ss_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    97,                         // lineNo
    16,                         // colNo
    "Simulation",               // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ts_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    38,                         // lineNo
    18,                         // colNo
    "reflectivity",             // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo us_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    43,                         // lineNo
    16,                         // colNo
    "Simulation",               // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo vs_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    48,                         // lineNo
    15,                         // colNo
    "allLayers",                // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ws_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    52,                         // lineNo
    13,                         // colNo
    "sldProf",                  // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo xs_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    57,                         // lineNo
    17,                         // colNo
    "sldProfiles",              // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ys_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    14,                                  // lineNo
    16,                                  // colNo
    "allLayers",                         // aName
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m", // pName
    0        // checkKind
};

static emlrtBCInfo at_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    15,                                  // lineNo
    20,                                  // colNo
    "tempAllLayers",                     // aName
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m", // pName
    0        // checkKind
};

static emlrtBCInfo bt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    82,                         // lineNo
    30,                         // colNo
    "sldProf",                  // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ct_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    82,                         // lineNo
    17,                         // colNo
    "sldProfiles",              // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo dt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    85,                         // lineNo
    15,                         // colNo
    "layerSlds",                // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo et_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    86,                         // lineNo
    15,                         // colNo
    "allLayers",                // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ft_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    34,                                  // lineNo
    16,                                  // colNo
    "allLayers",                         // aName
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m", // pName
    0        // checkKind
};

static emlrtDCInfo nd_emlrtDCI{
    23,                         // lineNo
    17,                         // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo od_emlrtDCI{
    22,                         // lineNo
    16,                         // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo pd_emlrtDCI{
    22,                         // lineNo
    16,                         // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    4                                               // checkKind
};

static emlrtDCInfo qd_emlrtDCI{
    28,                         // lineNo
    1,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo rd_emlrtDCI{
    29,                         // lineNo
    1,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo gt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    31,                         // lineNo
    36,                         // colNo
    "layerSlds",                // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ht_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    31,                         // lineNo
    36,                         // colNo
    "shifted_data",             // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo it_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    31,                         // lineNo
    36,                         // colNo
    "reflectivity",             // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo jt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    31,                         // lineNo
    36,                         // colNo
    "Simulation",               // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo kt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    31,                         // lineNo
    36,                         // colNo
    "allLayers",                // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo lt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    31,                         // lineNo
    36,                         // colNo
    "sldProf",                  // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo mt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    31,                         // lineNo
    36,                         // colNo
    "sldProfiles",              // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo nt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    70,                         // lineNo
    5,                          // colNo
    "tempAllLayers",            // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ot_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    70,                         // lineNo
    5,                          // colNo
    "allLayers",                // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo pt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    79,                         // colNo
    "cBacks",                   // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo qt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    90,                         // colNo
    "cShifts",                  // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo rt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    101,                        // colNo
    "cScales",                  // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo st_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    110,                        // colNo
    "cNbas",                    // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo tt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    119,                        // colNo
    "cNbss",                    // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ut_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    127,                        // colNo
    "cRes",                     // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo vt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    13,                         // colNo
    "backgs",                   // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo wt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    24,                         // colNo
    "qshifts",                  // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo xt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    31,                         // colNo
    "sfs",                      // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo yt_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    39,                         // colNo
    "nbas",                     // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo au_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    47,                         // colNo
    "nbss",                     // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo bu_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    57,                         // colNo
    "resols",                   // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo cu_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    82,                         // lineNo
    5,                          // colNo
    "sldProfiles",              // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo du_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    84,                         // lineNo
    43,                         // colNo
    "sldProfiles",              // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo eu_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    15,                                  // lineNo
    6,                                   // colNo
    "tempAllLayers",                     // aName
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m", // pName
    0        // checkKind
};

static emlrtBCInfo fu_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    85,                         // lineNo
    5,                          // colNo
    "layerSlds",                // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo gu_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    34,                                  // lineNo
    6,                                   // colNo
    "allLayers",                         // aName
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m", // pName
    0        // checkKind
};

static emlrtBCInfo hu_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    86,                         // lineNo
    5,                          // colNo
    "allLayers",                // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo iu_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    14,                                  // lineNo
    6,                                   // colNo
    "allLayers",                         // aName
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m", // pName
    0        // checkKind
};

static emlrtBCInfo ju_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    57,                         // lineNo
    5,                          // colNo
    "sldProfiles",              // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ku_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    52,                         // lineNo
    5,                          // colNo
    "sldProf",                  // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo lu_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    48,                         // lineNo
    5,                          // colNo
    "allLayers",                // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo mu_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    43,                         // lineNo
    5,                          // colNo
    "Simulation",               // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo nu_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    38,                         // lineNo
    5,                          // colNo
    "reflectivity",             // aName
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m", // pName
    0                                               // checkKind
};

static emlrtRTEInfo aq_emlrtRTEI{
    22,                         // lineNo
    10,                         // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo bq_emlrtRTEI{
    28,                         // lineNo
    1,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo cq_emlrtRTEI{
    29,                         // lineNo
    1,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo dq_emlrtRTEI{
    3,                          // lineNo
    18,                         // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo eq_emlrtRTEI{
    31,                         // lineNo
    36,                         // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo fq_emlrtRTEI{
    38,                         // lineNo
    5,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo gq_emlrtRTEI{
    43,                         // lineNo
    5,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo hq_emlrtRTEI{
    48,                         // lineNo
    5,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo iq_emlrtRTEI{
    52,                         // lineNo
    5,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo jq_emlrtRTEI{
    57,                         // lineNo
    5,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo kq_emlrtRTEI{
    70,                         // lineNo
    5,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo lq_emlrtRTEI{
    9,                                   // lineNo
    41,                                  // colNo
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m" // pName
};

static emlrtRTEInfo mq_emlrtRTEI{
    14,                                  // lineNo
    6,                                   // colNo
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m" // pName
};

static emlrtRTEInfo nq_emlrtRTEI{
    15,                                  // lineNo
    6,                                   // colNo
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m" // pName
};

static emlrtRTEInfo oq_emlrtRTEI{
    34,                                  // lineNo
    6,                                   // colNo
    "loopMatalbCustlayWrapper_XYSingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m" // pName
};

static emlrtRTEInfo pq_emlrtRTEI{
    74,                         // lineNo
    6,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo qq_emlrtRTEI{
    82,                         // lineNo
    5,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo rq_emlrtRTEI{
    85,                         // lineNo
    5,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo sq_emlrtRTEI{
    86,                         // lineNo
    5,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo tq_emlrtRTEI{
    88,                         // lineNo
    63,                         // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo uq_emlrtRTEI{
    89,                         // lineNo
    5,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo vq_emlrtRTEI{
    97,                         // lineNo
    5,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRTEInfo wq_emlrtRTEI{
    96,                         // lineNo
    5,                          // colNo
    "standardTF_custXY_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY/standardTF_custXY_single.m" // pName
};

static emlrtRSInfo kk_emlrtRSI{
    24,                                  // lineNo
    "loopMatalbCustlayWrapper_XYSingle", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m" // pathName
};

static emlrtRSInfo pk_emlrtRSI{
    23,                                  // lineNo
    "loopMatalbCustlayWrapper_XYSingle", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m" // pathName
};

static emlrtRSInfo il_emlrtRSI{
    38,                                  // lineNo
    "loopMatalbCustlayWrapper_XYSingle", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_XYSin"
    "gle.m" // pathName
};

// Function Definitions
void standardTF_custXY_single(
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
    emlrtNonNegativeCheckR2012b(problemDef->numberOfContrasts, &pd_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &od_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  backgs.set_size(&aq_emlrtRTEI, sp,
                  static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &nd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(problemDef->numberOfContrasts);
  allRoughs.set_size(&bq_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &qd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T i1{0}; i1 < loop_ub; i1++) {
    allRoughs[i1] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &rd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  outSsubs.set_size(&cq_emlrtRTEI, sp,
                    static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &rd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T i1{0}; i1 < loop_ub; i1++) {
    outSsubs[i1] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &jd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  reflect = static_cast<int32_T>(problemDef->numberOfContrasts);
  layerSlds.set_size(&dq_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, layerSlds.size(0) - 1, &gt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i1].f1.set_size(&dq_emlrtRTEI, sp, 0, layerSlds[i1].f1.size(1));
    if (i1 > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, layerSlds.size(0) - 1, &gt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i1].f1.set_size(&dq_emlrtRTEI, sp, layerSlds[i1].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &kd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  shifted_data.set_size(&dq_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, shifted_data.size(0) - 1,
                                    &ht_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i1].f1.set_size(&dq_emlrtRTEI, sp, 0,
                                 shifted_data[i1].f1.size(1));
    if (i1 > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, shifted_data.size(0) - 1,
                                    &ht_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i1].f1.set_size(&dq_emlrtRTEI, sp, shifted_data[i1].f1.size(0),
                                 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  reflectivity.set_size(&dq_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, reflectivity.size(0) - 1,
                                    &it_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i1].f1.set_size(&dq_emlrtRTEI, sp, 0,
                                 reflectivity[i1].f1.size(1));
    if (i1 > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, reflectivity.size(0) - 1,
                                    &it_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i1].f1.set_size(&dq_emlrtRTEI, sp, reflectivity[i1].f1.size(0),
                                 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &fd_emlrtRTEI,
      (emlrtConstCTX)sp);
  reflectivity.set_size(&eq_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &ts_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&fq_emlrtRTEI, sp, 2,
                                  reflectivity[b_i].f1.size(1));
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &ts_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&fq_emlrtRTEI, sp,
                                  reflectivity[b_i].f1.size(0), 2);
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &ts_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[0] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &nu_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[1] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &nu_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[2] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &nu_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  Simulation.set_size(&dq_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, Simulation.size(0) - 1, &jt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i1].f1.set_size(&dq_emlrtRTEI, sp, 0, Simulation[i1].f1.size(1));
    if (i1 > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, Simulation.size(0) - 1, &jt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i1].f1.set_size(&dq_emlrtRTEI, sp, Simulation[i1].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &gd_emlrtRTEI,
      (emlrtConstCTX)sp);
  Simulation.set_size(&eq_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &us_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&gq_emlrtRTEI, sp, 2,
                                Simulation[b_i].f1.size(1));
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &us_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&gq_emlrtRTEI, sp, Simulation[b_i].f1.size(0),
                                2);
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &us_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[0] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &mu_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[1] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &mu_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[2] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &mu_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  allLayers.set_size(&dq_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, allLayers.size(0) - 1, &kt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i1].f1.set_size(&dq_emlrtRTEI, sp, 0, allLayers[i1].f1.size(1));
    if (i1 > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, allLayers.size(0) - 1, &kt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i1].f1.set_size(&dq_emlrtRTEI, sp, allLayers[i1].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &hd_emlrtRTEI,
      (emlrtConstCTX)sp);
  allLayers.set_size(&eq_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &vs_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&hq_emlrtRTEI, sp, 2, allLayers[b_i].f1.size(1));
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &vs_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&hq_emlrtRTEI, sp, allLayers[b_i].f1.size(0), 1);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &vs_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[0] = 1.0;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &lu_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[1] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  sldProf.set_size(&dq_emlrtRTEI, sp,
                   static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, sldProf.size(0) - 1, &lt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProf[i1].f1.set_size(&dq_emlrtRTEI, sp, 0, sldProf[i1].f1.size(1));
    if (i1 > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, sldProf.size(0) - 1, &lt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProf[i1].f1.set_size(&dq_emlrtRTEI, sp, sldProf[i1].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &id_emlrtRTEI,
      (emlrtConstCTX)sp);
  sldProf.set_size(&eq_emlrtRTEI, sp,
                   static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &ws_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProf[b_i].f1.set_size(&iq_emlrtRTEI, sp, 2, sldProf[b_i].f1.size(1));
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &ws_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProf[b_i].f1.set_size(&iq_emlrtRTEI, sp, sldProf[b_i].f1.size(0), 1);
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &ws_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProf[b_i].f1[0] = 1.0;
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &ku_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProf[b_i].f1[1] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  sldProfiles.set_size(&dq_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, sldProfiles.size(0) - 1,
                                    &mt_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[i1].f1.set_size(&dq_emlrtRTEI, sp, 0,
                                sldProfiles[i1].f1.size(1));
    if (i1 > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, sldProfiles.size(0) - 1,
                                    &mt_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[i1].f1.set_size(&dq_emlrtRTEI, sp, sldProfiles[i1].f1.size(0),
                                0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &jd_emlrtRTEI,
      (emlrtConstCTX)sp);
  sldProfiles.set_size(&eq_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &xs_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&jq_emlrtRTEI, sp, 2,
                                 sldProfiles[b_i].f1.size(1));
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &xs_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&jq_emlrtRTEI, sp, sldProfiles[b_i].f1.size(0),
                                 1);
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &xs_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[0] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &ju_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[1] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  Resampling parameters
  //  Process the custom models. These can either be as a Matlab script, or a
  //  user generated DLL
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
    st.site = &ti_emlrtRSI;
    tempAllLayers = nullptr;
    tempAllRoughs = nullptr;
    //  Wrapper function for calling 'loopMatlabCustomLayers'. This wrapper is
    //  necessary to deal with typedef problems for the coder if feval is used
    //  directly from the main function
    if (problemDef->numberOfContrasts != i) {
      emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &ld_emlrtDCI, &st);
    }
    b_tempAllLayers.set_size(
        &kq_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      if (i1 > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, b_tempAllLayers.size(0) - 1,
                                      &nt_emlrtBCI, &st);
      }
      b_tempAllLayers[i1].f1.set_size(&kq_emlrtRTEI, &st, 0,
                                      b_tempAllLayers[i1].f1.size(1));
      if (i1 > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, b_tempAllLayers.size(0) - 1,
                                      &nt_emlrtBCI, &st);
      }
      b_tempAllLayers[i1].f1.set_size(&kq_emlrtRTEI, &st,
                                      b_tempAllLayers[i1].f1.size(0), 0);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    sldProf.set_size(&kq_emlrtRTEI, &st,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      if (i1 > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, sldProf.size(0) - 1, &ot_emlrtBCI,
                                      &st);
      }
      sldProf[i1].f1.set_size(&kq_emlrtRTEI, &st, 0, sldProf[i1].f1.size(1));
      if (i1 > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, sldProf.size(0) - 1, &ot_emlrtBCI,
                                      &st);
      }
      sldProf[i1].f1.set_size(&kq_emlrtRTEI, &st, sldProf[i1].f1.size(0), 0);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    if (problemDef->numberOfContrasts != i) {
      emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &md_emlrtDCI, &st);
    }
    emlrtForLoopVectorCheckR2021a(
        1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
        static_cast<int32_T>(problemDef->numberOfContrasts), &md_emlrtRTEI,
        &st);
    sldProf.set_size(&lq_emlrtRTEI, &st,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
    b_tempAllLayers.set_size(
        &lq_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &ys_emlrtBCI,
                                      &st);
      }
      sldProf[b_i].f1.set_size(&mq_emlrtRTEI, &st, 1, sldProf[b_i].f1.size(1));
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &ys_emlrtBCI,
                                      &st);
      }
      sldProf[b_i].f1.set_size(&mq_emlrtRTEI, &st, sldProf[b_i].f1.size(0), 2);
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &ys_emlrtBCI,
                                      &st);
      }
      sldProf[b_i].f1[0] = 1.0;
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &iu_emlrtBCI,
                                      &st);
      }
      sldProf[b_i].f1[1] = 1.0;
      //  Type def as double (size not important)
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &at_emlrtBCI, &st);
      }
      b_tempAllLayers[b_i].f1.set_size(&nq_emlrtRTEI, &st, 1,
                                       b_tempAllLayers[b_i].f1.size(1));
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &at_emlrtBCI, &st);
      }
      b_tempAllLayers[b_i].f1.set_size(&nq_emlrtRTEI, &st,
                                       b_tempAllLayers[b_i].f1.size(0), 5);
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &at_emlrtBCI, &st);
      }
      for (i = 0; i < 5; i++) {
        if (b_i > b_tempAllLayers.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                        &eu_emlrtBCI, &st);
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
    emlrtInitCharArrayR2013a(&st, 29, m, &cv1[0]);
    emlrtAssign(&y, m);
    b_y = nullptr;
    m = emlrtCreateDoubleScalar(problemDef->numberOfContrasts);
    emlrtAssign(&b_y, m);
    b_st.site = &pk_emlrtRSI;
    c_st.site = &kk_emlrtRSI;
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
          emlrt_marshallOut(problemDef->params), &f_emlrtMCI, &tempAllLayers,
          &tempAllRoughs);
    b_st.site = &pk_emlrtRSI;
    emlrt_marshallIn(&b_st, emlrtAlias(tempAllLayers), "tempAllLayers",
                     b_tempAllLayers);
    //  All the following is intended to be casting from mxArray's to doubles.
    //  I'm not sure if all of this is necessary, but it compiles...
    emlrtForLoopVectorCheckR2021a(
        1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
        static_cast<int32_T>(problemDef->numberOfContrasts), &nd_emlrtRTEI,
        &st);
    sldProf.set_size(&lq_emlrtRTEI, &st,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &rs_emlrtBCI, &st);
      }
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &ft_emlrtBCI,
                                      &st);
      }
      sldProf[b_i].f1.set_size(&oq_emlrtRTEI, &st,
                               b_tempAllLayers[b_i].f1.size(0),
                               sldProf[b_i].f1.size(1));
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &ft_emlrtBCI,
                                      &st);
      }
      sldProf[b_i].f1.set_size(&oq_emlrtRTEI, &st, sldProf[b_i].f1.size(0),
                               b_tempAllLayers[b_i].f1.size(1));
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &ft_emlrtBCI,
                                      &st);
      }
      reflect =
          b_tempAllLayers[b_i].f1.size(0) * b_tempAllLayers[b_i].f1.size(1);
      for (i = 0; i < reflect; i++) {
        if (b_i > sldProf.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1,
                                        &gu_emlrtBCI, &st);
        }
        sldProf[b_i].f1[i] = b_tempAllLayers[b_i].f1[i];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    // allLayers = tempAllLayers;
    b_st.site = &il_emlrtRSI;
    emlrt_marshallIn(&b_st, emlrtAlias(tempAllRoughs), "tempAllRoughs",
                     allRoughs);
    emlrtDestroyArray(&tempAllLayers);
    emlrtDestroyArray(&tempAllRoughs);
    break;
  case 1:
    st.site = &ui_emlrtRSI;
    loopCppCustlayWrapper_XYSingle(
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
    sldProf.set_size(&pq_emlrtRTEI, sp, b_sldProf.size(0));
    reflect = b_sldProf.size(0);
    for (i = 0; i < reflect; i++) {
      sldProf[i] = b_sldProf[i];
    }
    break;
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &kd_emlrtRTEI,
      (emlrtConstCTX)sp);
  qshifts.set_size(&aq_emlrtRTEI, sp,
                   static_cast<int32_T>(problemDef->numberOfContrasts));
  sfs.set_size(&aq_emlrtRTEI, sp,
               static_cast<int32_T>(problemDef->numberOfContrasts));
  nbas.set_size(&aq_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  nbss.set_size(&aq_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  resols.set_size(&aq_emlrtRTEI, sp,
                  static_cast<int32_T>(problemDef->numberOfContrasts));
  layerSlds.set_size(&eq_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  allLayers.set_size(&eq_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  shifted_data.set_size(&eq_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  chis.set_size(&aq_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  Simulation.set_size(&eq_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  reflectivity.set_size(&eq_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastBacks.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastBacks.size(1), &pt_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastShifts.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastShifts.size(1), &qt_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastScales.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastScales.size(1), &rt_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastNbas.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastNbas.size(1), &st_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastNbss.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastNbss.size(1), &tt_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastRes.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastRes.size(1), &ut_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         backgs.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          backgs.size(0), &vt_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         qshifts.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          qshifts.size(0), &wt_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) > sfs.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1, sfs.size(0),
          &xt_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         nbas.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          nbas.size(0), &yt_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         nbss.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          nbss.size(0), &au_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         resols.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          resols.size(0), &bu_emlrtBCI, (emlrtConstCTX)sp);
    }
    st.site = &vi_emlrtRSI;
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
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &bt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &ct_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&qq_emlrtRTEI, sp, sldProf[b_i].f1.size(0),
                                 sldProfiles[b_i].f1.size(1));
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &bt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &ct_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&qq_emlrtRTEI, sp, sldProfiles[b_i].f1.size(0),
                                 sldProf[b_i].f1.size(1));
    if (b_i > sldProf.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &bt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &ct_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflect = sldProf[b_i].f1.size(0) * sldProf[b_i].f1.size(1);
    for (i = 0; i < reflect; i++) {
      if (b_i > sldProf.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProf.size(0) - 1, &bt_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_i > sldProfiles.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                      &cu_emlrtBCI, (emlrtConstCTX)sp);
      }
      sldProfiles[b_i].f1[i] = sldProf[b_i].f1[i];
    }
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &du_emlrtBCI, (emlrtConstCTX)sp);
    }
    st.site = &wi_emlrtRSI;
    b_resampleLayers(&st, sldProfiles[b_i].f1, controls->resamPars, layerSld);
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &dt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&rq_emlrtRTEI, sp, layerSld.size(0),
                               layerSlds[b_i].f1.size(1));
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &dt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&rq_emlrtRTEI, sp, layerSlds[b_i].f1.size(0), 3);
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &dt_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    reflect = layerSld.size(0) * 3;
    for (i = 0; i < reflect; i++) {
      if (b_i > layerSlds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1,
                                      &fu_emlrtBCI, (emlrtConstCTX)sp);
      }
      layerSlds[b_i].f1[i] = layerSld[i];
    }
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &et_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&sq_emlrtRTEI, sp, layerSld.size(0),
                               allLayers[b_i].f1.size(1));
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &et_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&sq_emlrtRTEI, sp, allLayers[b_i].f1.size(0), 3);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &et_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    reflect = layerSld.size(0) * 3;
    for (i = 0; i < reflect; i++) {
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &hu_emlrtBCI, (emlrtConstCTX)sp);
      }
      allLayers[b_i].f1[i] = layerSld[i];
    }
    if (b_i > 0) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, 0, &os_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (sfs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, sfs.size(0), &cs_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (qshifts.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, qshifts.size(0), &ds_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (problemDef->dataPresent.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->dataPresent.size(1),
                                    &es_emlrtBCI, (emlrtConstCTX)sp);
    }
    b_problemDef_cells.set_size(&tq_emlrtRTEI, sp,
                                problemDef_cells->f2[0].f1.size(0),
                                problemDef_cells->f2[0].f1.size(1));
    reflect = problemDef_cells->f2[0].f1.size(0) *
                  problemDef_cells->f2[0].f1.size(1) -
              1;
    for (i = 0; i <= reflect; i++) {
      b_problemDef_cells[i] = problemDef_cells->f2[0].f1[i];
    }
    st.site = &xi_emlrtRSI;
    shiftdata(&st, sfs[0], qshifts[0], problemDef->dataPresent[0],
              b_problemDef_cells, problemDef_cells->f3[0].f1,
              problemDef_cells->f4[0].f1, shifted_dat);
    if (shifted_data.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, shifted_data.size(0) - 1,
                                    &ps_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[0].f1.set_size(&uq_emlrtRTEI, sp, shifted_dat.size(0),
                                shifted_dat.size(1));
    reflect = shifted_dat.size(0) * shifted_dat.size(1);
    for (i = 0; i < reflect; i++) {
      shifted_data[0].f1[i] = shifted_dat[i];
    }
    if (loop_ub < 1) {
      emlrtDynamicBoundsCheckR2012b(
          1, 1, static_cast<int32_T>(problemDef->numberOfContrasts),
          &hs_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (nbas.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nbas.size(0), &fs_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (nbss.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nbss.size(0), &gs_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (resols.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, resols.size(0), &is_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &yi_emlrtRSI;
    callReflectivity(&st, nbas[0], nbss[0], problemDef_cells->f4[0].f1,
                     problemDef_cells->f1[0].f1, shifted_dat, layerSld, 0.0,
                     resols[0], b_reflect, Simul);
    st.site = &aj_emlrtRSI;
    if (backgs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, backgs.size(0), &js_emlrtBCI, &st);
    }
    if (problemDef->contrastBacksType.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->contrastBacksType.size(1),
                                    &ks_emlrtBCI, &st);
    }
    if (Simulation.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, Simulation.size(0) - 1, &ss_emlrtBCI,
                                    &st);
    }
    Simulation[0].f1.set_size(&vq_emlrtRTEI, &st, Simul.size(0), 2);
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
                                      &ss_emlrtBCI, &st);
      }
      emlrtSubAssignSizeCheckR2012b(Simulation[0].f1.size(), 1,
                                    Simulation[0].f1.size(), 1, &i_emlrtECI,
                                    &st);
      if (Simulation.size(0) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, Simulation.size(0) - 1,
                                      &ss_emlrtBCI, &st);
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
                                    &qs_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[0].f1.set_size(&wq_emlrtRTEI, sp, b_reflect.size(0), 2);
    reflect = b_reflect.size(0) * 2;
    for (i = 0; i < reflect; i++) {
      reflectivity[0].f1[i] = b_reflect[i];
    }
    if (problemDef->dataPresent.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->dataPresent.size(1),
                                    &ls_emlrtBCI, (emlrtConstCTX)sp);
    }
    st.site = &bj_emlrtRSI;
    if (muDoubleScalarIsNaN(problemDef->dataPresent[0])) {
      emlrtErrorWithMessageIdR2018a(&st, &ld_emlrtRTEI, "MATLAB:nologicalnan",
                                    "MATLAB:nologicalnan", 0);
    }
    if (problemDef->dataPresent[0] != 0.0) {
      if (chis.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, chis.size(0), &ms_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      st.site = &cj_emlrtRSI;
      chis[0] = chiSquared(&st, shifted_dat, b_reflect,
                           static_cast<real_T>(problemDef->params.size(1)));
    } else {
      if (chis.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, chis.size(0), &ns_emlrtBCI,
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

// End of code generation (standardTF_custXY_single.cpp)
