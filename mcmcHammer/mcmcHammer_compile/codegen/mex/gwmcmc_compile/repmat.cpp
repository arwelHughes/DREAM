//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// repmat.cpp
//
// Code generation for function 'repmat'
//

// Include files
#include "repmat.h"
#include "eml_int_forloop_overflow_check.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo sf_emlrtRSI{
    28,       // lineNo
    "repmat", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/repmat.m" // pathName
};

static emlrtRSInfo tf_emlrtRSI{
    69,       // lineNo
    "repmat", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/repmat.m" // pathName
};

static emlrtRTEInfo sb_emlrtRTEI{
    58,                   // lineNo
    23,                   // colNo
    "assertValidSizeArg", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "assertValidSizeArg.m" // pName
};

static emlrtRTEInfo tk_emlrtRTEI{
    59,       // lineNo
    28,       // colNo
    "repmat", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/repmat.m" // pName
};

// Function Definitions
namespace coder {
void repmat(const emlrtStack *sp, const real_T a[2], real_T varargin_1,
            ::coder::array<real_T, 2U> &b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  boolean_T overflow;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &sf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (varargin_1 != varargin_1) {
    emlrtErrorWithMessageIdR2018a(
        &st, &sb_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  i = static_cast<int32_T>(varargin_1);
  b.set_size(&tk_emlrtRTEI, sp, i, 2);
  overflow = (static_cast<int32_T>(varargin_1) > 2147483646);
  for (int32_T jcol{0}; jcol < 2; jcol++) {
    int32_T ibmat;
    ibmat = jcol * static_cast<int32_T>(varargin_1);
    st.site = &tf_emlrtRSI;
    if (overflow) {
      b_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (int32_T itilerow{0}; itilerow < i; itilerow++) {
      b[ibmat + itilerow] = a[jcol];
    }
  }
}

} // namespace coder

// End of code generation (repmat.cpp)
