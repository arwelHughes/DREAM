//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// standardTF_reflectivityCalculation.cpp
//
// Code generation for function 'standardTF_reflectivityCalculation'
//

// Include files
#include "standardTF_reflectivityCalculation.h"
#include "eml_int_forloop_overflow_check.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "gwmcmc_compile_types.h"
#include "rt_nonfinite.h"
#include "standardTF_custLay_reflectivityCalculation.h"
#include "standardTF_custXY_reflectivityCalculation.h"
#include "standardTF_stanLay_reflectivityCalculation.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo y_emlrtRSI{
    65,                                   // lineNo
    "standardTF_reflectivityCalculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pathName
};

static emlrtRSInfo ab_emlrtRSI{
    68,                                   // lineNo
    "standardTF_reflectivityCalculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pathName
};

static emlrtRSInfo bb_emlrtRSI{
    73,                                   // lineNo
    "standardTF_reflectivityCalculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pathName
};

static emlrtRSInfo cb_emlrtRSI{
    78,                                   // lineNo
    "standardTF_reflectivityCalculation", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pathName
};

static emlrtRSInfo db_emlrtRSI{
    16,      // lineNo
    "lower", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/strfun/lower.m" // pathName
};

static emlrtRSInfo eb_emlrtRSI{
    10,                     // lineNo
    "eml_string_transform", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/strfun/"
    "eml_string_transform.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    14,                      // lineNo
    "assertSupportedString", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "assertSupportedString.m" // pathName
};

static emlrtRSInfo gb_emlrtRSI{
    33,        // lineNo
    "inrange", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "assertSupportedString.m" // pathName
};

static emlrtDCInfo i_emlrtDCI{
    23,                                   // lineNo
    18,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    4                                       // checkKind
};

static emlrtDCInfo j_emlrtDCI{
    23,                                   // lineNo
    18,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    1                                       // checkKind
};

static emlrtDCInfo k_emlrtDCI{
    35,                                   // lineNo
    21,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    1                                       // checkKind
};

static emlrtRTEInfo q_emlrtRTEI{
    36,                                   // lineNo
    9,                                    // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    41,                                   // lineNo
    9,                                    // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    46,                                   // lineNo
    9,                                    // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    51,                                   // lineNo
    9,                                    // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    56,                                   // lineNo
    9,                                    // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    61,                                   // lineNo
    9,                                    // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtBCInfo ud_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    37,                                   // lineNo
    18,                                   // colNo
    "reflectivity",                       // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo vd_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    42,                                   // lineNo
    16,                                   // colNo
    "Simulation",                         // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo wd_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    47,                                   // lineNo
    18,                                   // colNo
    "shifted_data",                       // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo xd_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    52,                                   // lineNo
    15,                                   // colNo
    "layerSlds",                          // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo yd_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    57,                                   // lineNo
    17,                                   // colNo
    "sldProfiles",                        // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ae_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    62,                                   // lineNo
    15,                                   // colNo
    "allLayers",                          // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo be_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    35,                                   // lineNo
    39,                                   // colNo
    "reflectivity",                       // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ce_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    35,                                   // lineNo
    39,                                   // colNo
    "Simulation",                         // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo de_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    35,                                   // lineNo
    39,                                   // colNo
    "shifted_data",                       // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ee_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    35,                                   // lineNo
    39,                                   // colNo
    "layerSlds",                          // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo fe_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    47,                                   // lineNo
    5,                                    // colNo
    "shifted_data",                       // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ge_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    35,                                   // lineNo
    39,                                   // colNo
    "sldProfiles",                        // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo he_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    52,                                   // lineNo
    5,                                    // colNo
    "layerSlds",                          // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ie_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    35,                                   // lineNo
    39,                                   // colNo
    "allLayers",                          // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo je_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    62,                                   // lineNo
    5,                                    // colNo
    "allLayers",                          // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ke_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    57,                                   // lineNo
    5,                                    // colNo
    "sldProfiles",                        // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo le_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    42,                                   // lineNo
    5,                                    // colNo
    "Simulation",                         // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo me_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    37,                                   // lineNo
    5,                                    // colNo
    "reflectivity",                       // aName
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m", // pName
    0                                       // checkKind
};

static emlrtRTEInfo gg_emlrtRTEI{
    24,                                   // lineNo
    26,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo hg_emlrtRTEI{
    25,                                   // lineNo
    32,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo ig_emlrtRTEI{
    26,                                   // lineNo
    28,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo jg_emlrtRTEI{
    27,                                   // lineNo
    33,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo kg_emlrtRTEI{
    28,                                   // lineNo
    27,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo lg_emlrtRTEI{
    29,                                   // lineNo
    27,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo mg_emlrtRTEI{
    30,                                   // lineNo
    32,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo ng_emlrtRTEI{
    31,                                   // lineNo
    51,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo og_emlrtRTEI{
    32,                                   // lineNo
    32,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo pg_emlrtRTEI{
    33,                                   // lineNo
    29,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo qg_emlrtRTEI{
    1,                                    // lineNo
    91,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo rg_emlrtRTEI{
    35,                                   // lineNo
    39,                                   // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo sg_emlrtRTEI{
    37,                                   // lineNo
    5,                                    // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo tg_emlrtRTEI{
    42,                                   // lineNo
    5,                                    // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo ug_emlrtRTEI{
    47,                                   // lineNo
    5,                                    // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo vg_emlrtRTEI{
    52,                                   // lineNo
    5,                                    // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo wg_emlrtRTEI{
    57,                                   // lineNo
    5,                                    // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo xg_emlrtRTEI{
    62,                                   // lineNo
    5,                                    // colNo
    "standardTF_reflectivityCalculation", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_reflectivityCalculation.m" // pName
};

static emlrtRTEInfo yg_emlrtRTEI{
    11,                     // lineNo
    20,                     // colNo
    "eml_string_transform", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/strfun/"
    "eml_string_transform.m" // pName
};

// Function Definitions
void c_standardTF_reflectivityCalcul(
    const emlrtStack *sp, const struct_T *problemDef,
    const cell_5 *problemDef_cells, const struct3_T *controls,
    c_struct_T *problem, coder::array<cell_wrap_10, 1U> &reflectivity,
    coder::array<cell_wrap_10, 1U> &Simulation,
    coder::array<cell_wrap_1, 1U> &shifted_data,
    coder::array<cell_wrap_11, 1U> &layerSlds,
    coder::array<cell_wrap_1, 1U> &sldProfiles,
    coder::array<cell_wrap_1, 1U> &allLayers)
{
  static const char_T b_cv1[13]{'c', 'u', 's', 't', 'o', 'm', ' ',
                                'l', 'a', 'y', 'e', 'r', 's'};
  static const char_T b_cv2[9]{'c', 'u', 's', 't', 'o', 'm', ' ', 'x', 'y'};
  static const char_T b_cv[6]{'l', 'a', 'y', 'e', 'r', 's'};
  coder::array<char_T, 2U> switch_expression;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T exitg1;
  int32_T i;
  int32_T ns;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Main function for the standardTF reflectivity calculation
  //  This function decides what type of model is being analysed and barnches
  //  to the correct one. The main options are:
  //  layers            - This is the equivalent of Standard Layers in RasCAL
  //  Custom Layers     - This is also a layers calculation, but the
  //                    specification of the layers is dne using a user defined
  //                    function.
  //  Custom XY         - This also has a model described by a user supplied
  //                    function, but in this case the function generates an
  //                    SLD profile (i.e. XY function) rather than a list of
  //                    layers.
  //  Find out the model type from the input structs
  //  Pre-allocate the output arrays.. this is necessary because otherwise
  //  the compiler complains with 'Output argument <....> is not assigned on
  //  some execution paths' error.
  if (!(problemDef->numberOfContrasts >= 0.0)) {
    emlrtNonNegativeCheckR2012b(problemDef->numberOfContrasts, &i_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(problemDef->numberOfContrasts));
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &j_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  ns = static_cast<int32_T>(problemDef->numberOfContrasts);
  problem->ssubs.set_size(&gg_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    problem->ssubs[b_i] = 0.0;
  }
  problem->backgrounds.set_size(&hg_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    problem->backgrounds[b_i] = 0.0;
  }
  problem->qshifts.set_size(&ig_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    problem->qshifts[b_i] = 0.0;
  }
  problem->scalefactors.set_size(&jg_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    problem->scalefactors[b_i] = 0.0;
  }
  problem->nbairs.set_size(&kg_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    problem->nbairs[b_i] = 0.0;
  }
  problem->nbsubs.set_size(&lg_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    problem->nbsubs[b_i] = 0.0;
  }
  problem->resolutions.set_size(&mg_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    problem->resolutions[b_i] = 0.0;
  }
  problem->calculations.all_chis.set_size(&ng_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    problem->calculations.all_chis[b_i] = 0.0;
  }
  problem->calculations.sum_chi = 0.0;
  problem->allSubRough.set_size(&og_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    problem->allSubRough[b_i] = 0.0;
  }
  problem->resample.set_size(&pg_emlrtRTEI, sp, 1, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    problem->resample[b_i] = 0.0;
  }
  if (problemDef->numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(problemDef->numberOfContrasts, &k_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  reflectivity.set_size(&qg_emlrtRTEI, sp, ns);
  for (i = 0; i < ns; i++) {
    if (i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, reflectivity.size(0) - 1,
                                    &be_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i].f1.set_size(&qg_emlrtRTEI, sp, 0,
                                reflectivity[i].f1.size(1));
    if (i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, reflectivity.size(0) - 1,
                                    &be_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[i].f1.set_size(&qg_emlrtRTEI, sp, reflectivity[i].f1.size(0),
                                2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &q_emlrtRTEI,
      (emlrtConstCTX)sp);
  reflectivity.set_size(&rg_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &ud_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&sg_emlrtRTEI, sp, 2,
                                  reflectivity[b_i].f1.size(1));
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &ud_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1.set_size(&sg_emlrtRTEI, sp,
                                  reflectivity[b_i].f1.size(0), 2);
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &ud_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[0] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &me_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[1] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &me_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[2] = 1.0;
    if (b_i > reflectivity.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, reflectivity.size(0) - 1,
                                    &me_emlrtBCI, (emlrtConstCTX)sp);
    }
    reflectivity[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  Simulation.set_size(&qg_emlrtRTEI, sp, ns);
  for (i = 0; i < ns; i++) {
    if (i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, Simulation.size(0) - 1, &ce_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i].f1.set_size(&qg_emlrtRTEI, sp, 0, Simulation[i].f1.size(1));
    if (i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, Simulation.size(0) - 1, &ce_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Simulation[i].f1.set_size(&qg_emlrtRTEI, sp, Simulation[i].f1.size(0), 2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &r_emlrtRTEI,
      (emlrtConstCTX)sp);
  Simulation.set_size(&rg_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &vd_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&tg_emlrtRTEI, sp, 2,
                                Simulation[b_i].f1.size(1));
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &vd_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1.set_size(&tg_emlrtRTEI, sp, Simulation[b_i].f1.size(0),
                                2);
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &vd_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[0] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &le_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[1] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &le_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[2] = 1.0;
    if (b_i > Simulation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Simulation.size(0) - 1,
                                    &le_emlrtBCI, (emlrtConstCTX)sp);
    }
    Simulation[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  shifted_data.set_size(&qg_emlrtRTEI, sp, ns);
  for (i = 0; i < ns; i++) {
    if (i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, shifted_data.size(0) - 1,
                                    &de_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i].f1.set_size(&qg_emlrtRTEI, sp, 0,
                                shifted_data[i].f1.size(1));
    if (i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, shifted_data.size(0) - 1,
                                    &de_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[i].f1.set_size(&qg_emlrtRTEI, sp, shifted_data[i].f1.size(0),
                                0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &s_emlrtRTEI,
      (emlrtConstCTX)sp);
  shifted_data.set_size(&rg_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &wd_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[b_i].f1.set_size(&ug_emlrtRTEI, sp, 2,
                                  shifted_data[b_i].f1.size(1));
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &wd_emlrtBCI, (emlrtConstCTX)sp);
    }
    shifted_data[b_i].f1.set_size(&ug_emlrtRTEI, sp,
                                  shifted_data[b_i].f1.size(0), 3);
    if (b_i > shifted_data.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                    &wd_emlrtBCI, (emlrtConstCTX)sp);
    }
    for (i = 0; i < 6; i++) {
      if (b_i > shifted_data.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, shifted_data.size(0) - 1,
                                      &fe_emlrtBCI, (emlrtConstCTX)sp);
      }
      shifted_data[b_i].f1[i] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  layerSlds.set_size(&qg_emlrtRTEI, sp, ns);
  for (i = 0; i < ns; i++) {
    if (i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, layerSlds.size(0) - 1, &ee_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i].f1.set_size(&qg_emlrtRTEI, sp, 0, layerSlds[i].f1.size(1));
    if (i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, layerSlds.size(0) - 1, &ee_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[i].f1.set_size(&qg_emlrtRTEI, sp, layerSlds[i].f1.size(0), 3);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &t_emlrtRTEI,
      (emlrtConstCTX)sp);
  layerSlds.set_size(&rg_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &xd_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&vg_emlrtRTEI, sp, 2, layerSlds[b_i].f1.size(1));
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &xd_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    layerSlds[b_i].f1.set_size(&vg_emlrtRTEI, sp, layerSlds[b_i].f1.size(0), 3);
    if (b_i > layerSlds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1, &xd_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    for (i = 0; i < 6; i++) {
      if (b_i > layerSlds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, layerSlds.size(0) - 1,
                                      &he_emlrtBCI, (emlrtConstCTX)sp);
      }
      layerSlds[b_i].f1[i] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  sldProfiles.set_size(&qg_emlrtRTEI, sp, ns);
  for (i = 0; i < ns; i++) {
    if (i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, sldProfiles.size(0) - 1, &ge_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProfiles[i].f1.set_size(&qg_emlrtRTEI, sp, 0, sldProfiles[i].f1.size(1));
    if (i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, sldProfiles.size(0) - 1, &ge_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    sldProfiles[i].f1.set_size(&qg_emlrtRTEI, sp, sldProfiles[i].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &u_emlrtRTEI,
      (emlrtConstCTX)sp);
  sldProfiles.set_size(&rg_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &yd_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&wg_emlrtRTEI, sp, 2,
                                 sldProfiles[b_i].f1.size(1));
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &yd_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1.set_size(&wg_emlrtRTEI, sp, sldProfiles[b_i].f1.size(0),
                                 2);
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &yd_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[0] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &ke_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[1] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &ke_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[2] = 1.0;
    if (b_i > sldProfiles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, sldProfiles.size(0) - 1,
                                    &ke_emlrtBCI, (emlrtConstCTX)sp);
    }
    sldProfiles[b_i].f1[3] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  allLayers.set_size(&qg_emlrtRTEI, sp, ns);
  for (i = 0; i < ns; i++) {
    if (i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, allLayers.size(0) - 1, &ie_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i].f1.set_size(&qg_emlrtRTEI, sp, 0, allLayers[i].f1.size(1));
    if (i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, allLayers.size(0) - 1, &ie_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i].f1.set_size(&qg_emlrtRTEI, sp, allLayers[i].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, problemDef->numberOfContrasts, mxDOUBLE_CLASS,
      static_cast<int32_T>(problemDef->numberOfContrasts), &v_emlrtRTEI,
      (emlrtConstCTX)sp);
  allLayers.set_size(&rg_emlrtRTEI, sp, ns);
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &ae_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&xg_emlrtRTEI, sp, 2, allLayers[b_i].f1.size(1));
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &ae_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.set_size(&xg_emlrtRTEI, sp, allLayers[b_i].f1.size(0), 3);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &ae_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    for (i = 0; i < 6; i++) {
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &je_emlrtBCI, (emlrtConstCTX)sp);
      }
      allLayers[b_i].f1[i] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  st.site = &y_emlrtRSI;
  b_st.site = &db_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  ns = problemDef->modelType.size(1);
  p = true;
  e_st.site = &gb_emlrtRSI;
  if (problemDef->modelType.size(1) > 2147483646) {
    f_st.site = &hb_emlrtRSI;
    coder::check_forloop_overflow_error(&f_st);
  }
  for (int32_T b_i{0}; b_i < ns; b_i++) {
    p = (p && (static_cast<uint8_T>(problemDef->modelType[b_i]) <= 127));
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &w_emlrtRTEI, "Coder:toolbox:unsupportedString",
        "Coder:toolbox:unsupportedString", 2, 12, 127);
  }
  switch_expression.set_size(&yg_emlrtRTEI, &b_st, 1,
                             problemDef->modelType.size(1));
  i = problemDef->modelType.size(1);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    switch_expression[b_i] =
        cv[static_cast<uint8_T>(problemDef->modelType[b_i]) & 127];
  }
  p = false;
  if (switch_expression.size(1) == 6) {
    ns = 0;
    do {
      exitg1 = 0;
      if (ns < 6) {
        if (switch_expression[ns] != b_cv[ns]) {
          exitg1 = 1;
        } else {
          ns++;
        }
      } else {
        p = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  if (p) {
    ns = 0;
  } else {
    p = false;
    if (switch_expression.size(1) == 13) {
      ns = 0;
      do {
        exitg1 = 0;
        if (ns < 13) {
          if (switch_expression[ns] != b_cv1[ns]) {
            exitg1 = 1;
          } else {
            ns++;
          }
        } else {
          p = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (p) {
      ns = 1;
    } else {
      p = false;
      if (switch_expression.size(1) == 9) {
        ns = 0;
        do {
          exitg1 = 0;
          if (ns < 9) {
            if (switch_expression[ns] != b_cv2[ns]) {
              exitg1 = 1;
            } else {
              ns++;
            }
          } else {
            p = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }
      if (p) {
        ns = 2;
      } else {
        ns = -1;
      }
    }
  }
  switch (ns) {
  case 0:
    //  Standard layers calculation
    st.site = &ab_emlrtRSI;
    c_standardTF_stanLay_reflectivi(
        &st, problemDef, problemDef_cells, controls, problem, reflectivity,
        Simulation, shifted_data, layerSlds, sldProfiles, allLayers);
    break;
  case 1:
    //  Custom layers with user supplied custom model file
    st.site = &bb_emlrtRSI;
    c_standardTF_custLay_reflectivi(
        &st, problemDef, problemDef_cells, controls, problem, reflectivity,
        Simulation, shifted_data, layerSlds, sldProfiles, allLayers);
    break;
  case 2:
    //  Custom SLD profile with user defined model file
    st.site = &cb_emlrtRSI;
    c_standardTF_custXY_reflectivit(
        &st, problemDef, problemDef_cells, controls, problem, reflectivity,
        Simulation, shifted_data, layerSlds, sldProfiles, allLayers);
    break;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (standardTF_reflectivityCalculation.cpp)
