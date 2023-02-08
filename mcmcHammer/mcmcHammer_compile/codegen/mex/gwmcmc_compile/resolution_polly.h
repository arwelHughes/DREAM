//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// resolution_polly.h
//
// Code generation for function 'resolution_polly'
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
void resolution_polly(const emlrtStack *sp,
                      const coder::array<real_T, 1U> &xdata,
                      const coder::array<real_T, 1U> &ydata, real_T res,
                      real_T points, coder::array<real_T, 1U> &out);

// End of code generation (resolution_polly.h)
