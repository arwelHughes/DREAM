//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// all.cpp
//
// Code generation for function 'all'
//

// Include files
#include "all.h"
#include "eml_int_forloop_overflow_check.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo tj_emlrtRSI{
    13,    // lineNo
    "all", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/all.m" // pathName
};

static emlrtRSInfo uj_emlrtRSI{
    136,        // lineNo
    "allOrAny", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "allOrAny.m" // pathName
};

static emlrtRTEInfo hs_emlrtRTEI{
    13,                                                                // lineNo
    5,                                                                 // colNo
    "all",                                                             // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/all.m" // pName
};

// Function Definitions
namespace coder {
void all(const emlrtStack *sp, const ::coder::array<boolean_T, 2U> &x,
         ::coder::array<boolean_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i2;
  int32_T npages;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y.set_size(&hs_emlrtRTEI, &st, 1, x.size(1));
  npages = x.size(1);
  for (i2 = 0; i2 < npages; i2++) {
    y[i2] = true;
  }
  npages = x.size(1);
  i2 = 2;
  b_st.site = &uj_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (int32_T i{0}; i < npages; i++) {
    int32_T a;
    int32_T i1;
    boolean_T exitg1;
    a = i2;
    i1 = i2 - 1;
    i2 += 2;
    b_st.site = &bg_emlrtRSI;
    if ((i1 <= a) && (a > 2147483646)) {
      c_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    exitg1 = false;
    while ((!exitg1) && (i1 <= a)) {
      if (!x[i1 - 1]) {
        y[i] = false;
        exitg1 = true;
      } else {
        i1++;
      }
    }
  }
}

boolean_T b_all(const emlrtStack *sp, const ::coder::array<boolean_T, 2U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = true;
  b_st.site = &bg_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x.size(1))) {
    if (!x[ix - 1]) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }
  return y;
}

} // namespace coder

// End of code generation (all.cpp)
