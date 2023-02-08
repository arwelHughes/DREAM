//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// groupLayers_Mod.h
//
// Code generation for function 'groupLayers_Mod'
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
void groupLayers_Mod(const emlrtStack *sp, const real_T allLayers_data[],
                     const int32_T allLayers_size[2], real_T allRoughs,
                     const coder::array<char_T, 2U> &geometry, real_T nbair,
                     real_T nbsubs, real_T outLayers_data[],
                     int32_T outLayers_size[2], real_T *outSsubs);

void groupLayers_Mod(const emlrtStack *sp,
                     const coder::array<real_T, 2U> &allLayers,
                     real_T allRoughs, const coder::array<char_T, 2U> &geometry,
                     real_T nbair, real_T nbsubs,
                     coder::array<real_T, 2U> &outLayers, real_T *outSsubs);

// End of code generation (groupLayers_Mod.h)
