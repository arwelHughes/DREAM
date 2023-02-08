//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// gwmcmc_compile_types.h
//
// Code generation for function 'gwmcmc_compile'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#define MAX_THREADS omp_get_max_threads()

// Type Definitions
struct struct0_T {
  real_T BurnIn;
  real_T Parallel;
  real_T ProgressBar;
  real_T StepSize;
  real_T ThinChain;
};

struct struct4_T {
  real_T params_fitYesNo;
  real_T backs_fitYesNo;
  real_T shifts_fitYesNo;
  real_T scales_fitYesNo;
  real_T nbairs_fitYesNo;
  real_T nbsubs_fitYesNo;
  real_T resol_fitYesNo;
};

struct cell_wrap_0 {
  real_T f1[2];
};

struct struct2_T {
  real_T params[2];
  real_T backs[2];
  real_T scales[2];
  real_T shifts[2];
  real_T nba[2];
  real_T nbs[2];
  real_T res[2];
};

struct struct3_T {
  char_T para[6];
  char_T proc[9];
  char_T display[4];
  real_T tolX;
  real_T tolFun;
  real_T maxFunEvals;
  real_T maxIter;
  real_T populationSize;
  real_T F_weight;
  real_T F_CR;
  real_T VTR;
  real_T numGen;
  real_T strategy;
  real_T Nlive;
  real_T nmcmc;
  real_T propScale;
  real_T nsTolerance;
  real_T calcSld;
  real_T repeats;
  real_T nsimu;
  real_T burnin;
  real_T resamPars[2];
  real_T updateFreq;
  real_T updatePlotFreq;
  struct4_T checks;
};

struct struct1_T {
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

struct cell_wrap_1 {
  coder::array<real_T, 2U> f1;
};

struct cell_wrap_2 {
  coder::array<char_T, 2U> f1;
};

struct cell_wrap_3 {
  coder::array<char_T, 2U> f1;
};

struct cell_wrap_4 {
  cell_wrap_3 f1[3];
};

struct cell_5 {
  cell_wrap_0 f1[1];
  cell_wrap_1 f2[1];
  cell_wrap_0 f3[1];
  cell_wrap_0 f4[1];
  real_T f5[1];
  real_T f6[1];
  cell_wrap_2 f7[1];
  cell_wrap_2 f8[1];
  cell_wrap_2 f9[1];
  cell_wrap_2 f10[1];
  cell_wrap_2 f11[1];
  cell_wrap_2 f12[1];
  cell_wrap_2 f13[1];
  cell_wrap_4 f14[1];
};

struct cell_6 {
  struct1_T f1;
  cell_5 f2;
  struct2_T f3;
  struct3_T f4;
};

struct cell_wrap_26 {
  coder::array<real_T, 2U> f1;
};

// End of code generation (gwmcmc_compile_types.h)
