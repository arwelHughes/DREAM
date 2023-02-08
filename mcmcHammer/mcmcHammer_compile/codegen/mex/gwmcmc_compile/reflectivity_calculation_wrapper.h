//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// reflectivity_calculation_wrapper.h
//
// Code generation for function 'reflectivity_calculation_wrapper'
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
struct struct_T;

struct cell_5;

struct struct3_T;

struct c_struct_T;

struct cell_12;

// Function Declarations
void c_reflectivity_calculation_wrap(const emlrtStack *sp,
                                     const struct_T *problemDef,
                                     const cell_5 *problemDef_cells,
                                     const struct3_T *controls,
                                     c_struct_T *problem, cell_12 *result);

// End of code generation (reflectivity_calculation_wrapper.h)
