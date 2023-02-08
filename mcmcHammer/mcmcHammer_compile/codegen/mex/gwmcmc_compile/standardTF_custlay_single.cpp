//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// standardTF_custlay_single.cpp
//
// Code generation for function 'standardTF_custlay_single'
//

// Include files
#include "standardTF_custlay_single.h"
#include "backSort.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "gwmcmc_compile_mexutil.h"
#include "gwmcmc_compile_types.h"
#include "loopCppCustlayWrapper_CustLaysingle.h"
#include "rt_nonfinite.h"
#include "standardTF_layers_core.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo ai_emlrtRSI{
    69,                          // lineNo
    "standardTF_custlay_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pathName
};

static emlrtRSInfo bi_emlrtRSI{
    72,                          // lineNo
    "standardTF_custlay_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pathName
};

static emlrtRSInfo ci_emlrtRSI{
    84,                          // lineNo
    "standardTF_custlay_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pathName
};

static emlrtRSInfo di_emlrtRSI{
    107,                         // lineNo
    "standardTF_custlay_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pathName
};

static emlrtMCInfo b_emlrtMCI{
    23,                                       // lineNo
    2,                                        // colNo
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m" // pName
};

static emlrtDCInfo fc_emlrtDCI{
    39,                          // lineNo
    18,                          // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    1                                                 // checkKind
};

static emlrtRTEInfo kc_emlrtRTEI{
    45,                          // lineNo
    9,                           // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRTEInfo lc_emlrtRTEI{
    50,                          // lineNo
    9,                           // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRTEInfo mc_emlrtRTEI{
    55,                          // lineNo
    9,                           // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRTEInfo nc_emlrtRTEI{
    78,                          // lineNo
    9,                           // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtBCInfo sm_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    91,                          // lineNo
    27,                          // colNo
    "allRoughs",                 // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo tm_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    93,                          // lineNo
    29,                          // colNo
    "resample",                  // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo um_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    96,                          // lineNo
    35,                          // colNo
    "dataPresent",               // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo vm_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    99,                          // lineNo
    31,                          // colNo
    "backsType",                 // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo wm_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    133,                         // lineNo
    15,                          // colNo
    "allRoughs",                 // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo xm_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    127,                         // lineNo
    12,                          // colNo
    "backgs",                    // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo ym_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    128,                         // lineNo
    13,                          // colNo
    "qshifts",                   // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo an_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    129,                         // lineNo
    9,                           // colNo
    "sfs",                       // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo bn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    130,                         // lineNo
    10,                          // colNo
    "nbas",                      // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo cn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    131,                         // lineNo
    10,                          // colNo
    "nbss",                      // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo dn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    132,                         // lineNo
    12,                          // colNo
    "resols",                    // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo en_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    87,                          // lineNo
    36,                          // colNo
    "allLayers",                 // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo fn_emlrtBCI{
    0,                           // iFirst
    0,                           // iLast
    92,                          // lineNo
    37,                          // colNo
    "repeatLayers",              // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo gn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    119,                         // lineNo
    17,                          // colNo
    "sldProfiles",               // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo hn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    124,                         // lineNo
    15,                          // colNo
    "allLayers",                 // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo in_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    118,                         // lineNo
    14,                          // colNo
    "outSsubs",                  // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo jn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    120,                         // lineNo
    18,                          // colNo
    "reflectivity",              // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo kn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    121,                         // lineNo
    16,                          // colNo
    "Simulation",                // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo ln_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    122,                         // lineNo
    18,                          // colNo
    "shifted_data",              // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo mn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    123,                         // lineNo
    15,                          // colNo
    "layerSlds",                 // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo nn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    126,                         // lineNo
    10,                          // colNo
    "chis",                      // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtDCInfo gc_emlrtDCI{
    9,                                        // lineNo
    23,                                       // colNo
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m", // pName
    1             // checkKind
};

static emlrtDCInfo hc_emlrtDCI{
    11,                                       // lineNo
    20,                                       // colNo
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m", // pName
    1             // checkKind
};

static emlrtRTEInfo oc_emlrtRTEI{
    13,                                       // lineNo
    10,                                       // colNo
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m" // pName
};

static emlrtRTEInfo pc_emlrtRTEI{
    28,                                       // lineNo
    10,                                       // colNo
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m" // pName
};

static emlrtBCInfo on_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    29,                                       // lineNo
    30,                                       // colNo
    "tempAllLayers",                          // aName
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m", // pName
    0             // checkKind
};

static emlrtBCInfo pn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    46,                          // lineNo
    18,                          // colNo
    "reflectivity",              // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo qn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    51,                          // lineNo
    16,                          // colNo
    "Simulation",                // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo rn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    56,                          // lineNo
    15,                          // colNo
    "allLayers",                 // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo sn_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    14,                                       // lineNo
    16,                                       // colNo
    "allLayers",                              // aName
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m", // pName
    0             // checkKind
};

static emlrtBCInfo tn_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    15,                                       // lineNo
    20,                                       // colNo
    "tempAllLayers",                          // aName
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m", // pName
    0             // checkKind
};

static emlrtBCInfo un_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    34,                                       // lineNo
    16,                                       // colNo
    "allLayers",                              // aName
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m", // pName
    0             // checkKind
};

static emlrtDCInfo ic_emlrtDCI{
    31,                          // lineNo
    17,                          // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    1                                                 // checkKind
};

static emlrtDCInfo jc_emlrtDCI{
    30,                          // lineNo
    16,                          // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    1                                                 // checkKind
};

static emlrtDCInfo kc_emlrtDCI{
    30,                          // lineNo
    16,                          // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    4                                                 // checkKind
};

static emlrtDCInfo lc_emlrtDCI{
    36,                          // lineNo
    1,                           // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    1                                                 // checkKind
};

static emlrtBCInfo vn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    39,                          // lineNo
    36,                          // colNo
    "layerSlds",                 // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo wn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    39,                          // lineNo
    36,                          // colNo
    "sldProfiles",               // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo xn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    39,                          // lineNo
    36,                          // colNo
    "shifted_data",              // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo yn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    39,                          // lineNo
    36,                          // colNo
    "reflectivity",              // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo ao_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    39,                          // lineNo
    36,                          // colNo
    "Simulation",                // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo bo_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    39,                          // lineNo
    36,                          // colNo
    "allLayers",                 // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo co_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    69,                          // lineNo
    5,                           // colNo
    "tempAllLayers",             // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo do_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    69,                          // lineNo
    5,                           // colNo
    "allLayers",                 // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo eo_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    84,                          // lineNo
    84,                          // colNo
    "cBacks",                    // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo fo_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    84,                          // lineNo
    95,                          // colNo
    "cShifts",                   // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo go_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    84,                          // lineNo
    106,                         // colNo
    "cScales",                   // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo ho_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    84,                          // lineNo
    115,                         // colNo
    "cNbas",                     // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo io_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    84,                          // lineNo
    124,                         // colNo
    "cNbss",                     // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo jo_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    84,                          // lineNo
    132,                         // colNo
    "cRes",                      // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo ko_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    15,                                       // lineNo
    6,                                        // colNo
    "tempAllLayers",                          // aName
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m", // pName
    0             // checkKind
};

static emlrtBCInfo lo_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    34,                                       // lineNo
    6,                                        // colNo
    "allLayers",                              // aName
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m", // pName
    0             // checkKind
};

static emlrtBCInfo mo_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    14,                                       // lineNo
    6,                                        // colNo
    "allLayers",                              // aName
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m", // pName
    0             // checkKind
};

static emlrtBCInfo no_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    56,                          // lineNo
    5,                           // colNo
    "allLayers",                 // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo oo_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    51,                          // lineNo
    5,                           // colNo
    "Simulation",                // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtBCInfo po_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    46,                          // lineNo
    5,                           // colNo
    "reflectivity",              // aName
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m", // pName
    0                                                 // checkKind
};

static emlrtRTEInfo hn_emlrtRTEI{
    30,                          // lineNo
    10,                          // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRTEInfo in_emlrtRTEI{
    36,                          // lineNo
    1,                           // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRTEInfo jn_emlrtRTEI{
    3,                           // lineNo
    18,                          // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRTEInfo kn_emlrtRTEI{
    39,                          // lineNo
    36,                          // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRTEInfo ln_emlrtRTEI{
    46,                          // lineNo
    5,                           // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRTEInfo mn_emlrtRTEI{
    51,                          // lineNo
    5,                           // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRTEInfo nn_emlrtRTEI{
    56,                          // lineNo
    5,                           // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRTEInfo on_emlrtRTEI{
    69,                          // lineNo
    5,                           // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRTEInfo pn_emlrtRTEI{
    9,                                        // lineNo
    41,                                       // colNo
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m" // pName
};

static emlrtRTEInfo qn_emlrtRTEI{
    14,                                       // lineNo
    6,                                        // colNo
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m" // pName
};

static emlrtRTEInfo rn_emlrtRTEI{
    15,                                       // lineNo
    6,                                        // colNo
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m" // pName
};

static emlrtRTEInfo sn_emlrtRTEI{
    34,                                       // lineNo
    6,                                        // colNo
    "loopMatalbCustlayWrapper_CustLaysingle", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m" // pName
};

static emlrtRTEInfo un_emlrtRTEI{
    37,                          // lineNo
    12,                          // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRTEInfo vn_emlrtRTEI{
    119,                         // lineNo
    5,                           // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRTEInfo wn_emlrtRTEI{
    124,                         // lineNo
    5,                           // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

static emlrtRSInfo mk_emlrtRSI{
    24,                                       // lineNo
    "loopMatalbCustlayWrapper_CustLaysingle", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m" // pathName
};

static emlrtRSInfo rk_emlrtRSI{
    23,                                       // lineNo
    "loopMatalbCustlayWrapper_CustLaysingle", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m" // pathName
};

static emlrtRSInfo kl_emlrtRSI{
    38,                                       // lineNo
    "loopMatalbCustlayWrapper_CustLaysingle", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aysingle.m" // pathName
};

// Function Definitions
void standardTF_custlay_single(
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
  coder::array<cell_wrap_1, 1U> b_allLayers;
  coder::array<cell_wrap_25, 1U> r;
  coder::array<cell_wrap_26, 1U> b_tempAllLayers;
  coder::array<real_T, 2U> resamLayers;
  coder::array<real_T, 2U> sldProfile;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *tempAllLayers;
  const mxArray *tempAllRoughs;
  const mxArray *y;
  real_T thisBackground;
  real_T thisNba;
  real_T thisNbs;
  real_T thisQshift;
  real_T thisResol;
  real_T thisSf;
  int32_T exitg1;
  int32_T i;
  int32_T kstr;
  int32_T loop_ub;
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Single threaded version of the custom layers, standardTF reflectivity
  //  calculation. The function extracts the relevant parameters from the input
  //  arrays, allocates these on a pre-contrast basis, then calls the 'core'
  //  calculation (the core layers standardTf calc is shared between multiple
  //  calculation types).
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
  //  Pre-Allocation of output arrays...
  if (!(problemDef->numberOfContrasts >= 0.0)) {
    emlrtNonNegativeCheckR2012b(problemDef->numberOfContrasts, &kc_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &jc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  backgs.set_size(&hn_emlrtRTEI, sp,
                  static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &ic_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(problemDef->numberOfContrasts);
  allRoughs.set_size(&in_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &lc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    allRoughs[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &fc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  layerSlds.set_size(&jn_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &vn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&jn_emlrtRTEI, sp, 0, layerSlds[b_i].f1.size(1));
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &vn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&jn_emlrtRTEI, sp, layerSlds[b_i].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  sldProfiles.set_size(&jn_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &wn_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&jn_emlrtRTEI, sp, 0,
                                 sldProfiles[b_i].f1.size(1));
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &wn_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&jn_emlrtRTEI, sp, sldProfiles[b_i].f1.size(0),
                                 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  shifted_data.set_size(&jn_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &xn_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[b_i].f1.set_size(&jn_emlrtRTEI, sp, 0,
                                  shifted_data[b_i].f1.size(1));
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &xn_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[b_i].f1.set_size(&jn_emlrtRTEI, sp,
                                  shifted_data[b_i].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  reflectivity.set_size(&jn_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &yn_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&jn_emlrtRTEI, sp, 0,
                                  reflectivity[b_i].f1.size(1));
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &yn_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&jn_emlrtRTEI, sp,
                                  reflectivity[b_i].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &kc_emlrtRTEI,
      (emlrtConstCTX)sp);
  reflectivity.set_size(&kn_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &pn_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&ln_emlrtRTEI, sp, 2,
                                  reflectivity[b_i].f1.size(1));
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &pn_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&ln_emlrtRTEI, sp,
                                  reflectivity[b_i].f1.size(0), 2);
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &pn_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[0] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &po_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[1] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &po_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[2] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &po_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  Simulation.set_size(&jn_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &ao_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&jn_emlrtRTEI, sp, 0,
                                Simulation[b_i].f1.size(1));
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &ao_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&jn_emlrtRTEI, sp, Simulation[b_i].f1.size(0),
                                2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &lc_emlrtRTEI,
      (emlrtConstCTX)sp);
  Simulation.set_size(&kn_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &qn_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&mn_emlrtRTEI, sp, 2,
                                Simulation[b_i].f1.size(1));
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &qn_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&mn_emlrtRTEI, sp, Simulation[b_i].f1.size(0),
                                2);
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &qn_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[0] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &oo_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[1] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &oo_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[2] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &oo_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  allLayers.set_size(&jn_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &bo_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&jn_emlrtRTEI, sp, 0, allLayers[b_i].f1.size(1));
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &bo_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&jn_emlrtRTEI, sp, allLayers[b_i].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &mc_emlrtRTEI,
      (emlrtConstCTX)sp);
  allLayers.set_size(&kn_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &rn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&nn_emlrtRTEI, sp, 2, allLayers[b_i].f1.size(1));
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &rn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&nn_emlrtRTEI, sp, allLayers[b_i].f1.size(0), 1);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &rn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[0] = 1.0;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &no_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[1] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //    --- End Memory Allocation ---
  //  Resampling parameters
  //  Depending on custom layer language we change the functions used
  //  so if there are multiple language models we should have a variable that
  //  seeks what language model is being used
  b_bool = false;
  if ((problemDef_cells->f14[0].f1[1].f1.size(0) == 1) &&
      (problemDef_cells->f14[0].f1[1].f1.size(1) == 6)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 6) {
        if (problemDef_cells->f14[0].f1[1].f1[kstr] != b_cv[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  if (b_bool) {
    kstr = 0;
  } else {
    b_bool = false;
    if ((problemDef_cells->f14[0].f1[1].f1.size(0) == 1) &&
        (problemDef_cells->f14[0].f1[1].f1.size(1) == 3)) {
      kstr = 0;
      do {
        exitg1 = 0;
        if (kstr < 3) {
          if (problemDef_cells->f14[0].f1[1].f1[kstr] != b_cv1[kstr]) {
            exitg1 = 1;
          } else {
            kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      kstr = 1;
    } else {
      kstr = -1;
    }
  }
  switch (kstr) {
  case 0:
    //  Call the Matlab parallel loop to process the custom models.....
    st.site = &ai_emlrtRSI;
    tempAllLayers = nullptr;
    tempAllRoughs = nullptr;
    //  Wrapper function for calling 'loopMatlabCustomLayers'. This wrapper is
    //  necessary to deal with typedef problems for the coder if feval is used
    //  directly from the main function
    if (problemDef->numberOfContrasts != i) {
      emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &gc_emlrtDCI, &st);
    }
    b_tempAllLayers.set_size(
        &on_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &co_emlrtBCI, &st);
      }
      b_tempAllLayers[b_i].f1.set_size(&on_emlrtRTEI, &st, 0,
                                       b_tempAllLayers[b_i].f1.size(1));
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &co_emlrtBCI, &st);
      }
      b_tempAllLayers[b_i].f1.set_size(&on_emlrtRTEI, &st,
                                       b_tempAllLayers[b_i].f1.size(0), 0);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    allLayers.set_size(&on_emlrtRTEI, &st,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &do_emlrtBCI, &st);
      }
      allLayers[b_i].f1.set_size(&on_emlrtRTEI, &st, 0,
                                 allLayers[b_i].f1.size(1));
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &do_emlrtBCI, &st);
      }
      allLayers[b_i].f1.set_size(&on_emlrtRTEI, &st, allLayers[b_i].f1.size(0),
                                 0);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    if (problemDef->numberOfContrasts != i) {
      emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &hc_emlrtDCI, &st);
    }
    emlrtForLoopVectorCheckR2021a(
        1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
        static_cast<int32_T>(problemDef->numberOfContrasts), &oc_emlrtRTEI,
        &st);
    allLayers.set_size(&pn_emlrtRTEI, &st,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
    b_tempAllLayers.set_size(
        &pn_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &sn_emlrtBCI, &st);
      }
      allLayers[b_i].f1.set_size(&qn_emlrtRTEI, &st, 1,
                                 allLayers[b_i].f1.size(1));
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &sn_emlrtBCI, &st);
      }
      allLayers[b_i].f1.set_size(&qn_emlrtRTEI, &st, allLayers[b_i].f1.size(0),
                                 2);
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &sn_emlrtBCI, &st);
      }
      allLayers[b_i].f1[0] = 1.0;
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &mo_emlrtBCI, &st);
      }
      allLayers[b_i].f1[1] = 1.0;
      //  Type def as double (size not important)
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &tn_emlrtBCI, &st);
      }
      b_tempAllLayers[b_i].f1.set_size(&rn_emlrtRTEI, &st, 1,
                                       b_tempAllLayers[b_i].f1.size(1));
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &tn_emlrtBCI, &st);
      }
      b_tempAllLayers[b_i].f1.set_size(&rn_emlrtRTEI, &st,
                                       b_tempAllLayers[b_i].f1.size(0), 5);
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &tn_emlrtBCI, &st);
      }
      for (i = 0; i < 5; i++) {
        if (b_i > b_tempAllLayers.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                        &ko_emlrtBCI, &st);
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
    b_st.site = &rk_emlrtRSI;
    c_st.site = &mk_emlrtRSI;
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
          emlrt_marshallOut(problemDef->params), &b_emlrtMCI, &tempAllLayers,
          &tempAllRoughs);
    b_st.site = &rk_emlrtRSI;
    emlrt_marshallIn(&b_st, emlrtAlias(tempAllLayers), "tempAllLayers",
                     b_tempAllLayers);
    //  All the following is intended to be casting from mxArray's to doubles.
    //  I'm not sure if all of this is necessary, but it compiles...
    emlrtForLoopVectorCheckR2021a(
        1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
        static_cast<int32_T>(problemDef->numberOfContrasts), &pc_emlrtRTEI,
        &st);
    allLayers.set_size(&pn_emlrtRTEI, &st,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &on_emlrtBCI, &st);
      }
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &un_emlrtBCI, &st);
      }
      allLayers[b_i].f1.set_size(&sn_emlrtRTEI, &st,
                                 b_tempAllLayers[b_i].f1.size(0),
                                 allLayers[b_i].f1.size(1));
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &un_emlrtBCI, &st);
      }
      allLayers[b_i].f1.set_size(&sn_emlrtRTEI, &st, allLayers[b_i].f1.size(0),
                                 b_tempAllLayers[b_i].f1.size(1));
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &un_emlrtBCI, &st);
      }
      kstr = b_tempAllLayers[b_i].f1.size(0) * b_tempAllLayers[b_i].f1.size(1);
      for (i = 0; i < kstr; i++) {
        if (b_i > allLayers.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                        &lo_emlrtBCI, &st);
        }
        allLayers[b_i].f1[i] = b_tempAllLayers[b_i].f1[i];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    // allLayers = tempAllLayers;
    b_st.site = &kl_emlrtRSI;
    emlrt_marshallIn(&b_st, emlrtAlias(tempAllRoughs), "tempAllRoughs",
                     allRoughs);
    emlrtDestroyArray(&tempAllLayers);
    emlrtDestroyArray(&tempAllRoughs);
    break;
  case 1:
    st.site = &bi_emlrtRSI;
    c_loopCppCustlayWrapper_CustLay(
        &st, problemDef->nba, problemDef->nbs, problemDef->numberOfContrasts,
        &problemDef_cells->f14[0], problemDef->params, r, allRoughs);
    b_allLayers.set_size(&tn_emlrtRTEI, sp, r.size(0));
    i = r.size(0);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      b_allLayers[b_i].f1.set_size(&tn_emlrtRTEI, sp, r[b_i].f1.size[0],
                                   r[b_i].f1.size[1]);
      kstr = r[b_i].f1.size[0] * r[b_i].f1.size[1];
      for (int32_T i1{0}; i1 < kstr; i1++) {
        b_allLayers[b_i].f1[i1] = r[b_i].f1.data[i1];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    allLayers.set_size(&tn_emlrtRTEI, sp, b_allLayers.size(0));
    kstr = b_allLayers.size(0);
    for (i = 0; i < kstr; i++) {
      allLayers[i] = b_allLayers[i];
    }
    break;
  }
  //  Single cored over all contrasts
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &nc_emlrtRTEI,
      (emlrtConstCTX)sp);
  outSsubs.set_size(&un_emlrtRTEI, sp,
                    static_cast<int32_T>(problemDef->numberOfContrasts));
  sldProfiles.set_size(&kn_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  reflectivity.set_size(&kn_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  Simulation.set_size(&kn_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  shifted_data.set_size(&kn_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  layerSlds.set_size(&kn_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  chis.set_size(&un_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  qshifts.set_size(&un_emlrtRTEI, sp,
                   static_cast<int32_T>(problemDef->numberOfContrasts));
  sfs.set_size(&un_emlrtRTEI, sp,
               static_cast<int32_T>(problemDef->numberOfContrasts));
  nbas.set_size(&un_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  nbss.set_size(&un_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  resols.set_size(&un_emlrtRTEI, sp,
                  static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    //  Extract the relevant parameter values for this contrast
    //  from the input arrays.
    //  First need to decide which values of the backrounds, scalefactors
    //  data shifts and bulk contrasts are associated with this contrast
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastBacks.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastBacks.size(1), &eo_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastShifts.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastShifts.size(1), &fo_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastScales.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastScales.size(1), &go_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastNbas.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastNbas.size(1), &ho_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastNbss.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastNbss.size(1), &io_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastRes.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastRes.size(1), &jo_emlrtBCI, (emlrtConstCTX)sp);
    }
    st.site = &ci_emlrtRSI;
    backSort(&st, problemDef->contrastBacks[b_i],
             problemDef->contrastShifts[b_i], problemDef->contrastScales[b_i],
             problemDef->contrastNbas[b_i], problemDef->contrastNbss[b_i],
             problemDef->contrastRes[b_i], problemDef->backs,
             problemDef->shifts, problemDef->sf, problemDef->nba,
             problemDef->nbs, problemDef->res, &thisBackground, &thisQshift,
             &thisSf, &thisNba, &thisNbs, &thisResol);
    //  Get the custom layers output for this contrast
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &en_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    //  For the other parameters, we extract the correct ones from the input
    //  arrays
    if (b_i + 1 > allRoughs.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, allRoughs.size(0), &sm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (b_i > 0) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, 0, &fn_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (problemDef->resample.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->resample.size(1),
                                    &tm_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (problemDef->dataPresent.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->dataPresent.size(1),
                                    &um_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (problemDef->contrastBacksType.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->contrastBacksType.size(1),
                                    &vm_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  Now call the core standardTF_stanlay reflectivity calculation
    //  In this case we are single cored, so we do not parallelise over
    //  points
    //  Call the reflectivity calculation
    if (reflectivity.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, reflectivity.size(0) - 1,
                                    &jn_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (Simulation.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, Simulation.size(0) - 1, &kn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (shifted_data.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, shifted_data.size(0) - 1,
                                    &ln_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (layerSlds.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, layerSlds.size(0) - 1, &mn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (chis.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, chis.size(0), &nn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (outSsubs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, outSsubs.size(0), &in_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &di_emlrtRSI;
    standardTF_layers_core(
        &st, allLayers[0].f1, allRoughs[0], problemDef->geometry, thisNba,
        thisNbs, problemDef->resample[0], controls->calcSld, thisSf, thisQshift,
        problemDef->dataPresent[0], problemDef_cells->f2[0].f1,
        problemDef_cells->f3[0].f1, problemDef_cells->f4[0].f1,
        problemDef_cells->f1[0].f1, thisBackground, thisResol,
        problemDef->contrastBacksType[0],
        static_cast<real_T>(problemDef->params.size(1)), controls->resamPars,
        sldProfile, reflectivity[0].f1, Simulation[0].f1, shifted_data[0].f1,
        layerSlds[0].f1, resamLayers, &(chis.data())[0], &(outSsubs.data())[0]);
    //  Store returned values for this contrast in the output arrays.
    //  As well as the calculated profiles, we also store a record of
    //  the other values (background, scalefactors etc) for each contrast
    //  for future use.
    if (sldProfiles.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, sldProfiles.size(0) - 1, &gn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProfiles[0].f1.set_size(&vn_emlrtRTEI, sp, sldProfile.size(0), 2);
    kstr = sldProfile.size(0) * 2;
    for (i = 0; i < kstr; i++) {
      sldProfiles[0].f1[i] = sldProfile[i];
    }
    if (allLayers.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, allLayers.size(0) - 1, &hn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[0].f1.set_size(&wn_emlrtRTEI, sp, resamLayers.size(0), 3);
    kstr = resamLayers.size(0) * 3;
    for (i = 0; i < kstr; i++) {
      allLayers[0].f1[i] = resamLayers[i];
    }
    if (backgs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, backgs.size(0), &xm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    backgs[0] = thisBackground;
    if (qshifts.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, qshifts.size(0), &ym_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    qshifts[0] = thisQshift;
    if (sfs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, sfs.size(0), &an_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sfs[0] = thisSf;
    if (nbas.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nbas.size(0), &bn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    nbas[0] = thisNba;
    if (nbss.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nbss.size(0), &cn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    nbss[0] = thisNbs;
    if (resols.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, resols.size(0), &dn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    resols[0] = thisResol;
    if (allRoughs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, allRoughs.size(0), &wm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (standardTF_custlay_single.cpp)
