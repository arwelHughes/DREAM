//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// resampleLayers.cpp
//
// Code generation for function 'resampleLayers'
//

// Include files
#include "resampleLayers.h"
#include "adaptive_new.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo le_emlrtRSI{
    20,               // lineNo
    "resampleLayers", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/resampleLayers.m" // pathName
};

static emlrtBCInfo jh_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    41,               // lineNo
    12,               // colNo
    "layers",         // aName
    "resampleLayers", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/resampleLayers.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo kh_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    32,               // lineNo
    18,               // colNo
    "newY",           // aName
    "resampleLayers", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/resampleLayers.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo lh_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    31,               // lineNo
    18,               // colNo
    "newY",           // aName
    "resampleLayers", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/resampleLayers.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo mh_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    18,               // colNo
    "newX",           // aName
    "resampleLayers", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/resampleLayers.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo nh_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    18,               // colNo
    "newX",           // aName
    "resampleLayers", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/resampleLayers.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo oh_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    11,               // lineNo
    12,               // colNo
    "x",              // aName
    "resampleLayers", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/resampleLayers.m", // pName
    0                                  // checkKind
};

static emlrtDCInfo nb_emlrtDCI{
    25,               // lineNo
    16,               // colNo
    "resampleLayers", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/resampleLayers.m", // pName
    4                                  // checkKind
};

static emlrtBCInfo uu_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    9,                // lineNo
    21,               // colNo
    "sldProfile",     // aName
    "resampleLayers", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/resampleLayers.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo vu_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    8,                // lineNo
    18,               // colNo
    "sldProfile",     // aName
    "resampleLayers", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/resampleLayers.m", // pName
    0                                  // checkKind
};

static emlrtRTEInfo cj_emlrtRTEI{
    25,               // lineNo
    1,                // colNo
    "resampleLayers", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/resampleLayers.m" // pName
};

// Function Definitions
void b_resampleLayers(const emlrtStack *sp,
                      const coder::array<real_T, 2U> &sldProfile,
                      const real_T resamPars[2],
                      coder::array<real_T, 2U> &newSLD)
{
  cell_17 expl_temp;
  emlrtStack st;
  real_T b_sldProfile[2];
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Function handle for adaptive resampling
  //  f = @(x) sldFunc(x);
  //
  if (sldProfile.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, sldProfile.size(1), &vu_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (sldProfile.size(1) < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, sldProfile.size(1), &uu_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (sldProfile.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, sldProfile.size(0), &oh_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  //  Keep points and minangle as constants for now
  //  will fix later
  b_sldProfile[0] = sldProfile[0];
  b_sldProfile[1] = sldProfile[sldProfile.size(0) - 1];
  st.site = &le_emlrtRSI;
  b_adaptive_new(&st, sldProfile, b_sldProfile,
                 resamPars[0] * 3.1415926535897931, resamPars[1], &expl_temp);
  if (expl_temp.f1.size(0) == 0) {
    n = -1;
  } else if (expl_temp.f1.size(0) > 1) {
    n = expl_temp.f1.size(0) - 1;
  } else {
    n = 0;
  }
  if (n < 0) {
    emlrtNonNegativeCheckR2012b(-1.0, &nb_emlrtDCI, (emlrtConstCTX)sp);
  }
  newSLD.set_size(&cj_emlrtRTEI, sp, n, 3);
  n *= 3;
  for (int32_T b_n{0}; b_n < n; b_n++) {
    newSLD[b_n] = 0.0;
  }
  //  Now build a layer model from these resampled points
  if (expl_temp.f1.size(0) == 0) {
    n = -2;
  } else if (expl_temp.f1.size(0) > 1) {
    n = expl_temp.f1.size(0) - 2;
  } else {
    n = -1;
  }
  for (int32_T b_n{0}; b_n <= n; b_n++) {
    real_T thisLayRho;
    if (b_n + 1 > expl_temp.f1.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, expl_temp.f1.size(0),
                                    &nh_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (b_n + 2 > expl_temp.f1.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_n + 2, 1, expl_temp.f1.size(0),
                                    &mh_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (b_n + 1 > expl_temp.f1.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, expl_temp.f1.size(0),
                                    &lh_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (b_n + 2 > expl_temp.f1.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_n + 2, 1, expl_temp.f1.size(0),
                                    &kh_emlrtBCI, (emlrtConstCTX)sp);
    }
    thisLayRho = expl_temp.f1[(b_n + expl_temp.f1.size(0)) + 1];
    if (thisLayRho > expl_temp.f1[b_n + expl_temp.f1.size(0)]) {
      thisLayRho =
          (thisLayRho - expl_temp.f1[b_n + expl_temp.f1.size(0)]) / 2.0 +
          expl_temp.f1[b_n + expl_temp.f1.size(0)];
    } else {
      thisLayRho +=
          (expl_temp.f1[b_n + expl_temp.f1.size(0)] - thisLayRho) / 2.0;
    }
    if (b_n + 1 > newSLD.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, newSLD.size(0), &jh_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    newSLD[b_n] = expl_temp.f1[b_n + 1] - expl_temp.f1[b_n];
    newSLD[b_n + newSLD.size(0)] = thisLayRho;
    newSLD[b_n + newSLD.size(0) * 2] = 2.2204460492503131E-16;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void resampleLayers(const emlrtStack *sp,
                    const coder::array<real_T, 2U> &sldProfile,
                    const real_T resamPars[2], coder::array<real_T, 2U> &newSLD)
{
  cell_17 expl_temp;
  emlrtStack st;
  real_T b_sldProfile[2];
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Function handle for adaptive resampling
  //  f = @(x) sldFunc(x);
  //
  if (sldProfile.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, sldProfile.size(0), &oh_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  //  Keep points and minangle as constants for now
  //  will fix later
  b_sldProfile[0] = sldProfile[0];
  b_sldProfile[1] = sldProfile[sldProfile.size(0) - 1];
  st.site = &le_emlrtRSI;
  adaptive_new(&st, sldProfile, b_sldProfile, resamPars[0] * 3.1415926535897931,
               resamPars[1], &expl_temp);
  if (expl_temp.f1.size(0) == 0) {
    n = -1;
  } else if (expl_temp.f1.size(0) > 1) {
    n = expl_temp.f1.size(0) - 1;
  } else {
    n = 0;
  }
  if (n < 0) {
    emlrtNonNegativeCheckR2012b(-1.0, &nb_emlrtDCI, (emlrtConstCTX)sp);
  }
  newSLD.set_size(&cj_emlrtRTEI, sp, n, 3);
  n *= 3;
  for (int32_T b_n{0}; b_n < n; b_n++) {
    newSLD[b_n] = 0.0;
  }
  //  Now build a layer model from these resampled points
  if (expl_temp.f1.size(0) == 0) {
    n = -2;
  } else if (expl_temp.f1.size(0) > 1) {
    n = expl_temp.f1.size(0) - 2;
  } else {
    n = -1;
  }
  for (int32_T b_n{0}; b_n <= n; b_n++) {
    real_T thisLayRho;
    if (b_n + 1 > expl_temp.f1.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, expl_temp.f1.size(0),
                                    &nh_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (b_n + 2 > expl_temp.f1.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_n + 2, 1, expl_temp.f1.size(0),
                                    &mh_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (b_n + 1 > expl_temp.f1.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, expl_temp.f1.size(0),
                                    &lh_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (b_n + 2 > expl_temp.f1.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_n + 2, 1, expl_temp.f1.size(0),
                                    &kh_emlrtBCI, (emlrtConstCTX)sp);
    }
    thisLayRho = expl_temp.f1[(b_n + expl_temp.f1.size(0)) + 1];
    if (thisLayRho > expl_temp.f1[b_n + expl_temp.f1.size(0)]) {
      thisLayRho =
          (thisLayRho - expl_temp.f1[b_n + expl_temp.f1.size(0)]) / 2.0 +
          expl_temp.f1[b_n + expl_temp.f1.size(0)];
    } else {
      thisLayRho +=
          (expl_temp.f1[b_n + expl_temp.f1.size(0)] - thisLayRho) / 2.0;
    }
    if (b_n + 1 > newSLD.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, newSLD.size(0), &jh_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    newSLD[b_n] = expl_temp.f1[b_n + 1] - expl_temp.f1[b_n];
    newSLD[b_n + newSLD.size(0)] = thisLayRho;
    newSLD[b_n + newSLD.size(0) * 2] = 2.2204460492503131E-16;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (resampleLayers.cpp)
