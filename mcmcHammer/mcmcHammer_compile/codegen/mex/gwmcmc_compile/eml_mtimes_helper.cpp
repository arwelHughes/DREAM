//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// eml_mtimes_helper.cpp
//
// Code generation for function 'eml_mtimes_helper'
//

// Include files
#include "eml_mtimes_helper.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Variable Definitions
static emlrtRTEInfo ps_emlrtRTEI{
    76,                  // lineNo
    13,                  // colNo
    "eml_mtimes_helper", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" // pName
};

// Function Definitions
void binary_expand_op(const emlrtStack *sp, coder::array<real_T, 2U> &in1,
                      real_T in2, const coder::array<real_T, 2U> &in3)
{
  coder::array<real_T, 2U> b_in2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in3.size(1) == 1) {
    i = in1.size(1);
  } else {
    i = in3.size(1);
  }
  b_in2.set_size(&ps_emlrtRTEI, sp, 1, i);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_1 = (in3.size(1) != 1);
  if (in3.size(1) == 1) {
    loop_ub = in1.size(1);
  } else {
    loop_ub = in3.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = in2 * (in1[i * stride_0_1] - in3[i * stride_1_1]);
  }
  in1.set_size(&ps_emlrtRTEI, sp, 1, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                      const cell_17 *in2, const coder::array<int32_T, 1U> &in3,
                      const coder::array<int32_T, 1U> &in4)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in4.size(0) == 1) {
    i = in3.size(0);
  } else {
    i = in4.size(0);
  }
  in1.set_size(&oj_emlrtRTEI, sp, i);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = 0.5 * (in2->f1[in3[i * stride_0_0] - 1] +
                    in2->f1[in4[i * stride_1_0] - 1]);
  }
}

// End of code generation (eml_mtimes_helper.cpp)
