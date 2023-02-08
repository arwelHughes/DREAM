//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// reflectivity_calculation_wrapper.cpp
//
// Code generation for function 'reflectivity_calculation_wrapper'
//

// Include files
#include "reflectivity_calculation_wrapper.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "gwmcmc_compile_types.h"
#include "rt_nonfinite.h"
#include "standardTF_reflectivityCalculation.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <string.h>

// Type Definitions
struct cell_wrap_13 {
  coder::array<real_T, 2U> f1;
};

struct cell_wrap_14 {
  coder::array<real_T, 2U> f1;
};

// Variable Definitions
static emlrtRSInfo w_emlrtRSI{
    35,                                 // lineNo
    "reflectivity_calculation_wrapper", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m" // pathName
};

static emlrtRSInfo x_emlrtRSI{
    83,                         // lineNo
    "reflectivity_calculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pathName
};

static emlrtDCInfo f_emlrtDCI{
    42,                         // lineNo
    21,                         // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    4                                                      // checkKind
};

static emlrtDCInfo g_emlrtDCI{
    42,                         // lineNo
    21,                         // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    1                                                      // checkKind
};

static emlrtRTEInfo e_emlrtRTEI{
    43,                         // lineNo
    9,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtDCInfo h_emlrtDCI{
    48,                         // lineNo
    19,                         // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    1                                                      // checkKind
};

static emlrtRTEInfo f_emlrtRTEI{
    49,                         // lineNo
    9,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo g_emlrtRTEI{
    55,                         // lineNo
    9,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo h_emlrtRTEI{
    61,                         // lineNo
    9,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo i_emlrtRTEI{
    67,                         // lineNo
    9,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo j_emlrtRTEI{
    73,                         // lineNo
    9,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo k_emlrtRTEI{
    98,                         // lineNo
    9,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo l_emlrtRTEI{
    104,                        // lineNo
    9,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo m_emlrtRTEI{
    110,                        // lineNo
    9,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo n_emlrtRTEI{
    116,                        // lineNo
    9,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo o_emlrtRTEI{
    122,                        // lineNo
    9,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo p_emlrtRTEI{
    128,                        // lineNo
    9,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtBCInfo dc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    44,                         // lineNo
    18,                         // colNo
    "reflectivity",             // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo ec_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    50,                         // lineNo
    16,                         // colNo
    "Simulation",               // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo fc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    56,                         // lineNo
    18,                         // colNo
    "shifted_data",             // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo gc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    62,                         // lineNo
    15,                         // colNo
    "layerSlds",                // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo hc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    68,                         // lineNo
    17,                         // colNo
    "sldProfiles",              // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo ic_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    74,                         // lineNo
    15,                         // colNo
    "allLayers",                // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo jc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    99,                         // lineNo
    29,                         // colNo
    "reflectivity",             // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo kc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    99,                         // lineNo
    11,                         // colNo
    "cell1",                    // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo lc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    105,                        // lineNo
    27,                         // colNo
    "Simulation",               // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo mc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    105,                        // lineNo
    11,                         // colNo
    "cell2",                    // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo nc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    111,                        // lineNo
    29,                         // colNo
    "shifted_data",             // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo oc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    111,                        // lineNo
    11,                         // colNo
    "cell3",                    // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo pc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    117,                        // lineNo
    26,                         // colNo
    "layerSlds",                // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo qc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    117,                        // lineNo
    11,                         // colNo
    "cell4",                    // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo rc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    123,                        // lineNo
    28,                         // colNo
    "sldProfiles",              // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo sc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    123,                        // lineNo
    11,                         // colNo
    "cell5",                    // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo tc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    129,                        // lineNo
    26,                         // colNo
    "allLayers",                // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo uc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    129,                        // lineNo
    11,                         // colNo
    "cell6",                    // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo vc_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    35,                                 // lineNo
    9,                                  // colNo
    "reflectivity",                     // aName
    "reflectivity_calculation_wrapper", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo wc_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    35,                                 // lineNo
    9,                                  // colNo
    "Simulation",                       // aName
    "reflectivity_calculation_wrapper", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo xc_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    35,                                 // lineNo
    9,                                  // colNo
    "shifted_data",                     // aName
    "reflectivity_calculation_wrapper", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo yc_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    35,                                 // lineNo
    9,                                  // colNo
    "layerSlds",                        // aName
    "reflectivity_calculation_wrapper", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo ad_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    56,                         // lineNo
    5,                          // colNo
    "shifted_data",             // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo bd_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    35,                                 // lineNo
    9,                                  // colNo
    "sldProfiles",                      // aName
    "reflectivity_calculation_wrapper", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo cd_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    62,                         // lineNo
    5,                          // colNo
    "layerSlds",                // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo dd_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    35,                                 // lineNo
    9,                                  // colNo
    "allLayers",                        // aName
    "reflectivity_calculation_wrapper", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo ed_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    74,                         // lineNo
    5,                          // colNo
    "allLayers",                // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo fd_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    35,                                 // lineNo
    9,                                  // colNo
    "cell1",                            // aName
    "reflectivity_calculation_wrapper", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo gd_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    35,                                 // lineNo
    9,                                  // colNo
    "cell2",                            // aName
    "reflectivity_calculation_wrapper", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo hd_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    35,                                 // lineNo
    9,                                  // colNo
    "cell3",                            // aName
    "reflectivity_calculation_wrapper", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo id_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    99,                         // lineNo
    5,                          // colNo
    "cell1",                    // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo jd_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    35,                                 // lineNo
    9,                                  // colNo
    "cell4",                            // aName
    "reflectivity_calculation_wrapper", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo kd_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    105,                        // lineNo
    5,                          // colNo
    "cell2",                    // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo ld_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    35,                                 // lineNo
    9,                                  // colNo
    "cell5",                            // aName
    "reflectivity_calculation_wrapper", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo md_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    111,                        // lineNo
    5,                          // colNo
    "cell3",                    // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo nd_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    35,                                 // lineNo
    9,                                  // colNo
    "cell6",                            // aName
    "reflectivity_calculation_wrapper", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo od_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    117,                        // lineNo
    5,                          // colNo
    "cell4",                    // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo pd_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    123,                        // lineNo
    5,                          // colNo
    "cell5",                    // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo qd_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    129,                        // lineNo
    5,                          // colNo
    "cell6",                    // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo rd_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    68,                         // lineNo
    5,                          // colNo
    "sldProfiles",              // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo sd_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    50,                         // lineNo
    5,                          // colNo
    "Simulation",               // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo td_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    44,                         // lineNo
    5,                          // colNo
    "reflectivity",             // aName
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m", // pName
    0                                                      // checkKind
};

static emlrtRTEInfo df_emlrtRTEI{
    23,                         // lineNo
    1,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo ef_emlrtRTEI{
    24,                         // lineNo
    1,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo ff_emlrtRTEI{
    25,                         // lineNo
    1,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo gf_emlrtRTEI{
    26,                         // lineNo
    1,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo hf_emlrtRTEI{
    27,                         // lineNo
    1,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo if_emlrtRTEI{
    28,                         // lineNo
    1,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo jf_emlrtRTEI{
    29,                         // lineNo
    1,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo kf_emlrtRTEI{
    30,                         // lineNo
    1,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo lf_emlrtRTEI{
    32,                         // lineNo
    1,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo mf_emlrtRTEI{
    33,                         // lineNo
    1,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo nf_emlrtRTEI{
    35,                                 // lineNo
    9,                                  // colNo
    "reflectivity_calculation_wrapper", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "reflectivity_calculation_wrapper.m" // pName
};

static emlrtRTEInfo of_emlrtRTEI{
    42,                         // lineNo
    39,                         // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo pf_emlrtRTEI{
    44,                         // lineNo
    5,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo qf_emlrtRTEI{
    50,                         // lineNo
    5,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo rf_emlrtRTEI{
    56,                         // lineNo
    5,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo sf_emlrtRTEI{
    62,                         // lineNo
    5,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo tf_emlrtRTEI{
    68,                         // lineNo
    5,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo uf_emlrtRTEI{
    74,                         // lineNo
    5,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo vf_emlrtRTEI{
    83,                         // lineNo
    18,                         // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo wf_emlrtRTEI{
    83,                         // lineNo
    42,                         // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo xf_emlrtRTEI{
    83,                         // lineNo
    55,                         // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo yf_emlrtRTEI{
    83,                         // lineNo
    65,                         // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo ag_emlrtRTEI{
    99,                         // lineNo
    5,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo bg_emlrtRTEI{
    105,                        // lineNo
    5,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo cg_emlrtRTEI{
    111,                        // lineNo
    5,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo dg_emlrtRTEI{
    117,                        // lineNo
    5,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo eg_emlrtRTEI{
    123,                        // lineNo
    5,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

static emlrtRTEInfo fg_emlrtRTEI{
    129,                        // lineNo
    5,                          // colNo
    "reflectivity_calculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/"
    "reflectivity_calculation/reflectivity_calculation.m" // pName
};

// Function Definitions
void c_reflectivity_calculation_wrap(const emlrtStack *sp,
                                     const struct_T *problemDef,
                                     const cell_5 *problemDef_cells,
                                     const struct3_T *controls,
                                     c_struct_T *problem, cell_12 *result)
{
  static const char_T b_cv[10]{'s', 't', 'a', 'n', 'd',
                               'a', 'r', 'd', 'T', 'F'};
  coder::array<cell_wrap_1, 1U> b_allLayers;
  coder::array<cell_wrap_1, 1U> b_shifted_data;
  coder::array<cell_wrap_1, 1U> b_sldProfiles;
  coder::array<cell_wrap_10, 1U> b_Simulation;
  coder::array<cell_wrap_10, 1U> b_reflectivity;
  coder::array<cell_wrap_11, 1U> b_layerSlds;
  coder::array<cell_wrap_13, 1U> Simulation;
  coder::array<cell_wrap_13, 1U> reflectivity;
  coder::array<cell_wrap_13, 1U> sldProfiles;
  coder::array<cell_wrap_14, 1U> allLayers;
  coder::array<cell_wrap_14, 1U> layerSlds;
  coder::array<cell_wrap_14, 1U> shifted_data;
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T kstr;
  int32_T unnamed_idx_0_tmp_tmp;
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  This is just a wrapper function for choosing between
  //  the Matlab and Mex version of reflectivity_calculation.
  //  This is for development and will be removed for the
  //  eventual fully compiled toolbox
  //  The outputs are as follows..
  //  problem.ssubs         = [nContrasts x 1 double]
  //  problem.backgrounds   = [nContrasts x 1 double]
  //  problem.qshifts       = [nContrasts x 1 double]
  //  problem.scalefactots  = [nContrasts x 1 double]
  //  problem.nbairs        = [nContrasts x 1 double]
  //  problem.nbsubs        = [nContrasts x 1 double]
  //  problem.resolutions   = [nContrasts x 1 double]
  //  problem.allSubRough   = [nContrasts x 1 double] - Appears to be the same
  //                                                    as ssubs and needs to be
  //                                                    removed
  //  problem.calculations.all_chis = [nContrasts x 1 double]
  //  problem.calculations.sum_chi  = [1 x 1 double];
  //  result{1} = reflectivity{}
  //  result{2} = simulations{}
  //  result{3} = shifted_data{}
  //  result{4} = layerSlds{}
  //  result{5} = sldProfiles{}
  //  result{6} = currently empty - will be allLayers (i.e. resampled)
  //  type = 'mex';
  //
  //   switch type
  //       case 'mex'
  //          [problem,result] =
  //          reflectivity_calculation_mex(problemDef,problemDef_cells,problemDef_limits,controls);
  //  otherwise
  st.site = &w_emlrtRSI;
  //  Main entry point into the reflectivity calculation for the toolbox.
  //  This is the main function that is called by any of the minimisers or
  //  analysis tools from the rest of the toolbox.
  //
  //  *The main job of this function is to decide which type of calculation
  //  (i.e. 'Target function' is required, and call the relevant routines. The
  //  types of available target functions are:*
  //
  //  * standardTF     - The main basic target function type, for non polarised
  //  neutrons (or x-rays) with non-absorbing samples. Different model types are
  //  specified in sub functions from here.
  //
  //  * standardTFAbs  - Identical to standardTF, but includes imaginary
  //  refractive index terms.
  //
  //  * oilWaterTF     - Target function for oil-water samples
  //
  //  * domainsTF      - Target function for samples consisting of domains which
  //  are larger than the beam lateral coherence length.
  //
  //  * polarisedTF    - Target function for cases for polarised neutrons with
  //  polarisation analysis.
  //
  //  for compilation, we have to preallocate memory for the output arrays
  //  Setting these parameters in the struct defines them as doubles
  problem->ssubs.set_size(&df_emlrtRTEI, &st, 1);
  problem->ssubs[0] = 0.0;
  problem->backgrounds.set_size(&ef_emlrtRTEI, &st, 1);
  problem->backgrounds[0] = 0.0;
  problem->qshifts.set_size(&ff_emlrtRTEI, &st, 1);
  problem->qshifts[0] = 0.0;
  problem->scalefactors.set_size(&gf_emlrtRTEI, &st, 1);
  problem->scalefactors[0] = 0.0;
  problem->nbairs.set_size(&hf_emlrtRTEI, &st, 1);
  problem->nbairs[0] = 0.0;
  problem->nbsubs.set_size(&if_emlrtRTEI, &st, 1);
  problem->nbsubs[0] = 0.0;
  problem->resolutions.set_size(&jf_emlrtRTEI, &st, 1);
  problem->resolutions[0] = 0.0;
  problem->calculations.all_chis.set_size(&kf_emlrtRTEI, &st, 1);
  problem->calculations.all_chis[0] = 0.0;
  problem->calculations.sum_chi = 0.0;
  problem->allSubRough.set_size(&lf_emlrtRTEI, &st, 1);
  problem->allSubRough[0] = 0.0;
  problem->resample.set_size(&mf_emlrtRTEI, &st, 1, 1);
  problem->resample[0] = 0.0;
  //  We also foll the results arrays to define their
  //  type and size. (NOTE: at the moment we have a 'coder.varsize'
  //  pre-processor directives for the compiler here and at the
  //  end for the results block. We are unlikely to need both
  //  TODO: Find out which is necessary and tidy this up.
  if (!(problemDef->numberOfContrasts >= 0.0)) {
    emlrtNonNegativeCheckR2012b(problemDef->numberOfContrasts, &f_emlrtDCI,
                                &st);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &g_emlrtDCI, &st);
  }
  unnamed_idx_0_tmp_tmp = static_cast<int32_T>(problemDef->numberOfContrasts);
  reflectivity.set_size(&nf_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &vc_emlrtBCI, &st);
    }
    reflectivity[b_i].f1.set_size(&nf_emlrtRTEI, &st, 0,
                                  reflectivity[b_i].f1.size(1));
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &vc_emlrtBCI, &st);
    }
    reflectivity[b_i].f1.set_size(&nf_emlrtRTEI, &st,
                                  reflectivity[b_i].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &e_emlrtRTEI, &st);
  reflectivity.set_size(&of_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &dc_emlrtBCI, &st);
    }
    reflectivity[b_i].f1.set_size(&pf_emlrtRTEI, &st, 2,
                                  reflectivity[b_i].f1.size(1));
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &dc_emlrtBCI, &st);
    }
    reflectivity[b_i].f1.set_size(&pf_emlrtRTEI, &st,
                                  reflectivity[b_i].f1.size(0), 2);
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &dc_emlrtBCI, &st);
    }
    reflectivity[b_i].f1[0] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &td_emlrtBCI, &st);
    }
    reflectivity[b_i].f1[1] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &td_emlrtBCI, &st);
    }
    reflectivity[b_i].f1[2] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &td_emlrtBCI, &st);
    }
    reflectivity[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &h_emlrtDCI, &st);
  }
  Simulation.set_size(&nf_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (i = 0; i < unnamed_idx_0_tmp_tmp; i++) {
    if (i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, Simulation.size(0) - 1, &wc_emlrtBCI,
                                    &st);
    }
    Simulation[i].f1.set_size(&nf_emlrtRTEI, &st, 0, Simulation[i].f1.size(1));
    if (i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, Simulation.size(0) - 1, &wc_emlrtBCI,
                                    &st);
    }
    Simulation[i].f1.set_size(&nf_emlrtRTEI, &st, Simulation[i].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &f_emlrtRTEI, &st);
  Simulation.set_size(&of_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &ec_emlrtBCI, &st);
    }
    Simulation[b_i].f1.set_size(&qf_emlrtRTEI, &st, 2,
                                Simulation[b_i].f1.size(1));
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &ec_emlrtBCI, &st);
    }
    Simulation[b_i].f1.set_size(&qf_emlrtRTEI, &st, Simulation[b_i].f1.size(0),
                                2);
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &ec_emlrtBCI, &st);
    }
    Simulation[b_i].f1[0] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &sd_emlrtBCI, &st);
    }
    Simulation[b_i].f1[1] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &sd_emlrtBCI, &st);
    }
    Simulation[b_i].f1[2] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &sd_emlrtBCI, &st);
    }
    Simulation[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  shifted_data.set_size(&nf_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (i = 0; i < unnamed_idx_0_tmp_tmp; i++) {
    if (i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, shifted_data.size(0) - 1,
                                    &xc_emlrtBCI, &st);
    }
    shifted_data[i].f1.set_size(&nf_emlrtRTEI, &st, 0,
                                shifted_data[i].f1.size(1));
    if (i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, shifted_data.size(0) - 1,
                                    &xc_emlrtBCI, &st);
    }
    shifted_data[i].f1.set_size(&nf_emlrtRTEI, &st, shifted_data[i].f1.size(0),
                                3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &g_emlrtRTEI, &st);
  shifted_data.set_size(&of_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &fc_emlrtBCI, &st);
    }
    shifted_data[b_i].f1.set_size(&rf_emlrtRTEI, &st, 2,
                                  shifted_data[b_i].f1.size(1));
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &fc_emlrtBCI, &st);
    }
    shifted_data[b_i].f1.set_size(&rf_emlrtRTEI, &st,
                                  shifted_data[b_i].f1.size(0), 3);
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &fc_emlrtBCI, &st);
    }
    for (i = 0; i < 6; i++) {
      if (b_i > shifted_data.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                      &ad_emlrtBCI, &st);
      }
      shifted_data[b_i].f1[i] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  layerSlds.set_size(&nf_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (i = 0; i < unnamed_idx_0_tmp_tmp; i++) {
    if (i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, layerSlds.size(0) - 1, &yc_emlrtBCI,
                                    &st);
    }
    layerSlds[i].f1.set_size(&nf_emlrtRTEI, &st, 0, layerSlds[i].f1.size(1));
    if (i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, layerSlds.size(0) - 1, &yc_emlrtBCI,
                                    &st);
    }
    layerSlds[i].f1.set_size(&nf_emlrtRTEI, &st, layerSlds[i].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &h_emlrtRTEI, &st);
  layerSlds.set_size(&of_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &gc_emlrtBCI,
                                    &st);
    }
    layerSlds[b_i].f1.set_size(&sf_emlrtRTEI, &st, 2,
                               layerSlds[b_i].f1.size(1));
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &gc_emlrtBCI,
                                    &st);
    }
    layerSlds[b_i].f1.set_size(&sf_emlrtRTEI, &st, layerSlds[b_i].f1.size(0),
                               3);
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &gc_emlrtBCI,
                                    &st);
    }
    for (i = 0; i < 6; i++) {
      if (b_i > layerSlds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1,
                                      &cd_emlrtBCI, &st);
      }
      layerSlds[b_i].f1[i] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  sldProfiles.set_size(&nf_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (i = 0; i < unnamed_idx_0_tmp_tmp; i++) {
    if (i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, sldProfiles.size(0) - 1, &bd_emlrtBCI,
                                    &st);
    }
    sldProfiles[i].f1.set_size(&nf_emlrtRTEI, &st, 0,
                               sldProfiles[i].f1.size(1));
    if (i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, sldProfiles.size(0) - 1, &bd_emlrtBCI,
                                    &st);
    }
    sldProfiles[i].f1.set_size(&nf_emlrtRTEI, &st, sldProfiles[i].f1.size(0),
                               2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &i_emlrtRTEI, &st);
  sldProfiles.set_size(&of_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &hc_emlrtBCI, &st);
    }
    sldProfiles[b_i].f1.set_size(&tf_emlrtRTEI, &st, 2,
                                 sldProfiles[b_i].f1.size(1));
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &hc_emlrtBCI, &st);
    }
    sldProfiles[b_i].f1.set_size(&tf_emlrtRTEI, &st,
                                 sldProfiles[b_i].f1.size(0), 2);
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &hc_emlrtBCI, &st);
    }
    sldProfiles[b_i].f1[0] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &rd_emlrtBCI, &st);
    }
    sldProfiles[b_i].f1[1] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &rd_emlrtBCI, &st);
    }
    sldProfiles[b_i].f1[2] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &rd_emlrtBCI, &st);
    }
    sldProfiles[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  allLayers.set_size(&nf_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (i = 0; i < unnamed_idx_0_tmp_tmp; i++) {
    if (i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, allLayers.size(0) - 1, &dd_emlrtBCI,
                                    &st);
    }
    allLayers[i].f1.set_size(&nf_emlrtRTEI, &st, 0, allLayers[i].f1.size(1));
    if (i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, allLayers.size(0) - 1, &dd_emlrtBCI,
                                    &st);
    }
    allLayers[i].f1.set_size(&nf_emlrtRTEI, &st, allLayers[i].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &j_emlrtRTEI, &st);
  allLayers.set_size(&of_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &ic_emlrtBCI,
                                    &st);
    }
    allLayers[b_i].f1.set_size(&uf_emlrtRTEI, &st, 2,
                               allLayers[b_i].f1.size(1));
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &ic_emlrtBCI,
                                    &st);
    }
    allLayers[b_i].f1.set_size(&uf_emlrtRTEI, &st, allLayers[b_i].f1.size(0),
                               3);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &ic_emlrtBCI,
                                    &st);
    }
    for (i = 0; i < 6; i++) {
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &ed_emlrtBCI, &st);
      }
      allLayers[b_i].f1[i] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  // Decide which target function we are calling ans call the relevant routines
  b_bool = false;
  if (problemDef->TF.size(1) == 10) {
    kstr = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (kstr < 10) {
        if (problemDef->TF[kstr] != b_cv[kstr]) {
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
    i = 0;
  } else {
    i = -1;
  }
  if (i == 0) {
    b_st.site = &x_emlrtRSI;
    c_standardTF_reflectivityCalcul(
        &b_st, problemDef, problemDef_cells, controls, problem, b_reflectivity,
        b_Simulation, b_shifted_data, b_layerSlds, b_sldProfiles, b_allLayers);
    reflectivity.set_size(&vf_emlrtRTEI, &st, b_reflectivity.size(0));
    i = b_reflectivity.size(0);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      reflectivity[b_i].f1.set_size(&vf_emlrtRTEI, &st,
                                    b_reflectivity[b_i].f1.size(0), 2);
      kstr = b_reflectivity[b_i].f1.size(0) * 2;
      for (int32_T i1{0}; i1 < kstr; i1++) {
        reflectivity[b_i].f1[i1] = b_reflectivity[b_i].f1[i1];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    Simulation.set_size(&vf_emlrtRTEI, &st, b_Simulation.size(0));
    i = b_Simulation.size(0);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      Simulation[b_i].f1.set_size(&vf_emlrtRTEI, &st,
                                  b_Simulation[b_i].f1.size(0), 2);
      kstr = b_Simulation[b_i].f1.size(0) * 2;
      for (int32_T i1{0}; i1 < kstr; i1++) {
        Simulation[b_i].f1[i1] = b_Simulation[b_i].f1[i1];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    shifted_data.set_size(&wf_emlrtRTEI, &st, b_shifted_data.size(0));
    i = b_shifted_data.size(0);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      shifted_data[b_i].f1.set_size(&wf_emlrtRTEI, &st,
                                    b_shifted_data[b_i].f1.size(0),
                                    b_shifted_data[b_i].f1.size(1));
      kstr = b_shifted_data[b_i].f1.size(0) * b_shifted_data[b_i].f1.size(1);
      for (int32_T i1{0}; i1 < kstr; i1++) {
        shifted_data[b_i].f1[i1] = b_shifted_data[b_i].f1[i1];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    layerSlds.set_size(&xf_emlrtRTEI, &st, b_layerSlds.size(0));
    i = b_layerSlds.size(0);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      layerSlds[b_i].f1.set_size(&xf_emlrtRTEI, &st,
                                 b_layerSlds[b_i].f1.size(0), 3);
      kstr = b_layerSlds[b_i].f1.size(0) * 3;
      for (int32_T i1{0}; i1 < kstr; i1++) {
        layerSlds[b_i].f1[i1] = b_layerSlds[b_i].f1[i1];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    sldProfiles.set_size(&yf_emlrtRTEI, &st, b_sldProfiles.size(0));
    i = b_sldProfiles.size(0);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      sldProfiles[b_i].f1.set_size(&yf_emlrtRTEI, &st,
                                   b_sldProfiles[b_i].f1.size(0),
                                   b_sldProfiles[b_i].f1.size(1));
      kstr = b_sldProfiles[b_i].f1.size(0) * b_sldProfiles[b_i].f1.size(1);
      for (int32_T i1{0}; i1 < kstr; i1++) {
        sldProfiles[b_i].f1[i1] = b_sldProfiles[b_i].f1[i1];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    allLayers.set_size(&wf_emlrtRTEI, &st, b_allLayers.size(0));
    i = b_allLayers.size(0);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      allLayers[b_i].f1.set_size(&wf_emlrtRTEI, &st,
                                 b_allLayers[b_i].f1.size(0),
                                 b_allLayers[b_i].f1.size(1));
      kstr = b_allLayers[b_i].f1.size(0) * b_allLayers[b_i].f1.size(1);
      for (int32_T i1{0}; i1 < kstr; i1++) {
        allLayers[b_i].f1[i1] = b_allLayers[b_i].f1[i1];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    // case 'standardTFAbs'
    // [problem,reflectivity,Simulation,shifted_data,layerSlds,sldProfiles,allLayers]
    // =
    // standardTFAbs_reflectivityCalculation(problemDef,problemDef_cells,problemDef_limits,controls);
    // case 'oilWaterTF'
    // problem =
    // oilWaterTF_reflectivityCalculation(problemDef,problemDef_cells,controls);
    // case 'polarisedTF'
    // problem =
    // polarisedTF_reflectivityCalculation(problemDef,problemDef_cells,controls);
    // case 'domainsTF'
    // [problem,reflectivity,Simulation,shifted_data,layerSlds,sldProfiles,allLayers]
    // =
    // domainsTF_reflectivityCalculation(problemDef,problemDef_cells,problemDef_limits,controls);
  }
  result->f1.set_size(&nf_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (i = 0; i < unnamed_idx_0_tmp_tmp; i++) {
    if (i > result->f1.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, result->f1.size(0) - 1, &fd_emlrtBCI,
                                    &st);
    }
    result->f1[i].f1.set_size(&nf_emlrtRTEI, &st, 0, result->f1[i].f1.size(1));
    if (i > result->f1.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, result->f1.size(0) - 1, &fd_emlrtBCI,
                                    &st);
    }
    result->f1[i].f1.set_size(&nf_emlrtRTEI, &st, result->f1[i].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &k_emlrtRTEI, &st);
  result->f1.set_size(&of_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &jc_emlrtBCI, &st);
    }
    if (b_i > result->f1.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f1.size(0) - 1,
                                    &kc_emlrtBCI, &st);
    }
    result->f1[b_i].f1.set_size(&ag_emlrtRTEI, &st,
                                reflectivity[b_i].f1.size(0),
                                result->f1[b_i].f1.size(1));
    if (b_i > result->f1.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f1.size(0) - 1,
                                    &kc_emlrtBCI, &st);
    }
    result->f1[b_i].f1.set_size(&ag_emlrtRTEI, &st, result->f1[b_i].f1.size(0),
                                2);
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &jc_emlrtBCI, &st);
    }
    if (b_i > result->f1.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f1.size(0) - 1,
                                    &kc_emlrtBCI, &st);
    }
    if (b_i > result->f1.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f1.size(0) - 1,
                                    &kc_emlrtBCI, &st);
    }
    kstr = reflectivity[b_i].f1.size(0) * 2;
    for (i = 0; i < kstr; i++) {
      if (b_i > reflectivity.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                      &jc_emlrtBCI, &st);
      }
      if (b_i > result->f1.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f1.size(0) - 1,
                                      &id_emlrtBCI, &st);
      }
      result->f1[b_i].f1[i] = reflectivity[b_i].f1[i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  result->f2.set_size(&nf_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (i = 0; i < unnamed_idx_0_tmp_tmp; i++) {
    if (i > result->f2.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, result->f2.size(0) - 1, &gd_emlrtBCI,
                                    &st);
    }
    result->f2[i].f1.set_size(&nf_emlrtRTEI, &st, 0, result->f2[i].f1.size(1));
    if (i > result->f2.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, result->f2.size(0) - 1, &gd_emlrtBCI,
                                    &st);
    }
    result->f2[i].f1.set_size(&nf_emlrtRTEI, &st, result->f2[i].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &l_emlrtRTEI, &st);
  result->f2.set_size(&of_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &lc_emlrtBCI, &st);
    }
    if (b_i > result->f2.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f2.size(0) - 1,
                                    &mc_emlrtBCI, &st);
    }
    result->f2[b_i].f1.set_size(&bg_emlrtRTEI, &st, Simulation[b_i].f1.size(0),
                                result->f2[b_i].f1.size(1));
    if (b_i > result->f2.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f2.size(0) - 1,
                                    &mc_emlrtBCI, &st);
    }
    result->f2[b_i].f1.set_size(&bg_emlrtRTEI, &st, result->f2[b_i].f1.size(0),
                                2);
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &lc_emlrtBCI, &st);
    }
    if (b_i > result->f2.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f2.size(0) - 1,
                                    &mc_emlrtBCI, &st);
    }
    if (b_i > result->f2.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f2.size(0) - 1,
                                    &mc_emlrtBCI, &st);
    }
    kstr = Simulation[b_i].f1.size(0) * 2;
    for (i = 0; i < kstr; i++) {
      if (b_i > Simulation.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                      &lc_emlrtBCI, &st);
      }
      if (b_i > result->f2.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f2.size(0) - 1,
                                      &kd_emlrtBCI, &st);
      }
      result->f2[b_i].f1[i] = Simulation[b_i].f1[i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  result->f3.set_size(&nf_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (i = 0; i < unnamed_idx_0_tmp_tmp; i++) {
    if (i > result->f3.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, result->f3.size(0) - 1, &hd_emlrtBCI,
                                    &st);
    }
    result->f3[i].f1.set_size(&nf_emlrtRTEI, &st, 0, result->f3[i].f1.size(1));
    if (i > result->f3.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, result->f3.size(0) - 1, &hd_emlrtBCI,
                                    &st);
    }
    result->f3[i].f1.set_size(&nf_emlrtRTEI, &st, result->f3[i].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &m_emlrtRTEI, &st);
  result->f3.set_size(&of_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &nc_emlrtBCI, &st);
    }
    if (b_i > result->f3.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f3.size(0) - 1,
                                    &oc_emlrtBCI, &st);
    }
    result->f3[b_i].f1.set_size(&cg_emlrtRTEI, &st,
                                shifted_data[b_i].f1.size(0),
                                result->f3[b_i].f1.size(1));
    if (b_i > result->f3.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f3.size(0) - 1,
                                    &oc_emlrtBCI, &st);
    }
    result->f3[b_i].f1.set_size(&cg_emlrtRTEI, &st, result->f3[b_i].f1.size(0),
                                3);
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &nc_emlrtBCI, &st);
    }
    if (b_i > result->f3.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f3.size(0) - 1,
                                    &oc_emlrtBCI, &st);
    }
    if (b_i > result->f3.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f3.size(0) - 1,
                                    &oc_emlrtBCI, &st);
    }
    kstr = shifted_data[b_i].f1.size(0) * 3;
    for (i = 0; i < kstr; i++) {
      if (b_i > shifted_data.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                      &nc_emlrtBCI, &st);
      }
      if (b_i > result->f3.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f3.size(0) - 1,
                                      &md_emlrtBCI, &st);
      }
      result->f3[b_i].f1[i] = shifted_data[b_i].f1[i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  result->f4.set_size(&nf_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (i = 0; i < unnamed_idx_0_tmp_tmp; i++) {
    if (i > result->f4.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, result->f4.size(0) - 1, &jd_emlrtBCI,
                                    &st);
    }
    result->f4[i].f1.set_size(&nf_emlrtRTEI, &st, 0, result->f4[i].f1.size(1));
    if (i > result->f4.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, result->f4.size(0) - 1, &jd_emlrtBCI,
                                    &st);
    }
    result->f4[i].f1.set_size(&nf_emlrtRTEI, &st, result->f4[i].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &n_emlrtRTEI, &st);
  result->f4.set_size(&of_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &pc_emlrtBCI,
                                    &st);
    }
    if (b_i > result->f4.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f4.size(0) - 1,
                                    &qc_emlrtBCI, &st);
    }
    result->f4[b_i].f1.set_size(&dg_emlrtRTEI, &st, layerSlds[b_i].f1.size(0),
                                result->f4[b_i].f1.size(1));
    if (b_i > result->f4.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f4.size(0) - 1,
                                    &qc_emlrtBCI, &st);
    }
    result->f4[b_i].f1.set_size(&dg_emlrtRTEI, &st, result->f4[b_i].f1.size(0),
                                3);
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &pc_emlrtBCI,
                                    &st);
    }
    if (b_i > result->f4.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f4.size(0) - 1,
                                    &qc_emlrtBCI, &st);
    }
    if (b_i > result->f4.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f4.size(0) - 1,
                                    &qc_emlrtBCI, &st);
    }
    kstr = layerSlds[b_i].f1.size(0) * 3;
    for (i = 0; i < kstr; i++) {
      if (b_i > layerSlds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1,
                                      &pc_emlrtBCI, &st);
      }
      if (b_i > result->f4.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f4.size(0) - 1,
                                      &od_emlrtBCI, &st);
      }
      result->f4[b_i].f1[i] = layerSlds[b_i].f1[i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  result->f5.set_size(&nf_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (i = 0; i < unnamed_idx_0_tmp_tmp; i++) {
    if (i > result->f5.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, result->f5.size(0) - 1, &ld_emlrtBCI,
                                    &st);
    }
    result->f5[i].f1.set_size(&nf_emlrtRTEI, &st, 0, result->f5[i].f1.size(1));
    if (i > result->f5.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, result->f5.size(0) - 1, &ld_emlrtBCI,
                                    &st);
    }
    result->f5[i].f1.set_size(&nf_emlrtRTEI, &st, result->f5[i].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &o_emlrtRTEI, &st);
  result->f5.set_size(&of_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &rc_emlrtBCI, &st);
    }
    if (b_i > result->f5.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f5.size(0) - 1,
                                    &sc_emlrtBCI, &st);
    }
    result->f5[b_i].f1.set_size(&eg_emlrtRTEI, &st, sldProfiles[b_i].f1.size(0),
                                result->f5[b_i].f1.size(1));
    if (b_i > result->f5.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f5.size(0) - 1,
                                    &sc_emlrtBCI, &st);
    }
    result->f5[b_i].f1.set_size(&eg_emlrtRTEI, &st, result->f5[b_i].f1.size(0),
                                2);
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &rc_emlrtBCI, &st);
    }
    if (b_i > result->f5.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f5.size(0) - 1,
                                    &sc_emlrtBCI, &st);
    }
    if (b_i > result->f5.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f5.size(0) - 1,
                                    &sc_emlrtBCI, &st);
    }
    kstr = sldProfiles[b_i].f1.size(0) * 2;
    for (i = 0; i < kstr; i++) {
      if (b_i > sldProfiles.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                      &rc_emlrtBCI, &st);
      }
      if (b_i > result->f5.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f5.size(0) - 1,
                                      &pd_emlrtBCI, &st);
      }
      result->f5[b_i].f1[i] = sldProfiles[b_i].f1[i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  result->f6.set_size(&nf_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (i = 0; i < unnamed_idx_0_tmp_tmp; i++) {
    if (i > result->f6.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, result->f6.size(0) - 1, &nd_emlrtBCI,
                                    &st);
    }
    result->f6[i].f1.set_size(&nf_emlrtRTEI, &st, 0, result->f6[i].f1.size(1));
    if (i > result->f6.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, result->f6.size(0) - 1, &nd_emlrtBCI,
                                    &st);
    }
    result->f6[i].f1.set_size(&nf_emlrtRTEI, &st, result->f6[i].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &p_emlrtRTEI, &st);
  result->f6.set_size(&of_emlrtRTEI, &st, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &tc_emlrtBCI,
                                    &st);
    }
    if (b_i > result->f6.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f6.size(0) - 1,
                                    &uc_emlrtBCI, &st);
    }
    result->f6[b_i].f1.set_size(&fg_emlrtRTEI, &st, allLayers[b_i].f1.size(0),
                                result->f6[b_i].f1.size(1));
    if (b_i > result->f6.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f6.size(0) - 1,
                                    &uc_emlrtBCI, &st);
    }
    result->f6[b_i].f1.set_size(&fg_emlrtRTEI, &st, result->f6[b_i].f1.size(0),
                                3);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &tc_emlrtBCI,
                                    &st);
    }
    if (b_i > result->f6.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f6.size(0) - 1,
                                    &uc_emlrtBCI, &st);
    }
    if (b_i > result->f6.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f6.size(0) - 1,
                                    &uc_emlrtBCI, &st);
    }
    kstr = allLayers[b_i].f1.size(0) * 3;
    for (i = 0; i < kstr; i++) {
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &tc_emlrtBCI, &st);
      }
      if (b_i > result->f6.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, result->f6.size(0) - 1,
                                      &qd_emlrtBCI, &st);
      }
      result->f6[b_i].f1[i] = allLayers[b_i].f1[i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  //  Pre-processor directives for Matlab Coder
  //  to define the size of the output array
  // Result coder definitions....
  // Reflectivity
  // Simulatin
  // Shifted data
  // Layers slds
  // Sld profiles
  // All layers (resampled)
  // end
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (reflectivity_calculation_wrapper.cpp)
