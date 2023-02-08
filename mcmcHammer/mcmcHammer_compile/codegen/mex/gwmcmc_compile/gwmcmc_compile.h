//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// gwmcmc_compile.h
//
// Code generation for function 'gwmcmc_compile'
//

#pragma once

// Include files
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
emlrtCTX emlrtGetRootTLSGlobal();

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

void gwmcmc_compile(const emlrtStack *sp, coder::array<real_T, 2U> &minit,
                    real_T mccount, const struct0_T *p, const cell_6 *extras,
                    coder::array<real_T, 3U> &models,
                    coder::array<real_T, 3U> &logP);

// End of code generation (gwmcmc_compile.h)
