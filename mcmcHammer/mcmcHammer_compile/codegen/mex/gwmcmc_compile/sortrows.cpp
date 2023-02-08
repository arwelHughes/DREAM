//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// sortrows.cpp
//
// Code generation for function 'sortrows'
//

// Include files
#include "sortrows.h"
#include "eml_int_forloop_overflow_check.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "sortLE.h"
#include "coder_array.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo
    fg_emlrtRSI{
        24,         // lineNo
        "sortrows", // fcnName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/"
        "sortrows.m" // pathName
    };

static emlrtRSInfo
    gg_emlrtRSI{
        27,         // lineNo
        "sortrows", // fcnName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/"
        "sortrows.m" // pathName
    };

static emlrtRSInfo
    hg_emlrtRSI{
        28,         // lineNo
        "sortrows", // fcnName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/"
        "sortrows.m" // pathName
    };

static emlrtRSInfo ig_emlrtRSI{
    95,                     // lineNo
    "parseSortrowsOptions", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "parseSortrowsOptions.m" // pathName
};

static emlrtRSInfo
    jg_emlrtRSI{
        82,        // lineNo
        "sortIdx", // fcnName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
    };

static emlrtRSInfo
    kg_emlrtRSI{
        86,        // lineNo
        "sortIdx", // fcnName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
    };

static emlrtRSInfo lg_emlrtRSI{
    57,          // lineNo
    "mergesort", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" // pathName
};

static emlrtRSInfo mg_emlrtRSI{
    58,          // lineNo
    "mergesort", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" // pathName
};

static emlrtRSInfo ng_emlrtRSI{
    85,          // lineNo
    "mergesort", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" // pathName
};

static emlrtRSInfo og_emlrtRSI{
    113,         // lineNo
    "mergesort", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" // pathName
};

static emlrtRSInfo
    rg_emlrtRSI{
        38,                      // lineNo
        "apply_row_permutation", // fcnName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/"
        "sortrows.m" // pathName
    };

static emlrtRSInfo
    sg_emlrtRSI{
        39,                      // lineNo
        "apply_row_permutation", // fcnName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/"
        "sortrows.m" // pathName
    };

static emlrtRSInfo
    tg_emlrtRSI{
        42,                      // lineNo
        "apply_row_permutation", // fcnName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/"
        "sortrows.m" // pathName
    };

static emlrtRTEInfo
    ks_emlrtRTEI{
        27,         // lineNo
        1,          // colNo
        "sortrows", // fName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/"
        "sortrows.m" // pName
    };

static emlrtRTEInfo ls_emlrtRTEI{
    52,          // lineNo
    9,           // colNo
    "mergesort", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" // pName
};

static emlrtRTEInfo
    ms_emlrtRTEI{
        37,         // lineNo
        23,         // colNo
        "sortrows", // fName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/"
        "sortrows.m" // pName
    };

// Function Definitions
namespace coder {
void sortrows(const emlrtStack *sp, ::coder::array<real_T, 2U> &y)
{
  array<real_T, 1U> ycol;
  array<int32_T, 1U> idx;
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T col_data[2];
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T n;
  int32_T qEnd;
  boolean_T b_overflow;
  boolean_T overflow;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &fg_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  col_data[0] = 1;
  col_data[1] = 2;
  st.site = &gg_emlrtRSI;
  n = y.size(0) + 1;
  idx.set_size(&ks_emlrtRTEI, &st, y.size(0));
  i2 = y.size(0);
  for (int32_T pEnd{0}; pEnd < i2; pEnd++) {
    idx[pEnd] = 0;
  }
  if (y.size(0) == 0) {
    b_st.site = &jg_emlrtRSI;
    if (y.size(0) > 2147483646) {
      c_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (int32_T k{0}; k <= n - 2; k++) {
      idx[k] = k + 1;
    }
  } else {
    int32_T k;
    b_st.site = &kg_emlrtRSI;
    iwork.set_size(&ls_emlrtRTEI, &b_st, y.size(0));
    i2 = y.size(0) - 1;
    c_st.site = &lg_emlrtRSI;
    if (y.size(0) - 1 > 2147483645) {
      d_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 1; k <= i2; k += 2) {
      c_st.site = &mg_emlrtRSI;
      if (internal::sortLE(y, col_data, k, k + 1)) {
        idx[k - 1] = k;
        idx[k] = k + 1;
      } else {
        idx[k - 1] = k + 1;
        idx[k] = k;
      }
    }
    if ((y.size(0) & 1) != 0) {
      idx[y.size(0) - 1] = y.size(0);
    }
    i = 2;
    while (i < n - 1) {
      i2 = i << 1;
      j = 1;
      for (int32_T pEnd{i + 1}; pEnd < n; pEnd = qEnd + i) {
        int32_T kEnd;
        int32_T p;
        int32_T q;
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          c_st.site = &ng_emlrtRSI;
          if (internal::sortLE(y, col_data, idx[p - 1], idx[q - 1])) {
            iwork[k] = idx[p - 1];
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                iwork[k] = idx[q - 1];
                q++;
              }
            }
          } else {
            iwork[k] = idx[q - 1];
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                iwork[k] = idx[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        c_st.site = &og_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx[(j + k) - 1] = iwork[k];
        }
        j = qEnd;
      }
      i = i2;
    }
  }
  st.site = &hg_emlrtRSI;
  i2 = y.size(0);
  ycol.set_size(&ms_emlrtRTEI, &st, y.size(0));
  b_st.site = &rg_emlrtRSI;
  overflow = (i2 > 2147483646);
  b_overflow = (i2 > 2147483646);
  for (j = 0; j < 2; j++) {
    b_st.site = &sg_emlrtRSI;
    if (overflow) {
      c_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (i = 0; i < i2; i++) {
      ycol[i] = y[(idx[i] + y.size(0) * j) - 1];
    }
    b_st.site = &tg_emlrtRSI;
    if (b_overflow) {
      c_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (i = 0; i < i2; i++) {
      y[i + y.size(0) * j] = ycol[i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

} // namespace coder

// End of code generation (sortrows.cpp)
