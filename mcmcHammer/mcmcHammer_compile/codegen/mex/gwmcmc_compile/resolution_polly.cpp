//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// resolution_polly.cpp
//
// Code generation for function 'resolution_polly'
//

// Include files
#include "resolution_polly.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo jh_emlrtRSI{
    29,                 // lineNo
    "resolution_polly", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "Resolution_Functions/Simple_Gaussian/resolution_polly.m" // pathName
};

static emlrtRTEInfo xb_emlrtRTEI{
    28,                 // lineNo
    13,                 // colNo
    "resolution_polly", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "Resolution_Functions/Simple_Gaussian/resolution_polly.m" // pName
};

static emlrtBCInfo vj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    13,                 // lineNo
    15,                 // colNo
    "dummydata",        // aName
    "resolution_polly", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "Resolution_Functions/Simple_Gaussian/resolution_polly.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo wj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    34,                 // lineNo
    34,                 // colNo
    "dummydata",        // aName
    "resolution_polly", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "Resolution_Functions/Simple_Gaussian/resolution_polly.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo xj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    29,                 // lineNo
    28,                 // colNo
    "xdata",            // aName
    "resolution_polly", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "Resolution_Functions/Simple_Gaussian/resolution_polly.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo yj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    29,                 // lineNo
    39,                 // colNo
    "xdata",            // aName
    "resolution_polly", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "Resolution_Functions/Simple_Gaussian/resolution_polly.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo ak_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    31,                 // lineNo
    34,                 // colNo
    "dummydata",        // aName
    "resolution_polly", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "Resolution_Functions/Simple_Gaussian/resolution_polly.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo bk_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    31,                 // lineNo
    48,                 // colNo
    "dummyref",         // aName
    "resolution_polly", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "Resolution_Functions/Simple_Gaussian/resolution_polly.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo ck_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    31,                 // lineNo
    19,                 // colNo
    "dummydata",        // aName
    "resolution_polly", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "Resolution_Functions/Simple_Gaussian/resolution_polly.m", // pName
    0                                                          // checkKind
};

static emlrtRTEInfo ul_emlrtRTEI{
    7,                  // lineNo
    1,                  // colNo
    "resolution_polly", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "Resolution_Functions/Simple_Gaussian/resolution_polly.m" // pName
};

// Function Definitions
void resolution_polly(const emlrtStack *sp,
                      const coder::array<real_T, 1U> &xdata,
                      const coder::array<real_T, 1U> &ydata, real_T res,
                      real_T points, coder::array<real_T, 1U> &out)
{
  emlrtStack st;
  int32_T i;
  int32_T loop_ub_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  //  Apply resolution correction
  res += 0.0001;
  loop_ub_tmp = static_cast<int32_T>(points);
  out.set_size(&ul_emlrtRTEI, sp, loop_ub_tmp);
  for (i = 0; i < loop_ub_tmp; i++) {
    out[i] = 0.0;
  }
  for (int32_T j{0}; j < loop_ub_tmp; j++) {
    real_T ihi;
    real_T sumg;
    int32_T ilow;
    sumg = 0.0;
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > out.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, out.size(0),
          &vj_emlrtBCI, (emlrtConstCTX)sp);
    }
    out[j] = 0.0;
    if (static_cast<uint32_T>(j) + 1U > 10U) {
      ilow = -10;
    } else {
      ilow = static_cast<int32_T>(-(static_cast<real_T>(j) + 1.0)) + 1;
    }
    if (static_cast<real_T>(j) + 1.0 < points - 10.0) {
      ihi = 10.0;
    } else {
      ihi = points - (static_cast<real_T>(j) + 1.0);
    }
    //     try
    i = static_cast<int32_T>(ihi + (1.0 - static_cast<real_T>(ilow)));
    emlrtForLoopVectorCheckR2021a(static_cast<real_T>(ilow), 1.0, ihi,
                                  mxDOUBLE_CLASS, i, &xb_emlrtRTEI,
                                  (emlrtConstCTX)sp);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      int32_T i1;
      st.site = &jh_emlrtRSI;
      i1 = static_cast<int32_T>((static_cast<real_T>(j) + 1.0) +
                                static_cast<real_T>(ilow + b_i));
      if ((i1 < 1) || (i1 > xdata.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, xdata.size(0), &xj_emlrtBCI, &st);
      }
      if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
           xdata.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1,
            xdata.size(0), &yj_emlrtBCI, &st);
      }
      ihi = (xdata[i1 - 1] - xdata[j]) / (res * xdata[j]);
      ihi = muDoubleScalarExp(-(ihi * ihi));
      sumg += ihi;
      if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > out.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, out.size(0),
            &ak_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (i1 > ydata.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ydata.size(0), &bk_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > out.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, out.size(0),
            &ck_emlrtBCI, (emlrtConstCTX)sp);
      }
      out[j] = out[j] + ydata[i1 - 1] * ihi;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (sumg != 0.0) {
      if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > out.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, out.size(0),
            &wj_emlrtBCI, (emlrtConstCTX)sp);
      }
      out[j] = out[j] / sumg;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

// End of code generation (resolution_polly.cpp)
