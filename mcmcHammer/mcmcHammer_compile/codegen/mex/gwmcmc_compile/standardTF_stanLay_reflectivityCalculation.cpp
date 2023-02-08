//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// standardTF_stanLay_reflectivityCalculation.cpp
//
// Code generation for function 'standardTF_stanLay_reflectivityCalculation'
//

// Include files
#include "standardTF_stanLay_reflectivityCalculation.h"
#include "allocateLayersForContrast.h"
#include "backSort.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "gwmcmc_compile_types.h"
#include "rt_nonfinite.h"
#include "standardTF_layers_core.h"
#include "standardTF_stanlay_paraPoints.h"
#include "sum.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo ib_emlrtRSI{
    64,                                           // lineNo
    "standardTF_stanLay_reflectivityCalculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pathName
};

static emlrtRSInfo jb_emlrtRSI{
    70,                                           // lineNo
    "standardTF_stanLay_reflectivityCalculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    91,                                           // lineNo
    "standardTF_stanLay_reflectivityCalculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pathName
};

static emlrtRSInfo lb_emlrtRSI{
    76,                          // lineNo
    "standardTF_stanlay_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pathName
};

static emlrtRSInfo mb_emlrtRSI{
    81,                          // lineNo
    "standardTF_stanlay_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pathName
};

static emlrtRSInfo nb_emlrtRSI{
    101,                         // lineNo
    "standardTF_stanlay_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pathName
};

static emlrtDCInfo l_emlrtDCI{
    28,                                           // lineNo
    21,                                           // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtRTEInfo x_emlrtRTEI{
    29,                                           // lineNo
    9,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    34,                                           // lineNo
    9,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo ab_emlrtRTEI{
    39,                                           // lineNo
    9,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo bb_emlrtRTEI{
    44,                                           // lineNo
    9,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    49,                                           // lineNo
    9,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    54,                                           // lineNo
    9,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    45,                          // lineNo
    9,                           // colNo
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    50,                          // lineNo
    9,                           // colNo
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pName
};

static emlrtRTEInfo gb_emlrtRTEI{
    55,                          // lineNo
    9,                           // colNo
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pName
};

static emlrtRTEInfo hb_emlrtRTEI{
    70,                          // lineNo
    9,                           // colNo
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pName
};

static emlrtBCInfo ne_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    85,                          // lineNo
    24,                          // colNo
    "params",                    // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo oe_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    87,                          // lineNo
    29,                          // colNo
    "resample",                  // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo pe_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    90,                          // lineNo
    35,                          // colNo
    "dataPresent",               // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo qe_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    93,                          // lineNo
    31,                          // colNo
    "backsType",                 // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo re_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    118,                         // lineNo
    12,                          // colNo
    "backgs",                    // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo se_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    119,                         // lineNo
    13,                          // colNo
    "qshifts",                   // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo te_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    120,                         // lineNo
    9,                           // colNo
    "sfs",                       // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo ue_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    121,                         // lineNo
    10,                          // colNo
    "nbas",                      // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo ve_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    122,                         // lineNo
    10,                          // colNo
    "nbss",                      // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo we_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    123,                         // lineNo
    12,                          // colNo
    "resols",                    // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo xe_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    124,                         // lineNo
    15,                          // colNo
    "allRoughs",                 // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo ye_emlrtBCI{
    0,                           // iFirst
    0,                           // iLast
    81,                          // lineNo
    67,                          // colNo
    "contrastLayers",            // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo af_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    112,                         // lineNo
    17,                          // colNo
    "sldProfiles",               // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo bf_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    116,                         // lineNo
    15,                          // colNo
    "layerSlds",                 // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo cf_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    125,                         // lineNo
    15,                          // colNo
    "allLayers",                 // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo df_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    111,                         // lineNo
    14,                          // colNo
    "outSsubs",                  // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo ef_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    113,                         // lineNo
    18,                          // colNo
    "reflectivity",              // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo ff_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    114,                         // lineNo
    16,                          // colNo
    "Simulation",                // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo gf_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    115,                         // lineNo
    18,                          // colNo
    "shifted_data",              // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo hf_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    117,                         // lineNo
    10,                          // colNo
    "chis",                      // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo if_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    30,                                           // lineNo
    18,                                           // colNo
    "reflectivity",                               // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo jf_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    35,                                           // lineNo
    16,                                           // colNo
    "Simulation",                                 // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo kf_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    40,                                           // lineNo
    18,                                           // colNo
    "shifted_data",                               // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo lf_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    45,                                           // lineNo
    15,                                           // colNo
    "layerSlds",                                  // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo mf_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    50,                                           // lineNo
    17,                                           // colNo
    "sldProfiles",                                // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo nf_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    55,                                           // lineNo
    15,                                           // colNo
    "allLayers",                                  // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo of_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    46,                          // lineNo
    18,                          // colNo
    "reflectivity",              // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo pf_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    51,                          // lineNo
    16,                          // colNo
    "Simulation",                // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo qf_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    56,                          // lineNo
    15,                          // colNo
    "allLayers",                 // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtDCInfo m_emlrtDCI{
    32,                          // lineNo
    17,                          // colNo
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    1                                                 // checkKind
};

static emlrtDCInfo n_emlrtDCI{
    83,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo o_emlrtDCI{
    83,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    4                                               // checkKind
};

static emlrtDCInfo p_emlrtDCI{
    84,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo q_emlrtDCI{
    85,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo r_emlrtDCI{
    86,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo s_emlrtDCI{
    87,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo t_emlrtDCI{
    88,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo u_emlrtDCI{
    24,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo v_emlrtDCI{
    89,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo w_emlrtDCI{
    92,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo rf_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    28,                                           // lineNo
    39,                                           // colNo
    "reflectivity",                               // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo sf_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    28,                                           // lineNo
    39,                                           // colNo
    "Simulation",                                 // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo tf_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    28,                                           // lineNo
    39,                                           // colNo
    "shifted_data",                               // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo uf_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    28,                                           // lineNo
    39,                                           // colNo
    "layerSlds",                                  // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo vf_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    40,                                           // lineNo
    5,                                            // colNo
    "shifted_data",                               // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo wf_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    28,                                           // lineNo
    39,                                           // colNo
    "sldProfiles",                                // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo xf_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    45,                                           // lineNo
    5,                                            // colNo
    "layerSlds",                                  // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo yf_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    28,                                           // lineNo
    39,                                           // colNo
    "allLayers",                                  // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ag_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    55,                                           // lineNo
    5,                                            // colNo
    "allLayers",                                  // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo x_emlrtDCI{
    31,                          // lineNo
    16,                          // colNo
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    1                                                 // checkKind
};

static emlrtBCInfo bg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    92,                                           // lineNo
    1,                                            // colNo
    "layerSlds",                                  // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo cg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    92,                                           // lineNo
    1,                                            // colNo
    "sldProfiles",                                // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo dg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    92,                                           // lineNo
    1,                                            // colNo
    "shifted_data",                               // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo eg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    92,                                           // lineNo
    1,                                            // colNo
    "reflectivity",                               // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo fg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    92,                                           // lineNo
    1,                                            // colNo
    "Simulation",                                 // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo gg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    92,                                           // lineNo
    1,                                            // colNo
    "allLayers",                                  // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo hg_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    56,                          // lineNo
    5,                           // colNo
    "allLayers",                 // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo ig_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    76,                          // lineNo
    84,                          // colNo
    "cBacks",                    // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo jg_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    76,                          // lineNo
    95,                          // colNo
    "cShifts",                   // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo kg_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    76,                          // lineNo
    106,                         // colNo
    "cScales",                   // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo lg_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    76,                          // lineNo
    115,                         // colNo
    "cNbas",                     // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo mg_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    76,                          // lineNo
    124,                         // colNo
    "cNbss",                     // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo ng_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    76,                          // lineNo
    132,                         // colNo
    "cRes",                      // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo og_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    51,                          // lineNo
    5,                           // colNo
    "Simulation",                // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo pg_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    46,                          // lineNo
    5,                           // colNo
    "reflectivity",              // aName
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo qg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    50,                                           // lineNo
    5,                                            // colNo
    "sldProfiles",                                // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo rg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    35,                                           // lineNo
    5,                                            // colNo
    "Simulation",                                 // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo sg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    30,                                           // lineNo
    5,                                            // colNo
    "reflectivity",                               // aName
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtRTEInfo ah_emlrtRTEI{
    83,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo bh_emlrtRTEI{
    84,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo ch_emlrtRTEI{
    85,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo dh_emlrtRTEI{
    86,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo eh_emlrtRTEI{
    87,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo fh_emlrtRTEI{
    88,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo gh_emlrtRTEI{
    24,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo hh_emlrtRTEI{
    89,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo ih_emlrtRTEI{
    92,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo jh_emlrtRTEI{
    1,                                            // lineNo
    91,                                           // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo kh_emlrtRTEI{
    28,                                           // lineNo
    39,                                           // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo lh_emlrtRTEI{
    30,                                           // lineNo
    5,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo mh_emlrtRTEI{
    35,                                           // lineNo
    5,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo nh_emlrtRTEI{
    40,                                           // lineNo
    5,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo oh_emlrtRTEI{
    45,                                           // lineNo
    5,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo ph_emlrtRTEI{
    50,                                           // lineNo
    5,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo qh_emlrtRTEI{
    55,                                           // lineNo
    5,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo rh_emlrtRTEI{
    40,                          // lineNo
    36,                          // colNo
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pName
};

static emlrtRTEInfo sh_emlrtRTEI{
    46,                          // lineNo
    5,                           // colNo
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pName
};

static emlrtRTEInfo th_emlrtRTEI{
    51,                          // lineNo
    5,                           // colNo
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pName
};

static emlrtRTEInfo uh_emlrtRTEI{
    56,                          // lineNo
    5,                           // colNo
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pName
};

static emlrtRTEInfo vh_emlrtRTEI{
    112,                         // lineNo
    5,                           // colNo
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pName
};

static emlrtRTEInfo wh_emlrtRTEI{
    116,                         // lineNo
    5,                           // colNo
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pName
};

static emlrtRTEInfo xh_emlrtRTEI{
    125,                         // lineNo
    5,                           // colNo
    "standardTF_stanlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_single.m" // pName
};

static emlrtRTEInfo yh_emlrtRTEI{
    93,                                           // lineNo
    1,                                            // colNo
    "standardTF_stanLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay_reflectivityCalculation.m" // pName
};

// Function Definitions
void c_standardTF_stanLay_reflectivi(
    const emlrtStack *sp, const struct_T *problemDef,
    const cell_5 *problemDef_cells, const struct3_T *controls,
    c_struct_T *problem, coder::array<cell_wrap_10, 1U> &reflectivity,
    coder::array<cell_wrap_10, 1U> &Simulation,
    coder::array<cell_wrap_1, 1U> &shifted_data,
    coder::array<cell_wrap_11, 1U> &layerSlds,
    coder::array<cell_wrap_1, 1U> &sldProfiles,
    coder::array<cell_wrap_1, 1U> &allLayers)
{
  static const char_T b[6]{'s', 'i', 'n', 'g', 'l', 'e'};
  static const char_T b_b[6]{'p', 'o', 'i', 'n', 't', 's'};
  coder::array<real_T, 2U> resampledLayers;
  coder::array<real_T, 2U> sldProfile;
  coder::array<real_T, 1U> backgs;
  emlrtStack b_st;
  emlrtStack st;
  real_T thisContrastLayers_data[5];
  real_T layerSld_data[3];
  real_T thisBackground;
  real_T thisNba;
  real_T thisNbs;
  real_T thisQshift;
  real_T thisResol;
  real_T thisSf;
  int32_T layerSld_size[2];
  int32_T b_index;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Standard layers reflectivity calculation for standardTF
  //  This function decides on parallelisation options before calling the
  //  relevant version ofthe main standard layers calculation. Parallelisation
  //  is either over the outer loop ('contrasts'), or the inner loop
  //  ('points'). The easiest way to do this is to have multiple versions of
  //  the same core calculation, rather than trying to make the paralell
  //  for loops conditional (although that would be much neater) There are:
  //  points    - parallelise over points in the reflectivity calculation
  //  contrasts - parallelise over contrasts (outer for loop)
  //  Pre-allocation - It's necessary to
  //  pre-define the types for all the arrays
  //  for compilation, so do this in this block.
  if (!(problemDef->numberOfContrasts >= 0.0)) {
    emlrtNonNegativeCheckR2012b(problemDef->numberOfContrasts, &o_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &n_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->ssubs.set_size(&ah_emlrtRTEI, sp,
                          static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &n_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(problemDef->numberOfContrasts);
  for (b_index = 0; b_index < loop_ub; b_index++) {
    problem->ssubs[b_index] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &p_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(problemDef->numberOfContrasts);
  problem->backgrounds.set_size(
      &bh_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &p_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (b_index = 0; b_index < loop_ub; b_index++) {
    problem->backgrounds[b_index] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &q_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->qshifts.set_size(
      &ch_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &q_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (b_index = 0; b_index < loop_ub; b_index++) {
    problem->qshifts[b_index] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &r_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->scalefactors.set_size(
      &dh_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &r_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (b_index = 0; b_index < loop_ub; b_index++) {
    problem->scalefactors[b_index] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &s_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->nbairs.set_size(&eh_emlrtRTEI, sp,
                           static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &s_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (b_index = 0; b_index < loop_ub; b_index++) {
    problem->nbairs[b_index] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &t_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->nbsubs.set_size(&fh_emlrtRTEI, sp,
                           static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &t_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (b_index = 0; b_index < loop_ub; b_index++) {
    problem->nbsubs[b_index] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &u_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->calculations.all_chis.set_size(
      &gh_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &u_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (b_index = 0; b_index < loop_ub; b_index++) {
    problem->calculations.all_chis[b_index] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &v_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->resolutions.set_size(
      &hh_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &v_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (b_index = 0; b_index < loop_ub; b_index++) {
    problem->resolutions[b_index] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &w_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->allSubRough.set_size(
      &ih_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &w_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (b_index = 0; b_index < loop_ub; b_index++) {
    problem->allSubRough[b_index] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &l_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  reflectivity.set_size(&jh_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (b_index = 0; b_index < loop_ub; b_index++) {
    if (b_index > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_index, 0, reflectivity.size(0) - 1,
                                    &rf_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_index].f1.set_size(&jh_emlrtRTEI, sp, 0,
                                      reflectivity[b_index].f1.size(1));
    if (b_index > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_index, 0, reflectivity.size(0) - 1,
                                    &rf_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_index].f1.set_size(&jh_emlrtRTEI, sp,
                                      reflectivity[b_index].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &x_emlrtRTEI,
      (emlrtConstCTX)sp);
  reflectivity.set_size(&kh_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &if_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&lh_emlrtRTEI, sp, 2,
                                  reflectivity[b_i].f1.size(1));
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &if_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&lh_emlrtRTEI, sp,
                                  reflectivity[b_i].f1.size(0), 2);
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &if_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[0] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &sg_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[1] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &sg_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[2] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &sg_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  Simulation.set_size(&jh_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (b_index = 0; b_index < loop_ub; b_index++) {
    if (b_index > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_index, 0, Simulation.size(0) - 1,
                                    &sf_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_index].f1.set_size(&jh_emlrtRTEI, sp, 0,
                                    Simulation[b_index].f1.size(1));
    if (b_index > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_index, 0, Simulation.size(0) - 1,
                                    &sf_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_index].f1.set_size(&jh_emlrtRTEI, sp,
                                    Simulation[b_index].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &y_emlrtRTEI,
      (emlrtConstCTX)sp);
  Simulation.set_size(&kh_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &jf_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&mh_emlrtRTEI, sp, 2,
                                Simulation[b_i].f1.size(1));
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &jf_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&mh_emlrtRTEI, sp, Simulation[b_i].f1.size(0),
                                2);
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &jf_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[0] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &rg_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[1] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &rg_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[2] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &rg_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  shifted_data.set_size(&jh_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (b_index = 0; b_index < loop_ub; b_index++) {
    if (b_index > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_index, 0, shifted_data.size(0) - 1,
                                    &tf_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[b_index].f1.set_size(&jh_emlrtRTEI, sp, 0,
                                      shifted_data[b_index].f1.size(1));
    if (b_index > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_index, 0, shifted_data.size(0) - 1,
                                    &tf_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[b_index].f1.set_size(&jh_emlrtRTEI, sp,
                                      shifted_data[b_index].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &ab_emlrtRTEI,
      (emlrtConstCTX)sp);
  shifted_data.set_size(&kh_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &kf_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[b_i].f1.set_size(&nh_emlrtRTEI, sp, 2,
                                  shifted_data[b_i].f1.size(1));
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &kf_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[b_i].f1.set_size(&nh_emlrtRTEI, sp,
                                  shifted_data[b_i].f1.size(0), 3);
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &kf_emlrtBCI, (emlrtConstCTX)sp);
    }
    for (b_index = 0; b_index < 6; b_index++) {
      if (b_i > shifted_data.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                      &vf_emlrtBCI, (emlrtConstCTX)sp);
      }
      shifted_data[b_i].f1[b_index] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  layerSlds.set_size(&jh_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (b_index = 0; b_index < loop_ub; b_index++) {
    if (b_index > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_index, 0, layerSlds.size(0) - 1,
                                    &uf_emlrtBCI, (emlrtConstCTX)sp);
    }
    layerSlds[b_index].f1.set_size(&jh_emlrtRTEI, sp, 0,
                                   layerSlds[b_index].f1.size(1));
    if (b_index > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_index, 0, layerSlds.size(0) - 1,
                                    &uf_emlrtBCI, (emlrtConstCTX)sp);
    }
    layerSlds[b_index].f1.set_size(&jh_emlrtRTEI, sp,
                                   layerSlds[b_index].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &bb_emlrtRTEI,
      (emlrtConstCTX)sp);
  layerSlds.set_size(&kh_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &lf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&oh_emlrtRTEI, sp, 2, layerSlds[b_i].f1.size(1));
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &lf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&oh_emlrtRTEI, sp, layerSlds[b_i].f1.size(0), 3);
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &lf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    for (b_index = 0; b_index < 6; b_index++) {
      if (b_i > layerSlds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1,
                                      &xf_emlrtBCI, (emlrtConstCTX)sp);
      }
      layerSlds[b_i].f1[b_index] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  sldProfiles.set_size(&jh_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  for (b_index = 0; b_index < loop_ub; b_index++) {
    if (b_index > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_index, 0, sldProfiles.size(0) - 1,
                                    &wf_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_index].f1.set_size(&jh_emlrtRTEI, sp, 0,
                                     sldProfiles[b_index].f1.size(1));
    if (b_index > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_index, 0, sldProfiles.size(0) - 1,
                                    &wf_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_index].f1.set_size(&jh_emlrtRTEI, sp,
                                     sldProfiles[b_index].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &cb_emlrtRTEI,
      (emlrtConstCTX)sp);
  sldProfiles.set_size(&kh_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &mf_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&ph_emlrtRTEI, sp, 2,
                                 sldProfiles[b_i].f1.size(1));
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &mf_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&ph_emlrtRTEI, sp, sldProfiles[b_i].f1.size(0),
                                 2);
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &mf_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[0] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &qg_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[1] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &qg_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[2] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &qg_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  allLayers.set_size(&jh_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (b_index = 0; b_index < loop_ub; b_index++) {
    if (b_index > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_index, 0, allLayers.size(0) - 1,
                                    &yf_emlrtBCI, (emlrtConstCTX)sp);
    }
    allLayers[b_index].f1.set_size(&jh_emlrtRTEI, sp, 0,
                                   allLayers[b_index].f1.size(1));
    if (b_index > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_index, 0, allLayers.size(0) - 1,
                                    &yf_emlrtBCI, (emlrtConstCTX)sp);
    }
    allLayers[b_index].f1.set_size(&jh_emlrtRTEI, sp,
                                   allLayers[b_index].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &db_emlrtRTEI,
      (emlrtConstCTX)sp);
  allLayers.set_size(&kh_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &nf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&qh_emlrtRTEI, sp, 2, allLayers[b_i].f1.size(1));
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &nf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&qh_emlrtRTEI, sp, allLayers[b_i].f1.size(0), 3);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &nf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    for (b_index = 0; b_index < 6; b_index++) {
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &ag_emlrtBCI, (emlrtConstCTX)sp);
      }
      allLayers[b_i].f1[b_index] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  ------- End type definitions -------------
  if (memcmp((char_T *)&controls->para[0], (char_T *)&b[0], 6) == 0) {
    b_index = 0;
  } else if (memcmp((char_T *)&controls->para[0], (char_T *)&b_b[0], 6) == 0) {
    b_index = 1;
  } else {
    b_index = -1;
  }
  switch (b_index) {
  case 0: {
    cell_wrap_15 outParameterisedLayers;
    st.site = &ib_emlrtRSI;
    //  Single theraded version of the Standard Layers calculation
    //  This is the main reflectivity calculation of the standard layers
    //  calculation type. It extracts the required paramters for the contrasts
    //  from the input arrays, then passes the main calculation to
    //  'standardLayersCore', which carries out the calculation iteslf.
    //  The core calculation is common for both standard and custom layers.
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
    //  Allocate the memory for the output arrays before the main loop
    if (problemDef->numberOfContrasts != i) {
      emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &x_emlrtDCI, &st);
    }
    backgs.set_size(&ih_emlrtRTEI, &st,
                    static_cast<int32_T>(problemDef->numberOfContrasts));
    if (problemDef->numberOfContrasts != i) {
      emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &m_emlrtDCI, &st);
    }
    layerSlds.set_size(&ih_emlrtRTEI, &st,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
    for (i = 0; i < loop_ub; i++) {
      if (i > layerSlds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, layerSlds.size(0) - 1, &bg_emlrtBCI,
                                      &st);
      }
      layerSlds[i].f1.set_size(&ih_emlrtRTEI, &st, 0, layerSlds[i].f1.size(1));
      if (i > layerSlds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, layerSlds.size(0) - 1, &bg_emlrtBCI,
                                      &st);
      }
      layerSlds[i].f1.set_size(&ih_emlrtRTEI, &st, layerSlds[i].f1.size(0), 3);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    sldProfiles.set_size(&ih_emlrtRTEI, &st,
                         static_cast<int32_T>(problemDef->numberOfContrasts));
    for (i = 0; i < loop_ub; i++) {
      if (i > sldProfiles.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, sldProfiles.size(0) - 1,
                                      &cg_emlrtBCI, &st);
      }
      sldProfiles[i].f1.set_size(&ih_emlrtRTEI, &st, 0,
                                 sldProfiles[i].f1.size(1));
      if (i > sldProfiles.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, sldProfiles.size(0) - 1,
                                      &cg_emlrtBCI, &st);
      }
      sldProfiles[i].f1.set_size(&ih_emlrtRTEI, &st, sldProfiles[i].f1.size(0),
                                 0);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    shifted_data.set_size(&ih_emlrtRTEI, &st,
                          static_cast<int32_T>(problemDef->numberOfContrasts));
    for (i = 0; i < loop_ub; i++) {
      if (i > shifted_data.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, shifted_data.size(0) - 1,
                                      &dg_emlrtBCI, &st);
      }
      shifted_data[i].f1.set_size(&ih_emlrtRTEI, &st, 0,
                                  shifted_data[i].f1.size(1));
      if (i > shifted_data.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, shifted_data.size(0) - 1,
                                      &dg_emlrtBCI, &st);
      }
      shifted_data[i].f1.set_size(&ih_emlrtRTEI, &st,
                                  shifted_data[i].f1.size(0), 0);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    reflectivity.set_size(&ih_emlrtRTEI, &st,
                          static_cast<int32_T>(problemDef->numberOfContrasts));
    for (i = 0; i < loop_ub; i++) {
      if (i > reflectivity.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, reflectivity.size(0) - 1,
                                      &eg_emlrtBCI, &st);
      }
      reflectivity[i].f1.set_size(&ih_emlrtRTEI, &st, 0,
                                  reflectivity[i].f1.size(1));
      if (i > reflectivity.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, reflectivity.size(0) - 1,
                                      &eg_emlrtBCI, &st);
      }
      reflectivity[i].f1.set_size(&ih_emlrtRTEI, &st,
                                  reflectivity[i].f1.size(0), 2);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    emlrtForLoopVectorCheckR2021a(
        1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
        static_cast<int32_T>(problemDef->numberOfContrasts), &eb_emlrtRTEI,
        &st);
    reflectivity.set_size(&rh_emlrtRTEI, &st,
                          static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i > reflectivity.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                      &of_emlrtBCI, &st);
      }
      reflectivity[b_i].f1.set_size(&sh_emlrtRTEI, &st, 2,
                                    reflectivity[b_i].f1.size(1));
      if (b_i > reflectivity.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                      &of_emlrtBCI, &st);
      }
      reflectivity[b_i].f1.set_size(&sh_emlrtRTEI, &st,
                                    reflectivity[b_i].f1.size(0), 2);
      if (b_i > reflectivity.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                      &of_emlrtBCI, &st);
      }
      reflectivity[b_i].f1[0] = 1.0;
      if (b_i > reflectivity.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                      &pg_emlrtBCI, &st);
      }
      reflectivity[b_i].f1[1] = 1.0;
      if (b_i > reflectivity.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                      &pg_emlrtBCI, &st);
      }
      reflectivity[b_i].f1[2] = 1.0;
      if (b_i > reflectivity.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                      &pg_emlrtBCI, &st);
      }
      reflectivity[b_i].f1[3] = 1.0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    Simulation.set_size(&ih_emlrtRTEI, &st,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
    for (i = 0; i < loop_ub; i++) {
      if (i > Simulation.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, Simulation.size(0) - 1,
                                      &fg_emlrtBCI, &st);
      }
      Simulation[i].f1.set_size(&ih_emlrtRTEI, &st, 0,
                                Simulation[i].f1.size(1));
      if (i > Simulation.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, Simulation.size(0) - 1,
                                      &fg_emlrtBCI, &st);
      }
      Simulation[i].f1.set_size(&ih_emlrtRTEI, &st, Simulation[i].f1.size(0),
                                2);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    emlrtForLoopVectorCheckR2021a(
        1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
        static_cast<int32_T>(problemDef->numberOfContrasts), &fb_emlrtRTEI,
        &st);
    Simulation.set_size(&rh_emlrtRTEI, &st,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i > Simulation.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                      &pf_emlrtBCI, &st);
      }
      Simulation[b_i].f1.set_size(&th_emlrtRTEI, &st, 2,
                                  Simulation[b_i].f1.size(1));
      if (b_i > Simulation.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                      &pf_emlrtBCI, &st);
      }
      Simulation[b_i].f1.set_size(&th_emlrtRTEI, &st,
                                  Simulation[b_i].f1.size(0), 2);
      if (b_i > Simulation.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                      &pf_emlrtBCI, &st);
      }
      Simulation[b_i].f1[0] = 1.0;
      if (b_i > Simulation.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                      &og_emlrtBCI, &st);
      }
      Simulation[b_i].f1[1] = 1.0;
      if (b_i > Simulation.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                      &og_emlrtBCI, &st);
      }
      Simulation[b_i].f1[2] = 1.0;
      if (b_i > Simulation.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                      &og_emlrtBCI, &st);
      }
      Simulation[b_i].f1[3] = 1.0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    allLayers.set_size(&ih_emlrtRTEI, &st,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
    for (i = 0; i < loop_ub; i++) {
      if (i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, allLayers.size(0) - 1, &gg_emlrtBCI,
                                      &st);
      }
      allLayers[i].f1.set_size(&ih_emlrtRTEI, &st, 0, allLayers[i].f1.size(1));
      if (i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, allLayers.size(0) - 1, &gg_emlrtBCI,
                                      &st);
      }
      allLayers[i].f1.set_size(&ih_emlrtRTEI, &st, allLayers[i].f1.size(0), 0);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    emlrtForLoopVectorCheckR2021a(
        1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
        static_cast<int32_T>(problemDef->numberOfContrasts), &gb_emlrtRTEI,
        &st);
    allLayers.set_size(&rh_emlrtRTEI, &st,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &qf_emlrtBCI, &st);
      }
      allLayers[b_i].f1.set_size(&uh_emlrtRTEI, &st, 2,
                                 allLayers[b_i].f1.size(1));
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &qf_emlrtBCI, &st);
      }
      allLayers[b_i].f1.set_size(&uh_emlrtRTEI, &st, allLayers[b_i].f1.size(0),
                                 3);
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &qf_emlrtBCI, &st);
      }
      for (i = 0; i < 6; i++) {
        if (b_i > allLayers.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                        &hg_emlrtBCI, &st);
        }
        allLayers[b_i].f1[i] = 1.0;
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    //  end memory allocation.
    //  First we need to allocate the absolute values of the input
    //  parameters to all the layers in the layers list. This only needs
    //  to be done once, and so is done outside the contrasts loop
    //  Allocates parameters from the parameter array to the correct layers
    //
    //  This function takes the list of all layers in 'layersDetails',
    //  then loops over all the layers, putting in the correct
    //  parameter value from the parameters array into each layer in
    //  the 'outLayers' cell array
    for (i = 0; i < 5; i++) {
      outParameterisedLayers.f1[i] = 0.0;
    }
    outParameterisedLayers.f1[0] = problemDef_cells->f6[0];
    //  Resample params if requiired
    //  Loop over all the contrasts
    emlrtForLoopVectorCheckR2021a(
        1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
        static_cast<int32_T>(problemDef->numberOfContrasts), &hb_emlrtRTEI,
        &st);
    problem->ssubs.set_size(
        &ih_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    sldProfiles.set_size(&rh_emlrtRTEI, &st,
                         static_cast<int32_T>(problemDef->numberOfContrasts));
    reflectivity.set_size(&rh_emlrtRTEI, &st,
                          static_cast<int32_T>(problemDef->numberOfContrasts));
    Simulation.set_size(&rh_emlrtRTEI, &st,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
    shifted_data.set_size(&rh_emlrtRTEI, &st,
                          static_cast<int32_T>(problemDef->numberOfContrasts));
    layerSlds.set_size(&rh_emlrtRTEI, &st,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
    problem->calculations.all_chis.set_size(
        &ih_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    problem->qshifts.set_size(
        &ih_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    problem->scalefactors.set_size(
        &ih_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    problem->nbairs.set_size(
        &ih_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    problem->nbsubs.set_size(
        &ih_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    problem->resolutions.set_size(
        &ih_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    problem->allSubRough.set_size(
        &ih_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    allLayers.set_size(&rh_emlrtRTEI, &st,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
    if (static_cast<int32_T>(problemDef->numberOfContrasts) - 1 >= 0) {
      problem->allSubRough[0] = problemDef->params[0];
    }
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      int32_T thisContrastLayers_size[2];
      //  Extract the relevant parameter values for this contrast
      //  from the input arrays.
      //  First need to decide which values of the backrounds, scalefactors
      //  data shifts and bulk contrasts are associated with this contrast
      if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
           problemDef->contrastBacks.size(1))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
            problemDef->contrastBacks.size(1), &ig_emlrtBCI, &st);
      }
      if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
           problemDef->contrastShifts.size(1))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
            problemDef->contrastShifts.size(1), &jg_emlrtBCI, &st);
      }
      if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
           problemDef->contrastScales.size(1))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
            problemDef->contrastScales.size(1), &kg_emlrtBCI, &st);
      }
      if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
           problemDef->contrastNbas.size(1))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
            problemDef->contrastNbas.size(1), &lg_emlrtBCI, &st);
      }
      if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
           problemDef->contrastNbss.size(1))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
            problemDef->contrastNbss.size(1), &mg_emlrtBCI, &st);
      }
      if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
           problemDef->contrastRes.size(1))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
            problemDef->contrastRes.size(1), &ng_emlrtBCI, &st);
      }
      b_st.site = &lb_emlrtRSI;
      backSort(&b_st, problemDef->contrastBacks[b_i],
               problemDef->contrastShifts[b_i], problemDef->contrastScales[b_i],
               problemDef->contrastNbas[b_i], problemDef->contrastNbss[b_i],
               problemDef->contrastRes[b_i], problemDef->backs,
               problemDef->shifts, problemDef->sf, problemDef->nba,
               problemDef->nbs, problemDef->res, &thisBackground, &thisQshift,
               &thisSf, &thisNba, &thisNbs, &thisResol);
      //  Also need to determine which layers from the overall layers list
      //  are required for this contrast, and put them in the correct order
      //  according to geometry
      if (b_i > 0) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, 0, &ye_emlrtBCI, &st);
      }
      b_st.site = &mb_emlrtRSI;
      allocateLayersForContrast(&b_st, problemDef_cells->f5[0],
                                outParameterisedLayers, thisContrastLayers_data,
                                thisContrastLayers_size);
      //  For the other parameters, we extract the correct ones from the input
      //  arrays
      if (problemDef->params.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->params.size(1),
                                      &ne_emlrtBCI, &st);
      }
      //  Substrate roughness is always first parameter for standard layers
      if (problemDef->resample.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->resample.size(1),
                                      &oe_emlrtBCI, &st);
      }
      if (problemDef->dataPresent.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->dataPresent.size(1),
                                      &pe_emlrtBCI, &st);
      }
      if (problemDef->contrastBacksType.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(
            1, 1, problemDef->contrastBacksType.size(1), &qe_emlrtBCI, &st);
      }
      //  Now call the core standardTF_stanlay reflectivity calculation
      //  In this case we are single cored, so we do not parallelise over
      //  points
      //  Call the core layers calculation
      if (reflectivity.size(0) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, reflectivity.size(0) - 1,
                                      &ef_emlrtBCI, &st);
      }
      if (Simulation.size(0) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, Simulation.size(0) - 1,
                                      &ff_emlrtBCI, &st);
      }
      if (shifted_data.size(0) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, shifted_data.size(0) - 1,
                                      &gf_emlrtBCI, &st);
      }
      if (problem->calculations.all_chis.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(
            1, 1, problem->calculations.all_chis.size(0), &hf_emlrtBCI, &st);
      }
      if (problem->ssubs.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, problem->ssubs.size(0),
                                      &df_emlrtBCI, &st);
      }
      b_st.site = &nb_emlrtRSI;
      standardTF_layers_core(
          &b_st, thisContrastLayers_data, thisContrastLayers_size,
          problemDef->params[0], problemDef->geometry, thisNba, thisNbs,
          problemDef->resample[0], controls->calcSld, thisSf, thisQshift,
          problemDef->dataPresent[0], problemDef_cells->f2[0].f1,
          problemDef_cells->f3[0].f1, problemDef_cells->f4[0].f1,
          problemDef_cells->f1[0].f1, thisBackground, thisResol,
          problemDef->contrastBacksType[0],
          static_cast<real_T>(problemDef->params.size(1)), controls->resamPars,
          sldProfile, reflectivity[0].f1, Simulation[0].f1, shifted_data[0].f1,
          layerSld_data, layerSld_size, resampledLayers,
          &(problem->calculations.all_chis.data())[0],
          &(problem->ssubs.data())[0]);
      //  Store returned values for this contrast in the output arrays.
      //  As well as the calculated profiles, we also store a record of
      //  the other values (background, scalefactors etc) for each contrast
      //  for future use.
      if (sldProfiles.size(0) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, sldProfiles.size(0) - 1,
                                      &af_emlrtBCI, &st);
      }
      sldProfiles[0].f1.set_size(&vh_emlrtRTEI, &st, sldProfile.size(0), 2);
      b_index = sldProfile.size(0) * 2;
      for (i = 0; i < b_index; i++) {
        sldProfiles[0].f1[i] = sldProfile[i];
      }
      if (layerSlds.size(0) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, layerSlds.size(0) - 1, &bf_emlrtBCI,
                                      &st);
      }
      layerSlds[0].f1.set_size(&wh_emlrtRTEI, &st, layerSld_size[0], 3);
      b_index = layerSld_size[0] * 3;
      for (i = 0; i < b_index; i++) {
        layerSlds[0].f1[i] = layerSld_data[i];
      }
      if (backgs.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, backgs.size(0), &re_emlrtBCI, &st);
      }
      backgs[0] = thisBackground;
      if (problem->qshifts.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, problem->qshifts.size(0),
                                      &se_emlrtBCI, &st);
      }
      problem->qshifts[0] = thisQshift;
      if (problem->scalefactors.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, problem->scalefactors.size(0),
                                      &te_emlrtBCI, &st);
      }
      problem->scalefactors[0] = thisSf;
      if (problem->nbairs.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, problem->nbairs.size(0),
                                      &ue_emlrtBCI, &st);
      }
      problem->nbairs[0] = thisNba;
      if (problem->nbsubs.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, problem->nbsubs.size(0),
                                      &ve_emlrtBCI, &st);
      }
      problem->nbsubs[0] = thisNbs;
      if (problem->resolutions.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, problem->resolutions.size(0),
                                      &we_emlrtBCI, &st);
      }
      problem->resolutions[0] = thisResol;
      if (problem->allSubRough.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, problem->allSubRough.size(0),
                                      &xe_emlrtBCI, &st);
      }
      if (allLayers.size(0) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, allLayers.size(0) - 1, &cf_emlrtBCI,
                                      &st);
      }
      allLayers[0].f1.set_size(&xh_emlrtRTEI, &st, resampledLayers.size(0), 3);
      b_index = resampledLayers.size(0) * 3;
      for (i = 0; i < b_index; i++) {
        allLayers[0].f1[i] = resampledLayers[i];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    problem->backgrounds.set_size(
        &ih_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
    for (i = 0; i < loop_ub; i++) {
      problem->backgrounds[i] = backgs[i];
    }
  } break;
  case 1:
    st.site = &jb_emlrtRSI;
    standardTF_stanlay_paraPoints(
        &st, problemDef, problemDef_cells, controls, problem->ssubs,
        problem->backgrounds, problem->qshifts, problem->scalefactors,
        problem->nbairs, problem->nbsubs, problem->resolutions,
        problem->calculations.all_chis, reflectivity, Simulation, shifted_data,
        layerSlds, sldProfiles, allLayers, problem->allSubRough);
    break;
  }
  //  Package everything into one array for tidy output
  st.site = &kb_emlrtRSI;
  problem->calculations.sum_chi =
      coder::sum(&st, problem->calculations.all_chis);
  problem->resample.set_size(&yh_emlrtRTEI, sp, 1,
                             problemDef->resample.size(1));
  loop_ub = problemDef->resample.size(1);
  for (i = 0; i < loop_ub; i++) {
    problem->resample[i] = problemDef->resample[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (standardTF_stanLay_reflectivityCalculation.cpp)
