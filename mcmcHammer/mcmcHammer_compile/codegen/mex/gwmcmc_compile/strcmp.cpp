//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// strcmp.cpp
//
// Code generation for function 'strcmp'
//

// Include files
#include "strcmp.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo
    bc_emlrtRSI{
        91,       // lineNo
        "strcmp", // fcnName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
        "strcmp.m" // pathName
    };

static emlrtRSInfo
    cc_emlrtRSI{
        167,          // lineNo
        "loc_strcmp", // fcnName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
        "strcmp.m" // pathName
    };

static emlrtRSInfo
    dc_emlrtRSI{
        240,       // lineNo
        "charcmp", // fcnName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
        "strcmp.m" // pathName
    };

// Function Definitions
namespace coder {
namespace internal {
boolean_T b_strcmp(const emlrtStack *sp, const ::coder::array<char_T, 2U> &a)
{
  static const char_T b_cv[13]{'a', 'i', 'r', '/', 's', 'u', 'b',
                               's', 't', 'r', 'a', 't', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &cc_emlrtRSI;
  b_bool = false;
  if (a.size(1) == 13) {
    int32_T kstr;
    kstr = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (kstr < 13) {
        int32_T i;
        c_st.site = &dc_emlrtRSI;
        i = static_cast<uint8_T>(a[kstr]);
        if (i > 127) {
          emlrtErrorWithMessageIdR2018a(
              &c_st, &w_emlrtRTEI, "Coder:toolbox:unsupportedString",
              "Coder:toolbox:unsupportedString", 2, 12, 127);
        }
        if (cv[i] != cv[static_cast<int32_T>(b_cv[kstr])]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  return b_bool;
}

} // namespace internal
} // namespace coder

// End of code generation (strcmp.cpp)
