//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// gwmcmc_compile_internal_types.h
//
// Code generation for function 'gwmcmc_compile'
//

#pragma once

// Include files
#include "gwmcmc_compile_types.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "emlrt.h"

// Type Definitions
struct cell_wrap_15 {
  real_T f1[5];
};

struct struct_T {
  coder::array<real_T, 2U> contrastBacks;
  coder::array<real_T, 2U> contrastBacksType;
  coder::array<char_T, 2U> TF;
  coder::array<real_T, 2U> resample;
  coder::array<real_T, 2U> dataPresent;
  real_T numberOfContrasts;
  coder::array<char_T, 2U> geometry;
  coder::array<real_T, 2U> contrastShifts;
  coder::array<real_T, 2U> contrastScales;
  coder::array<real_T, 2U> contrastNbas;
  coder::array<real_T, 2U> contrastNbss;
  coder::array<real_T, 2U> contrastRes;
  coder::array<real_T, 2U> backs;
  coder::array<real_T, 2U> shifts;
  coder::array<real_T, 2U> sf;
  coder::array<real_T, 2U> nba;
  coder::array<real_T, 2U> nbs;
  coder::array<real_T, 2U> res;
  coder::array<real_T, 2U> params;
  real_T numberOfLayers;
  coder::array<char_T, 2U> modelType;
  coder::array<real_T, 2U> contrastCustomFiles;
  coder::array<real_T, 2U> fitpars;
  coder::array<real_T, 1U> otherpars;
  coder::array<real_T, 2U> fitconstr;
  coder::array<real_T, 2U> otherconstr;
};

struct b_struct_T {
  coder::array<real_T, 1U> all_chis;
  real_T sum_chi;
};

struct c_struct_T {
  coder::array<real_T, 1U> ssubs;
  coder::array<real_T, 1U> backgrounds;
  coder::array<real_T, 1U> qshifts;
  coder::array<real_T, 1U> scalefactors;
  coder::array<real_T, 1U> nbairs;
  coder::array<real_T, 1U> nbsubs;
  coder::array<real_T, 1U> resolutions;
  b_struct_T calculations;
  coder::array<real_T, 1U> allSubRough;
  coder::array<real_T, 2U> resample;
};

struct cell_wrap_10 {
  coder::array<real_T, 2U> f1;
};

struct cell_wrap_11 {
  coder::array<real_T, 2U> f1;
};

struct cell_12 {
  coder::array<cell_wrap_10, 1U> f1;
  coder::array<cell_wrap_10, 1U> f2;
  coder::array<cell_wrap_11, 1U> f3;
  coder::array<cell_wrap_11, 1U> f4;
  coder::array<cell_wrap_10, 1U> f5;
  coder::array<cell_wrap_11, 1U> f6;
};

struct cell_wrap_25 {
  coder::bounded_array<real_T, 5000U, 2U> f1;
};

struct cell_17 {
  coder::array<real_T, 2U> f1;
};

struct rtDesignRangeCheckInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

struct rtRunTimeErrorInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

// End of code generation (gwmcmc_compile_internal_types.h)
