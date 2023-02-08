//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// makeSLDProfiles.h
//
// Code generation for function 'makeSLDProfiles'
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
void makeSLDProfiles(const emlrtStack *sp, real_T nbair, real_T nbsub,
                     const coder::array<real_T, 2U> &sld, real_T ssub,
                     const real_T repeats[2],
                     coder::array<real_T, 2U> &sldProfile);

// End of code generation (makeSLDProfiles.h)
