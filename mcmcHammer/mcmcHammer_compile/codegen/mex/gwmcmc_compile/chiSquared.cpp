//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// chiSquared.cpp
//
// Code generation for function 'chiSquared'
//

// Include files
#include "chiSquared.h"
#include "find.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "unsafeSxfun.h"
#include "coder_array.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo kh_emlrtRSI{
    17,           // lineNo
    "chiSquared", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "costFunctions/chiSquared/chiSquared.m" // pathName
};

static emlrtRSInfo lh_emlrtRSI{
    18,           // lineNo
    "chiSquared", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "costFunctions/chiSquared/chiSquared.m" // pathName
};

static emlrtRSInfo mh_emlrtRSI{
    22,           // lineNo
    "chiSquared", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "costFunctions/chiSquared/chiSquared.m" // pathName
};

static emlrtECInfo jb_emlrtECI{
    1,            // nDims
    17,           // lineNo
    15,           // colNo
    "chiSquared", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "costFunctions/chiSquared/chiSquared.m" // pName
};

static emlrtBCInfo dk_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    10,           // lineNo
    21,           // colNo
    "thisData",   // aName
    "chiSquared", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "costFunctions/chiSquared/chiSquared.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo ek_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    9,            // lineNo
    20,           // colNo
    "thisData",   // aName
    "chiSquared", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "costFunctions/chiSquared/chiSquared.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo fk_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    20,           // lineNo
    15,           // colNo
    "terms",      // aName
    "chiSquared", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "costFunctions/chiSquared/chiSquared.m", // pName
    0                                        // checkKind
};

static emlrtRTEInfo vl_emlrtRTEI{
    17,           // lineNo
    15,           // colNo
    "chiSquared", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "costFunctions/chiSquared/chiSquared.m" // pName
};

static emlrtRTEInfo wl_emlrtRTEI{
    18,           // lineNo
    14,           // colNo
    "chiSquared", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "costFunctions/chiSquared/chiSquared.m" // pName
};

static emlrtRSInfo gl_emlrtRSI{
    31,            // lineNo
    "unsafeSxfun", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unsafeSxfun.m" // pathName
};

// Function Declarations
static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 1U> &in1,
                             const coder::array<real_T, 2U> &in2,
                             const coder::array<real_T, 2U> &in3);

// Function Definitions
static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 1U> &in1,
                             const coder::array<real_T, 2U> &in2,
                             const coder::array<real_T, 2U> &in3)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    i = in2.size(0);
  } else {
    i = in3.size(0);
  }
  in1.set_size(&vl_emlrtRTEI, sp, i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] =
        in2[i * stride_0_0 + in2.size(0)] - in3[i * stride_1_0 + in3.size(0)];
  }
}

real_T chiSquared(const emlrtStack *sp,
                  const coder::array<real_T, 2U> &thisData,
                  const coder::array<real_T, 2U> &thisFit, real_T P)
{
  coder::array<real_T, 1U> terms;
  coder::array<int32_T, 1U> ii;
  coder::array<boolean_T, 1U> b_terms;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T N;
  real_T chi2;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Chi-squared function is used to evaluate the goodness of fit.
  //  It is a measure of the difference between the observed and expected.
  // allChis = zeros(1,numberOfContrasts);
  //      thisData = allData{i};
  //      thisFit = allFits{i};
  if (thisData.size(1) < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, thisData.size(1), &ek_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (thisData.size(1) < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, thisData.size(1), &dk_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (thisData.size(0) < 1) {
    N = 1.0;
  } else {
    N = thisData.size(0);
  }
  if (N <= P) {
    N = P + 1.0;
  }
  if ((thisData.size(0) != thisFit.size(0)) &&
      ((thisData.size(0) != 1) && (thisFit.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(thisData.size(0), thisFit.size(0), &jb_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  st.site = &kh_emlrtRSI;
  if (thisData.size(0) == thisFit.size(0)) {
    terms.set_size(&vl_emlrtRTEI, &st, thisData.size(0));
    loop_ub = thisData.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      terms[i] = thisData[i + thisData.size(0)] - thisFit[i + thisFit.size(0)];
    }
  } else {
    b_st.site = &kh_emlrtRSI;
    binary_expand_op(&b_st, terms, thisData, thisFit);
  }
  b_st.site = &uf_emlrtRSI;
  c_st.site = &vf_emlrtRSI;
  if ((terms.size(0) != 1) && (thisData.size(0) != 1) &&
      (terms.size(0) != thisData.size(0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &qb_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  st.site = &kh_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  if (terms.size(0) == thisData.size(0)) {
    loop_ub = terms.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      real_T varargin_1;
      varargin_1 = terms[i] / thisData[i + thisData.size(0) * 2];
      terms[i] = varargin_1 * varargin_1;
    }
  } else {
    c_st.site = &gl_emlrtRSI;
    binary_expand_op(&c_st, terms, thisData);
  }
  st.site = &lh_emlrtRSI;
  b_terms.set_size(&wl_emlrtRTEI, &st, terms.size(0));
  loop_ub = terms.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_terms[i] = (terms[i] == rtInf);
  }
  b_st.site = &xe_emlrtRSI;
  coder::eml_find(&b_st, b_terms, ii);
  if (ii.size(0) != 0) {
    loop_ub = ii.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      if ((ii[i] < 1) || (ii[i] > terms.size(0))) {
        emlrtDynamicBoundsCheckR2012b(ii[i], 1, terms.size(0), &fk_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    loop_ub = ii.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      terms[ii[i] - 1] = 0.0;
    }
  }
  st.site = &mh_emlrtRSI;
  chi2 = 1.0 / (N - P) * coder::sum(&st, terms);
  // allChis(i) = chi2;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return chi2;
}

// End of code generation (chiSquared.cpp)
