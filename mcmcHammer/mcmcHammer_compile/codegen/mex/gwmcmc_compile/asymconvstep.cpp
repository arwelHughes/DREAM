//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// asymconvstep.cpp
//
// Code generation for function 'asymconvstep'
//

// Include files
#include "asymconvstep.h"
#include "applyScalarFunction.h"
#include "eml_mtimes_helper.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo hd_emlrtRSI{
    44,       // lineNo
    "mpower", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/matfun/mpower.m" // pathName
};

static emlrtRSInfo md_emlrtRSI{
    39,             // lineNo
    "asymconvstep", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/asymconvstep.m" // pathName
};

static emlrtRSInfo nd_emlrtRSI{
    40,             // lineNo
    "asymconvstep", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/asymconvstep.m" // pathName
};

static emlrtRSInfo od_emlrtRSI{
    45,             // lineNo
    "asymconvstep", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/asymconvstep.m" // pathName
};

static emlrtRSInfo pd_emlrtRSI{
    9,     // lineNo
    "erf", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/specfun/erf.m" // pathName
};

static emlrtRSInfo qd_emlrtRSI{
    12,            // lineNo
    "eml_erfcore", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/specfun/private/"
    "eml_erfcore.m" // pathName
};

static emlrtECInfo n_emlrtECI{
    2,              // nDims
    45,             // lineNo
    12,             // colNo
    "asymconvstep", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/asymconvstep.m" // pName
};

static emlrtRTEInfo xi_emlrtRTEI{
    42,             // lineNo
    5,              // colNo
    "asymconvstep", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/asymconvstep.m" // pName
};

static emlrtRTEInfo yi_emlrtRTEI{
    43,             // lineNo
    5,              // colNo
    "asymconvstep", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/asymconvstep.m" // pName
};

static emlrtRTEInfo aj_emlrtRTEI{
    45,             // lineNo
    1,              // colNo
    "asymconvstep", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/asymconvstep.m" // pName
};

// Function Definitions
void asymconvstep(const emlrtStack *sp, const coder::array<real_T, 2U> &x,
                  real_T xw, real_T xcen, real_T s1, real_T s2, real_T h,
                  coder::array<real_T, 2U> &f)
{
  coder::array<real_T, 2U> b_r;
  coder::array<real_T, 2U> b_x;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T aFactor;
  real_T bFactor;
  real_T l;
  real_T r;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Produces a step function convoluted with differnt error functions
  //  on each side.
  //  Convstep (x,xw,xcen,s1,s2,h)
  //        x = vector of x values
  //       xw = Width of step function
  //     xcen = Centre point of step function
  //        s1 = Roughness parameter of left side
  //        s2 = Roughness parameter of right side
  //        h = Height of step function.
  //  if length(xw) > 1
  //      ME = MException('VerifyOutput:OutOfBounds', ...
  //               'xw must be single value');
  //      throw(ME);
  //  end
  //
  //  if length(xcen) > 1
  //      ME = MException('VerifyOutput:OutOfBounds', ...
  //               'xcen must be single value');
  //      throw(ME);
  //  end
  //
  //  if length(s1) > 1
  //      ME = MException('VerifyOutput:OutOfBounds', ...
  //               's1 must be single value');
  //      throw(ME);
  //  end
  //
  //  if length(s2) > 1
  //      ME = MException('VerifyOutput:OutOfBounds', ...
  //               's2 must be single value');
  //      throw(ME);
  //  end
  r = xcen + xw / 2.0;
  l = xcen - xw / 2.0;
  st.site = &md_emlrtRSI;
  b_st.site = &hd_emlrtRSI;
  aFactor = 1.4142135623730951 * s1;
  st.site = &nd_emlrtRSI;
  b_st.site = &hd_emlrtRSI;
  bFactor = 1.4142135623730951 * s2;
  st.site = &od_emlrtRSI;
  b_st.site = &pd_emlrtRSI;
  b_x.set_size(&xi_emlrtRTEI, &b_st, 1, x.size(1));
  loop_ub = x.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_x[i] = (x[i] - l) / aFactor;
  }
  c_st.site = &qd_emlrtRSI;
  coder::internal::applyScalarFunction(&c_st, b_x, f);
  st.site = &od_emlrtRSI;
  b_st.site = &pd_emlrtRSI;
  b_x.set_size(&yi_emlrtRTEI, &b_st, 1, x.size(1));
  loop_ub = x.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_x[i] = (x[i] - r) / bFactor;
  }
  c_st.site = &qd_emlrtRSI;
  coder::internal::applyScalarFunction(&c_st, b_x, b_r);
  if ((f.size(1) != b_r.size(1)) && ((f.size(1) != 1) && (b_r.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(f.size(1), b_r.size(1), &n_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  r = h / 2.0;
  if (f.size(1) == b_r.size(1)) {
    loop_ub = f.size(1) - 1;
    f.set_size(&aj_emlrtRTEI, sp, 1, f.size(1));
    for (int32_T i{0}; i <= loop_ub; i++) {
      f[i] = r * (f[i] - b_r[i]);
    }
  } else {
    st.site = &xk_emlrtRSI;
    binary_expand_op(&st, f, r, b_r);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (asymconvstep.cpp)
