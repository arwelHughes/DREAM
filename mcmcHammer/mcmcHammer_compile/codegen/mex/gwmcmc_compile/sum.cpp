//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// sum.cpp
//
// Code generation for function 'sum'
//

// Include files
#include "sum.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "coder_array.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo xc_emlrtRSI{
    107,                // lineNo
    "blockedSummation", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo yc_emlrtRSI{
    22,                    // lineNo
    "sumMatrixIncludeNaN", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo ad_emlrtRSI{
    42,                 // lineNo
    "sumMatrixColumns", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo bd_emlrtRSI{
    57,                 // lineNo
    "sumMatrixColumns", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

// Function Definitions
namespace coder {
real_T sum(const emlrtStack *sp, const ::coder::array<real_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &uc_emlrtRSI;
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
  b_st.site = &vc_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  if (x.size(0) == 0) {
    y = 0.0;
  } else {
    d_st.site = &xc_emlrtRSI;
    e_st.site = &yc_emlrtRSI;
    if (x.size(0) < 4096) {
      f_st.site = &ad_emlrtRSI;
      y = sumColumnB(&f_st, x, x.size(0));
    } else {
      int32_T inb;
      int32_T nfb;
      int32_T nleft;
      nfb = static_cast<int32_T>(static_cast<uint32_T>(x.size(0)) >> 12);
      inb = nfb << 12;
      nleft = x.size(0) - inb;
      y = sumColumnB4(x, 1);
      for (int32_T ib{2}; ib <= nfb; ib++) {
        y += sumColumnB4(x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        f_st.site = &bd_emlrtRSI;
        y += sumColumnB(&f_st, x, nleft, inb + 1);
      }
    }
  }
  return y;
}

} // namespace coder

// End of code generation (sum.cpp)
