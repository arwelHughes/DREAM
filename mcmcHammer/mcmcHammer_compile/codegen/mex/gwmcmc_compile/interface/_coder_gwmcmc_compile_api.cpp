//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// _coder_gwmcmc_compile_api.cpp
//
// Code generation for function '_coder_gwmcmc_compile_api'
//

// Include files
#include "_coder_gwmcmc_compile_api.h"
#include "gwmcmc_compile.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_mexutil.h"
#include "gwmcmc_compile_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <string.h>

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[9]);

static struct0_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *p,
                                    const char_T *identifier);

static struct0_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<char_T, 2U> &y);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 1U> &y);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[4]);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static cell_wrap_0 c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                      const emlrtMsgIdentifier *parentId);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[2]);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<char_T, 2U> &ret);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<char_T, 2U> &ret);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[6]);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[9]);

static struct4_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, cell_6 *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *minit,
                             const char_T *identifier,
                             coder::array<real_T, 2U> &y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, cell_5 *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_1 *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct1_T *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_2 *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<char_T, 2U> &y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_4 *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_3 y[3]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *extras,
                             const char_T *identifier, cell_6 *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct2_T *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct3_T *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[6]);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 3U> &u);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[2]);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[4]);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[9])
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static struct0_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *p,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(p), &thisId);
  emlrtDestroyArray(&p);
  return y;
}

static struct0_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[5]{"BurnIn", "Parallel", "ProgressBar",
                                     "StepSize", "ThinChain"};
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 5,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "BurnIn";
  y.BurnIn = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "BurnIn")),
      &thisId);
  thisId.fIdentifier = "Parallel";
  y.Parallel = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "Parallel")),
      &thisId);
  thisId.fIdentifier = "ProgressBar";
  y.ProgressBar =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      2, "ProgressBar")),
                       &thisId);
  thisId.fIdentifier = "StepSize";
  y.StepSize = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "StepSize")),
      &thisId);
  thisId.fIdentifier = "ThinChain";
  y.ThinChain = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "ThinChain")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 1U> &y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<char_T, 2U> &y)
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[2])
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<char_T, 2U> &ret)
{
  static const int32_T dims[2]{1, -1};
  int32_T iv[2];
  const boolean_T bv[2]{false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 1, false);
  emlrtDestroyArray(&src);
}

static cell_wrap_0 c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                      const emlrtMsgIdentifier *parentId)
{
  cell_wrap_0 y;
  emlrtMsgIdentifier thisId;
  int32_T i;
  char_T str[11];
  boolean_T b;
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  i = 1;
  b = false;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 1U, &i, &b);
  sprintf(&str[0], "%d", 1);
  thisId.fIdentifier = &str[0];
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 0)),
                     &thisId, y.f1);
  emlrtDestroyArray(&u);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[4])
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  int32_T i;
  char_T str[11];
  boolean_T b;
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  i = 1;
  b = false;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 1U, &i, &b);
  sprintf(&str[0], "%d", 1);
  thisId.fIdentifier = &str[0];
  y = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 0)), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[6])
{
  static const int32_T dims[2]{1, 6};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 6);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<char_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, -1};
  int32_T iv[2];
  const boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 1, false);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  j_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[9])
{
  static const int32_T dims[2]{1, 9};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 9);
  emlrtDestroyArray(&src);
}

static struct4_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[7]{"params_fitYesNo", "backs_fitYesNo",
                                     "shifts_fitYesNo", "scales_fitYesNo",
                                     "nbairs_fitYesNo", "nbsubs_fitYesNo",
                                     "resol_fitYesNo"};
  emlrtMsgIdentifier thisId;
  struct4_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 7,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "params_fitYesNo";
  y.params_fitYesNo =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      0, "params_fitYesNo")),
                       &thisId);
  thisId.fIdentifier = "backs_fitYesNo";
  y.backs_fitYesNo =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      1, "backs_fitYesNo")),
                       &thisId);
  thisId.fIdentifier = "shifts_fitYesNo";
  y.shifts_fitYesNo =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      2, "shifts_fitYesNo")),
                       &thisId);
  thisId.fIdentifier = "scales_fitYesNo";
  y.scales_fitYesNo =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      3, "scales_fitYesNo")),
                       &thisId);
  thisId.fIdentifier = "nbairs_fitYesNo";
  y.nbairs_fitYesNo =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      4, "nbairs_fitYesNo")),
                       &thisId);
  thisId.fIdentifier = "nbsubs_fitYesNo";
  y.nbsubs_fitYesNo =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      5, "nbsubs_fitYesNo")),
                       &thisId);
  thisId.fIdentifier = "resol_fitYesNo";
  y.resol_fitYesNo =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      6, "resol_fitYesNo")),
                       &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, cell_wrap_2 *y)
{
  emlrtMsgIdentifier thisId;
  int32_T i;
  char_T str[11];
  boolean_T b;
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  i = 1;
  b = false;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 1U, &i, &b);
  sprintf(&str[0], "%d", 1);
  thisId.fIdentifier = &str[0];
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 0)),
                   &thisId, y->f1);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, cell_wrap_1 *y)
{
  emlrtMsgIdentifier thisId;
  int32_T i;
  char_T str[11];
  boolean_T b;
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  i = 1;
  b = false;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 1U, &i, &b);
  sprintf(&str[0], "%d", 1);
  thisId.fIdentifier = &str[0];
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 0)),
                     &thisId, y->f1);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, cell_5 *y)
{
  emlrtMsgIdentifier thisId;
  int32_T iv[2];
  boolean_T bv[2];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  iv[0] = 1;
  bv[0] = false;
  iv[1] = 14;
  bv[1] = false;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 2U, &iv[0], &bv[0]);
  thisId.fIdentifier = "1";
  y->f1[0] = c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 0)), &thisId);
  thisId.fIdentifier = "2";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 1)),
                   &thisId, &y->f2[0]);
  thisId.fIdentifier = "3";
  y->f3[0] = c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 2)), &thisId);
  thisId.fIdentifier = "4";
  y->f4[0] = c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 3)), &thisId);
  thisId.fIdentifier = "5";
  y->f5[0] = d_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 4)), &thisId);
  thisId.fIdentifier = "6";
  y->f6[0] = d_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 5)), &thisId);
  thisId.fIdentifier = "7";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 6)),
                   &thisId, &y->f7[0]);
  thisId.fIdentifier = "8";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 7)),
                   &thisId, &y->f8[0]);
  thisId.fIdentifier = "9";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 8)),
                   &thisId, &y->f9[0]);
  thisId.fIdentifier = "10";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 9)),
                   &thisId, &y->f10[0]);
  thisId.fIdentifier = "11";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 10)),
                   &thisId, &y->f11[0]);
  thisId.fIdentifier = "12";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 11)),
                   &thisId, &y->f12[0]);
  thisId.fIdentifier = "13";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 12)),
                   &thisId, &y->f13[0]);
  thisId.fIdentifier = "14";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 13)),
                   &thisId, &y->f14[0]);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, cell_wrap_4 *y)
{
  emlrtMsgIdentifier thisId;
  int32_T i;
  char_T str[11];
  boolean_T b;
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  i = 1;
  b = false;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 1U, &i, &b);
  sprintf(&str[0], "%d", 1);
  thisId.fIdentifier = &str[0];
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 0)),
                   &thisId, y->f1);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_3 y[3])
{
  emlrtMsgIdentifier thisId;
  int32_T iv[2];
  char_T str[11];
  boolean_T bv[2];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  iv[0] = 1;
  bv[0] = false;
  iv[1] = 3;
  bv[1] = false;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 2U, &iv[0], &bv[0]);
  sprintf(&str[0], "%d", 1);
  thisId.fIdentifier = &str[0];
  b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 0)),
                     &thisId, y[0].f1);
  sprintf(&str[0], "%d", 2);
  thisId.fIdentifier = &str[0];
  b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 1)),
                     &thisId, y[1].f1);
  sprintf(&str[0], "%d", 3);
  thisId.fIdentifier = &str[0];
  b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 2)),
                     &thisId, y[2].f1);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *minit,
                             const char_T *identifier,
                             coder::array<real_T, 2U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(minit), &thisId, y);
  emlrtDestroyArray(&minit);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct1_T *y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[26]{"contrastBacks",
                                      "contrastBacksType",
                                      "TF",
                                      "resample",
                                      "dataPresent",
                                      "numberOfContrasts",
                                      "geometry",
                                      "contrastShifts",
                                      "contrastScales",
                                      "contrastNbas",
                                      "contrastNbss",
                                      "contrastRes",
                                      "backs",
                                      "shifts",
                                      "sf",
                                      "nba",
                                      "nbs",
                                      "res",
                                      "params",
                                      "numberOfLayers",
                                      "modelType",
                                      "contrastCustomFiles",
                                      "fitpars",
                                      "otherpars",
                                      "fitconstr",
                                      "otherconstr"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 26,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "contrastBacks";
  c_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0,
                                                    "contrastBacks")),
                     &thisId, y->contrastBacks);
  thisId.fIdentifier = "contrastBacksType";
  c_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1,
                                                    "contrastBacksType")),
                     &thisId, y->contrastBacksType);
  thisId.fIdentifier = "TF";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "TF")),
      &thisId, y->TF);
  thisId.fIdentifier = "resample";
  c_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "resample")),
      &thisId, y->resample);
  thisId.fIdentifier = "dataPresent";
  c_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4,
                                                    "dataPresent")),
                     &thisId, y->dataPresent);
  thisId.fIdentifier = "numberOfContrasts";
  y->numberOfContrasts =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      5, "numberOfContrasts")),
                       &thisId);
  thisId.fIdentifier = "geometry";
  emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "geometry")),
      &thisId, y->geometry);
  thisId.fIdentifier = "contrastShifts";
  c_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7,
                                                    "contrastShifts")),
                     &thisId, y->contrastShifts);
  thisId.fIdentifier = "contrastScales";
  c_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8,
                                                    "contrastScales")),
                     &thisId, y->contrastScales);
  thisId.fIdentifier = "contrastNbas";
  c_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 9,
                                                    "contrastNbas")),
                     &thisId, y->contrastNbas);
  thisId.fIdentifier = "contrastNbss";
  c_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 10,
                                                    "contrastNbss")),
                     &thisId, y->contrastNbss);
  thisId.fIdentifier = "contrastRes";
  c_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 11,
                                                    "contrastRes")),
                     &thisId, y->contrastRes);
  thisId.fIdentifier = "backs";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 12, "backs")),
      &thisId, y->backs);
  thisId.fIdentifier = "shifts";
  c_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 13, "shifts")),
      &thisId, y->shifts);
  thisId.fIdentifier = "sf";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 14, "sf")),
      &thisId, y->sf);
  thisId.fIdentifier = "nba";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 15, "nba")),
      &thisId, y->nba);
  thisId.fIdentifier = "nbs";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 16, "nbs")),
      &thisId, y->nbs);
  thisId.fIdentifier = "res";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 17, "res")),
      &thisId, y->res);
  thisId.fIdentifier = "params";
  c_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 18, "params")),
      &thisId, y->params);
  thisId.fIdentifier = "numberOfLayers";
  y->numberOfLayers =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      19, "numberOfLayers")),
                       &thisId);
  thisId.fIdentifier = "modelType";
  emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 20, "modelType")),
      &thisId, y->modelType);
  thisId.fIdentifier = "contrastCustomFiles";
  c_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 21,
                                                    "contrastCustomFiles")),
                     &thisId, y->contrastCustomFiles);
  thisId.fIdentifier = "fitpars";
  c_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 22, "fitpars")),
      &thisId, y->fitpars);
  thisId.fIdentifier = "otherpars";
  b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 23, "otherpars")),
      &thisId, y->otherpars);
  thisId.fIdentifier = "fitconstr";
  d_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 24, "fitconstr")),
      &thisId, y->fitconstr);
  thisId.fIdentifier = "otherconstr";
  d_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 25,
                                                    "otherconstr")),
                     &thisId, y->otherconstr);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct2_T *y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[7]{"params", "backs", "scales", "shifts",
                                     "nba",    "nbs",   "res"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 7,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "params";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "params")),
      &thisId, y->params);
  thisId.fIdentifier = "backs";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "backs")),
      &thisId, y->backs);
  thisId.fIdentifier = "scales";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "scales")),
      &thisId, y->scales);
  thisId.fIdentifier = "shifts";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "shifts")),
      &thisId, y->shifts);
  thisId.fIdentifier = "nba";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "nba")),
      &thisId, y->nba);
  thisId.fIdentifier = "nbs";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "nbs")),
      &thisId, y->nbs);
  thisId.fIdentifier = "res";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "res")),
      &thisId, y->res);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct3_T *y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[25]{
      "para",        "proc",        "display",    "tolX",
      "tolFun",      "maxFunEvals", "maxIter",    "populationSize",
      "F_weight",    "F_CR",        "VTR",        "numGen",
      "strategy",    "Nlive",       "nmcmc",      "propScale",
      "nsTolerance", "calcSld",     "repeats",    "nsimu",
      "burnin",      "resamPars",   "updateFreq", "updatePlotFreq",
      "checks"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 25,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "para";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "para")),
      &thisId, y->para);
  thisId.fIdentifier = "proc";
  b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "proc")),
      &thisId, y->proc);
  thisId.fIdentifier = "display";
  c_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "display")),
      &thisId, y->display);
  thisId.fIdentifier = "tolX";
  y->tolX = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "tolX")),
      &thisId);
  thisId.fIdentifier = "tolFun";
  y->tolFun = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "tolFun")),
      &thisId);
  thisId.fIdentifier = "maxFunEvals";
  y->maxFunEvals =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      5, "maxFunEvals")),
                       &thisId);
  thisId.fIdentifier = "maxIter";
  y->maxIter = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "maxIter")),
      &thisId);
  thisId.fIdentifier = "populationSize";
  y->populationSize =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      7, "populationSize")),
                       &thisId);
  thisId.fIdentifier = "F_weight";
  y->F_weight = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "F_weight")),
      &thisId);
  thisId.fIdentifier = "F_CR";
  y->F_CR = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 9, "F_CR")),
      &thisId);
  thisId.fIdentifier = "VTR";
  y->VTR = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 10, "VTR")),
      &thisId);
  thisId.fIdentifier = "numGen";
  y->numGen = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 11, "numGen")),
      &thisId);
  thisId.fIdentifier = "strategy";
  y->strategy = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 12, "strategy")),
      &thisId);
  thisId.fIdentifier = "Nlive";
  y->Nlive = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 13, "Nlive")),
      &thisId);
  thisId.fIdentifier = "nmcmc";
  y->nmcmc = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 14, "nmcmc")),
      &thisId);
  thisId.fIdentifier = "propScale";
  y->propScale = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 15, "propScale")),
      &thisId);
  thisId.fIdentifier = "nsTolerance";
  y->nsTolerance =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      16, "nsTolerance")),
                       &thisId);
  thisId.fIdentifier = "calcSld";
  y->calcSld = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 17, "calcSld")),
      &thisId);
  thisId.fIdentifier = "repeats";
  y->repeats = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 18, "repeats")),
      &thisId);
  thisId.fIdentifier = "nsimu";
  y->nsimu = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 19, "nsimu")),
      &thisId);
  thisId.fIdentifier = "burnin";
  y->burnin = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 20, "burnin")),
      &thisId);
  thisId.fIdentifier = "resamPars";
  c_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 21, "resamPars")),
      &thisId, y->resamPars);
  thisId.fIdentifier = "updateFreq";
  y->updateFreq =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      22, "updateFreq")),
                       &thisId);
  thisId.fIdentifier = "updatePlotFreq";
  y->updatePlotFreq =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                      23, "updatePlotFreq")),
                       &thisId);
  thisId.fIdentifier = "checks";
  y->checks = e_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 24, "checks")),
      &thisId);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, cell_6 *y)
{
  emlrtMsgIdentifier thisId;
  int32_T iv[2];
  boolean_T bv[2];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  iv[0] = 1;
  bv[0] = false;
  iv[1] = 4;
  bv[1] = false;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 2U, &iv[0], &bv[0]);
  thisId.fIdentifier = "1";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 0)),
                   &thisId, &y->f1);
  thisId.fIdentifier = "2";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 1)),
                   &thisId, &y->f2);
  thisId.fIdentifier = "3";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 2)),
                   &thisId, &y->f3);
  thisId.fIdentifier = "4";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 3)),
                   &thisId, &y->f4);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[6])
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *extras,
                             const char_T *identifier, cell_6 *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(extras), &thisId, y);
  emlrtDestroyArray(&extras);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<char_T, 2U> &y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 3U> &u)
{
  static const int32_T iv[3]{0, 0, 0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(3, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &(((coder::array<real_T, 3U> *)&u)->data())[0]);
  emlrtSetDimensions((mxArray *)m, ((coder::array<real_T, 3U> *)&u)->size(), 3);
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[4])
{
  static const int32_T dims[2]{1, 4};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 4);
  emlrtDestroyArray(&src);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[2])
{
  static const int32_T dims[2]{1, 2};
  real_T(*r)[2];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[2])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  emlrtDestroyArray(&src);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, -1};
  int32_T iv[2];
  const boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.prealloc(iv[0] * iv[1]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  ret.set(static_cast<real_T *>(emlrtMxGetData(src)), ret.size(0), ret.size(1));
  emlrtDestroyArray(&src);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{1, -1};
  int32_T iv[2];
  const boolean_T bv[2]{false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, 2};
  int32_T iv[2];
  const boolean_T bv[2]{true, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, 5};
  int32_T iv[2];
  const boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

void gwmcmc_compile_api(const mxArray *const prhs[4], int32_T nlhs,
                        const mxArray *plhs[2])
{
  coder::array<real_T, 3U> logP;
  coder::array<real_T, 3U> models;
  coder::array<real_T, 2U> minit;
  cell_6 extras;
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *prhs_copy_idx_0;
  struct0_T p;
  real_T mccount;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  prhs_copy_idx_0 = emlrtProtectR2012b(prhs[0], 0, false, -1);
  // Marshall function inputs
  minit.no_free();
  emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_0), "minit", minit);
  mccount = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "mccount");
  p = b_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "p");
  emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "extras", &extras);
  // Invoke the target function
  gwmcmc_compile(&st, minit, mccount, &p, &extras, models, logP);
  // Marshall function outputs
  models.no_free();
  plhs[0] = emlrt_marshallOut(models);
  if (nlhs > 1) {
    logP.no_free();
    plhs[1] = emlrt_marshallOut(logP);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_gwmcmc_compile_api.cpp)
