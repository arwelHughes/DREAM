//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// standardTF_custlay_paraPoints.cpp
//
// Code generation for function 'standardTF_custlay_paraPoints'
//

// Include files
#include "standardTF_custlay_paraPoints.h"
#include "backSort.h"
#include "callReflectivity.h"
#include "chiSquared.h"
#include "groupLayers_Mod.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "gwmcmc_compile_mexutil.h"
#include "gwmcmc_compile_types.h"
#include "loopCppCustlayWrapper_CustLaypoints.h"
#include "makeSLDProfiles.h"
#include "resampleLayers.h"
#include "rt_nonfinite.h"
#include "shiftdata.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo ji_emlrtRSI{
    67,                              // lineNo
    "standardTF_custlay_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pathName
};

static emlrtRSInfo ki_emlrtRSI{
    71,                              // lineNo
    "standardTF_custlay_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pathName
};

static emlrtRSInfo li_emlrtRSI{
    83,                              // lineNo
    "standardTF_custlay_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pathName
};

static emlrtRSInfo mi_emlrtRSI{
    108,                             // lineNo
    "standardTF_custlay_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pathName
};

static emlrtMCInfo d_emlrtMCI{
    23,                                       // lineNo
    2,                                        // colNo
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m" // pName
};

static emlrtDCInfo oc_emlrtDCI{
    39,                              // lineNo
    18,                              // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    1                                                     // checkKind
};

static emlrtRTEInfo rc_emlrtRTEI{
    45,                              // lineNo
    9,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo sc_emlrtRTEI{
    50,                              // lineNo
    9,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo tc_emlrtRTEI{
    55,                              // lineNo
    9,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo uc_emlrtRTEI{
    78,                              // lineNo
    9,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtBCInfo fp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    92,                              // lineNo
    27,                              // colNo
    "allRoughs",                     // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo gp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    94,                              // lineNo
    29,                              // colNo
    "resample",                      // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo hp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    97,                              // lineNo
    35,                              // colNo
    "dataPresent",                   // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo ip_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    100,                             // lineNo
    31,                              // colNo
    "backsType",                     // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo jp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    134,                             // lineNo
    15,                              // colNo
    "allRoughs",                     // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo kp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    128,                             // lineNo
    12,                              // colNo
    "backgs",                        // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo lp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    129,                             // lineNo
    13,                              // colNo
    "qshifts",                       // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo mp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    130,                             // lineNo
    9,                               // colNo
    "sfs",                           // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo np_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    131,                             // lineNo
    10,                              // colNo
    "nbas",                          // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo op_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    132,                             // lineNo
    10,                              // colNo
    "nbss",                          // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo pp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    133,                             // lineNo
    12,                              // colNo
    "resols",                        // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo qp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    88,                              // lineNo
    36,                              // colNo
    "allLayers",                     // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo rp_emlrtBCI{
    0,                               // iFirst
    0,                               // iLast
    93,                              // lineNo
    37,                              // colNo
    "repeatLayers",                  // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo sp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    120,                             // lineNo
    17,                              // colNo
    "sldProfiles",                   // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo tp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    121,                             // lineNo
    18,                              // colNo
    "reflectivity",                  // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo up_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    124,                             // lineNo
    15,                              // colNo
    "layerSlds",                     // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo vp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    125,                             // lineNo
    15,                              // colNo
    "allLayers",                     // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo wp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    119,                             // lineNo
    14,                              // colNo
    "outSsubs",                      // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo xp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    123,                             // lineNo
    18,                              // colNo
    "shifted_data",                  // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo yp_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    127,                             // lineNo
    10,                              // colNo
    "chis",                          // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtDCInfo pc_emlrtDCI{
    9,                                        // lineNo
    23,                                       // colNo
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m", // pName
    1             // checkKind
};

static emlrtDCInfo qc_emlrtDCI{
    11,                                       // lineNo
    20,                                       // colNo
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m", // pName
    1             // checkKind
};

static emlrtRTEInfo vc_emlrtRTEI{
    13,                                       // lineNo
    10,                                       // colNo
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m" // pName
};

static emlrtRTEInfo wc_emlrtRTEI{
    28,                                       // lineNo
    10,                                       // colNo
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m" // pName
};

static emlrtBCInfo aq_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    29,                                       // lineNo
    30,                                       // colNo
    "tempAllLayers",                          // aName
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m", // pName
    0             // checkKind
};

static emlrtBCInfo bq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    122,                             // lineNo
    16,                              // colNo
    "Simulation",                    // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo cq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    46,                              // lineNo
    18,                              // colNo
    "reflectivity",                  // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo dq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    51,                              // lineNo
    16,                              // colNo
    "Simulation",                    // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo eq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    56,                              // lineNo
    15,                              // colNo
    "allLayers",                     // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo fq_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    14,                                       // lineNo
    16,                                       // colNo
    "allLayers",                              // aName
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m", // pName
    0             // checkKind
};

static emlrtBCInfo gq_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    15,                                       // lineNo
    20,                                       // colNo
    "tempAllLayers",                          // aName
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m", // pName
    0             // checkKind
};

static emlrtBCInfo hq_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    34,                                       // lineNo
    16,                                       // colNo
    "allLayers",                              // aName
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m", // pName
    0             // checkKind
};

static emlrtDCInfo rc_emlrtDCI{
    31,                              // lineNo
    17,                              // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    1                                                     // checkKind
};

static emlrtDCInfo sc_emlrtDCI{
    30,                              // lineNo
    16,                              // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    1                                                     // checkKind
};

static emlrtDCInfo tc_emlrtDCI{
    30,                              // lineNo
    16,                              // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    4                                                     // checkKind
};

static emlrtDCInfo uc_emlrtDCI{
    36,                              // lineNo
    1,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    1                                                     // checkKind
};

static emlrtBCInfo iq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    39,                              // lineNo
    36,                              // colNo
    "layerSlds",                     // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo jq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    39,                              // lineNo
    36,                              // colNo
    "sldProfiles",                   // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo kq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    39,                              // lineNo
    36,                              // colNo
    "shifted_data",                  // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo lq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    39,                              // lineNo
    36,                              // colNo
    "reflectivity",                  // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo mq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    39,                              // lineNo
    36,                              // colNo
    "Simulation",                    // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo nq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    39,                              // lineNo
    36,                              // colNo
    "allLayers",                     // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo oq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    67,                              // lineNo
    5,                               // colNo
    "tempAllLayers",                 // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo pq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    67,                              // lineNo
    5,                               // colNo
    "allLayers",                     // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo qq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    83,                              // lineNo
    84,                              // colNo
    "cBacks",                        // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo rq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    83,                              // lineNo
    95,                              // colNo
    "cShifts",                       // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo sq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    83,                              // lineNo
    106,                             // colNo
    "cScales",                       // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo tq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    83,                              // lineNo
    115,                             // colNo
    "cNbas",                         // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo uq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    83,                              // lineNo
    124,                             // colNo
    "cNbss",                         // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo vq_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    83,                              // lineNo
    132,                             // colNo
    "cRes",                          // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo wq_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    15,                                       // lineNo
    6,                                        // colNo
    "tempAllLayers",                          // aName
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m", // pName
    0             // checkKind
};

static emlrtBCInfo xq_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    34,                                       // lineNo
    6,                                        // colNo
    "allLayers",                              // aName
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m", // pName
    0             // checkKind
};

static emlrtBCInfo yq_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    14,                                       // lineNo
    6,                                        // colNo
    "allLayers",                              // aName
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m", // pName
    0             // checkKind
};

static emlrtBCInfo ar_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    56,                              // lineNo
    5,                               // colNo
    "allLayers",                     // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo br_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    51,                              // lineNo
    5,                               // colNo
    "Simulation",                    // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo cr_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    46,                              // lineNo
    5,                               // colNo
    "reflectivity",                  // aName
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtRTEInfo ho_emlrtRTEI{
    30,                              // lineNo
    10,                              // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo io_emlrtRTEI{
    36,                              // lineNo
    1,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo jo_emlrtRTEI{
    3,                               // lineNo
    18,                              // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo ko_emlrtRTEI{
    39,                              // lineNo
    36,                              // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo lo_emlrtRTEI{
    46,                              // lineNo
    5,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo mo_emlrtRTEI{
    51,                              // lineNo
    5,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo no_emlrtRTEI{
    56,                              // lineNo
    5,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo oo_emlrtRTEI{
    67,                              // lineNo
    5,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo po_emlrtRTEI{
    9,                                        // lineNo
    41,                                       // colNo
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m" // pName
};

static emlrtRTEInfo qo_emlrtRTEI{
    14,                                       // lineNo
    6,                                        // colNo
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m" // pName
};

static emlrtRTEInfo ro_emlrtRTEI{
    15,                                       // lineNo
    6,                                        // colNo
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m" // pName
};

static emlrtRTEInfo so_emlrtRTEI{
    34,                                       // lineNo
    6,                                        // colNo
    "loopMatalbCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m" // pName
};

static emlrtRTEInfo to_emlrtRTEI{
    71,                              // lineNo
    6,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo uo_emlrtRTEI{
    37,                              // lineNo
    12,                              // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo vo_emlrtRTEI{
    96,                              // lineNo
    16,                              // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo wo_emlrtRTEI{
    123,                             // lineNo
    5,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo xo_emlrtRTEI{
    120,                             // lineNo
    5,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo yo_emlrtRTEI{
    121,                             // lineNo
    5,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo ap_emlrtRTEI{
    124,                             // lineNo
    5,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRTEInfo bp_emlrtRTEI{
    125,                             // lineNo
    5,                               // colNo
    "standardTF_custlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_paraPoints.m" // pName
};

static emlrtRSInfo lk_emlrtRSI{
    24,                                       // lineNo
    "loopMatalbCustlayWrapper_CustLaypoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m" // pathName
};

static emlrtRSInfo qk_emlrtRSI{
    23,                                       // lineNo
    "loopMatalbCustlayWrapper_CustLaypoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m" // pathName
};

static emlrtRSInfo jl_emlrtRSI{
    38,                                       // lineNo
    "loopMatalbCustlayWrapper_CustLaypoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopMatlabCustomLayers/mexCompile/loopMatalbCustlayWrapper_CustL"
    "aypoints.m" // pathName
};

// Function Definitions
void standardTF_custlay_paraPoints(
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
  coder::array<real_T, 2U> b_problemDef_cells;
  coder::array<real_T, 2U> b_reflect;
  coder::array<real_T, 2U> layerSld;
  coder::array<real_T, 2U> resamLayers;
  coder::array<real_T, 2U> shifted_dat;
  coder::array<real_T, 2U> sldProfile;
  coder::array<real_T, 2U> theseLayers;
  coder::array<real_T, 1U> c_reflect;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *tempAllLayers;
  const mxArray *tempAllRoughs;
  const mxArray *y;
  real_T calcSld;
  real_T ssubs;
  real_T thisBackground;
  real_T thisNba;
  real_T thisNbs;
  real_T thisQshift;
  real_T thisResol;
  real_T thisSf;
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
  //  Multi threaded version of the custom layers over reflectivity poimnts
  //  for standardTF reflectivity calculation.
  //  The function extracts the relevant parameters from the input
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
  calcSld = controls->calcSld;
  //  Pre-Allocation of output arrays...
  //    --- Begin Memory Allocation ---
  if (!(problemDef->numberOfContrasts >= 0.0)) {
    emlrtNonNegativeCheckR2012b(problemDef->numberOfContrasts, &tc_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &sc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  backgs.set_size(&ho_emlrtRTEI, sp,
                  static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &rc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(problemDef->numberOfContrasts);
  allRoughs.set_size(&io_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &uc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T i1{0}; i1 < loop_ub; i1++) {
    allRoughs[i1] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &oc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  reflect = static_cast<int32_T>(problemDef->numberOfContrasts);
  layerSlds.set_size(&jo_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, layerSlds.size(0) - 1, &iq_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i1].f1.set_size(&jo_emlrtRTEI, sp, 0, layerSlds[i1].f1.size(1));
    if (i1 > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, layerSlds.size(0) - 1, &iq_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i1].f1.set_size(&jo_emlrtRTEI, sp, layerSlds[i1].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  sldProfiles.set_size(&jo_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, sldProfiles.size(0) - 1,
                                    &jq_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[i1].f1.set_size(&jo_emlrtRTEI, sp, 0,
                                sldProfiles[i1].f1.size(1));
    if (i1 > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, sldProfiles.size(0) - 1,
                                    &jq_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[i1].f1.set_size(&jo_emlrtRTEI, sp, sldProfiles[i1].f1.size(0),
                                0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  shifted_data.set_size(&jo_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, shifted_data.size(0) - 1,
                                    &kq_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i1].f1.set_size(&jo_emlrtRTEI, sp, 0,
                                 shifted_data[i1].f1.size(1));
    if (i1 > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, shifted_data.size(0) - 1,
                                    &kq_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i1].f1.set_size(&jo_emlrtRTEI, sp, shifted_data[i1].f1.size(0),
                                 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  reflectivity.set_size(&jo_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, reflectivity.size(0) - 1,
                                    &lq_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i1].f1.set_size(&jo_emlrtRTEI, sp, 0,
                                 reflectivity[i1].f1.size(1));
    if (i1 > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, reflectivity.size(0) - 1,
                                    &lq_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i1].f1.set_size(&jo_emlrtRTEI, sp, reflectivity[i1].f1.size(0),
                                 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &rc_emlrtRTEI,
      (emlrtConstCTX)sp);
  reflectivity.set_size(&ko_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &cq_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&lo_emlrtRTEI, sp, 2,
                                  reflectivity[b_i].f1.size(1));
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &cq_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&lo_emlrtRTEI, sp,
                                  reflectivity[b_i].f1.size(0), 2);
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &cq_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[0] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &cr_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[1] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &cr_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[2] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &cr_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  Simulation.set_size(&jo_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, Simulation.size(0) - 1, &mq_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i1].f1.set_size(&jo_emlrtRTEI, sp, 0, Simulation[i1].f1.size(1));
    if (i1 > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, Simulation.size(0) - 1, &mq_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i1].f1.set_size(&jo_emlrtRTEI, sp, Simulation[i1].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &sc_emlrtRTEI,
      (emlrtConstCTX)sp);
  Simulation.set_size(&ko_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &dq_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&mo_emlrtRTEI, sp, 2,
                                Simulation[b_i].f1.size(1));
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &dq_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&mo_emlrtRTEI, sp, Simulation[b_i].f1.size(0),
                                2);
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &dq_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[0] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &br_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[1] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &br_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[2] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &br_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  allLayers.set_size(&jo_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T i1{0}; i1 < reflect; i1++) {
    if (i1 > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, allLayers.size(0) - 1, &nq_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i1].f1.set_size(&jo_emlrtRTEI, sp, 0, allLayers[i1].f1.size(1));
    if (i1 > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, allLayers.size(0) - 1, &nq_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i1].f1.set_size(&jo_emlrtRTEI, sp, allLayers[i1].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &tc_emlrtRTEI,
      (emlrtConstCTX)sp);
  allLayers.set_size(&ko_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &eq_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&no_emlrtRTEI, sp, 2, allLayers[b_i].f1.size(1));
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &eq_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&no_emlrtRTEI, sp, allLayers[b_i].f1.size(0), 1);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &eq_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[0] = 1.0;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &ar_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[1] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //    --- End Memory Allocation ---
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
    st.site = &ji_emlrtRSI;
    tempAllLayers = nullptr;
    tempAllRoughs = nullptr;
    //  Wrapper function for calling 'loopMatlabCustomLayers'. This wrapper is
    //  necessary to deal with typedef problems for the coder if feval is used
    //  directly from the main function
    if (problemDef->numberOfContrasts != i) {
      emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &pc_emlrtDCI, &st);
    }
    b_tempAllLayers.set_size(
        &oo_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      if (i1 > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, b_tempAllLayers.size(0) - 1,
                                      &oq_emlrtBCI, &st);
      }
      b_tempAllLayers[i1].f1.set_size(&oo_emlrtRTEI, &st, 0,
                                      b_tempAllLayers[i1].f1.size(1));
      if (i1 > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, b_tempAllLayers.size(0) - 1,
                                      &oq_emlrtBCI, &st);
      }
      b_tempAllLayers[i1].f1.set_size(&oo_emlrtRTEI, &st,
                                      b_tempAllLayers[i1].f1.size(0), 0);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    allLayers.set_size(&oo_emlrtRTEI, &st,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      if (i1 > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, allLayers.size(0) - 1,
                                      &pq_emlrtBCI, &st);
      }
      allLayers[i1].f1.set_size(&oo_emlrtRTEI, &st, 0,
                                allLayers[i1].f1.size(1));
      if (i1 > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, allLayers.size(0) - 1,
                                      &pq_emlrtBCI, &st);
      }
      allLayers[i1].f1.set_size(&oo_emlrtRTEI, &st, allLayers[i1].f1.size(0),
                                0);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    if (problemDef->numberOfContrasts != i) {
      emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &qc_emlrtDCI, &st);
    }
    emlrtForLoopVectorCheckR2021a(
        1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
        static_cast<int32_T>(problemDef->numberOfContrasts), &vc_emlrtRTEI,
        &st);
    allLayers.set_size(&po_emlrtRTEI, &st,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
    b_tempAllLayers.set_size(
        &po_emlrtRTEI, &st,
        static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &fq_emlrtBCI, &st);
      }
      allLayers[b_i].f1.set_size(&qo_emlrtRTEI, &st, 1,
                                 allLayers[b_i].f1.size(1));
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &fq_emlrtBCI, &st);
      }
      allLayers[b_i].f1.set_size(&qo_emlrtRTEI, &st, allLayers[b_i].f1.size(0),
                                 2);
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &fq_emlrtBCI, &st);
      }
      allLayers[b_i].f1[0] = 1.0;
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &yq_emlrtBCI, &st);
      }
      allLayers[b_i].f1[1] = 1.0;
      //  Type def as double (size not important)
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &gq_emlrtBCI, &st);
      }
      b_tempAllLayers[b_i].f1.set_size(&ro_emlrtRTEI, &st, 1,
                                       b_tempAllLayers[b_i].f1.size(1));
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &gq_emlrtBCI, &st);
      }
      b_tempAllLayers[b_i].f1.set_size(&ro_emlrtRTEI, &st,
                                       b_tempAllLayers[b_i].f1.size(0), 5);
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &gq_emlrtBCI, &st);
      }
      for (i = 0; i < 5; i++) {
        if (b_i > b_tempAllLayers.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                        &wq_emlrtBCI, &st);
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
    b_st.site = &qk_emlrtRSI;
    c_st.site = &lk_emlrtRSI;
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
          emlrt_marshallOut(problemDef->params), &d_emlrtMCI, &tempAllLayers,
          &tempAllRoughs);
    b_st.site = &qk_emlrtRSI;
    emlrt_marshallIn(&b_st, emlrtAlias(tempAllLayers), "tempAllLayers",
                     b_tempAllLayers);
    //  All the following is intended to be casting from mxArray's to doubles.
    //  I'm not sure if all of this is necessary, but it compiles...
    emlrtForLoopVectorCheckR2021a(
        1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
        static_cast<int32_T>(problemDef->numberOfContrasts), &wc_emlrtRTEI,
        &st);
    allLayers.set_size(&po_emlrtRTEI, &st,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i > b_tempAllLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tempAllLayers.size(0) - 1,
                                      &aq_emlrtBCI, &st);
      }
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &hq_emlrtBCI, &st);
      }
      allLayers[b_i].f1.set_size(&so_emlrtRTEI, &st,
                                 b_tempAllLayers[b_i].f1.size(0),
                                 allLayers[b_i].f1.size(1));
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &hq_emlrtBCI, &st);
      }
      allLayers[b_i].f1.set_size(&so_emlrtRTEI, &st, allLayers[b_i].f1.size(0),
                                 b_tempAllLayers[b_i].f1.size(1));
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &hq_emlrtBCI, &st);
      }
      reflect =
          b_tempAllLayers[b_i].f1.size(0) * b_tempAllLayers[b_i].f1.size(1);
      for (i = 0; i < reflect; i++) {
        if (b_i > allLayers.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                        &xq_emlrtBCI, &st);
        }
        allLayers[b_i].f1[i] = b_tempAllLayers[b_i].f1[i];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    // allLayers = tempAllLayers;
    b_st.site = &jl_emlrtRSI;
    emlrt_marshallIn(&b_st, emlrtAlias(tempAllRoughs), "tempAllRoughs",
                     allRoughs);
    emlrtDestroyArray(&tempAllLayers);
    emlrtDestroyArray(&tempAllRoughs);
    //
    break;
  case 1:
    st.site = &ki_emlrtRSI;
    d_loopCppCustlayWrapper_CustLay(
        &st, problemDef->nba, problemDef->nbs, problemDef->numberOfContrasts,
        &problemDef_cells->f14[0], problemDef->params, r, allRoughs);
    b_allLayers.set_size(&tn_emlrtRTEI, sp, r.size(0));
    i = r.size(0);
    for (int32_T i1{0}; i1 < i; i1++) {
      b_allLayers[i1].f1.set_size(&tn_emlrtRTEI, sp, r[i1].f1.size[0],
                                  r[i1].f1.size[1]);
      reflect = r[i1].f1.size[0] * r[i1].f1.size[1];
      for (int32_T b_i{0}; b_i < reflect; b_i++) {
        b_allLayers[i1].f1[b_i] = r[i1].f1.data[b_i];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    allLayers.set_size(&to_emlrtRTEI, sp, b_allLayers.size(0));
    reflect = b_allLayers.size(0);
    for (i = 0; i < reflect; i++) {
      allLayers[i] = b_allLayers[i];
    }
    break;
  }
  //  Single cored over all contrasts
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &uc_emlrtRTEI,
      (emlrtConstCTX)sp);
  outSsubs.set_size(&uo_emlrtRTEI, sp,
                    static_cast<int32_T>(problemDef->numberOfContrasts));
  sldProfiles.set_size(&ko_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  reflectivity.set_size(&ko_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  Simulation.set_size(&ko_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  shifted_data.set_size(&ko_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  layerSlds.set_size(&ko_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  chis.set_size(&uo_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  qshifts.set_size(&uo_emlrtRTEI, sp,
                   static_cast<int32_T>(problemDef->numberOfContrasts));
  sfs.set_size(&uo_emlrtRTEI, sp,
               static_cast<int32_T>(problemDef->numberOfContrasts));
  nbas.set_size(&uo_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  nbss.set_size(&uo_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  resols.set_size(&uo_emlrtRTEI, sp,
                  static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    real_T b_calcSld;
    //  Extract the relevant parameter values for this contrast
    //  from the input arrays.
    //  First need to decide which values of the backrounds, scalefactors
    //  data shifts and bulk contrasts are associated with this contrast
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastBacks.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastBacks.size(1), &qq_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastShifts.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastShifts.size(1), &rq_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastScales.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastScales.size(1), &sq_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastNbas.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastNbas.size(1), &tq_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastNbss.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastNbss.size(1), &uq_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastRes.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastRes.size(1), &vq_emlrtBCI, (emlrtConstCTX)sp);
    }
    st.site = &li_emlrtRSI;
    backSort(&st, problemDef->contrastBacks[b_i],
             problemDef->contrastShifts[b_i], problemDef->contrastScales[b_i],
             problemDef->contrastNbas[b_i], problemDef->contrastNbss[b_i],
             problemDef->contrastRes[b_i], problemDef->backs,
             problemDef->shifts, problemDef->sf, problemDef->nba,
             problemDef->nbs, problemDef->res, &thisBackground, &thisQshift,
             &thisSf, &thisNba, &thisNbs, &thisResol);
    //  Call the custom layers function to get the layers array...
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &qp_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    //  For the other parameters, we extract the correct ones from the input
    //  arrays
    if (b_i + 1 > allRoughs.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, allRoughs.size(0), &fp_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (b_i > 0) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, 0, &rp_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (problemDef->resample.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->resample.size(1),
                                    &gp_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (problemDef->dataPresent.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->dataPresent.size(1),
                                    &hp_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (problemDef->contrastBacksType.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->contrastBacksType.size(1),
                                    &ip_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  Now call the core standardTF_stanlay reflectivity calculation
    //  In this case we are single cored, so we do not parallelise over
    //  points
    //  Call the reflectivity calculation
    st.site = &mi_emlrtRSI;
    b_calcSld = calcSld;
    //    This is the main reflectivity calculation for all Layers models in the
    //    standard target function.
    //
    //    The function first arranges the
    //    roughness' in the correct order according
    //    to geometry. Then, if required it calculates the SLD profile and if
    //    requested resamples this into a number of zero-roughness layers
    //    (roughness resampling). It the applies any scalefactors and qz shifts
    //    the data requires. This is done before calculating the reflectivity to
    //    ensure that the reflectivity is calculated over the same range in qz
    //    as the shifted datapoints. The main reflectivity calculation is then
    //    called, including the resolution function. The calculation outputs two
    //    profiles - 'reflect' which is the same range as the points, and
    //    'Simulation' which can be a different range to allow extrapolation.
    //    The background correction is the applied, and finally chi-squared is
    //    calculated.
    //
    //  Inputs:
    //    contrastLayers  :
    //    rough           :
    //    geometry        :
    //    nba             :
    //    nbs             :
    //    resample        :
    //    calcSld         :
    //    sf              :
    //    qshift          :
    //    dataPresent     :
    //    data            :
    //    dataLimits      :
    //    simLimits       :
    //    repeatLayers    :
    //    background      :
    //    resol           :
    //    backsType       :
    //    params          :
    //    paralellPoints  :
    //
    //  Outputs:
    //
    //  ------------------------------------------------------------------------
    //
    //        (c) Arwel Hughes  -   12/1/21
    //
    //        Last Modified: 12/1/21 by Arwel Hughes.
    //
    //  ------------------------------------------------------------------------
    //  Bulid up the layers matrix for this contrast
    b_st.site = &rb_emlrtRSI;
    groupLayers_Mod(&b_st, allLayers[0].f1, allRoughs[0], problemDef->geometry,
                    thisNba, thisNbs, theseLayers, &ssubs);
    if (outSsubs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, outSsubs.size(0), &wp_emlrtBCI, &st);
    }
    outSsubs[0] = ssubs;
    //  Make the SLD profiles.
    //  If resampling is needed, then enforce the calcSLD flag, so as to catch
    //  the error af trying to resample a non-existent profile.
    if ((problemDef->resample[0] == 1.0) && (calcSld == 0.0)) {
      b_calcSld = 1.0;
    }
    //  If calc SLD flag is set, then calculate the SLD profile
    if (b_calcSld == 1.0) {
      b_st.site = &sb_emlrtRSI;
      makeSLDProfiles(&b_st, thisNba, thisNbs, theseLayers, ssubs,
                      problemDef_cells->f1[0].f1, sldProfile);
    } else {
      sldProfile.set_size(&ai_emlrtRTEI, &st, 1, 2);
      sldProfile[0] = 0.0;
      sldProfile[1] = 0.0;
    }
    //  If required, then resample the SLD
    if (problemDef->resample[0] == 1.0) {
      b_st.site = &tb_emlrtRSI;
      resampleLayers(&b_st, sldProfile, controls->resamPars, layerSld);
      resamLayers.set_size(&di_emlrtRTEI, &st, layerSld.size(0), 3);
      reflect = layerSld.size(0) * 3;
      for (i = 0; i < reflect; i++) {
        resamLayers[i] = layerSld[i];
      }
    } else {
      layerSld.set_size(&bi_emlrtRTEI, &st, theseLayers.size(0), 3);
      reflect = theseLayers.size(0) * 3;
      for (i = 0; i < reflect; i++) {
        layerSld[i] = theseLayers[i];
      }
      resamLayers.set_size(&ci_emlrtRTEI, &st, 1, 3);
      resamLayers[0] = 0.0;
      resamLayers[1] = 0.0;
      resamLayers[2] = 0.0;
    }
    //  Apply scale factors and q shifts to the data
    b_problemDef_cells.set_size(&vo_emlrtRTEI, &st,
                                problemDef_cells->f2[0].f1.size(0),
                                problemDef_cells->f2[0].f1.size(1));
    reflect = problemDef_cells->f2[0].f1.size(0) *
                  problemDef_cells->f2[0].f1.size(1) -
              1;
    for (i = 0; i <= reflect; i++) {
      b_problemDef_cells[i] = problemDef_cells->f2[0].f1[i];
    }
    b_st.site = &ub_emlrtRSI;
    shiftdata(&b_st, thisSf, thisQshift, problemDef->dataPresent[0],
              b_problemDef_cells, problemDef_cells->f3[0].f1,
              problemDef_cells->f4[0].f1, shifted_dat);
    //  Calculate the reflectivity
    if (Simulation.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, Simulation.size(0) - 1, &bq_emlrtBCI,
                                    &st);
    }
    b_st.site = &vb_emlrtRSI;
    b_callReflectivity(&b_st, thisNba, thisNbs, problemDef_cells->f4[0].f1,
                       problemDef_cells->f1[0].f1, shifted_dat, layerSld, ssubs,
                       thisResol, b_reflect, Simulation[0].f1);
    //  Apply background correction, either to the simulation or the data
    b_st.site = &wb_emlrtRSI;
    if (problemDef->contrastBacksType[0] !=
        static_cast<int32_T>(
            muDoubleScalarFloor(problemDef->contrastBacksType[0]))) {
      emlrtIntegerCheckR2012b(problemDef->contrastBacksType[0], &gb_emlrtDCI,
                              &b_st);
    }
    switch (static_cast<int32_T>(problemDef->contrastBacksType[0])) {
    case 1:
      // Add background to the simulation
      reflect = b_reflect.size(0);
      emlrtSubAssignSizeCheckR2012b(b_reflect.size(), 1, b_reflect.size(), 1,
                                    &h_emlrtECI, &b_st);
      c_reflect.set_size(&fi_emlrtRTEI, &b_st, b_reflect.size(0));
      for (i = 0; i < reflect; i++) {
        c_reflect[i] = b_reflect[i + b_reflect.size(0)] + thisBackground;
      }
      reflect = c_reflect.size(0);
      for (i = 0; i < reflect; i++) {
        b_reflect[i + b_reflect.size(0)] = c_reflect[i];
      }
      if (Simulation.size(0) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, Simulation.size(0) - 1,
                                      &bq_emlrtBCI, &b_st);
      }
      emlrtSubAssignSizeCheckR2012b(Simulation[0].f1.size(), 1,
                                    Simulation[0].f1.size(), 1, &i_emlrtECI,
                                    &b_st);
      if (Simulation.size(0) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, Simulation.size(0) - 1,
                                      &bq_emlrtBCI, &b_st);
      }
      reflect = Simulation[0].f1.size(0);
      c_reflect.set_size(&gi_emlrtRTEI, &b_st, Simulation[0].f1.size(0));
      for (i = 0; i < reflect; i++) {
        c_reflect[i] =
            Simulation[0].f1[i + Simulation[0].f1.size(0)] + thisBackground;
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
                                      &b_st);
      }
      emlrtSubAssignSizeCheckR2012b(shifted_dat.size(), 1, shifted_dat.size(),
                                    1, &j_emlrtECI, &b_st);
      c_reflect.set_size(&hi_emlrtRTEI, &b_st, shifted_dat.size(0));
      reflect = shifted_dat.size(0);
      for (i = 0; i < reflect; i++) {
        c_reflect[i] = shifted_dat[i + shifted_dat.size(0)] - thisBackground;
      }
      reflect = c_reflect.size(0);
      for (i = 0; i < reflect; i++) {
        shifted_dat[i + shifted_dat.size(0)] = c_reflect[i];
      }
      // shifted_dat(:,3) = shifted_dat(:,3) - backg;
      break;
    }
    if (shifted_data.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, shifted_data.size(0) - 1,
                                    &xp_emlrtBCI, &st);
    }
    shifted_data[0].f1.set_size(&wo_emlrtRTEI, &st, shifted_dat.size(0),
                                shifted_dat.size(1));
    reflect = shifted_dat.size(0) * shifted_dat.size(1);
    for (i = 0; i < reflect; i++) {
      shifted_data[0].f1[i] = shifted_dat[i];
    }
    //  Calculate chi squared.
    if (chis.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, chis.size(0), &yp_emlrtBCI, &st);
    }
    b_st.site = &xb_emlrtRSI;
    chis[0] = chiSquared(&b_st, shifted_dat, b_reflect,
                         static_cast<real_T>(problemDef->params.size(1)));
    //  Store returned values for this contrast in the output arrays.
    //  As well as the calculated profiles, we also store a record of
    //  the other values (background, scalefactors etc) for each contrast
    //  for future use.
    if (sldProfiles.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, sldProfiles.size(0) - 1, &sp_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProfiles[0].f1.set_size(&xo_emlrtRTEI, sp, sldProfile.size(0), 2);
    reflect = sldProfile.size(0) * 2;
    for (i = 0; i < reflect; i++) {
      sldProfiles[0].f1[i] = sldProfile[i];
    }
    if (reflectivity.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, reflectivity.size(0) - 1,
                                    &tp_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[0].f1.set_size(&yo_emlrtRTEI, sp, b_reflect.size(0), 2);
    reflect = b_reflect.size(0) * 2;
    for (i = 0; i < reflect; i++) {
      reflectivity[0].f1[i] = b_reflect[i];
    }
    if (layerSlds.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, layerSlds.size(0) - 1, &up_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[0].f1.set_size(&ap_emlrtRTEI, sp, theseLayers.size(0), 3);
    reflect = theseLayers.size(0) * 3;
    for (i = 0; i < reflect; i++) {
      layerSlds[0].f1[i] = theseLayers[i];
    }
    if (allLayers.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, allLayers.size(0) - 1, &vp_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[0].f1.set_size(&bp_emlrtRTEI, sp, resamLayers.size(0), 3);
    reflect = resamLayers.size(0) * 3;
    for (i = 0; i < reflect; i++) {
      allLayers[0].f1[i] = resamLayers[i];
    }
    if (backgs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, backgs.size(0), &kp_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    backgs[0] = thisBackground;
    if (qshifts.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, qshifts.size(0), &lp_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    qshifts[0] = thisQshift;
    if (sfs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, sfs.size(0), &mp_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sfs[0] = thisSf;
    if (nbas.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nbas.size(0), &np_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    nbas[0] = thisNba;
    if (nbss.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nbss.size(0), &op_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    nbss[0] = thisNbs;
    if (resols.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, resols.size(0), &pp_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    resols[0] = thisResol;
    if (allRoughs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, allRoughs.size(0), &jp_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (standardTF_custlay_paraPoints.cpp)
