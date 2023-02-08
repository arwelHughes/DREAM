//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// standardTF_stanLay_reflectivityCalculation.h
//
// Code generation for function 'standardTF_stanLay_reflectivityCalculation'
//

#pragma once

// Include files
#include "gwmcmc_compile_internal_types.h"
#include "gwmcmc_compile_types.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void c_standardTF_stanLay_reflectivi(
    const emlrtStack *sp, const struct_T *problemDef,
    const cell_5 *problemDef_cells, const struct3_T *controls,
    c_struct_T *problem, coder::array<cell_wrap_10, 1U> &reflectivity,
    coder::array<cell_wrap_10, 1U> &Simulation,
    coder::array<cell_wrap_1, 1U> &shifted_data,
    coder::array<cell_wrap_11, 1U> &layerSlds,
    coder::array<cell_wrap_1, 1U> &sldProfiles,
    coder::array<cell_wrap_1, 1U> &allLayers);

// End of code generation (standardTF_stanLay_reflectivityCalculation.h)
