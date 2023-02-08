//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// textOut.cpp
//
// Code generation for function 'textOut'
//

// Include files
#include "textOut.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_mexutil.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <stdio.h>
#include <string.h>

// Variable Definitions
static emlrtRSInfo vj_emlrtRSI{
    6,         // lineNo
    "textOut", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "textOut.m" // pathName
};

static emlrtRSInfo wj_emlrtRSI{
    7,         // lineNo
    "textOut", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "textOut.m" // pathName
};

static emlrtRSInfo xj_emlrtRSI{
    38,        // lineNo
    "fprintf", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/iofun/fprintf.m" // pathName
};

static emlrtMCInfo j_emlrtMCI{
    66,        // lineNo
    18,        // colNo
    "fprintf", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/iofun/fprintf.m" // pName
};

static emlrtRSInfo wk_emlrtRSI{
    66,        // lineNo
    "fprintf", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/iofun/fprintf.m" // pathName
};

// Function Declarations
static const mxArray *feval(const emlrtStack *sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            emlrtMCInfo *location);

// Function Definitions
static const mxArray *feval(const emlrtStack *sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            emlrtMCInfo *location)
{
  const mxArray *pArrays[5];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 5, &pArrays[0],
                               "feval", true, location);
}

void textOut(const emlrtStack *sp, real_T pct, real_T iter)
{
  static const int32_T iv[2]{1, 7};
  static const int32_T iv1[2]{1, 27};
  static const char_T b_u[27]{'I', 't', 'e', 'r', ' ', '%', 'g', ' ',  ':',
                              ' ', '%', 'g', ' ', '%', '%', ' ', 'c',  'o',
                              'm', 'p', 'l', 'e', 't', 'e', ' ', '\\', 'n'};
  static const char_T u[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  real_T x;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  //  interval = 1;
  pct *= 100.0;
  if (muDoubleScalarIsNaN(iter) || muDoubleScalarIsInf(iter)) {
    x = rtNaN;
  } else {
    x = muDoubleScalarRem(iter, 20.0);
    if (x == 0.0) {
      x = 0.0;
    }
  }
  st.site = &vj_emlrtRSI;
  if (muDoubleScalarIsNaN(x)) {
    emlrtErrorWithMessageIdR2018a(&st, &ld_emlrtRTEI, "MATLAB:nologicalnan",
                                  "MATLAB:nologicalnan", 0);
  }
  if (!(x != 0.0)) {
    st.site = &wj_emlrtRSI;
    b_st.site = &xj_emlrtRSI;
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = nullptr;
    m = emlrtCreateDoubleScalar(1.0);
    emlrtAssign(&b_y, m);
    c_y = nullptr;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 27, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    d_y = nullptr;
    m = emlrtCreateDoubleScalar(iter);
    emlrtAssign(&d_y, m);
    e_y = nullptr;
    m = emlrtCreateDoubleScalar(pct);
    emlrtAssign(&e_y, m);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, feval(&c_st, y, b_y, c_y, d_y, e_y, &j_emlrtMCI),
                     "<output of feval>");
  }
}

// End of code generation (textOut.cpp)
