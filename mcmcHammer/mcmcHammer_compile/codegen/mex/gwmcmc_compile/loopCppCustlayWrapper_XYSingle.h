//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// loopCppCustlayWrapper_XYSingle.h
//
// Code generation for function 'loopCppCustlayWrapper_XYSingle'
//

#pragma once

// Include files
#include "gwmcmc_compile_internal_types.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
struct cell_wrap_4;

// Function Declarations
void loopCppCustlayWrapper_XYSingle(const emlrtStack *sp,
                                    const coder::array<real_T, 2U> &nba,
                                    const coder::array<real_T, 2U> &nbs,
                                    real_T numberOfContrasts,
                                    const cell_wrap_4 *customFiles,
                                    const coder::array<real_T, 2U> &params,
                                    coder::array<cell_wrap_25, 1U> &allLayers,
                                    coder::array<real_T, 1U> &allRoughs);

// End of code generation (loopCppCustlayWrapper_XYSingle.h)
