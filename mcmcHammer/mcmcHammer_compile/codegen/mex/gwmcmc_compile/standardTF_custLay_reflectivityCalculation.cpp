//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// standardTF_custLay_reflectivityCalculation.cpp
//
// Code generation for function 'standardTF_custLay_reflectivityCalculation'
//

// Include files
#include "standardTF_custLay_reflectivityCalculation.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "gwmcmc_compile_types.h"
#include "rt_nonfinite.h"
#include "standardTF_custlay_paraPoints.h"
#include "standardTF_custlay_single.h"
#include "sum.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo wh_emlrtRSI{
    65,                                           // lineNo
    "standardTF_custLay_reflectivityCalculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pathName
};

static emlrtRSInfo xh_emlrtRSI{
    72,                                           // lineNo
    "standardTF_custLay_reflectivityCalculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pathName
};

static emlrtRSInfo yh_emlrtRSI{
    100,                                          // lineNo
    "standardTF_custLay_reflectivityCalculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pathName
};

static emlrtDCInfo tb_emlrtDCI{
    29,                                           // lineNo
    21,                                           // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtRTEInfo ec_emlrtRTEI{
    30,                                           // lineNo
    9,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo fc_emlrtRTEI{
    35,                                           // lineNo
    9,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo gc_emlrtRTEI{
    40,                                           // lineNo
    9,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo hc_emlrtRTEI{
    45,                                           // lineNo
    9,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo ic_emlrtRTEI{
    50,                                           // lineNo
    9,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo jc_emlrtRTEI{
    55,                                           // lineNo
    9,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtBCInfo am_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    31,                                           // lineNo
    18,                                           // colNo
    "reflectivity",                               // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo bm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    36,                                           // lineNo
    16,                                           // colNo
    "Simulation",                                 // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo cm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    41,                                           // lineNo
    18,                                           // colNo
    "shifted_data",                               // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo dm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    46,                                           // lineNo
    15,                                           // colNo
    "layerSlds",                                  // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo em_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    51,                                           // lineNo
    17,                                           // colNo
    "sldProfiles",                                // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo fm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    56,                                           // lineNo
    15,                                           // colNo
    "allLayers",                                  // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo ub_emlrtDCI{
    92,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo vb_emlrtDCI{
    92,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    4                                               // checkKind
};

static emlrtDCInfo wb_emlrtDCI{
    93,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo xb_emlrtDCI{
    94,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo yb_emlrtDCI{
    95,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo ac_emlrtDCI{
    96,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo bc_emlrtDCI{
    97,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo cc_emlrtDCI{
    25,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo dc_emlrtDCI{
    98,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo ec_emlrtDCI{
    101,                                          // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo gm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    29,                                           // lineNo
    39,                                           // colNo
    "reflectivity",                               // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo hm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    29,                                           // lineNo
    39,                                           // colNo
    "Simulation",                                 // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo im_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    29,                                           // lineNo
    39,                                           // colNo
    "shifted_data",                               // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo jm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    29,                                           // lineNo
    39,                                           // colNo
    "layerSlds",                                  // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo km_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    41,                                           // lineNo
    5,                                            // colNo
    "shifted_data",                               // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo lm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    29,                                           // lineNo
    39,                                           // colNo
    "sldProfiles",                                // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo mm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    46,                                           // lineNo
    5,                                            // colNo
    "layerSlds",                                  // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo nm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    29,                                           // lineNo
    39,                                           // colNo
    "allLayers",                                  // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo om_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    56,                                           // lineNo
    5,                                            // colNo
    "allLayers",                                  // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo pm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    51,                                           // lineNo
    5,                                            // colNo
    "sldProfiles",                                // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo qm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    36,                                           // lineNo
    5,                                            // colNo
    "Simulation",                                 // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo rm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    31,                                           // lineNo
    5,                                            // colNo
    "reflectivity",                               // aName
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m", // pName
    0                                               // checkKind
};

static emlrtRTEInfo om_emlrtRTEI{
    92,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo pm_emlrtRTEI{
    93,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo qm_emlrtRTEI{
    94,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo rm_emlrtRTEI{
    95,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo sm_emlrtRTEI{
    96,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo tm_emlrtRTEI{
    97,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo um_emlrtRTEI{
    25,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo vm_emlrtRTEI{
    98,                                           // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo wm_emlrtRTEI{
    101,                                          // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo xm_emlrtRTEI{
    1,                                            // lineNo
    91,                                           // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo ym_emlrtRTEI{
    29,                                           // lineNo
    39,                                           // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo an_emlrtRTEI{
    31,                                           // lineNo
    5,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo bn_emlrtRTEI{
    36,                                           // lineNo
    5,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo cn_emlrtRTEI{
    41,                                           // lineNo
    5,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo dn_emlrtRTEI{
    46,                                           // lineNo
    5,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo en_emlrtRTEI{
    51,                                           // lineNo
    5,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo fn_emlrtRTEI{
    56,                                           // lineNo
    5,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo gn_emlrtRTEI{
    102,                                          // lineNo
    1,                                            // colNo
    "standardTF_custLay_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay_reflectivityCalculation.m" // pName
};

// Function Definitions
void c_standardTF_custLay_reflectivi(
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
  //  Custom layers reflectivity calculation for standardTF
  //  This function decides on parallelisation options before calling the
  //  relevant version of the main custom layers calculation. It is more
  //  efficient to have multiple versions of the core calculation, each dealing
  //  with a different scheme for paralellisation. These are:
  //  single    - single threaded teflectivity calculation
  //  points    - parallelise over points in the reflectivity calculation
  //  contrasts - parallelise over contrasts.
  //  Pre-allocation - It's necessary to
  //  pre-allocate the memory for all the arrays
  //  for compilation, so do this in this block.
  if (!(problemDef->numberOfContrasts >= 0.0)) {
    emlrtNonNegativeCheckR2012b(problemDef->numberOfContrasts, &vb_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &ub_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->ssubs.set_size(&om_emlrtRTEI, sp,
                          static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &ub_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(problemDef->numberOfContrasts);
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->ssubs[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &wb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(problemDef->numberOfContrasts);
  problem->backgrounds.set_size(
      &pm_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &wb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->backgrounds[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &xb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->qshifts.set_size(
      &qm_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &xb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->qshifts[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &yb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->scalefactors.set_size(
      &rm_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &yb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->scalefactors[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &ac_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->nbairs.set_size(&sm_emlrtRTEI, sp,
                           static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &ac_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->nbairs[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &bc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->nbsubs.set_size(&tm_emlrtRTEI, sp,
                           static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &bc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->nbsubs[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &cc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->calculations.all_chis.set_size(
      &um_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &cc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->calculations.all_chis[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &dc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->resolutions.set_size(
      &vm_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &dc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->resolutions[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &ec_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  problem->allSubRough.set_size(
      &wm_emlrtRTEI, sp, static_cast<int32_T>(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &ec_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    problem->allSubRough[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &tb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  reflectivity.set_size(&xm_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < loop_ub; i++) {
    if (i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, reflectivity.size(0) - 1,
                                    &gm_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i].f1.set_size(&xm_emlrtRTEI, sp, 0,
                                reflectivity[i].f1.size(1));
    if (i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, reflectivity.size(0) - 1,
                                    &gm_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i].f1.set_size(&xm_emlrtRTEI, sp, reflectivity[i].f1.size(0),
                                2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &ec_emlrtRTEI,
      (emlrtConstCTX)sp);
  reflectivity.set_size(&ym_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &am_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&an_emlrtRTEI, sp, 2,
                                  reflectivity[b_i].f1.size(1));
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &am_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&an_emlrtRTEI, sp,
                                  reflectivity[b_i].f1.size(0), 2);
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &am_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[0] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &rm_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[1] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &rm_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[2] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &rm_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  Simulation.set_size(&xm_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < loop_ub; i++) {
    if (i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, Simulation.size(0) - 1, &hm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i].f1.set_size(&xm_emlrtRTEI, sp, 0, Simulation[i].f1.size(1));
    if (i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, Simulation.size(0) - 1, &hm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i].f1.set_size(&xm_emlrtRTEI, sp, Simulation[i].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &fc_emlrtRTEI,
      (emlrtConstCTX)sp);
  Simulation.set_size(&ym_emlrtRTEI, sp,
                      static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &bm_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&bn_emlrtRTEI, sp, 2,
                                Simulation[b_i].f1.size(1));
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &bm_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&bn_emlrtRTEI, sp, Simulation[b_i].f1.size(0),
                                2);
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &bm_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[0] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &qm_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[1] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &qm_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[2] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &qm_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  shifted_data.set_size(&xm_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < loop_ub; i++) {
    if (i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, shifted_data.size(0) - 1,
                                    &im_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i].f1.set_size(&xm_emlrtRTEI, sp, 0,
                                shifted_data[i].f1.size(1));
    if (i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, shifted_data.size(0) - 1,
                                    &im_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i].f1.set_size(&xm_emlrtRTEI, sp, shifted_data[i].f1.size(0),
                                0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &gc_emlrtRTEI,
      (emlrtConstCTX)sp);
  shifted_data.set_size(&ym_emlrtRTEI, sp,
                        static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &cm_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[b_i].f1.set_size(&cn_emlrtRTEI, sp, 2,
                                  shifted_data[b_i].f1.size(1));
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &cm_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[b_i].f1.set_size(&cn_emlrtRTEI, sp,
                                  shifted_data[b_i].f1.size(0), 3);
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &cm_emlrtBCI, (emlrtConstCTX)sp);
    }
    for (i = 0; i < 6; i++) {
      if (b_i > shifted_data.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                      &km_emlrtBCI, (emlrtConstCTX)sp);
      }
      shifted_data[b_i].f1[i] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  layerSlds.set_size(&xm_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < loop_ub; i++) {
    if (i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, layerSlds.size(0) - 1, &jm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i].f1.set_size(&xm_emlrtRTEI, sp, 0, layerSlds[i].f1.size(1));
    if (i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, layerSlds.size(0) - 1, &jm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i].f1.set_size(&xm_emlrtRTEI, sp, layerSlds[i].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &hc_emlrtRTEI,
      (emlrtConstCTX)sp);
  layerSlds.set_size(&ym_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &dm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&dn_emlrtRTEI, sp, 2, layerSlds[b_i].f1.size(1));
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &dm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&dn_emlrtRTEI, sp, layerSlds[b_i].f1.size(0), 3);
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &dm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    for (i = 0; i < 6; i++) {
      if (b_i > layerSlds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1,
                                      &mm_emlrtBCI, (emlrtConstCTX)sp);
      }
      layerSlds[b_i].f1[i] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  sldProfiles.set_size(&xm_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < loop_ub; i++) {
    if (i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, sldProfiles.size(0) - 1, &lm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProfiles[i].f1.set_size(&xm_emlrtRTEI, sp, 0, sldProfiles[i].f1.size(1));
    if (i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, sldProfiles.size(0) - 1, &lm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProfiles[i].f1.set_size(&xm_emlrtRTEI, sp, sldProfiles[i].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &ic_emlrtRTEI,
      (emlrtConstCTX)sp);
  sldProfiles.set_size(&ym_emlrtRTEI, sp,
                       static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &em_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&en_emlrtRTEI, sp, 2,
                                 sldProfiles[b_i].f1.size(1));
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &em_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&en_emlrtRTEI, sp, sldProfiles[b_i].f1.size(0),
                                 2);
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &em_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[0] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &pm_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[1] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &pm_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[2] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &pm_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  allLayers.set_size(&xm_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (i = 0; i < loop_ub; i++) {
    if (i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, allLayers.size(0) - 1, &nm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i].f1.set_size(&xm_emlrtRTEI, sp, 0, allLayers[i].f1.size(1));
    if (i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, allLayers.size(0) - 1, &nm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i].f1.set_size(&xm_emlrtRTEI, sp, allLayers[i].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &jc_emlrtRTEI,
      (emlrtConstCTX)sp);
  allLayers.set_size(&ym_emlrtRTEI, sp,
                     static_cast<int32_T>(problemDef->numberOfContrasts));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &fm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&fn_emlrtRTEI, sp, 2, allLayers[b_i].f1.size(1));
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &fm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&fn_emlrtRTEI, sp, allLayers[b_i].f1.size(0), 3);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &fm_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    for (i = 0; i < 6; i++) {
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &om_emlrtBCI, (emlrtConstCTX)sp);
      }
      allLayers[b_i].f1[i] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  End pre-allocation
  if (memcmp((char_T *)&controls->para[0], (char_T *)&b[0], 6) == 0) {
    loop_ub = 0;
  } else if (memcmp((char_T *)&controls->para[0], (char_T *)&b_b[0], 6) == 0) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }
  switch (loop_ub) {
  case 0:
    st.site = &wh_emlrtRSI;
    standardTF_custlay_single(
        &st, problemDef, problemDef_cells, controls, problem->ssubs,
        problem->backgrounds, problem->qshifts, problem->scalefactors,
        problem->nbairs, problem->nbsubs, problem->resolutions,
        problem->calculations.all_chis, reflectivity, Simulation, shifted_data,
        layerSlds, sldProfiles, allLayers, problem->allSubRough);
    break;
  case 1:
    st.site = &xh_emlrtRSI;
    standardTF_custlay_paraPoints(
        &st, problemDef, problemDef_cells, controls, problem->ssubs,
        problem->backgrounds, problem->qshifts, problem->scalefactors,
        problem->nbairs, problem->nbsubs, problem->resolutions,
        problem->calculations.all_chis, reflectivity, Simulation, shifted_data,
        layerSlds, sldProfiles, allLayers, problem->allSubRough);
    break;
  }
  st.site = &yh_emlrtRSI;
  problem->calculations.sum_chi =
      coder::sum(&st, problem->calculations.all_chis);
  problem->resample.set_size(&gn_emlrtRTEI, sp, 1,
                             problemDef->resample.size(1));
  loop_ub = problemDef->resample.size(1);
  for (i = 0; i < loop_ub; i++) {
    problem->resample[i] = problemDef->resample[i];
  }
}

// End of code generation (standardTF_custLay_reflectivityCalculation.cpp)
