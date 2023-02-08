//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// callReflectivity.cpp
//
// Code generation for function 'callReflectivity'
//

// Include files
#include "callReflectivity.h"
#include "abeles_paraPoints.h"
#include "colon.h"
#include "data_resolution_polly.h"
#include "exp.h"
#include "gwmcmc_compile_data.h"
#include "resolution_polly.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <string.h>

// Variable Definitions
static emlrtRSInfo wg_emlrtRSI{
    21,                 // lineNo
    "callReflectivity", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pathName
};

static emlrtRSInfo xg_emlrtRSI{
    28,                 // lineNo
    "callReflectivity", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pathName
};

static emlrtRSInfo yg_emlrtRSI{
    79,                 // lineNo
    "callReflectivity", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pathName
};

static emlrtRSInfo ah_emlrtRSI{
    83,                 // lineNo
    "callReflectivity", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pathName
};

static emlrtRSInfo bh_emlrtRSI{
    85,                 // lineNo
    "callReflectivity", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pathName
};

static emlrtRSInfo ch_emlrtRSI{
    125,     // lineNo
    "colon", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/colon.m" // pathName
};

static emlrtRSInfo fh_emlrtRSI{
    28,              // lineNo
    "abeles_single", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "reflectivityCalculations/Abeles/abeles_single.m" // pathName
};

static emlrtRSInfo qh_emlrtRSI{
    61,                 // lineNo
    "callReflectivity", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pathName
};

static emlrtRSInfo rh_emlrtRSI{
    69,                 // lineNo
    "callReflectivity", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pathName
};

static emlrtRSInfo sh_emlrtRSI{
    72,                 // lineNo
    "callReflectivity", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pathName
};

static emlrtBCInfo vi_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    3,                  // lineNo
    21,                 // colNo
    "this_data",        // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo wi_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    16,                 // lineNo
    29,                 // colNo
    "this_data",        // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo xi_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    19,                 // lineNo
    19,                 // colNo
    "xdata",            // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo yi_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    20,                 // lineNo
    19,                 // colNo
    "xdata",            // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo aj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    20,                 // lineNo
    28,                 // colNo
    "xdata",            // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo bj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    21,                 // lineNo
    40,                 // colNo
    "xdata",            // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo cj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    44,                 // lineNo
    33,                 // colNo
    "this_data",        // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo dj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    45,                 // lineNo
    28,                 // colNo
    "thisDataResol",    // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtECInfo hb_emlrtECI{
    -1,                 // nDims
    37,                 // lineNo
    1,                  // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtECInfo ib_emlrtECI{
    -1,                 // nDims
    90,                 // lineNo
    1,                  // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtBCInfo ej_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    91,                 // lineNo
    27,                 // colNo
    "Simulation",       // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo fj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    91,                 // lineNo
    37,                 // colNo
    "Simulation",       // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo gj_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    27,              // lineNo
    11,              // colNo
    "x",             // aName
    "abeles_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "reflectivityCalculations/Abeles/abeles_single.m", // pName
    0                                                  // checkKind
};

static emlrtRTEInfo tb_emlrtRTEI{
    39,              // lineNo
    19,              // colNo
    "abeles_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "reflectivityCalculations/Abeles/abeles_single.m" // pName
};

static emlrtBCInfo hj_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    41,              // lineNo
    25,              // colNo
    "sld",           // aName
    "abeles_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "reflectivityCalculations/Abeles/abeles_single.m", // pName
    0                                                  // checkKind
};

static emlrtBCInfo ij_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    26,                 // lineNo
    19,                 // colNo
    "xdata",            // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo jj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    27,                 // lineNo
    19,                 // colNo
    "xdata",            // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo kj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    27,                 // lineNo
    30,                 // colNo
    "xdata",            // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo lj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    28,                 // lineNo
    26,                 // colNo
    "xdata",            // aName
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo mj_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    72,              // lineNo
    9,               // colNo
    "out",           // aName
    "abeles_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "reflectivityCalculations/Abeles/abeles_single.m", // pName
    0                                                  // checkKind
};

static emlrtRTEInfo el_emlrtRTEI{
    10,                 // lineNo
    5,                  // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo fl_emlrtRTEI{
    7,                  // lineNo
    5,                  // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo gl_emlrtRTEI{
    23,                 // lineNo
    5,                  // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo hl_emlrtRTEI{
    21,                 // lineNo
    5,                  // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo il_emlrtRTEI{
    30,                 // lineNo
    5,                  // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo jl_emlrtRTEI{
    28,                 // lineNo
    5,                  // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo kl_emlrtRTEI{
    33,                 // lineNo
    1,                  // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo ll_emlrtRTEI{
    36,                 // lineNo
    1,                  // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo ml_emlrtRTEI{
    42,                 // lineNo
    1,                  // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo nl_emlrtRTEI{
    49,                 // lineNo
    5,                  // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo ol_emlrtRTEI{
    79,                 // lineNo
    26,                 // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo pl_emlrtRTEI{
    85,                 // lineNo
    56,                 // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo ql_emlrtRTEI{
    83,                 // lineNo
    61,                 // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo rl_emlrtRTEI{
    91,                 // lineNo
    1,                  // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo lm_emlrtRTEI{
    72,                 // lineNo
    56,                 // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

static emlrtRTEInfo mm_emlrtRTEI{
    69,                 // lineNo
    61,                 // colNo
    "callReflectivity", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/callReflectivity.m" // pName
};

// Function Definitions
void b_callReflectivity(const emlrtStack *sp, real_T nbairs, real_T nbsubs,
                        const real_T simLimits[2], const real_T repeatLayers[2],
                        const coder::array<real_T, 2U> &this_data,
                        const coder::array<real_T, 2U> &layers, real_T ssubs,
                        real_T res, coder::array<real_T, 2U> &reflectivity,
                        coder::array<real_T, 2U> &Simulation)
{
  coder::array<real_T, 2U> firstSection;
  coder::array<real_T, 2U> lastSection;
  coder::array<real_T, 2U> slds;
  coder::array<real_T, 1U> b_simRef;
  coder::array<real_T, 1U> simRef;
  coder::array<real_T, 1U> simResolData;
  coder::array<real_T, 1U> simXdata;
  emlrtStack b_st;
  emlrtStack st;
  real_T b;
  real_T step;
  int32_T b_firstSection;
  int32_T i;
  int32_T lays;
  int32_T loop_ub;
  uint32_T splits_idx_1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (this_data.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, this_data.size(1), &vi_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (layers.size(0) == 0) {
    slds.set_size(&fl_emlrtRTEI, sp, 1, 3);
    slds[0] = 0.0;
    slds[1] = nbairs;
    slds[2] = 0.0;
    lays = 0;
  } else {
    slds.set_size(&el_emlrtRTEI, sp, layers.size(0), 3);
    loop_ub = layers.size(0);
    for (i = 0; i < 3; i++) {
      for (lays = 0; lays < loop_ub; lays++) {
        slds[lays + slds.size(0) * i] = layers[lays + layers.size(0) * i];
      }
    }
    lays = layers.size(0);
  }
  if (this_data.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, this_data.size(1), &wi_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (this_data.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, this_data.size(0), &xi_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (simLimits[0] < this_data[0]) {
    if (this_data.size(0) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, this_data.size(0), &yi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (this_data.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, this_data.size(0), &aj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    step = this_data[1] - this_data[0];
    if (this_data.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, this_data.size(0), &bj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &wg_emlrtRSI;
    b = this_data[0] - step;
    if (muDoubleScalarIsNaN(step) || muDoubleScalarIsNaN(b)) {
      firstSection.set_size(&hl_emlrtRTEI, &st, 1, 1);
      firstSection[0] = rtNaN;
    } else if ((step == 0.0) || ((simLimits[0] < b) && (step < 0.0)) ||
               ((b < simLimits[0]) && (step > 0.0))) {
      firstSection.set_size(&hl_emlrtRTEI, &st, 1, 0);
    } else if ((muDoubleScalarIsInf(simLimits[0]) || muDoubleScalarIsInf(b)) &&
               (muDoubleScalarIsInf(step) || (simLimits[0] == b))) {
      firstSection.set_size(&hl_emlrtRTEI, &st, 1, 1);
      firstSection[0] = rtNaN;
    } else if (muDoubleScalarIsInf(step)) {
      firstSection.set_size(&hl_emlrtRTEI, &st, 1, 1);
      firstSection[0] = simLimits[0];
    } else if ((muDoubleScalarFloor(simLimits[0]) == simLimits[0]) &&
               (muDoubleScalarFloor(step) == step)) {
      loop_ub = static_cast<int32_T>((b - simLimits[0]) / step);
      firstSection.set_size(&hl_emlrtRTEI, &st, 1, loop_ub + 1);
      for (i = 0; i <= loop_ub; i++) {
        firstSection[i] = simLimits[0] + step * static_cast<real_T>(i);
      }
    } else {
      b_st.site = &ch_emlrtRSI;
      coder::eml_float_colon(&b_st, simLimits[0], step, b, firstSection);
    }
  } else {
    firstSection.set_size(&gl_emlrtRTEI, sp, 1, 0);
  }
  if (this_data.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(this_data.size(0), 1, this_data.size(0),
                                  &ij_emlrtBCI, (emlrtConstCTX)sp);
  }
  if (simLimits[1] > this_data[this_data.size(0) - 1]) {
    if (this_data.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(this_data.size(0), 1, this_data.size(0),
                                    &jj_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((this_data.size(0) - 1 < 1) ||
        (this_data.size(0) - 1 > this_data.size(0))) {
      emlrtDynamicBoundsCheckR2012b(this_data.size(0) - 1, 1, this_data.size(0),
                                    &kj_emlrtBCI, (emlrtConstCTX)sp);
    }
    step = this_data[this_data.size(0) - 1] - this_data[this_data.size(0) - 2];
    st.site = &xg_emlrtRSI;
    if (this_data.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(this_data.size(0), 1, this_data.size(0),
                                    &lj_emlrtBCI, &st);
    }
    b = this_data[this_data.size(0) - 1] + step;
    if (muDoubleScalarIsNaN(b) || muDoubleScalarIsNaN(step)) {
      lastSection.set_size(&jl_emlrtRTEI, &st, 1, 1);
      lastSection[0] = rtNaN;
    } else if ((step == 0.0) || ((b < simLimits[1]) && (step < 0.0)) ||
               ((simLimits[1] < b) && (step > 0.0))) {
      lastSection.set_size(&jl_emlrtRTEI, &st, 1, 0);
    } else if ((muDoubleScalarIsInf(b) || muDoubleScalarIsInf(simLimits[1])) &&
               (muDoubleScalarIsInf(step) || (b == simLimits[1]))) {
      lastSection.set_size(&jl_emlrtRTEI, &st, 1, 1);
      lastSection[0] = rtNaN;
    } else if (muDoubleScalarIsInf(step)) {
      lastSection.set_size(&jl_emlrtRTEI, &st, 1, 1);
      lastSection[0] = b;
    } else if ((muDoubleScalarFloor(b) == b) &&
               (muDoubleScalarFloor(step) == step)) {
      loop_ub = static_cast<int32_T>((simLimits[1] - b) / step);
      lastSection.set_size(&jl_emlrtRTEI, &st, 1, loop_ub + 1);
      for (i = 0; i <= loop_ub; i++) {
        lastSection[i] = b + step * static_cast<real_T>(i);
      }
    } else {
      b_st.site = &ch_emlrtRSI;
      coder::eml_float_colon(&b_st, b, step, simLimits[1], lastSection);
    }
  } else {
    lastSection.set_size(&il_emlrtRTEI, sp, 1, 0);
  }
  b_firstSection = firstSection.size(1);
  simXdata.set_size(&kl_emlrtRTEI, sp,
                    (this_data.size(0) + firstSection.size(1)) +
                        lastSection.size(1));
  loop_ub = firstSection.size(1);
  for (i = 0; i < loop_ub; i++) {
    simXdata[i] = firstSection[i];
  }
  loop_ub = this_data.size(0);
  for (i = 0; i < loop_ub; i++) {
    simXdata[i + b_firstSection] = this_data[i];
  }
  loop_ub = lastSection.size(1);
  for (i = 0; i < loop_ub; i++) {
    simXdata[(i + b_firstSection) + this_data.size(0)] = lastSection[i];
  }
  splits_idx_1 = static_cast<uint32_T>(firstSection.size(1)) +
                 static_cast<uint32_T>(this_data.size(0));
  Simulation.set_size(&ll_emlrtRTEI, sp, simXdata.size(0), 2);
  loop_ub = simXdata.size(0) << 1;
  for (i = 0; i < loop_ub; i++) {
    Simulation[i] = 0.0;
  }
  emlrtSubAssignSizeCheckR2012b(simXdata.size(), 1, simXdata.size(), 1,
                                &hb_emlrtECI, (emlrtCTX)sp);
  loop_ub = simXdata.size(0);
  for (i = 0; i < loop_ub; i++) {
    Simulation[i] = simXdata[i];
  }
  //  If we are using data resolutions, then we also need to adjust the length
  //  of the reolution column. We do thit by just extending with the rosolution
  //  values at the ends of the curve.
  simResolData.set_size(&ml_emlrtRTEI, sp, 1);
  simResolData[0] = 0.0;
  if (res == -1.0) {
    if (this_data.size(1) < 4) {
      emlrtDynamicBoundsCheckR2012b(4, 1, this_data.size(1), &cj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (this_data.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, this_data.size(0), &dj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_firstSection = firstSection.size(1);
    simResolData.set_size(&nl_emlrtRTEI, sp,
                          (this_data.size(0) + firstSection.size(1)) +
                              lastSection.size(1));
    loop_ub = firstSection.size(1);
    for (i = 0; i < loop_ub; i++) {
      simResolData[i] = this_data[this_data.size(0) * 3];
    }
    loop_ub = this_data.size(0);
    for (i = 0; i < loop_ub; i++) {
      simResolData[i + b_firstSection] = this_data[i + this_data.size(0) * 3];
    }
    loop_ub = lastSection.size(1);
    for (i = 0; i < loop_ub; i++) {
      simResolData[(i + b_firstSection) + this_data.size(0)] =
          this_data[(this_data.size(0) + this_data.size(0) * 3) - 1];
    }
  }
  //  Parallelise over points
  //  Calculate reflectivity....
  st.site = &qh_emlrtRSI;
  abeles_paraPoints(&st, simXdata, slds, nbairs, nbsubs, repeatLayers[1], ssubs,
                    static_cast<real_T>(lays),
                    static_cast<real_T>(simXdata.size(0)), simRef);
  // (x,sld,nbair,nbsub,nrepeats,ssub,layers,points)
  //  Apply resolution
  //  Note: paraPoints gives an error during valifation, so use
  //  single cored resolution as a workaround for now.
  if (res == -1.0) {
    // simRef =
    // data_resolution_polly_paraPoints(simXdata,simRef,simResolData,length(simXdata));
    b_simRef.set_size(&mm_emlrtRTEI, sp, simRef.size(0));
    loop_ub = simRef.size(0) - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_simRef[i] = simRef[i];
    }
    st.site = &rh_emlrtRSI;
    data_resolution_polly(&st, simXdata, b_simRef, simResolData,
                          static_cast<real_T>(simXdata.size(0)), simRef);
  } else {
    // simRef =
    // resolution_polly_paraPoints(simXdata,simRef,res,length(simXdata));
    b_simRef.set_size(&lm_emlrtRTEI, sp, simRef.size(0));
    loop_ub = simRef.size(0) - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_simRef[i] = simRef[i];
    }
    st.site = &sh_emlrtRSI;
    resolution_polly(&st, simXdata, b_simRef, res,
                     static_cast<real_T>(simXdata.size(0)), simRef);
  }
  emlrtSubAssignSizeCheckR2012b(Simulation.size(), 1, simRef.size(), 1,
                                &ib_emlrtECI, (emlrtCTX)sp);
  loop_ub = simRef.size(0);
  for (i = 0; i < loop_ub; i++) {
    Simulation[i + Simulation.size(0)] = simRef[i];
  }
  if (static_cast<uint32_T>(firstSection.size(1)) + 1U > splits_idx_1) {
    i = 0;
    lays = 0;
  } else {
    if ((static_cast<int32_T>(static_cast<uint32_T>(firstSection.size(1)) +
                              1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(firstSection.size(1)) +
                              1U) > Simulation.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(firstSection.size(1)) +
                               1U),
          1, Simulation.size(0), &ej_emlrtBCI, (emlrtConstCTX)sp);
    }
    i = firstSection.size(1);
    if ((static_cast<int32_T>(splits_idx_1) < 1) ||
        (static_cast<int32_T>(splits_idx_1) > Simulation.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(splits_idx_1), 1,
                                    Simulation.size(0), &fj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    lays = static_cast<int32_T>(splits_idx_1);
  }
  loop_ub = lays - i;
  reflectivity.set_size(&rl_emlrtRTEI, sp, loop_ub, 2);
  for (lays = 0; lays < 2; lays++) {
    for (b_firstSection = 0; b_firstSection < loop_ub; b_firstSection++) {
      reflectivity[b_firstSection + reflectivity.size(0) * lays] =
          Simulation[(i + b_firstSection) + Simulation.size(0) * lays];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void callReflectivity(const emlrtStack *sp, real_T nbairs, real_T nbsubs,
                      const real_T simLimits[2], const real_T repeatLayers[2],
                      const coder::array<real_T, 2U> &this_data,
                      const coder::array<real_T, 2U> &layers, real_T ssubs,
                      real_T res, coder::array<real_T, 2U> &reflectivity,
                      coder::array<real_T, 2U> &Simulation)
{
  coder::array<real_T, 2U> firstSection;
  coder::array<real_T, 2U> lastSection;
  coder::array<real_T, 2U> slds;
  coder::array<real_T, 1U> b_simRef;
  coder::array<real_T, 1U> simRef;
  coder::array<real_T, 1U> simResolData;
  coder::array<real_T, 1U> simXdata;
  emlrtStack b_st;
  emlrtStack st;
  creal_T MI[4];
  creal_T N[4];
  creal_T b_MI[4];
  creal_T N_tmp;
  creal_T pair;
  creal_T pimag;
  creal_T psub;
  creal_T rij;
  real_T ar_tmp;
  real_T nrepeats;
  real_T snair;
  real_T snlay;
  real_T snsub;
  real_T step;
  int32_T b_firstSection;
  int32_T b_layers;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  uint32_T splits_idx_1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (this_data.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, this_data.size(1), &vi_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (layers.size(0) == 0) {
    slds.set_size(&fl_emlrtRTEI, sp, 1, 3);
    slds[0] = 0.0;
    slds[1] = nbairs;
    slds[2] = 0.0;
    b_layers = -1;
  } else {
    slds.set_size(&el_emlrtRTEI, sp, layers.size(0), 3);
    loop_ub = layers.size(0);
    for (i = 0; i < 3; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        slds[i1 + slds.size(0) * i] = layers[i1 + layers.size(0) * i];
      }
    }
    b_layers = layers.size(0) - 1;
  }
  if (this_data.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, this_data.size(1), &wi_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (this_data.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, this_data.size(0), &xi_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (simLimits[0] < this_data[0]) {
    if (this_data.size(0) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, this_data.size(0), &yi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (this_data.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, this_data.size(0), &aj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    step = this_data[1] - this_data[0];
    if (this_data.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, this_data.size(0), &bj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &wg_emlrtRSI;
    snlay = this_data[0] - step;
    if (muDoubleScalarIsNaN(step) || muDoubleScalarIsNaN(snlay)) {
      firstSection.set_size(&hl_emlrtRTEI, &st, 1, 1);
      firstSection[0] = rtNaN;
    } else if ((step == 0.0) || ((simLimits[0] < snlay) && (step < 0.0)) ||
               ((snlay < simLimits[0]) && (step > 0.0))) {
      firstSection.set_size(&hl_emlrtRTEI, &st, 1, 0);
    } else if ((muDoubleScalarIsInf(simLimits[0]) ||
                muDoubleScalarIsInf(snlay)) &&
               (muDoubleScalarIsInf(step) || (simLimits[0] == snlay))) {
      firstSection.set_size(&hl_emlrtRTEI, &st, 1, 1);
      firstSection[0] = rtNaN;
    } else if (muDoubleScalarIsInf(step)) {
      firstSection.set_size(&hl_emlrtRTEI, &st, 1, 1);
      firstSection[0] = simLimits[0];
    } else if ((muDoubleScalarFloor(simLimits[0]) == simLimits[0]) &&
               (muDoubleScalarFloor(step) == step)) {
      loop_ub = static_cast<int32_T>((snlay - simLimits[0]) / step);
      firstSection.set_size(&hl_emlrtRTEI, &st, 1, loop_ub + 1);
      for (i = 0; i <= loop_ub; i++) {
        firstSection[i] = simLimits[0] + step * static_cast<real_T>(i);
      }
    } else {
      b_st.site = &ch_emlrtRSI;
      coder::eml_float_colon(&b_st, simLimits[0], step, snlay, firstSection);
    }
  } else {
    firstSection.set_size(&gl_emlrtRTEI, sp, 1, 0);
  }
  if (this_data.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(this_data.size(0), 1, this_data.size(0),
                                  &ij_emlrtBCI, (emlrtConstCTX)sp);
  }
  if (simLimits[1] > this_data[this_data.size(0) - 1]) {
    if (this_data.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(this_data.size(0), 1, this_data.size(0),
                                    &jj_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((this_data.size(0) - 1 < 1) ||
        (this_data.size(0) - 1 > this_data.size(0))) {
      emlrtDynamicBoundsCheckR2012b(this_data.size(0) - 1, 1, this_data.size(0),
                                    &kj_emlrtBCI, (emlrtConstCTX)sp);
    }
    step = this_data[this_data.size(0) - 1] - this_data[this_data.size(0) - 2];
    st.site = &xg_emlrtRSI;
    if (this_data.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(this_data.size(0), 1, this_data.size(0),
                                    &lj_emlrtBCI, &st);
    }
    snlay = this_data[this_data.size(0) - 1] + step;
    if (muDoubleScalarIsNaN(snlay) || muDoubleScalarIsNaN(step)) {
      lastSection.set_size(&jl_emlrtRTEI, &st, 1, 1);
      lastSection[0] = rtNaN;
    } else if ((step == 0.0) || ((snlay < simLimits[1]) && (step < 0.0)) ||
               ((simLimits[1] < snlay) && (step > 0.0))) {
      lastSection.set_size(&jl_emlrtRTEI, &st, 1, 0);
    } else if ((muDoubleScalarIsInf(snlay) ||
                muDoubleScalarIsInf(simLimits[1])) &&
               (muDoubleScalarIsInf(step) || (snlay == simLimits[1]))) {
      lastSection.set_size(&jl_emlrtRTEI, &st, 1, 1);
      lastSection[0] = rtNaN;
    } else if (muDoubleScalarIsInf(step)) {
      lastSection.set_size(&jl_emlrtRTEI, &st, 1, 1);
      lastSection[0] = snlay;
    } else if ((muDoubleScalarFloor(snlay) == snlay) &&
               (muDoubleScalarFloor(step) == step)) {
      loop_ub = static_cast<int32_T>((simLimits[1] - snlay) / step);
      lastSection.set_size(&jl_emlrtRTEI, &st, 1, loop_ub + 1);
      for (i = 0; i <= loop_ub; i++) {
        lastSection[i] = snlay + step * static_cast<real_T>(i);
      }
    } else {
      b_st.site = &ch_emlrtRSI;
      coder::eml_float_colon(&b_st, snlay, step, simLimits[1], lastSection);
    }
  } else {
    lastSection.set_size(&il_emlrtRTEI, sp, 1, 0);
  }
  b_firstSection = firstSection.size(1);
  simXdata.set_size(&kl_emlrtRTEI, sp,
                    (this_data.size(0) + firstSection.size(1)) +
                        lastSection.size(1));
  loop_ub = firstSection.size(1);
  for (i = 0; i < loop_ub; i++) {
    simXdata[i] = firstSection[i];
  }
  loop_ub = this_data.size(0);
  for (i = 0; i < loop_ub; i++) {
    simXdata[i + b_firstSection] = this_data[i];
  }
  loop_ub = lastSection.size(1);
  for (i = 0; i < loop_ub; i++) {
    simXdata[(i + b_firstSection) + this_data.size(0)] = lastSection[i];
  }
  splits_idx_1 = static_cast<uint32_T>(firstSection.size(1)) +
                 static_cast<uint32_T>(this_data.size(0));
  Simulation.set_size(&ll_emlrtRTEI, sp, simXdata.size(0), 2);
  loop_ub = simXdata.size(0) << 1;
  for (i = 0; i < loop_ub; i++) {
    Simulation[i] = 0.0;
  }
  emlrtSubAssignSizeCheckR2012b(simXdata.size(), 1, simXdata.size(), 1,
                                &hb_emlrtECI, (emlrtCTX)sp);
  loop_ub = simXdata.size(0);
  for (i = 0; i < loop_ub; i++) {
    Simulation[i] = simXdata[i];
  }
  //  If we are using data resolutions, then we also need to adjust the length
  //  of the reolution column. We do thit by just extending with the rosolution
  //  values at the ends of the curve.
  simResolData.set_size(&ml_emlrtRTEI, sp, 1);
  simResolData[0] = 0.0;
  if (res == -1.0) {
    if (this_data.size(1) < 4) {
      emlrtDynamicBoundsCheckR2012b(4, 1, this_data.size(1), &cj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (this_data.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, this_data.size(0), &dj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_firstSection = firstSection.size(1);
    simResolData.set_size(&nl_emlrtRTEI, sp,
                          (this_data.size(0) + firstSection.size(1)) +
                              lastSection.size(1));
    loop_ub = firstSection.size(1);
    for (i = 0; i < loop_ub; i++) {
      simResolData[i] = this_data[this_data.size(0) * 3];
    }
    loop_ub = this_data.size(0);
    for (i = 0; i < loop_ub; i++) {
      simResolData[i + b_firstSection] = this_data[i + this_data.size(0) * 3];
    }
    loop_ub = lastSection.size(1);
    for (i = 0; i < loop_ub; i++) {
      simResolData[(i + b_firstSection) + this_data.size(0)] =
          this_data[(this_data.size(0) + this_data.size(0) * 3) - 1];
    }
  }
  nrepeats = repeatLayers[1];
  //  Single cored over points
  //  Calculate reflectivity.....
  st.site = &yg_emlrtRSI;
  //  nbair = nbairs(thisCont);
  //  nbsub = nbsubs(thisCont);
  //  ssub = ssubs(thisCont);
  //  nrepeats = nrepeatss(thisCont);
  //  resol = resols(thisCont);
  simRef.set_size(&ol_emlrtRTEI, &st, simXdata.size(0));
  // pi = 3.141592653589;
  snair = 1.0 - nbairs * 0.377451863036739;
  snsub = 1.0 - nbsubs * 0.377451863036739;
  i = simXdata.size(0);
  if (i - 1 >= 0) {
    i2 = static_cast<int32_T>(nrepeats);
    ar_tmp = ssubs * ssubs;
  }
  for (b_firstSection = 0; b_firstSection < i; b_firstSection++) {
    real_T ar;
    real_T bim;
    real_T blast_im;
    real_T blast_re;
    real_T brm;
    real_T d;
    real_T d1;
    real_T pair_re;
    real_T psub_tmp_tmp;
    real_T re;
    real_T rough;
    if (b_firstSection + 1 > simXdata.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_firstSection + 1, 1, simXdata.size(0),
                                    &gj_emlrtBCI, &st);
    }
    b_st.site = &fh_emlrtRSI;
    step = simXdata[b_firstSection] * 1.54 / 12.566370614359172;
    if ((step < -1.0) || (step > 1.0)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &ub_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "asin");
    }
    step = muDoubleScalarAsin(step);
    snlay = muDoubleScalarCos(step);
    psub_tmp_tmp = snair * snair * (snlay * snlay);
    snlay = snsub * snsub - psub_tmp_tmp;
    psub.re = snlay;
    psub.im = snlay * 0.0;
    coder::internal::scalar::b_sqrt(&psub);
    snlay = snair * muDoubleScalarSin(step);
    pair.re = snlay;
    pair.im = snlay * 0.0;
    blast_re = 0.0;
    blast_im = 0.0;
    MI[0].re = 1.0;
    MI[0].im = 0.0;
    MI[3].re = 1.0;
    MI[3].im = 0.0;
    MI[2].re = 0.0;
    MI[2].im = 0.0;
    MI[1].re = 0.0;
    MI[1].im = 0.0;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, nrepeats, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(nrepeats), &tb_emlrtRTEI,
                                  &st);
    for (loop_ub = 0; loop_ub < i2; loop_ub++) {
      for (int32_T nl{0}; nl <= b_layers; nl++) {
        if (nl + 1 > slds.size(0)) {
          emlrtDynamicBoundsCheckR2012b(nl + 1, 1, slds.size(0), &hj_emlrtBCI,
                                        &st);
        }
        rough = slds[nl + slds.size(0) * 2];
        snlay = 1.0 - slds[nl + slds.size(0)] * 0.377451863036739;
        step = snlay * snlay - psub_tmp_tmp;
        pimag.re = step;
        pimag.im = step * 0.0;
        coder::internal::scalar::b_sqrt(&pimag);
        re = -78.956835208714864 * pair.re;
        snlay = -78.956835208714864 * pair.im;
        step = rough * rough;
        ar = (re * pimag.re - snlay * pimag.im) * step;
        rough = (re * pimag.im + snlay * pimag.re) * step;
        if (rough == 0.0) {
          rij.re = ar / 2.3716;
          rij.im = 0.0;
        } else if (ar == 0.0) {
          rij.re = 0.0;
          rij.im = rough / 2.3716;
        } else {
          rij.re = ar / 2.3716;
          rij.im = rough / 2.3716;
        }
        coder::b_exp(&rij);
        ar = pair.re - pimag.re;
        rough = pair.im - pimag.im;
        step = pair.re + pimag.re;
        snlay = pair.im + pimag.im;
        if (snlay == 0.0) {
          if (rough == 0.0) {
            pair_re = ar / step;
            step = 0.0;
          } else if (ar == 0.0) {
            pair_re = 0.0;
            step = rough / step;
          } else {
            pair_re = ar / step;
            step = rough / step;
          }
        } else if (step == 0.0) {
          if (ar == 0.0) {
            pair_re = rough / snlay;
            step = 0.0;
          } else if (rough == 0.0) {
            pair_re = 0.0;
            step = -(ar / snlay);
          } else {
            pair_re = rough / snlay;
            step = -(ar / snlay);
          }
        } else {
          brm = muDoubleScalarAbs(step);
          bim = muDoubleScalarAbs(snlay);
          if (brm > bim) {
            bim = snlay / step;
            step += bim * snlay;
            pair_re = (ar + bim * rough) / step;
            step = (rough - bim * ar) / step;
          } else if (bim == brm) {
            if (step > 0.0) {
              bim = 0.5;
            } else {
              bim = -0.5;
            }
            if (snlay > 0.0) {
              step = 0.5;
            } else {
              step = -0.5;
            }
            pair_re = (ar * bim + rough * step) / brm;
            step = (rough * bim - ar * step) / brm;
          } else {
            bim = step / snlay;
            step = snlay + bim * step;
            pair_re = (bim * ar + rough) / step;
            step = (bim * rough - ar) / step;
          }
        }
        re = pair_re * rij.re - step * rij.im;
        snlay = pair_re * rij.im + step * rij.re;
        N_tmp.re = blast_re * 0.0 - blast_im;
        N_tmp.im = blast_re + blast_im * 0.0;
        coder::b_exp(&N_tmp);
        pair.re = -blast_re * 0.0 - (-blast_im);
        pair.im = -blast_re + -blast_im * 0.0;
        coder::b_exp(&pair);
        ar = re * pair.re - snlay * pair.im;
        d = re * pair.im + snlay * pair.re;
        N[3] = pair;
        d1 = re * N_tmp.re - snlay * N_tmp.im;
        step = re * N_tmp.im + snlay * N_tmp.re;
        pair = pimag;
        blast_re = 4.0799904592075231 * slds[nl] * pimag.re;
        blast_im = 4.0799904592075231 * slds[nl] * pimag.im;
        snlay = N[3].re;
        rough = N[3].im;
        for (i1 = 0; i1 < 2; i1++) {
          re = MI[i1].re;
          bim = MI[i1].im;
          pair_re = MI[i1 + 2].re;
          brm = MI[i1 + 2].im;
          b_MI[i1].re =
              (re * N_tmp.re - bim * N_tmp.im) + (pair_re * ar - brm * d);
          b_MI[i1].im =
              (re * N_tmp.im + bim * N_tmp.re) + (pair_re * d + brm * ar);
          b_MI[i1 + 2].re =
              (re * d1 - bim * step) + (pair_re * snlay - brm * rough);
          b_MI[i1 + 2].im =
              (re * step + bim * d1) + (pair_re * rough + brm * snlay);
        }
        std::copy(&b_MI[0], &b_MI[4], &MI[0]);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    re = -78.956835208714864 * pair.re;
    snlay = -78.956835208714864 * pair.im;
    ar = (re * psub.re - snlay * psub.im) * ar_tmp;
    rough = (re * psub.im + snlay * psub.re) * ar_tmp;
    if (rough == 0.0) {
      rij.re = ar / 2.3716;
      rij.im = 0.0;
    } else if (ar == 0.0) {
      rij.re = 0.0;
      rij.im = rough / 2.3716;
    } else {
      rij.re = ar / 2.3716;
      rij.im = rough / 2.3716;
    }
    coder::b_exp(&rij);
    ar = pair.re - psub.re;
    rough = pair.im - psub.im;
    step = pair.re + psub.re;
    snlay = pair.im + psub.im;
    if (snlay == 0.0) {
      if (rough == 0.0) {
        pair_re = ar / step;
        step = 0.0;
      } else if (ar == 0.0) {
        pair_re = 0.0;
        step = rough / step;
      } else {
        pair_re = ar / step;
        step = rough / step;
      }
    } else if (step == 0.0) {
      if (ar == 0.0) {
        pair_re = rough / snlay;
        step = 0.0;
      } else if (rough == 0.0) {
        pair_re = 0.0;
        step = -(ar / snlay);
      } else {
        pair_re = rough / snlay;
        step = -(ar / snlay);
      }
    } else {
      brm = muDoubleScalarAbs(step);
      bim = muDoubleScalarAbs(snlay);
      if (brm > bim) {
        bim = snlay / step;
        step += bim * snlay;
        pair_re = (ar + bim * rough) / step;
        step = (rough - bim * ar) / step;
      } else if (bim == brm) {
        if (step > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }
        if (snlay > 0.0) {
          step = 0.5;
        } else {
          step = -0.5;
        }
        pair_re = (ar * bim + rough * step) / brm;
        step = (rough * bim - ar * step) / brm;
      } else {
        bim = step / snlay;
        step = snlay + bim * step;
        pair_re = (bim * ar + rough) / step;
        step = (bim * rough - ar) / step;
      }
    }
    re = pair_re * rij.re - step * rij.im;
    snlay = pair_re * rij.im + step * rij.re;
    N_tmp.re = blast_re * 0.0 - blast_im;
    N_tmp.im = blast_re + blast_im * 0.0;
    coder::b_exp(&N_tmp);
    pair.re = -blast_re * 0.0 - (-blast_im);
    pair.im = -blast_re + -blast_im * 0.0;
    coder::b_exp(&pair);
    ar = re * pair.re - snlay * pair.im;
    d = re * pair.im + snlay * pair.re;
    d1 = re * N_tmp.re - snlay * N_tmp.im;
    step = re * N_tmp.im + snlay * N_tmp.re;
    for (i1 = 0; i1 < 2; i1++) {
      re = MI[i1].re;
      bim = MI[i1].im;
      pair_re = MI[i1 + 2].re;
      brm = MI[i1 + 2].im;
      b_MI[i1].re = (re * N_tmp.re - bim * N_tmp.im) + (pair_re * ar - brm * d);
      b_MI[i1].im = (re * N_tmp.im + bim * N_tmp.re) + (pair_re * d + brm * ar);
      b_MI[i1 + 2].re =
          (re * d1 - bim * step) + (pair_re * pair.re - brm * pair.im);
      b_MI[i1 + 2].im =
          (re * step + bim * d1) + (pair_re * pair.im + brm * pair.re);
    }
    rough = b_MI[1].re * b_MI[1].re - b_MI[1].im * -b_MI[1].im;
    re = b_MI[1].re * -b_MI[1].im + b_MI[1].im * b_MI[1].re;
    step = b_MI[0].re * b_MI[0].re - b_MI[0].im * -b_MI[0].im;
    snlay = b_MI[0].re * -b_MI[0].im + b_MI[0].im * b_MI[0].re;
    if (snlay == 0.0) {
      if (re == 0.0) {
        pair.re = rough / step;
        pair.im = 0.0;
      } else if (rough == 0.0) {
        pair.re = 0.0;
        pair.im = re / step;
      } else {
        pair.re = rough / step;
        pair.im = re / step;
      }
    } else if (step == 0.0) {
      if (rough == 0.0) {
        pair.re = re / snlay;
        pair.im = 0.0;
      } else if (re == 0.0) {
        pair.re = 0.0;
        pair.im = -(rough / snlay);
      } else {
        pair.re = re / snlay;
        pair.im = -(rough / snlay);
      }
    } else {
      brm = muDoubleScalarAbs(step);
      bim = muDoubleScalarAbs(snlay);
      if (brm > bim) {
        bim = snlay / step;
        step += bim * snlay;
        pair.re = (rough + bim * re) / step;
        pair.im = (re - bim * rough) / step;
      } else if (bim == brm) {
        if (step > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }
        if (snlay > 0.0) {
          step = 0.5;
        } else {
          step = -0.5;
        }
        pair.re = (rough * bim + re * step) / brm;
        pair.im = (re * bim - rough * step) / brm;
      } else {
        bim = step / snlay;
        step = snlay + bim * step;
        pair.re = (bim * rough + re) / step;
        pair.im = (bim * re - rough) / step;
      }
    }
    if (b_firstSection + 1 > simRef.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_firstSection + 1, 1, simRef.size(0),
                                    &mj_emlrtBCI, &st);
    }
    simRef[b_firstSection] = muDoubleScalarHypot(pair.re, pair.im);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  //  Apply resolution correction...
  if (res == -1.0) {
    b_simRef.set_size(&ql_emlrtRTEI, sp, simRef.size(0));
    loop_ub = simRef.size(0) - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_simRef[i] = simRef[i];
    }
    st.site = &ah_emlrtRSI;
    data_resolution_polly(&st, simXdata, b_simRef, simResolData,
                          static_cast<real_T>(simXdata.size(0)), simRef);
  } else {
    b_simRef.set_size(&pl_emlrtRTEI, sp, simRef.size(0));
    loop_ub = simRef.size(0) - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_simRef[i] = simRef[i];
    }
    st.site = &bh_emlrtRSI;
    resolution_polly(&st, simXdata, b_simRef, res,
                     static_cast<real_T>(simXdata.size(0)), simRef);
  }
  emlrtSubAssignSizeCheckR2012b(Simulation.size(), 1, simRef.size(), 1,
                                &ib_emlrtECI, (emlrtCTX)sp);
  loop_ub = simRef.size(0);
  for (i = 0; i < loop_ub; i++) {
    Simulation[i + Simulation.size(0)] = simRef[i];
  }
  if (static_cast<uint32_T>(firstSection.size(1)) + 1U > splits_idx_1) {
    i = 0;
    i1 = 0;
  } else {
    if ((static_cast<int32_T>(static_cast<uint32_T>(firstSection.size(1)) +
                              1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(firstSection.size(1)) +
                              1U) > Simulation.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(firstSection.size(1)) +
                               1U),
          1, Simulation.size(0), &ej_emlrtBCI, (emlrtConstCTX)sp);
    }
    i = firstSection.size(1);
    if ((static_cast<int32_T>(splits_idx_1) < 1) ||
        (static_cast<int32_T>(splits_idx_1) > Simulation.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(splits_idx_1), 1,
                                    Simulation.size(0), &fj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = static_cast<int32_T>(splits_idx_1);
  }
  loop_ub = i1 - i;
  reflectivity.set_size(&rl_emlrtRTEI, sp, loop_ub, 2);
  for (i1 = 0; i1 < 2; i1++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      reflectivity[i2 + reflectivity.size(0) * i1] =
          Simulation[(i + i2) + Simulation.size(0) * i1];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (callReflectivity.cpp)
