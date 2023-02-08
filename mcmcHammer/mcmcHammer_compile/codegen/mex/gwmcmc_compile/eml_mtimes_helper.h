//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// eml_mtimes_helper.h
//
// Code generation for function 'eml_mtimes_helper'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
struct cell_17;

// Function Declarations
void binary_expand_op(const emlrtStack *sp, coder::array<real_T, 2U> &in1,
                      real_T in2, const coder::array<real_T, 2U> &in3);

void binary_expand_op(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                      const cell_17 *in2, const coder::array<int32_T, 1U> &in3,
                      const coder::array<int32_T, 1U> &in4);

// End of code generation (eml_mtimes_helper.h)
