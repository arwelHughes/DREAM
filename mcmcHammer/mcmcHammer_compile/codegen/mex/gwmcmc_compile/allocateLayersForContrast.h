//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// allocateLayersForContrast.h
//
// Code generation for function 'allocateLayersForContrast'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
struct cell_wrap_15;

// Function Declarations
void allocateLayersForContrast(const emlrtStack *sp, real_T contrastLayers,
                               const cell_wrap_15 outParameterisedLayers,
                               real_T thisContrastLayers_data[],
                               int32_T thisContrastLayers_size[2]);

// End of code generation (allocateLayersForContrast.h)
