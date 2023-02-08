//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// asymconvstep.h
//
// Code generation for function 'asymconvstep'
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
void asymconvstep(const emlrtStack *sp, const coder::array<real_T, 2U> &x,
                  real_T xw, real_T xcen, real_T s1, real_T s2, real_T h,
                  coder::array<real_T, 2U> &f);

// End of code generation (asymconvstep.h)
