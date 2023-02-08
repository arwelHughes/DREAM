//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// applyScalarFunction.h
//
// Code generation for function 'applyScalarFunction'
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
namespace internal {
void applyScalarFunction(const emlrtStack *sp,
                         const ::coder::array<real_T, 2U> &x,
                         ::coder::array<real_T, 2U> &z1);

}
} // namespace coder

// End of code generation (applyScalarFunction.h)
