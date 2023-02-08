//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// gwmcmc_compile_mexutil.cpp
//
// Code generation for function 'gwmcmc_compile_mexutil'
//

// Include files
#include "gwmcmc_compile_mexutil.h"
#include "gwmcmc_compile_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Function Definitions
void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *output,
                        const char_T *identifier, real_T y[16])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(output), &thisId, y);
  emlrtDestroyArray(&output);
}

void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, real_T y[16])
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId,
                        coder::array<real_T, 1U> &ret)
{
  static const int32_T dims{-1};
  int32_T i;
  const boolean_T b{true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, i);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &(ret.data())[0], 8, false);
  emlrtDestroyArray(&src);
}

void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, real_T ret[24])
{
  static const int32_T dims[2]{8, 3};
  real_T(*r)[24];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[24])emlrtMxGetData(src);
  for (int32_T i{0}; i < 24; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, real_T ret[16])
{
  static const int32_T dims[2]{8, 2};
  real_T(*r)[16];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[16])emlrtMxGetData(src);
  for (int32_T i{0}; i < 16; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *output,
                      const char_T *identifier, real_T y[24])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(output), &thisId, y);
  emlrtDestroyArray(&output);
}

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                      const emlrtMsgIdentifier *parentId, real_T y[24])
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *tempAllLayers,
                      const char_T *identifier,
                      coder::array<cell_wrap_26, 1U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(tempAllLayers), &thisId, y);
  emlrtDestroyArray(&tempAllLayers);
}

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                      const emlrtMsgIdentifier *parentId,
                      coder::array<cell_wrap_26, 1U> &y)
{
  emlrtMsgIdentifier thisId;
  int32_T n;
  int32_T sizes;
  char_T str[11];
  boolean_T b;
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  n = -1;
  b = true;
  emlrtCheckVsCell((emlrtCTX)sp, parentId, u, 1U, &n, &b, &sizes);
  y.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, sizes);
  for (n = 0; n < sizes; n++) {
    sprintf(&str[0], "%d", n + 1);
    thisId.fIdentifier = &str[0];
    emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, n)),
                     &thisId, y[n].f1);
  }
  emlrtDestroyArray(&u);
}

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                      const emlrtMsgIdentifier *parentId,
                      coder::array<real_T, 2U> &y)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *tempAllRoughs,
                      const char_T *identifier, coder::array<real_T, 1U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(tempAllRoughs), &thisId, y);
  emlrtDestroyArray(&tempAllRoughs);
}

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                      const emlrtMsgIdentifier *parentId,
                      coder::array<real_T, 1U> &y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *sRough,
                        const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(sRough), &thisId);
  emlrtDestroyArray(&sRough);
  return y;
}

real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T i;
  y = nullptr;
  iv[0] = 1;
  iv[1] = u.size(1);
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(1); b_i++) {
    pData[i] = u[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

const mxArray *emlrt_marshallOut(const emlrtStack *sp, const cell_wrap_4 *u)
{
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  int32_T i;
  y = nullptr;
  i = 1;
  emlrtAssign(&y, emlrtCreateCellArrayR2014a(1, &i));
  b_y = nullptr;
  iv[0] = 1;
  iv[1] = 3;
  emlrtAssign(&b_y, emlrtCreateCellArrayR2014a(2, &iv[0]));
  for (i = 0; i < 3; i++) {
    c_y = nullptr;
    iv[0] = u->f1[i].f1.size(0);
    iv[1] = u->f1[i].f1.size(1);
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp,
                             u->f1[i].f1.size(0) * u->f1[i].f1.size(1), m,
                             &u->f1[i].f1[0]);
    emlrtAssign(&c_y, m);
    emlrtSetCell(b_y, i, c_y);
  }
  emlrtSetCell(y, 0, b_y);
  return y;
}

void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId,
                        coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{10000, 5};
  int32_T iv[2];
  const boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

void feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
           const mxArray *m2, const mxArray *m3, const mxArray *m4,
           const mxArray *m5, const mxArray *m6, const mxArray *m7,
           const mxArray *m8, const mxArray *m9, const mxArray *m10,
           const mxArray *m11, const mxArray *m12, const mxArray *m13,
           const mxArray *m14, const mxArray *m15, const mxArray *m16,
           emlrtMCInfo *location, const mxArray **r, const mxArray **r1)
{
  const mxArray *pArrays[17];
  const mxArray *mv[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  pArrays[2] = m2;
  pArrays[3] = m3;
  pArrays[4] = m4;
  pArrays[5] = m5;
  pArrays[6] = m6;
  pArrays[7] = m7;
  pArrays[8] = m8;
  pArrays[9] = m9;
  pArrays[10] = m10;
  pArrays[11] = m11;
  pArrays[12] = m12;
  pArrays[13] = m13;
  pArrays[14] = m14;
  pArrays[15] = m15;
  pArrays[16] = m16;
  emlrtAssign(r, emlrtCallMATLABR2012b((emlrtConstCTX)sp, 2, &mv[0], 17,
                                       &pArrays[0], "feval", true, location));
  emlrtAssign(r1, mv[1]);
}

void testDLL_mex(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                 const mxArray *m2, const mxArray *m3, const mxArray *m4,
                 const mxArray *m5, emlrtMCInfo *location, const mxArray **r,
                 const mxArray **r1)
{
  const mxArray *pArrays[6];
  const mxArray *mv[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  pArrays[2] = m2;
  pArrays[3] = m3;
  pArrays[4] = m4;
  pArrays[5] = m5;
  emlrtAssign(r, emlrtCallMATLABR2012b((emlrtConstCTX)sp, 2, &mv[0], 6,
                                       &pArrays[0], "testDLL_mex", true,
                                       location));
  emlrtAssign(r1, mv[1]);
}

// End of code generation (gwmcmc_compile_mexutil.cpp)
