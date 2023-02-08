//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// loopCppCustlayWrapper_CustLaypoints.cpp
//
// Code generation for function 'loopCppCustlayWrapper_CustLaypoints'
//

// Include files
#include "loopCppCustlayWrapper_CustLaypoints.h"
#include "eml_int_forloop_overflow_check.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "gwmcmc_compile_mexutil.h"
#include "gwmcmc_compile_types.h"
#include "rmmissing.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo ni_emlrtRSI{
    14,                                    // lineNo
    "loopCppCustlayWrapper_CustLaypoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m" // pathName
};

static emlrtRSInfo oi_emlrtRSI{
    15,                                    // lineNo
    "loopCppCustlayWrapper_CustLaypoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m" // pathName
};

static emlrtRSInfo pi_emlrtRSI{
    22,                                    // lineNo
    "loopCppCustlayWrapper_CustLaypoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m" // pathName
};

static emlrtMCInfo e_emlrtMCI{
    27,                                    // lineNo
    13,                                    // colNo
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m" // pName
};

static emlrtDCInfo vc_emlrtDCI{
    6,                                     // lineNo
    22,                                    // colNo
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m", // pName
    1                                                              // checkKind
};

static emlrtRTEInfo xc_emlrtRTEI{
    7,                                     // lineNo
    13,                                    // colNo
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m" // pName
};

static emlrtBCInfo dr_emlrtBCI{
    -1,                                    // iFirst
    -1,                                    // iLast
    8,                                     // lineNo
    19,                                    // colNo
    "allLayers",                           // aName
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo er_emlrtBCI{
    -1,                                    // iFirst
    -1,                                    // iLast
    35,                                    // lineNo
    23,                                    // colNo
    "allLayers",                           // aName
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo fr_emlrtBCI{
    -1,                                    // iFirst
    -1,                                    // iLast
    6,                                     // lineNo
    40,                                    // colNo
    "allLayers",                           // aName
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m", // pName
    0                                                              // checkKind
};

static emlrtDCInfo wc_emlrtDCI{
    13,                                    // lineNo
    5,                                     // colNo
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m", // pName
    1                                                              // checkKind
};

static emlrtBCInfo gr_emlrtBCI{
    -1,                                    // iFirst
    -1,                                    // iLast
    36,                                    // lineNo
    23,                                    // colNo
    "allRoughs",                           // aName
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo hr_emlrtBCI{
    -1,                                    // iFirst
    -1,                                    // iLast
    35,                                    // lineNo
    13,                                    // colNo
    "allLayers",                           // aName
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo ir_emlrtBCI{
    -1,                                    // iFirst
    -1,                                    // iLast
    8,                                     // lineNo
    9,                                     // colNo
    "allLayers",                           // aName
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m", // pName
    0                                                              // checkKind
};

static emlrtRTEInfo cp_emlrtRTEI{
    1,                                     // lineNo
    35,                                    // colNo
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m" // pName
};

static emlrtRTEInfo dp_emlrtRTEI{
    6,                                     // lineNo
    40,                                    // colNo
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m" // pName
};

static emlrtRTEInfo ep_emlrtRTEI{
    13,                                    // lineNo
    5,                                     // colNo
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m" // pName
};

static emlrtRTEInfo fp_emlrtRTEI{
    14,                                    // lineNo
    5,                                     // colNo
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m" // pName
};

static emlrtRTEInfo gp_emlrtRTEI{
    15,                                    // lineNo
    5,                                     // colNo
    "loopCppCustlayWrapper_CustLaypoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m" // pName
};

static emlrtRSInfo uk_emlrtRSI{
    27,                                    // lineNo
    "loopCppCustlayWrapper_CustLaypoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_CustLaypoints.m" // pathName
};

// Function Definitions
void d_loopCppCustlayWrapper_CustLay(const emlrtStack *sp,
                                     const coder::array<real_T, 2U> &nba,
                                     const coder::array<real_T, 2U> &nbs,
                                     real_T numberOfContrasts,
                                     const cell_wrap_4 *customFiles,
                                     const coder::array<real_T, 2U> &params,
                                     coder::array<cell_wrap_25, 1U> &allLayers,
                                     coder::array<real_T, 1U> &allRoughs)
{
  coder::array<char_T, 2U> cLibName;
  coder::array<char_T, 2U> cfunctionName;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *output;
  const mxArray *sRough;
  const mxArray *y;
  int32_T input_sizes[2];
  int32_T i;
  int32_T input_sizes_idx_1;
  int32_T unnamed_idx_0_tmp_tmp;
  uint32_T u;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  output = nullptr;
  sRough = nullptr;
  i = static_cast<int32_T>(muDoubleScalarFloor(numberOfContrasts));
  if (numberOfContrasts != i) {
    emlrtIntegerCheckR2012b(numberOfContrasts, &vc_emlrtDCI, (emlrtConstCTX)sp);
  }
  unnamed_idx_0_tmp_tmp = static_cast<int32_T>(numberOfContrasts);
  allLayers.set_size(&cp_emlrtRTEI, sp, unnamed_idx_0_tmp_tmp);
  for (int32_T i1{0}; i1 < unnamed_idx_0_tmp_tmp; i1++) {
    if (i1 > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, allLayers.size(0) - 1, &fr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i1].f1.size[0] = 0;
    if (i1 > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, allLayers.size(0) - 1, &fr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i1].f1.size[1] = 0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, numberOfContrasts, mxDOUBLE_CLASS,
                                static_cast<int32_T>(numberOfContrasts),
                                &xc_emlrtRTEI, (emlrtConstCTX)sp);
  allLayers.set_size(&dp_emlrtRTEI, sp, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &dr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.size[0] = 2;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &dr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.size[1] = 1;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &dr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.data[0] = 1.0;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &ir_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.data[1] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  if (unnamed_idx_0_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(numberOfContrasts, &wc_emlrtDCI, (emlrtConstCTX)sp);
  }
  allRoughs.set_size(&ep_emlrtRTEI, sp, unnamed_idx_0_tmp_tmp);
  if (unnamed_idx_0_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(numberOfContrasts, &wc_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < unnamed_idx_0_tmp_tmp; i++) {
    allRoughs[i] = 0.0;
  }
  st.site = &ni_emlrtRSI;
  b_st.site = &eg_emlrtRSI;
  c_st.site = &ic_emlrtRSI;
  if ((customFiles->f1[0].f1.size(0) != 1) &&
      ((customFiles->f1[0].f1.size(0) != 0) &&
       (customFiles->f1[0].f1.size(1) != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &jb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((customFiles->f1[0].f1.size(0) != 0) &&
      (customFiles->f1[0].f1.size(1) != 0)) {
    input_sizes[1] = customFiles->f1[0].f1.size(1);
  } else {
    input_sizes[1] = 0;
  }
  cfunctionName.set_size(&fp_emlrtRTEI, &b_st, 1, input_sizes[1] + 1);
  input_sizes_idx_1 = input_sizes[1];
  for (i = 0; i < input_sizes_idx_1; i++) {
    cfunctionName[i] = customFiles->f1[0].f1[i];
  }
  cfunctionName[input_sizes[1]] = '\x00';
  // ; % dll name must be same as function name
  st.site = &oi_emlrtRSI;
  b_st.site = &eg_emlrtRSI;
  c_st.site = &ic_emlrtRSI;
  if ((customFiles->f1[2].f1.size(0) != 1) &&
      ((customFiles->f1[2].f1.size(0) != 0) &&
       (customFiles->f1[2].f1.size(1) != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &jb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((customFiles->f1[2].f1.size(0) != 0) &&
      (customFiles->f1[2].f1.size(1) != 0)) {
    input_sizes_idx_1 = customFiles->f1[2].f1.size(1);
  } else {
    input_sizes_idx_1 = 0;
  }
  cLibName.set_size(&gp_emlrtRTEI, &b_st, 1, input_sizes_idx_1 + 1);
  for (i = 0; i < input_sizes_idx_1; i++) {
    cLibName[i] = customFiles->f1[2].f1[i];
  }
  cLibName[input_sizes_idx_1] = '\x00';
  // customFiles{1}{3};
  //      strLibName = string(LibName);
  //      strfunctionName = string(functionName);
  st.site = &pi_emlrtRSI;
  if (unnamed_idx_0_tmp_tmp > 2147483646) {
    b_st.site = &hb_emlrtRSI;
    coder::check_forloop_overflow_error(&b_st);
  }
  u = static_cast<uint32_T>(unnamed_idx_0_tmp_tmp);
  if (static_cast<uint32_T>(unnamed_idx_0_tmp_tmp) > 2147483647U) {
    u = 2147483647U;
  }
  i = static_cast<int32_T>(u);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    real_T b_output[24];
    real_T output_data[24];
    //  call mex function %
    //  params,nba,nbs,numberOfContrasts,output,subrough,libName,functionName);
    // coder.extrinsic('testDLL_mex');
    y = nullptr;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *static_cast<int32_T *>(emlrtMxGetData(m)) = b_i + 1;
    emlrtAssign(&y, m);
    b_y = nullptr;
    input_sizes[0] = 1;
    input_sizes[1] = cLibName.size(1);
    m = emlrtCreateCharArray(2, &input_sizes[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, cLibName.size(1), m,
                             &cLibName[0]);
    emlrtAssign(&b_y, m);
    c_y = nullptr;
    input_sizes[0] = 1;
    input_sizes[1] = cfunctionName.size(1);
    m = emlrtCreateCharArray(2, &input_sizes[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, cfunctionName.size(1), m,
                             &cfunctionName[0]);
    emlrtAssign(&c_y, m);
    st.site = &uk_emlrtRSI;
    testDLL_mex(&st, emlrt_marshallOut(params), emlrt_marshallOut(nba),
                emlrt_marshallOut(nbs), y, b_y, c_y, &e_emlrtMCI, &output,
                &sRough);
    st.site = &uk_emlrtRSI;
    emlrt_marshallIn(&st, emlrtAlias(output), "output", b_output);
    if (b_i + 1 > allRoughs.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, allRoughs.size(0), &gr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &uk_emlrtRSI;
    allRoughs[b_i] = emlrt_marshallIn(&st, emlrtAlias(sRough), "sRough");
    for (int32_T i1{0}; i1 < 3; i1++) {
      for (input_sizes_idx_1 = 0; input_sizes_idx_1 < 8; input_sizes_idx_1++) {
        output_data[input_sizes_idx_1 + (i1 << 3)] =
            b_output[i1 + 3 * input_sizes_idx_1];
      }
    }
    //  convert to 3 x from top down and transpose
    //  mask the zeros/extremely small positive useless nums or use ...
    // mask = (abs(output) <= 2.6e-100);
    for (input_sizes_idx_1 = 0; input_sizes_idx_1 < 24; input_sizes_idx_1++) {
      real_T d;
      d = output_data[input_sizes_idx_1];
      b_output[input_sizes_idx_1] = d;
      if ((d >= 0.0) && (d <= 2.6E-100)) {
        b_output[input_sizes_idx_1] = rtNaN;
      }
    }
    coder::rmmissing(b_output, output_data, input_sizes);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &er_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.size[0] = input_sizes[0];
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &er_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.size[1] = 3;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &er_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    input_sizes_idx_1 = input_sizes[0] * 3;
    for (int32_T i1{0}; i1 < input_sizes_idx_1; i1++) {
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &hr_emlrtBCI, (emlrtConstCTX)sp);
      }
      allLayers[b_i].f1.data[i1] = output_data[i1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtDestroyArray(&output);
  emlrtDestroyArray(&sRough);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (loopCppCustlayWrapper_CustLaypoints.cpp)
