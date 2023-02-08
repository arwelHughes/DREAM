//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// loopCppCustlayWrapper_XYPoints.cpp
//
// Code generation for function 'loopCppCustlayWrapper_XYPoints'
//

// Include files
#include "loopCppCustlayWrapper_XYPoints.h"
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
static emlrtRSInfo pj_emlrtRSI{
    14,                               // lineNo
    "loopCppCustlayWrapper_XYPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m" // pathName
};

static emlrtRSInfo qj_emlrtRSI{
    15,                               // lineNo
    "loopCppCustlayWrapper_XYPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m" // pathName
};

static emlrtRSInfo rj_emlrtRSI{
    22,                               // lineNo
    "loopCppCustlayWrapper_XYPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m" // pathName
};

static emlrtMCInfo i_emlrtMCI{
    27,                               // lineNo
    13,                               // colNo
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m" // pName
};

static emlrtDCInfo ee_emlrtDCI{
    6,                                // lineNo
    22,                               // colNo
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m", // pName
    1                                                         // checkKind
};

static emlrtRTEInfo xd_emlrtRTEI{
    7,                                // lineNo
    13,                               // colNo
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m" // pName
};

static emlrtBCInfo lx_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    8,                                // lineNo
    19,                               // colNo
    "allLayers",                      // aName
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m", // pName
    0                                                         // checkKind
};

static emlrtBCInfo mx_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    35,                               // lineNo
    23,                               // colNo
    "allLayers",                      // aName
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m", // pName
    0                                                         // checkKind
};

static emlrtBCInfo nx_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    6,                                // lineNo
    40,                               // colNo
    "allLayers",                      // aName
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m", // pName
    0                                                         // checkKind
};

static emlrtDCInfo fe_emlrtDCI{
    13,                               // lineNo
    5,                                // colNo
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m", // pName
    1                                                         // checkKind
};

static emlrtBCInfo ox_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    36,                               // lineNo
    23,                               // colNo
    "allRoughs",                      // aName
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m", // pName
    0                                                         // checkKind
};

static emlrtBCInfo px_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    35,                               // lineNo
    13,                               // colNo
    "allLayers",                      // aName
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m", // pName
    0                                                         // checkKind
};

static emlrtBCInfo qx_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    8,                                // lineNo
    9,                                // colNo
    "allLayers",                      // aName
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m", // pName
    0                                                         // checkKind
};

static emlrtRTEInfo cs_emlrtRTEI{
    1,                                // lineNo
    35,                               // colNo
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m" // pName
};

static emlrtRTEInfo ds_emlrtRTEI{
    6,                                // lineNo
    40,                               // colNo
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m" // pName
};

static emlrtRTEInfo es_emlrtRTEI{
    13,                               // lineNo
    5,                                // colNo
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m" // pName
};

static emlrtRTEInfo fs_emlrtRTEI{
    14,                               // lineNo
    5,                                // colNo
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m" // pName
};

static emlrtRTEInfo gs_emlrtRTEI{
    15,                               // lineNo
    5,                                // colNo
    "loopCppCustlayWrapper_XYPoints", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m" // pName
};

static emlrtRSInfo sk_emlrtRSI{
    27,                               // lineNo
    "loopCppCustlayWrapper_XYPoints", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "loopCppCustlayWrapper/loopCppCustlayWrapper_XYPoints.m" // pathName
};

// Function Definitions
void loopCppCustlayWrapper_XYPoints(const emlrtStack *sp,
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
    emlrtIntegerCheckR2012b(numberOfContrasts, &ee_emlrtDCI, (emlrtConstCTX)sp);
  }
  unnamed_idx_0_tmp_tmp = static_cast<int32_T>(numberOfContrasts);
  allLayers.set_size(&cs_emlrtRTEI, sp, unnamed_idx_0_tmp_tmp);
  for (int32_T i1{0}; i1 < unnamed_idx_0_tmp_tmp; i1++) {
    if (i1 > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, allLayers.size(0) - 1, &nx_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i1].f1.size[0] = 0;
    if (i1 > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, allLayers.size(0) - 1, &nx_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[i1].f1.size[1] = 0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, numberOfContrasts, mxDOUBLE_CLASS,
                                static_cast<int32_T>(numberOfContrasts),
                                &xd_emlrtRTEI, (emlrtConstCTX)sp);
  allLayers.set_size(&ds_emlrtRTEI, sp, unnamed_idx_0_tmp_tmp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp; b_i++) {
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &lx_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.size[0] = 2;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &lx_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.size[1] = 1;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &lx_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.data[0] = 1.0;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &qx_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.data[1] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  if (unnamed_idx_0_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(numberOfContrasts, &fe_emlrtDCI, (emlrtConstCTX)sp);
  }
  allRoughs.set_size(&es_emlrtRTEI, sp, unnamed_idx_0_tmp_tmp);
  if (unnamed_idx_0_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(numberOfContrasts, &fe_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < unnamed_idx_0_tmp_tmp; i++) {
    allRoughs[i] = 0.0;
  }
  st.site = &pj_emlrtRSI;
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
  cfunctionName.set_size(&fs_emlrtRTEI, &b_st, 1, input_sizes[1] + 1);
  input_sizes_idx_1 = input_sizes[1];
  for (i = 0; i < input_sizes_idx_1; i++) {
    cfunctionName[i] = customFiles->f1[0].f1[i];
  }
  cfunctionName[input_sizes[1]] = '\x00';
  // ; % dll name must be same as function name
  st.site = &qj_emlrtRSI;
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
  cLibName.set_size(&gs_emlrtRTEI, &b_st, 1, input_sizes_idx_1 + 1);
  for (i = 0; i < input_sizes_idx_1; i++) {
    cLibName[i] = customFiles->f1[2].f1[i];
  }
  cLibName[input_sizes_idx_1] = '\x00';
  // customFiles{1}{3};
  //      strLibName = string(LibName);
  //      strfunctionName = string(functionName);
  st.site = &rj_emlrtRSI;
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
    real_T b_output[16];
    real_T output_data[16];
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
    st.site = &sk_emlrtRSI;
    testDLL_mex(&st, emlrt_marshallOut(params), emlrt_marshallOut(nba),
                emlrt_marshallOut(nbs), y, b_y, c_y, &i_emlrtMCI, &output,
                &sRough);
    st.site = &sk_emlrtRSI;
    b_emlrt_marshallIn(&st, emlrtAlias(output), "output", b_output);
    if (b_i + 1 > allRoughs.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, allRoughs.size(0), &ox_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &sk_emlrtRSI;
    allRoughs[b_i] = emlrt_marshallIn(&st, emlrtAlias(sRough), "sRough");
    for (int32_T i1{0}; i1 < 2; i1++) {
      for (input_sizes_idx_1 = 0; input_sizes_idx_1 < 8; input_sizes_idx_1++) {
        output_data[input_sizes_idx_1 + (i1 << 3)] =
            b_output[i1 + (input_sizes_idx_1 << 1)];
      }
    }
    //  convert to 3 x from top down and transpose
    //  mask the zeros/extremely small positive useless nums or use ...
    // mask = (abs(output) <= 2.6e-100);
    for (input_sizes_idx_1 = 0; input_sizes_idx_1 < 16; input_sizes_idx_1++) {
      real_T d;
      d = output_data[input_sizes_idx_1];
      b_output[input_sizes_idx_1] = d;
      if ((d >= 0.0) && (d <= 2.6E-100)) {
        b_output[input_sizes_idx_1] = rtNaN;
      }
    }
    coder::b_rmmissing(b_output, output_data, input_sizes);
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &mx_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.size[0] = input_sizes[0];
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &mx_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    allLayers[b_i].f1.size[1] = 2;
    if (b_i > allLayers.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1, &mx_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    input_sizes_idx_1 = input_sizes[0] * 2;
    for (int32_T i1{0}; i1 < input_sizes_idx_1; i1++) {
      if (b_i > allLayers.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allLayers.size(0) - 1,
                                      &px_emlrtBCI, (emlrtConstCTX)sp);
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

// End of code generation (loopCppCustlayWrapper_XYPoints.cpp)
