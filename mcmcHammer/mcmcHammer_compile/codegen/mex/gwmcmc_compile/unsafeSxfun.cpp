//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// unsafeSxfun.cpp
//
// Code generation for function 'unsafeSxfun'
//

// Include files
#include "unsafeSxfun.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Function Definitions
void binary_expand_op(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                      const coder::array<real_T, 2U> &in3)
{
  coder::array<real_T, 1U> b_in1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in3.size(0) == 1) {
    i = in1.size(0);
  } else {
    i = in3.size(0);
  }
  b_in1.set_size(&ts_emlrtRTEI, sp, i);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  if (in3.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] / in3[i * stride_1_0 + in3.size(0) * 2];
  }
  in1.set_size(&ts_emlrtRTEI, sp, b_in1.size(0));
  loop_ub = b_in1.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  loop_ub = in1.size(0);
  for (i = 0; i < loop_ub; i++) {
    real_T varargin_1;
    varargin_1 = in1[i];
    in1[i] = varargin_1 * varargin_1;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (unsafeSxfun.cpp)
