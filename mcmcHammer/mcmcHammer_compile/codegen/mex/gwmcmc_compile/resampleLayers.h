//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// resampleLayers.h
//
// Code generation for function 'resampleLayers'
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
void b_resampleLayers(const emlrtStack *sp,
                      const coder::array<real_T, 2U> &sldProfile,
                      const real_T resamPars[2],
                      coder::array<real_T, 2U> &newSLD);

void resampleLayers(const emlrtStack *sp,
                    const coder::array<real_T, 2U> &sldProfile,
                    const real_T resamPars[2],
                    coder::array<real_T, 2U> &newSLD);

// End of code generation (resampleLayers.h)
