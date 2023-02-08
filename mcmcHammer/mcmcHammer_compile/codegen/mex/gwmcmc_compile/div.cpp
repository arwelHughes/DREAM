//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// div.cpp
//
// Code generation for function 'div'
//

// Include files
#include "div.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Function Definitions
void rdivide(const emlrtStack *sp, coder::array<real_T, 2U> &in1,
             const coder::array<real_T, 2U> &in2)
{
  coder::array<real_T, 2U> b_in2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in1.size(0) == 1) {
    i = in2.size(0);
  } else {
    i = in1.size(0);
  }
  b_in2.set_size(&ts_emlrtRTEI, sp, i, 2);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in1.size(0) != 1);
  if (in1.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in1.size(0);
  }
  for (i = 0; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in2[i1 + b_in2.size(0) * i] = in2[i1 * stride_0_0 + in2.size(0) * i] /
                                      in1[i1 * stride_1_0 + in1.size(0) * i];
    }
  }
  in1.set_size(&ts_emlrtRTEI, sp, b_in2.size(0), 2);
  loop_ub = b_in2.size(0);
  for (i = 0; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in2[i1 + b_in2.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (div.cpp)
