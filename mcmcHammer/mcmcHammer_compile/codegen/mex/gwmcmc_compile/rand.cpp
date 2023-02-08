//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// rand.cpp
//
// Code generation for function 'rand'
//

// Include files
#include "rand.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Variable Definitions
static emlrtRTEInfo is_emlrtRTEI{
    103,    // lineNo
    24,     // colNo
    "rand", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/randfun/rand.m" // pName
};

// Function Definitions
namespace coder {
void b_rand(const emlrtStack *sp, real_T varargin_2,
            ::coder::array<real_T, 2U> &r)
{
  r.set_size(&is_emlrtRTEI, sp, 1, static_cast<int32_T>(varargin_2));
  if (static_cast<int32_T>(varargin_2) != 0) {
    emlrtRandu(&r[0], static_cast<int32_T>(varargin_2));
  }
}

real_T b_rand()
{
  real_T r;
  emlrtRandu(&r, 1);
  return r;
}

void c_rand(const emlrtStack *sp, real_T varargin_2,
            ::coder::array<real_T, 2U> &r)
{
  r.set_size(&is_emlrtRTEI, sp, 3, static_cast<int32_T>(varargin_2));
  if (static_cast<int32_T>(varargin_2) != 0) {
    emlrtRandu(&(r.data())[0], 3 * static_cast<int32_T>(varargin_2));
  }
}

} // namespace coder

// End of code generation (rand.cpp)
