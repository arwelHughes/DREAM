//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// abeles_paraPoints.h
//
// Code generation for function 'abeles_paraPoints'
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
void abeles_paraPoints(const emlrtStack *sp, const coder::array<real_T, 1U> &x,
                       const coder::array<real_T, 2U> &sld, real_T nbair,
                       real_T nbsub, real_T nrepeats, real_T rsub,
                       real_T layers, real_T points,
                       coder::array<real_T, 1U> &out);

// End of code generation (abeles_paraPoints.h)
