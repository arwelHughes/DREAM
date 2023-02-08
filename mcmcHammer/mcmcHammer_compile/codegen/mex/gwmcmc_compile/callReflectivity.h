//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// callReflectivity.h
//
// Code generation for function 'callReflectivity'
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
void b_callReflectivity(const emlrtStack *sp, real_T nbairs, real_T nbsubs,
                        const real_T simLimits[2], const real_T repeatLayers[2],
                        const coder::array<real_T, 2U> &this_data,
                        const coder::array<real_T, 2U> &layers, real_T ssubs,
                        real_T res, coder::array<real_T, 2U> &reflectivity,
                        coder::array<real_T, 2U> &Simulation);

void callReflectivity(const emlrtStack *sp, real_T nbairs, real_T nbsubs,
                      const real_T simLimits[2], const real_T repeatLayers[2],
                      const coder::array<real_T, 2U> &this_data,
                      const coder::array<real_T, 2U> &layers, real_T ssubs,
                      real_T res, coder::array<real_T, 2U> &reflectivity,
                      coder::array<real_T, 2U> &Simulation);

// End of code generation (callReflectivity.h)
