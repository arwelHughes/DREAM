//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// randn.cpp
//
// Code generation for function 'randn'
//

// Include files
#include "randn.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Variable Definitions
static emlrtRTEInfo xe_emlrtRTEI{
    115,     // lineNo
    24,      // colNo
    "randn", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/randfun/randn.m" // pName
};

// Function Definitions
namespace coder {
void randn(const emlrtStack *sp, real_T varargin_1, real_T varargin_2,
           ::coder::array<real_T, 2U> &r)
{
  r.set_size(&xe_emlrtRTEI, sp, static_cast<int32_T>(varargin_1),
             static_cast<int32_T>(varargin_2));
  if ((static_cast<int32_T>(varargin_1) != 0) &&
      (static_cast<int32_T>(varargin_2) != 0)) {
    emlrtRandn(&(r.data())[0], static_cast<int32_T>(varargin_1) *
                                   static_cast<int32_T>(varargin_2));
  }
}

} // namespace coder

// End of code generation (randn.cpp)
