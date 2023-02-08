//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// standardTF_custXY_reflectivityCalculation.cpp
//
// Code generation for function 'standardTF_custXY_reflectivityCalculation'
//

// Include files
#include "standardTF_custXY_reflectivityCalculation.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "gwmcmc_compile_types.h"
#include "rt_nonfinite.h"
#include "standardTF_custXY_paraPoints.h"
#include "standardTF_custXY_single.h"
#include "sum.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo qi_emlrtRSI{
    64,                                          // lineNo
    "standardTF_custXY_reflectivityCalculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pathName
};

static emlrtRSInfo ri_emlrtRSI{
    71,                                          // lineNo
    "standardTF_custXY_reflectivityCalculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pathName
};

static emlrtRSInfo si_emlrtRSI{
    93,                                          // lineNo
    "standardTF_custXY_reflectivityCalculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pathName
};

static emlrtDCInfo xc_emlrtDCI{
    29,                                          // lineNo
    21,                                          // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    1                                              // checkKind
};

static emlrtRTEInfo yc_emlrtRTEI{
    30,                                          // lineNo
    9,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo ad_emlrtRTEI{
    35,                                          // lineNo
    9,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo bd_emlrtRTEI{
    40,                                          // lineNo
    9,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo cd_emlrtRTEI{
    45,                                          // lineNo
    9,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo dd_emlrtRTEI{
    50,                                          // lineNo
    9,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo ed_emlrtRTEI{
    55,                                          // lineNo
    9,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtBCInfo jr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    31,                                          // lineNo
    18,                                          // colNo
    "reflectivity",                              // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo kr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    36,                                          // lineNo
    16,                                          // colNo
    "Simulation",                                // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo lr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    41,                                          // lineNo
    18,                                          // colNo
    "shifted_data",                              // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo mr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    46,                                          // lineNo
    15,                                          // colNo
    "layerSlds",                                 // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo nr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    51,                                          // lineNo
    17,                                          // colNo
    "sldProfiles",                               // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo or_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    56,                                          // lineNo
    15,                                          // colNo
    "allLayers",                                 // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtDCInfo yc_emlrtDCI{
    85,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo ad_emlrtDCI{
    85,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    4                                              // checkKind
};

static emlrtDCInfo bd_emlrtDCI{
    86,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo cd_emlrtDCI{
    87,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo dd_emlrtDCI{
    88,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo ed_emlrtDCI{
    89,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo fd_emlrtDCI{
    90,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo gd_emlrtDCI{
    25,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo hd_emlrtDCI{
    91,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo id_emlrtDCI{
    27,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    1                                              // checkKind
};

static emlrtBCInfo pr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    29,                                          // lineNo
    39,                                          // colNo
    "reflectivity",                              // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo qr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    29,                                          // lineNo
    39,                                          // colNo
    "Simulation",                                // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo rr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    29,                                          // lineNo
    39,                                          // colNo
    "shifted_data",                              // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo sr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    29,                                          // lineNo
    39,                                          // colNo
    "layerSlds",                                 // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo tr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    41,                                          // lineNo
    5,                                           // colNo
    "shifted_data",                              // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo ur_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    29,                                          // lineNo
    39,                                          // colNo
    "sldProfiles",                               // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo vr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    46,                                          // lineNo
    5,                                           // colNo
    "layerSlds",                                 // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo wr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    29,                                          // lineNo
    39,                                          // colNo
    "allLayers",                                 // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo xr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    56,                                          // lineNo
    5,                                           // colNo
    "allLayers",                                 // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo yr_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    51,                                          // lineNo
    5,                                           // colNo
    "sldProfiles",                               // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo as_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    36,                                          // lineNo
    5,                                           // colNo
    "Simulation",                                // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo bs_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    31,                                          // lineNo
    5,                                           // colNo
    "reflectivity",                              // aName
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m", // pName
    0                                              // checkKind
};

static emlrtRTEInfo hp_emlrtRTEI{
    85,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo ip_emlrtRTEI{
    86,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo jp_emlrtRTEI{
    87,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo kp_emlrtRTEI{
    88,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo lp_emlrtRTEI{
    89,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo mp_emlrtRTEI{
    90,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo np_emlrtRTEI{
    25,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo op_emlrtRTEI{
    91,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo pp_emlrtRTEI{
    27,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo qp_emlrtRTEI{
    1,                                           // lineNo
    91,                                          // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo rp_emlrtRTEI{
    29,                                          // lineNo
    39,                                          // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo sp_emlrtRTEI{
    31,                                          // lineNo
    5,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo tp_emlrtRTEI{
    36,                                          // lineNo
    5,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo up_emlrtRTEI{
    41,                                          // lineNo
    5,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo vp_emlrtRTEI{
    46,                                          // lineNo
    5,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo wp_emlrtRTEI{
    51,                                          // lineNo
    5,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo xp_emlrtRTEI{
    56,                                          // lineNo
    5,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo yp_emlrtRTEI{
    95,                                          // lineNo
    1,                                           // colNo
    "standardTF_custXY_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custXY_reflectivityCalculation.m" // pName
};

// Function Definitions
void c_standardTF_custXY_reflectivit(
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
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  //  Custom XP profile reflectivity calculation for standardTF
  //  This function decides on parallelisation options before calling the
  //  relevant version of the main custom XY calculation. It is more
  //  efficient to have multiple versions of the core calculation, each dealing
  //  with a different scheme for paralellisation. These are:
  //  single    - single threaded teflectivity calculation
  //  points    - parallelise over points in the reflectivity calculation
  //  contrasts - parallelise over contrasts.
  //  Pre-allocation - It's necessary to
  //  pre-allocate the memory for all the arrays
  //  for compilation, so do this in this block.
  if (!(problemDef->numberOfContrasts >= 0.0)) {
    emlrtNonNegativeCheckR2012b(problemDef->numberOfContrasts, &ad_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &yc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->ssubs.set_size(&hp_emlrtRTEI, sp,
                          static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &yc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(problemDef->numberOfContrasts);
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->ssubs[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &bd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(problemDef->numberOfContrasts);
  problem->backgrounds.set_size(
      &ip_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &bd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->backgrounds[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &cd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->qshifts.set_size(
      &jp_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &cd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->qshifts[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &dd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->scalefactors.set_size(
      &kp_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &dd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->scalefactors[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &ed_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->nbairs.set_size(&lp_emlrtRTEI, sp,
                           static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &ed_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->nbairs[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &fd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->nbsubs.set_size(&mp_emlrtRTEI, sp,
                           static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &fd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->nbsubs[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &gd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->calculations.all_chis.set_size(
      &np_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &gd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->calculations.all_chis[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &hd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->resolutions.set_size(
      &op_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &hd_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->resolutions[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &id_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->allSubRough.set_size(
      &pp_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &id_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->allSubRough[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &xc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  reflectivity.set_size(&qp_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < loop_ub; i++) {
    if (i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, reflectivity.size(0) - 1,
                                    &pr_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i].f1.set_size(&qp_emlrtRTEI, sp, 0,
                                reflectivity[i].f1.size(1));
    if (i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, reflectivity.size(0) - 1,
                                    &pr_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i].f1.set_size(&qp_emlrtRTEI, sp, reflectivity[i].f1.size(0),
                                2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &yc_emlrtRTEI,
      (emlrtConstCTX)sp);
  reflectivity.set_size(&rp_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &jr_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&sp_emlrtRTEI, sp, 2,
                                  reflectivity[b_i].f1.size(1));
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &jr_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&sp_emlrtRTEI, sp,
                                  reflectivity[b_i].f1.size(0), 2);
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &jr_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[0] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &bs_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[1] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &bs_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[2] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &bs_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  Simulation.set_size(&qp_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < loop_ub; i++) {
    if (i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, Simulation.size(0) - 1, &qr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i].f1.set_size(&qp_emlrtRTEI, sp, 0, Simulation[i].f1.size(1));
    if (i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, Simulation.size(0) - 1, &qr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i].f1.set_size(&qp_emlrtRTEI, sp, Simulation[i].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &ad_emlrtRTEI,
      (emlrtConstCTX)sp);
  Simulation.set_size(&rp_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &kr_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&tp_emlrtRTEI, sp, 2,
                                Simulation[b_i].f1.size(1));
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &kr_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&tp_emlrtRTEI, sp, Simulation[b_i].f1.size(0),
                                2);
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &kr_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[0] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &as_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[1] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &as_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[2] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &as_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  shifted_data.set_size(&qp_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < loop_ub; i++) {
    if (i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, shifted_data.size(0) - 1,
                                    &rr_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i].f1.set_size(&qp_emlrtRTEI, sp, 0,
                                shifted_data[i].f1.size(1));
    if (i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, shifted_data.size(0) - 1,
                                    &rr_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i].f1.set_size(&qp_emlrtRTEI, sp, shifted_data[i].f1.size(0),
                                0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &bd_emlrtRTEI,
      (emlrtConstCTX)sp);
  shifted_data.set_size(&rp_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &lr_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[b_i].f1.set_size(&up_emlrtRTEI, sp, 2,
                                  shifted_data[b_i].f1.size(1));
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &lr_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[b_i].f1.set_size(&up_emlrtRTEI, sp,
                                  shifted_data[b_i].f1.size(0), 3);
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &lr_emlrtBCI, (emlrtConstCTX)sp);
    }
    for (i = 0; i < 6; i++) {
      if (b_i > shifted_data.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                      &tr_emlrtBCI, (emlrtConstCTX)sp);
      }
      shifted_data[b_i].f1[i] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  layerSlds.set_size(&qp_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < loop_ub; i++) {
    if (i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, layerSlds.size(0) - 1, &sr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i].f1.set_size(&qp_emlrtRTEI, sp, 0, layerSlds[i].f1.size(1));
    if (i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, layerSlds.size(0) - 1, &sr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i].f1.set_size(&qp_emlrtRTEI, sp, layerSlds[i].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &cd_emlrtRTEI,
      (emlrtConstCTX)sp);
  layerSlds.set_size(&rp_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &mr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&vp_emlrtRTEI, sp, 2, layerSlds[b_i].f1.size(1));
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &mr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&vp_emlrtRTEI, sp, layerSlds[b_i].f1.size(0), 3);
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &mr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    for (i = 0; i < 6; i++) {
      if (b_i > layerSlds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1,
                                      &vr_emlrtBCI, (emlrtConstCTX)sp);
      }
      layerSlds[b_i].f1[i] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  sldProfiles.set_size(&qp_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < loop_ub; i++) {
    if (i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, sldProfiles.size(0) - 1, &ur_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProfiles[i].f1.set_size(&qp_emlrtRTEI, sp, 0, sldProfiles[i].f1.size(1));
    if (i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, sldProfiles.size(0) - 1, &ur_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProfiles[i].f1.set_size(&qp_emlrtRTEI, sp, sldProfiles[i].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &dd_emlrtRTEI,
      (emlrtConstCTX)sp);
  sldProfiles.set_size(&rp_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &nr_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&wp_emlrtRTEI, sp, 2,
                                 sldProfiles[b_i].f1.size(1));
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &nr_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&wp_emlrtRTEI, sp, sldProfiles[b_i].f1.size(0),
                                 2);
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &nr_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[0] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &yr_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[1] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &yr_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[2] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &yr_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  allLayers.set_size(&qp_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < loop_ub; i++) {
    if (i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, allLayers.size(0) - 1, &wr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i].f1.set_size(&qp_emlrtRTEI, sp, 0, allLayers[i].f1.size(1));
    if (i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, allLayers.size(0) - 1, &wr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i].f1.set_size(&qp_emlrtRTEI, sp, allLayers[i].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &ed_emlrtRTEI,
      (emlrtConstCTX)sp);
  allLayers.set_size(&rp_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &or_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&xp_emlrtRTEI, sp, 2, allLayers[b_i].f1.size(1));
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &or_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&xp_emlrtRTEI, sp, allLayers[b_i].f1.size(0), 1);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &or_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[0] = 1.0;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &xr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1[1] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  if (memcmp((char_T *)&controls->para[0], (char_T *)&b[0], 6) == 0) {
    loop_ub = 0;
  } else if (memcmp((char_T *)&controls->para[0], (char_T *)&b_b[0], 6) == 0) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }
  switch (loop_ub) {
  case 0:
    st.site = &qi_emlrtRSI;
    standardTF_custXY_single(
        &st, problemDef, problemDef_cells, controls, problem->ssubs,
        problem->backgrounds, problem->qshifts, problem->scalefactors,
        problem->nbairs, problem->nbsubs, problem->resolutions,
        problem->calculations.all_chis, reflectivity, Simulation, shifted_data,
        layerSlds, sldProfiles, allLayers, problem->allSubRough);
    break;
  case 1:
    st.site = &ri_emlrtRSI;
    standardTF_custXY_paraPoints(
        &st, problemDef, problemDef_cells, controls, problem->ssubs,
        problem->backgrounds, problem->qshifts, problem->scalefactors,
        problem->nbairs, problem->nbsubs, problem->resolutions,
        problem->calculations.all_chis, reflectivity, Simulation, shifted_data,
        layerSlds, sldProfiles, allLayers, problem->allSubRough);
    break;
  }
  st.site = &si_emlrtRSI;
  problem->calculations.sum_chi =
      coder::sum(&st, problem->calculations.all_chis);
  problem->resample.set_size(&yp_emlrtRTEI, sp, 1,
                             problem->allSubRough.size(0));
  loop_ub = problem->allSubRough.size(0);
  for (i = 0; i < loop_ub; i++) {
    problem->resample[i] = 1.0;
  }
}

// End of code generation (standardTF_custXY_reflectivityCalculation.cpp)
