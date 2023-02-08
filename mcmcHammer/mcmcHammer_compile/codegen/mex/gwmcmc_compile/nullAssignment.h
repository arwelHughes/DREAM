//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// nullAssignment.h
//
// Code generation for function 'nullAssignment'
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
void b_nullAssignment(const emlrtStack *sp, ::coder::array<real_T, 3U> &x,
                      const ::coder::array<int32_T, 2U> &idx);

void nullAssignment(const emlrtStack *sp, ::coder::array<real_T, 3U> &x,
                    const ::coder::array<int32_T, 2U> &idx);

} // namespace internal
} // namespace coder

// End of code generation (nullAssignment.h)
