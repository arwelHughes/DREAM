//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// nullAssignment.cpp
//
// Code generation for function 'nullAssignment'
//

// Include files
#include "nullAssignment.h"
#include "eml_int_forloop_overflow_check.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo bk_emlrtRSI{
    53,               // lineNo
    "nullAssignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo ck_emlrtRSI{
    54,               // lineNo
    "nullAssignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo dk_emlrtRSI{
    439,                       // lineNo
    "general_null_assignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo ek_emlrtRSI{
    441,                       // lineNo
    "general_null_assignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo fk_emlrtRSI{
    461,                       // lineNo
    "general_null_assignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo gk_emlrtRSI{
    463,                       // lineNo
    "general_null_assignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo hk_emlrtRSI{
    258,             // lineNo
    "make_bitarray", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo ik_emlrtRSI{
    132,        // lineNo
    "num_true", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRTEInfo ae_emlrtRTEI{
    448,                       // lineNo
    1,                         // colNo
    "general_null_assignment", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pName
};

static emlrtRTEInfo be_emlrtRTEI{
    81,                // lineNo
    27,                // colNo
    "validate_inputs", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pName
};

static emlrtDCInfo ge_emlrtDCI{
    451,                       // lineNo
    58,                        // colNo
    "general_null_assignment", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m", // pName
    4                   // checkKind
};

static emlrtRTEInfo js_emlrtRTEI{
    257,              // lineNo
    1,                // colNo
    "nullAssignment", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pName
};

static emlrtRTEInfo ns_emlrtRTEI{
    54,               // lineNo
    37,               // colNo
    "nullAssignment", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pName
};

static emlrtRTEInfo os_emlrtRTEI{
    451,              // lineNo
    20,               // colNo
    "nullAssignment", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pName
};

// Function Declarations
namespace coder {
namespace internal {
static void make_bitarray(const emlrtStack *sp, int32_T n,
                          const ::coder::array<int32_T, 2U> &idx,
                          ::coder::array<boolean_T, 2U> &b);

}
} // namespace coder

// Function Definitions
namespace coder {
namespace internal {
static void make_bitarray(const emlrtStack *sp, int32_T n,
                          const ::coder::array<int32_T, 2U> &idx,
                          ::coder::array<boolean_T, 2U> &b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_b;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b.set_size(&js_emlrtRTEI, sp, 1, n);
  for (b_b = 0; b_b < n; b_b++) {
    b[b_b] = false;
  }
  b_b = idx.size(1);
  st.site = &hk_emlrtRSI;
  if (idx.size(1) > 2147483646) {
    b_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (int32_T k{0}; k < b_b; k++) {
    b[idx[k] - 1] = true;
  }
}

void b_nullAssignment(const emlrtStack *sp, ::coder::array<real_T, 3U> &x,
                      const ::coder::array<int32_T, 2U> &idx)
{
  array<real_T, 3U> b_x;
  array<boolean_T, 2U> b;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T iy0;
  int32_T k;
  int32_T nxout;
  int32_T sz_idx_1;
  int32_T vlen;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &bk_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx.size(1) - 1)) {
    if (idx[k] > x.size(2)) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&st, &be_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  st.site = &ck_emlrtRSI;
  b_x.set_size(&ns_emlrtRTEI, &st, 2, x.size(1), x.size(2));
  nxout = 2 * x.size(1) * x.size(2);
  for (sz_idx_1 = 0; sz_idx_1 < nxout; sz_idx_1++) {
    b_x[sz_idx_1] = x[sz_idx_1];
  }
  vlen = x.size(2);
  b_st.site = &dk_emlrtRSI;
  make_bitarray(&b_st, x.size(2), idx, b);
  b_st.site = &ek_emlrtRSI;
  nxout = 0;
  sz_idx_1 = b.size(1);
  c_st.site = &ik_emlrtRSI;
  if (b.size(1) > 2147483646) {
    d_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (k = 0; k < sz_idx_1; k++) {
    nxout += b[k];
  }
  nxout = x.size(2) - nxout;
  sz_idx_1 = x.size(1);
  if (nxout > x.size(2)) {
    emlrtErrorWithMessageIdR2018a(&st, &ae_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nxout < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(nxout), &ge_emlrtDCI, &st);
  }
  x.set_size(&os_emlrtRTEI, &st, 2, sz_idx_1, nxout);
  nxout = b_x.size(1) << 1;
  sz_idx_1 = -1;
  iy0 = -1;
  b_st.site = &fk_emlrtRSI;
  if (vlen > 2147483646) {
    c_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < vlen; k++) {
    if ((k + 1 > b.size(1)) || (!b[k])) {
      b_st.site = &gk_emlrtRSI;
      if (nxout > 2147483646) {
        c_st.site = &hb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (int32_T j{0}; j < nxout; j++) {
        x[(iy0 + j) + 1] = b_x[(sz_idx_1 + j) + 1];
      }
      iy0 += nxout;
    }
    sz_idx_1 += nxout;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void nullAssignment(const emlrtStack *sp, ::coder::array<real_T, 3U> &x,
                    const ::coder::array<int32_T, 2U> &idx)
{
  array<real_T, 3U> b_x;
  array<boolean_T, 2U> b;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T iy0;
  int32_T k;
  int32_T nxout;
  int32_T sz_idx_1;
  int32_T vlen;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &bk_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx.size(1) - 1)) {
    if (idx[k] > x.size(2)) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&st, &be_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  st.site = &ck_emlrtRSI;
  b_x.set_size(&ns_emlrtRTEI, &st, x.size(0), x.size(1), x.size(2));
  nxout = x.size(0) * x.size(1) * x.size(2);
  for (sz_idx_1 = 0; sz_idx_1 < nxout; sz_idx_1++) {
    b_x[sz_idx_1] = x[sz_idx_1];
  }
  vlen = x.size(2);
  b_st.site = &dk_emlrtRSI;
  make_bitarray(&b_st, x.size(2), idx, b);
  b_st.site = &ek_emlrtRSI;
  nxout = 0;
  sz_idx_1 = b.size(1);
  c_st.site = &ik_emlrtRSI;
  if (b.size(1) > 2147483646) {
    d_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (k = 0; k < sz_idx_1; k++) {
    nxout += b[k];
  }
  nxout = x.size(2) - nxout;
  sz_idx_1 = x.size(1);
  if (nxout > x.size(2)) {
    emlrtErrorWithMessageIdR2018a(&st, &ae_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nxout < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(nxout), &ge_emlrtDCI, &st);
  }
  x.set_size(&os_emlrtRTEI, &st, x.size(0), sz_idx_1, nxout);
  nxout = b_x.size(0) * b_x.size(1);
  sz_idx_1 = -1;
  iy0 = -1;
  b_st.site = &fk_emlrtRSI;
  if (vlen > 2147483646) {
    c_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < vlen; k++) {
    if ((k + 1 > b.size(1)) || (!b[k])) {
      b_st.site = &gk_emlrtRSI;
      if (nxout > 2147483646) {
        c_st.site = &hb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (int32_T j{0}; j < nxout; j++) {
        x[(iy0 + j) + 1] = b_x[(sz_idx_1 + j) + 1];
      }
      iy0 += nxout;
    }
    sz_idx_1 += nxout;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

} // namespace internal
} // namespace coder

// End of code generation (nullAssignment.cpp)
