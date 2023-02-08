//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// standardTF_layers_core.h
//
// Code generation for function 'standardTF_layers_core'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void standardTF_layers_core(
    const emlrtStack *sp, const real_T contrastLayers_data[],
    const int32_T contrastLayers_size[2], real_T rough,
    const coder::array<char_T, 2U> &geometry, real_T nba, real_T nbs,
    real_T resample, real_T calcSld, real_T sf, real_T qshift,
    real_T dataPresent, const coder::array<real_T, 2U> &data,
    const real_T dataLimits[2], const real_T simLimits[2],
    const real_T repeatLayers[2], real_T background, real_T resol,
    real_T backsType, real_T params, const real_T resamPars[2],
    coder::array<real_T, 2U> &sldProfile, coder::array<real_T, 2U> &reflect,
    coder::array<real_T, 2U> &Simul, coder::array<real_T, 2U> &shifted_dat,
    real_T theseLayers_data[], int32_T theseLayers_size[2],
    coder::array<real_T, 2U> &resamLayers, real_T *chiSq, real_T *ssubs);

void standardTF_layers_core(
    const emlrtStack *sp, const coder::array<real_T, 2U> &contrastLayers,
    real_T rough, const coder::array<char_T, 2U> &geometry, real_T nba,
    real_T nbs, real_T resample, real_T calcSld, real_T sf, real_T qshift,
    real_T dataPresent, const coder::array<real_T, 2U> &data,
    const real_T dataLimits[2], const real_T simLimits[2],
    const real_T repeatLayers[2], real_T background, real_T resol,
    real_T backsType, real_T params, const real_T resamPars[2],
    coder::array<real_T, 2U> &sldProfile, coder::array<real_T, 2U> &reflect,
    coder::array<real_T, 2U> &Simul, coder::array<real_T, 2U> &shifted_dat,
    coder::array<real_T, 2U> &theseLayers,
    coder::array<real_T, 2U> &resamLayers, real_T *chiSq, real_T *ssubs);

// End of code generation (standardTF_layers_core.h)
