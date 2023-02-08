//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// all.h
//
// Code generation for function 'all'
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
void all(const emlrtStack *sp, const ::coder::array<boolean_T, 2U> &x,
         ::coder::array<boolean_T, 2U> &y);

boolean_T b_all(const emlrtStack *sp, const ::coder::array<boolean_T, 2U> &x);

} // namespace coder

// End of code generation (all.h)
