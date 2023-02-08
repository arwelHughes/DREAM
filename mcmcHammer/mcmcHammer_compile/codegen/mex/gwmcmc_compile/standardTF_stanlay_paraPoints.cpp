//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// standardTF_stanlay_paraPoints.cpp
//
// Code generation for function 'standardTF_stanlay_paraPoints'
//

// Include files
#include "standardTF_stanlay_paraPoints.h"
#include "allocateLayersForContrast.h"
#include "backSort.h"
#include "callReflectivity.h"
#include "chiSquared.h"
#include "groupLayers_Mod.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "gwmcmc_compile_types.h"
#include "makeSLDProfiles.h"
#include "resampleLayers.h"
#include "rt_nonfinite.h"
#include "shiftdata.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo nh_emlrtRSI{
    76,                              // lineNo
    "standardTF_stanlay_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pathName
};

static emlrtRSInfo oh_emlrtRSI{
    81,                              // lineNo
    "standardTF_stanlay_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pathName
};

static emlrtRSInfo ph_emlrtRSI{
    101,                             // lineNo
    "standardTF_stanlay_paraPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pathName
};

static emlrtRTEInfo yb_emlrtRTEI{
    45,                              // lineNo
    9,                               // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo ac_emlrtRTEI{
    50,                              // lineNo
    9,                               // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo bc_emlrtRTEI{
    55,                              // lineNo
    9,                               // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo cc_emlrtRTEI{
    70,                              // lineNo
    9,                               // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtBCInfo gk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    85,                              // lineNo
    24,                              // colNo
    "params",                        // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo hk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    87,                              // lineNo
    29,                              // colNo
    "resample",                      // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo ik_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    90,                              // lineNo
    35,                              // colNo
    "dataPresent",                   // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo jk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    93,                              // lineNo
    31,                              // colNo
    "backsType",                     // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo kk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    118,                             // lineNo
    12,                              // colNo
    "backgs",                        // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo lk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    119,                             // lineNo
    13,                              // colNo
    "qshifts",                       // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo mk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    120,                             // lineNo
    9,                               // colNo
    "sfs",                           // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo nk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    121,                             // lineNo
    10,                              // colNo
    "nbas",                          // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo ok_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    122,                             // lineNo
    10,                              // colNo
    "nbss",                          // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo pk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    123,                             // lineNo
    12,                              // colNo
    "resols",                        // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo qk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    124,                             // lineNo
    15,                              // colNo
    "allRoughs",                     // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo rk_emlrtBCI{
    0,                               // iFirst
    0,                               // iLast
    81,                              // lineNo
    67,                              // colNo
    "contrastLayers",                // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo sk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    112,                             // lineNo
    17,                              // colNo
    "sldProfiles",                   // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo tk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    113,                             // lineNo
    18,                              // colNo
    "reflectivity",                  // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo uk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    116,                             // lineNo
    15,                              // colNo
    "layerSlds",                     // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo vk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    125,                             // lineNo
    15,                              // colNo
    "allLayers",                     // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo wk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    111,                             // lineNo
    14,                              // colNo
    "outSsubs",                      // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo xk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    115,                             // lineNo
    18,                              // colNo
    "shifted_data",                  // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo yk_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    117,                             // lineNo
    10,                              // colNo
    "chis",                          // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo al_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    114,                             // lineNo
    16,                              // colNo
    "Simulation",                    // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo bl_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    46,                              // lineNo
    18,                              // colNo
    "reflectivity",                  // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo cl_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    51,                              // lineNo
    16,                              // colNo
    "Simulation",                    // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo dl_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    56,                              // lineNo
    15,                              // colNo
    "allLayers",                     // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtDCInfo qb_emlrtDCI{
    32,                              // lineNo
    17,                              // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    1                                                     // checkKind
};

static emlrtDCInfo rb_emlrtDCI{
    31,                              // lineNo
    16,                              // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    1                                                     // checkKind
};

static emlrtDCInfo sb_emlrtDCI{
    31,                              // lineNo
    16,                              // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    4                                                     // checkKind
};

static emlrtBCInfo el_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    40,                              // lineNo
    36,                              // colNo
    "layerSlds",                     // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo fl_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    40,                              // lineNo
    36,                              // colNo
    "sldProfiles",                   // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo gl_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    40,                              // lineNo
    36,                              // colNo
    "shifted_data",                  // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo hl_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    40,                              // lineNo
    36,                              // colNo
    "reflectivity",                  // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo il_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    40,                              // lineNo
    36,                              // colNo
    "Simulation",                    // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo jl_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    40,                              // lineNo
    36,                              // colNo
    "allLayers",                     // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo kl_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    76,                              // lineNo
    84,                              // colNo
    "cBacks",                        // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo ll_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    76,                              // lineNo
    95,                              // colNo
    "cShifts",                       // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo ml_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    76,                              // lineNo
    106,                             // colNo
    "cScales",                       // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo nl_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    76,                              // lineNo
    115,                             // colNo
    "cNbas",                         // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo ol_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    76,                              // lineNo
    124,                             // colNo
    "cNbss",                         // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo pl_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    76,                              // lineNo
    132,                             // colNo
    "cRes",                          // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo ql_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    56,                              // lineNo
    5,                               // colNo
    "allLayers",                     // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo rl_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    51,                              // lineNo
    5,                               // colNo
    "Simulation",                    // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo sl_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    46,                              // lineNo
    5,                               // colNo
    "reflectivity",                  // aName
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m", // pName
    0                                                     // checkKind
};

static emlrtRTEInfo xl_emlrtRTEI{
    31,                              // lineNo
    10,                              // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo yl_emlrtRTEI{
    4,                               // lineNo
    18,                              // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo am_emlrtRTEI{
    40,                              // lineNo
    36,                              // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo bm_emlrtRTEI{
    46,                              // lineNo
    5,                               // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo cm_emlrtRTEI{
    51,                              // lineNo
    5,                               // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo dm_emlrtRTEI{
    56,                              // lineNo
    5,                               // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo em_emlrtRTEI{
    38,                              // lineNo
    12,                              // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo fm_emlrtRTEI{
    89,                              // lineNo
    16,                              // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo gm_emlrtRTEI{
    115,                             // lineNo
    5,                               // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo hm_emlrtRTEI{
    112,                             // lineNo
    5,                               // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo im_emlrtRTEI{
    113,                             // lineNo
    5,                               // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo jm_emlrtRTEI{
    116,                             // lineNo
    5,                               // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

static emlrtRTEInfo km_emlrtRTEI{
    125,                             // lineNo
    5,                               // colNo
    "standardTF_stanlay_paraPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_stanLay/standardTF_stanlay_paraPoints.m" // pName
};

// Function Definitions
void standardTF_stanlay_paraPoints(
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
  coder::array<real_T, 2U> b_problemDef_cells;
  coder::array<real_T, 2U> b_reflect;
  coder::array<real_T, 2U> b_theseLayers_data;
  coder::array<real_T, 2U> layerSld;
  coder::array<real_T, 2U> resampledLayers;
  coder::array<real_T, 2U> shifted_dat;
  coder::array<real_T, 2U> sldProfile;
  coder::array<real_T, 1U> c_reflect;
  cell_wrap_15 outParameterisedLayers;
  emlrtStack b_st;
  emlrtStack st;
  real_T thisContrastLayers_data[5];
  real_T theseLayers_data[3];
  real_T calcSld;
  real_T ssubs;
  real_T thisBackground;
  real_T thisNba;
  real_T thisNbs;
  real_T thisQshift;
  real_T thisResol;
  real_T thisSf;
  int32_T i;
  int32_T reflect;
  int32_T reflect_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Standard Layers calculation paralelised over the inner loop
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
  calcSld = controls->calcSld;
  //  Allocate the memory for the output arrays before the main loop
  if (!(problemDef->numberOfContrasts >= 0.0)) {
    emlrtNonNegativeCheckR2012b(problemDef->numberOfContrasts, &sb_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &rb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  backgs.set_size(&xl_emlrtRTEI, sp,
                  static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &qb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  reflect_tmp = static_cast<int32_T>(problemDef->numberOfContrasts);
  reflect = static_cast<int32_T>(problemDef->numberOfContrasts);
  layerSlds.set_size(&yl_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < reflect; i++) {
    if (i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, layerSlds.size(0) - 1, &el_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i].f1.set_size(&yl_emlrtRTEI, sp, 0, layerSlds[i].f1.size(1));
    if (i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, layerSlds.size(0) - 1, &el_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i].f1.set_size(&yl_emlrtRTEI, sp, layerSlds[i].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  sldProfiles.set_size(&yl_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < reflect; i++) {
    if (i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, sldProfiles.size(0) - 1, &fl_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProfiles[i].f1.set_size(&yl_emlrtRTEI, sp, 0, sldProfiles[i].f1.size(1));
    if (i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, sldProfiles.size(0) - 1, &fl_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProfiles[i].f1.set_size(&yl_emlrtRTEI, sp, sldProfiles[i].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  shifted_data.set_size(&yl_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < reflect; i++) {
    if (i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, shifted_data.size(0) - 1,
                                    &gl_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i].f1.set_size(&yl_emlrtRTEI, sp, 0,
                                shifted_data[i].f1.size(1));
    if (i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, shifted_data.size(0) - 1,
                                    &gl_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i].f1.set_size(&yl_emlrtRTEI, sp, shifted_data[i].f1.size(0),
                                0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  reflectivity.set_size(&yl_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < reflect; i++) {
    if (i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, reflectivity.size(0) - 1,
                                    &hl_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i].f1.set_size(&yl_emlrtRTEI, sp, 0,
                                reflectivity[i].f1.size(1));
    if (i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, reflectivity.size(0) - 1,
                                    &hl_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i].f1.set_size(&yl_emlrtRTEI, sp, reflectivity[i].f1.size(0),
                                2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &yb_emlrtRTEI,
      (emlrtConstCTX)sp);
  reflectivity.set_size(&am_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < reflect_tmp; b_i++) {
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &bl_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&bm_emlrtRTEI, sp, 2,
                                  reflectivity[b_i].f1.size(1));
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &bl_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&bm_emlrtRTEI, sp,
                                  reflectivity[b_i].f1.size(0), 2);
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &bl_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[0] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &sl_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[1] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &sl_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[2] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &sl_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  Simulation.set_size(&yl_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < reflect; i++) {
    if (i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, Simulation.size(0) - 1, &il_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i].f1.set_size(&yl_emlrtRTEI, sp, 0, Simulation[i].f1.size(1));
    if (i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, Simulation.size(0) - 1, &il_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i].f1.set_size(&yl_emlrtRTEI, sp, Simulation[i].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &ac_emlrtRTEI,
      (emlrtConstCTX)sp);
  Simulation.set_size(&am_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < reflect_tmp; b_i++) {
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &cl_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&cm_emlrtRTEI, sp, 2,
                                Simulation[b_i].f1.size(1));
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &cl_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&cm_emlrtRTEI, sp, Simulation[b_i].f1.size(0),
                                2);
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &cl_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[0] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &rl_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[1] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &rl_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[2] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &rl_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  allLayers.set_size(&yl_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < reflect; i++) {
    if (i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, allLayers.size(0) - 1, &jl_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i].f1.set_size(&yl_emlrtRTEI, sp, 0, allLayers[i].f1.size(1));
    if (i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, allLayers.size(0) - 1, &jl_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i].f1.set_size(&yl_emlrtRTEI, sp, allLayers[i].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &bc_emlrtRTEI,
      (emlrtConstCTX)sp);
  allLayers.set_size(&am_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < reflect_tmp; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &dl_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&dm_emlrtRTEI, sp, 2, allLayers[b_i].f1.size(1));
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &dl_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&dm_emlrtRTEI, sp, allLayers[b_i].f1.size(0), 2);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &dl_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[0] = 1.0;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &ql_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[1] = 1.0;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &ql_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[2] = 1.0;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &ql_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
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
  //  Resample params if required
  //  Loop over all the contrasts
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &cc_emlrtRTEI,
      (emlrtConstCTX)sp);
  outSsubs.set_size(&em_emlrtRTEI, sp,
                    static_cast<int32_T>(problemDef->numberOfContrasts));
  sldProfiles.set_size(&am_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  reflectivity.set_size(&am_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  Simulation.set_size(&am_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  shifted_data.set_size(&am_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  layerSlds.set_size(&am_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  chis.set_size(&em_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  qshifts.set_size(&em_emlrtRTEI, sp,
                   static_cast<int32_T>(problemDef->numberOfContrasts));
  sfs.set_size(&em_emlrtRTEI, sp,
               static_cast<int32_T>(problemDef->numberOfContrasts));
  nbas.set_size(&em_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  nbss.set_size(&em_emlrtRTEI, sp,
                static_cast<int32_T>(problemDef->numberOfContrasts));
  resols.set_size(&em_emlrtRTEI, sp,
                  static_cast<int32_T>(problemDef->numberOfContrasts));
  allRoughs.set_size(&em_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  allLayers.set_size(&am_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  if (static_cast<int32_T>(problemDef->numberOfContrasts) - 1 >= 0) {
    allRoughs[0] = problemDef->params[0];
  }
  for (int32_T b_i{0}; b_i < reflect_tmp; b_i++) {
    real_T b_calcSld;
    int32_T theseLayers_size[2];
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
          problemDef->contrastBacks.size(1), &kl_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastShifts.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastShifts.size(1), &ll_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastScales.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastScales.size(1), &ml_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastNbas.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastNbas.size(1), &nl_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastNbss.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastNbss.size(1), &ol_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         problemDef->contrastRes.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          problemDef->contrastRes.size(1), &pl_emlrtBCI, (emlrtConstCTX)sp);
    }
    st.site = &nh_emlrtRSI;
    backSort(&st, problemDef->contrastBacks[b_i],
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
      emlrtDynamicBoundsCheckR2012b(b_i, 0, 0, &rk_emlrtBCI, (emlrtConstCTX)sp);
    }
    st.site = &oh_emlrtRSI;
    allocateLayersForContrast(&st, problemDef_cells->f5[0],
                              outParameterisedLayers, thisContrastLayers_data,
                              thisContrastLayers_size);
    //  For the other parameters, we extract the correct ones from the input
    //  arrays
    if (problemDef->params.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->params.size(1),
                                    &gk_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  Substrate roughness is always first parameter for standard layers
    if (problemDef->resample.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->resample.size(1),
                                    &hk_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (problemDef->dataPresent.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->dataPresent.size(1),
                                    &ik_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (problemDef->contrastBacksType.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, problemDef->contrastBacksType.size(1),
                                    &jk_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  Now call the core standardTF_stanlay reflectivity calculation
    //  In this case we are single cored, so we do not parallelise over
    //  points
    //  Call the core layers calculation
    st.site = &ph_emlrtRSI;
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
    groupLayers_Mod(&b_st, thisContrastLayers_data, thisContrastLayers_size,
                    problemDef->params[0], problemDef->geometry, thisNba,
                    thisNbs, theseLayers_data, theseLayers_size, &ssubs);
    if (outSsubs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, outSsubs.size(0), &wk_emlrtBCI, &st);
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
      b_theseLayers_data.set(&theseLayers_data[0], theseLayers_size[0],
                             theseLayers_size[1]);
      b_st.site = &sb_emlrtRSI;
      makeSLDProfiles(&b_st, thisNba, thisNbs, b_theseLayers_data, ssubs,
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
      resampledLayers.set_size(&di_emlrtRTEI, &st, layerSld.size(0), 3);
      reflect = layerSld.size(0) * 3;
      for (i = 0; i < reflect; i++) {
        resampledLayers[i] = layerSld[i];
      }
    } else {
      layerSld.set_size(&bi_emlrtRTEI, &st, theseLayers_size[0], 3);
      reflect = theseLayers_size[0] * 3;
      for (i = 0; i < reflect; i++) {
        layerSld[i] = theseLayers_data[i];
      }
      resampledLayers.set_size(&ci_emlrtRTEI, &st, 1, 3);
      resampledLayers[0] = 0.0;
      resampledLayers[1] = 0.0;
      resampledLayers[2] = 0.0;
    }
    //  Apply scale factors and q shifts to the data
    b_problemDef_cells.set_size(&fm_emlrtRTEI, &st,
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
      emlrtDynamicBoundsCheckR2012b(0, 0, Simulation.size(0) - 1, &al_emlrtBCI,
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
                                      &al_emlrtBCI, &b_st);
      }
      emlrtSubAssignSizeCheckR2012b(Simulation[0].f1.size(), 1,
                                    Simulation[0].f1.size(), 1, &i_emlrtECI,
                                    &b_st);
      if (Simulation.size(0) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, Simulation.size(0) - 1,
                                      &al_emlrtBCI, &b_st);
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
                                    &xk_emlrtBCI, &st);
    }
    shifted_data[0].f1.set_size(&gm_emlrtRTEI, &st, shifted_dat.size(0),
                                shifted_dat.size(1));
    reflect = shifted_dat.size(0) * shifted_dat.size(1);
    for (i = 0; i < reflect; i++) {
      shifted_data[0].f1[i] = shifted_dat[i];
    }
    //  Calculate chi squared.
    if (chis.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, chis.size(0), &yk_emlrtBCI, &st);
    }
    b_st.site = &xb_emlrtRSI;
    chis[0] = chiSquared(&b_st, shifted_dat, b_reflect,
                         static_cast<real_T>(problemDef->params.size(1)));
    //  Store returned values for this contrast in the output arrays.
    //  As well as the calculated profiles, we also store a record of
    //  the other values (background, scalefactors etc) for each contrast
    //  for future use.
    if (sldProfiles.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, sldProfiles.size(0) - 1, &sk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProfiles[0].f1.set_size(&hm_emlrtRTEI, sp, sldProfile.size(0), 2);
    reflect = sldProfile.size(0) * 2;
    for (i = 0; i < reflect; i++) {
      sldProfiles[0].f1[i] = sldProfile[i];
    }
    if (reflectivity.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, reflectivity.size(0) - 1,
                                    &tk_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[0].f1.set_size(&im_emlrtRTEI, sp, b_reflect.size(0), 2);
    reflect = b_reflect.size(0) * 2;
    for (i = 0; i < reflect; i++) {
      reflectivity[0].f1[i] = b_reflect[i];
    }
    if (layerSlds.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, layerSlds.size(0) - 1, &uk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[0].f1.set_size(&jm_emlrtRTEI, sp, theseLayers_size[0], 3);
    reflect = theseLayers_size[0] * 3;
    for (i = 0; i < reflect; i++) {
      layerSlds[0].f1[i] = theseLayers_data[i];
    }
    if (backgs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, backgs.size(0), &kk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    backgs[0] = thisBackground;
    if (qshifts.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, qshifts.size(0), &lk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    qshifts[0] = thisQshift;
    if (sfs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, sfs.size(0), &mk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sfs[0] = thisSf;
    if (nbas.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nbas.size(0), &nk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    nbas[0] = thisNba;
    if (nbss.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nbss.size(0), &ok_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    nbss[0] = thisNbs;
    if (resols.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, resols.size(0), &pk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    resols[0] = thisResol;
    if (allRoughs.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, allRoughs.size(0), &qk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (allLayers.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, allLayers.size(0) - 1, &vk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[0].f1.set_size(&km_emlrtRTEI, sp, resampledLayers.size(0), 3);
    reflect = resampledLayers.size(0) * 3;
    for (i = 0; i < reflect; i++) {
      allLayers[0].f1[i] = resampledLayers[i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (standardTF_stanlay_paraPoints.cpp)
