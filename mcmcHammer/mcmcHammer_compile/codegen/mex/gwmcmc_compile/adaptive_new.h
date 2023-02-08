//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// adaptive_new.h
//
// Code generation for function 'adaptive_new'
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
void adaptive_new(const emlrtStack *sp,
                  const coder::array<real_T, 2U> &sldProfile,
                  const real_T startDomain[2], real_T minAngle, real_T nPoints,
                  cell_17 *out);

void b_adaptive_new(const emlrtStack *sp,
                    const coder::array<real_T, 2U> &sldProfile,
                    const real_T startDomain[2], real_T minAngle,
                    real_T nPoints, cell_17 *out);

// End of code generation (adaptive_new.h)
