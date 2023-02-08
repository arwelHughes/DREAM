//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// bsxfun.cpp
//
// Code generation for function 'bsxfun'
//

// Include files
#include "bsxfun.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <string.h>

// Function Definitions
namespace coder {
void bsxfun(const emlrtStack *sp, const ::coder::array<real_T, 2U> &a,
            const ::coder::array<real_T, 2U> &b, ::coder::array<real_T, 2U> &c)
{
  int32_T csz_idx_0;
  int32_T csz_idx_1;
  int32_T i;
  boolean_T iscompatible;
  iscompatible = true;
  if (b.size(0) == 1) {
    csz_idx_0 = a.size(0);
  } else if (a.size(0) == 1) {
    csz_idx_0 = b.size(0);
  } else if (a.size(0) == b.size(0)) {
    csz_idx_0 = a.size(0);
  } else {
    iscompatible = false;
    i = b.size(0);
    csz_idx_0 = a.size(0);
    csz_idx_0 = muIntScalarMin_sint32(i, csz_idx_0);
  }
  if (b.size(1) == 1) {
    csz_idx_1 = 1;
  } else {
    csz_idx_1 = b.size(1);
  }
  if (!iscompatible) {
    emlrtErrorWithMessageIdR2018a(sp, &b_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  if (b.size(1) == 1) {
    i = 1;
  } else {
    i = b.size(1);
  }
  c.set_size(&se_emlrtRTEI, sp, csz_idx_0, i);
  if ((csz_idx_0 != 0) && (csz_idx_1 != 0)) {
    int32_T b_bcoef;
    int32_T bcoef;
    bcoef = (b.size(1) != 1);
    csz_idx_0 = csz_idx_1 - 1;
    csz_idx_1 = (a.size(0) != 1);
    b_bcoef = (b.size(0) != 1);
    for (int32_T k{0}; k <= csz_idx_0; k++) {
      int32_T varargin_3;
      varargin_3 = bcoef * k;
      i = c.size(0) - 1;
      for (int32_T b_k{0}; b_k <= i; b_k++) {
        c[b_k + c.size(0) * k] =
            a[csz_idx_1 * b_k] + b[b_bcoef * b_k + b.size(0) * varargin_3];
      }
    }
  }
}

} // namespace coder

// End of code generation (bsxfun.cpp)
