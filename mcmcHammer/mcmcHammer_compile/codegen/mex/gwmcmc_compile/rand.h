//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// rand.h
//
// Code generation for function 'rand'
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
namespace coder {
void b_rand(const emlrtStack *sp, real_T varargin_2,
            ::coder::array<real_T, 2U> &r);

real_T b_rand();

void c_rand(const emlrtStack *sp, real_T varargin_2,
            ::coder::array<real_T, 2U> &r);

} // namespace coder

// End of code generation (rand.h)
