//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// shiftdata.h
//
// Code generation for function 'shiftdata'
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
void shiftdata(const emlrtStack *sp, real_T scalefac, real_T horshift,
               real_T dataPresent, coder::array<real_T, 2U> &data,
               const real_T dataLimits[2], const real_T simLimits[2],
               coder::array<real_T, 2U> &shifted_data);

// End of code generation (shiftdata.h)
