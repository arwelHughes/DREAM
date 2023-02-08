//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// find.cpp
//
// Code generation for function 'find'
//

// Include files
#include "find.h"
#include "eml_int_forloop_overflow_check.h"
#include "gwmcmc_compile_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo ye_emlrtRSI{
    144,        // lineNo
    "eml_find", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo af_emlrtRSI{
    382,                  // lineNo
    "find_first_indices", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo bf_emlrtRSI{
    402,                  // lineNo
    "find_first_indices", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRTEInfo pb_emlrtRTEI{
    392,                  // lineNo
    1,                    // colNo
    "find_first_indices", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo dk_emlrtRTEI{
    369,    // lineNo
    24,     // colNo
    "find", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo ek_emlrtRTEI{
    144,    // lineNo
    9,      // colNo
    "find", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

// Function Definitions
namespace coder {
void eml_find(const emlrtStack *sp, const ::coder::array<boolean_T, 1U> &x,
              ::coder::array<int32_T, 1U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x.size(0);
  st.site = &ye_emlrtRSI;
  idx = 0;
  i.set_size(&dk_emlrtRTEI, &st, x.size(0));
  b_st.site = &af_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx - 1)) {
    if (x[ii]) {
      idx++;
      i[idx - 1] = ii + 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &pb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x.size(0) == 1) {
    if (idx == 0) {
      i.set_size(&ek_emlrtRTEI, &st, 0);
    }
  } else {
    int32_T iv[2];
    if (idx < 1) {
      nx = 0;
    } else {
      nx = idx;
    }
    iv[0] = 1;
    iv[1] = nx;
    b_st.site = &bf_emlrtRSI;
    internal::indexShapeCheck(&b_st, i.size(0), iv);
    i.set_size(&ek_emlrtRTEI, &st, nx);
  }
}

} // namespace coder

// End of code generation (find.cpp)
