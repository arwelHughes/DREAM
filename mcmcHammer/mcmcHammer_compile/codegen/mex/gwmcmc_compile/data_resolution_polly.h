//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// data_resolution_polly.h
//
// Code generation for function 'data_resolution_polly'
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

// Function Declarations
void data_resolution_polly(const emlrtStack *sp,
                           const coder::array<real_T, 1U> &xdata,
                           const coder::array<real_T, 1U> &ydata,
                           const coder::array<real_T, 1U> &resData,
                           real_T points, coder::array<real_T, 1U> &out);

// End of code generation (data_resolution_polly.h)
