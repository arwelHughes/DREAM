//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// gwmcmc_compile_mexutil.h
//
// Code generation for function 'gwmcmc_compile_mexutil'
//

#pragma once

// Include files
#include "gwmcmc_compile_types.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *output,
                        const char_T *identifier, real_T y[16]);

void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, real_T y[16]);

void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId,
                        coder::array<real_T, 1U> &ret);

void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, real_T ret[24]);

void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, real_T ret[16]);

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *output,
                      const char_T *identifier, real_T y[24]);

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                      const emlrtMsgIdentifier *parentId, real_T y[24]);

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *tempAllLayers,
                      const char_T *identifier,
                      coder::array<cell_wrap_26, 1U> &y);

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                      const emlrtMsgIdentifier *parentId,
                      coder::array<cell_wrap_26, 1U> &y);

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                      const emlrtMsgIdentifier *parentId,
                      coder::array<real_T, 2U> &y);

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *tempAllRoughs,
                      const char_T *identifier, coder::array<real_T, 1U> &y);

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                      const emlrtMsgIdentifier *parentId,
                      coder::array<real_T, 1U> &y);

real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *sRough,
                        const char_T *identifier);

real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId);

const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u);

const mxArray *emlrt_marshallOut(const emlrtStack *sp, const cell_wrap_4 *u);

void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId,
                        coder::array<real_T, 2U> &ret);

real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

void feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
           const mxArray *m2, const mxArray *m3, const mxArray *m4,
           const mxArray *m5, const mxArray *m6, const mxArray *m7,
           const mxArray *m8, const mxArray *m9, const mxArray *m10,
           const mxArray *m11, const mxArray *m12, const mxArray *m13,
           const mxArray *m14, const mxArray *m15, const mxArray *m16,
           emlrtMCInfo *location, const mxArray **r, const mxArray **r1);

void testDLL_mex(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                 const mxArray *m2, const mxArray *m3, const mxArray *m4,
                 const mxArray *m5, emlrtMCInfo *location, const mxArray **r,
                 const mxArray **r1);

// End of code generation (gwmcmc_compile_mexutil.h)
