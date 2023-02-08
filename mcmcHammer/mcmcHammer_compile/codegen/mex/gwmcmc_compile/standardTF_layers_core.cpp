//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// standardTF_layers_core.cpp
//
// Code generation for function 'standardTF_layers_core'
//

// Include files
#include "standardTF_layers_core.h"
#include "callReflectivity.h"
#include "chiSquared.h"
#include "groupLayers_Mod.h"
#include "gwmcmc_compile_data.h"
#include "makeSLDProfiles.h"
#include "resampleLayers.h"
#include "rt_nonfinite.h"
#include "shiftdata.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRTEInfo ei_emlrtRTEI{
    84,                       // lineNo
    47,                       // colNo
    "standardTF_layers_core", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_layers_core.m" // pName
};

// Function Definitions
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
    coder::array<real_T, 2U> &resamLayers, real_T *chiSq, real_T *ssubs)
{
  coder::array<real_T, 2U> b_data;
  coder::array<real_T, 2U> b_theseLayers_data;
  coder::array<real_T, 2U> layerSld;
  coder::array<real_T, 1U> b_reflect;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //    This is the main reflectivity calculation for all Layers models in the
  //    standard target function.
  //
  //    The function first arranges the
  //    roughness' in the correct order according
  //    to geometry. Then, if required it calculates the SLD profile and if
  //    requested resamples this into a number of zero-roughness layers
  //    (roughness resampling). It the applies any scalefactors and qz shifts
  //    the data requires. This is done before calculating the reflectivity to
  //    ensure that the reflectivity is calculated over the same range in qz as
  //    the shifted datapoints. The main reflectivity calculation is then
  //    called, including the resolution function. The calculation outputs two
  //    profiles - 'reflect' which is the same range as the points, and
  //    'Simulation' which can be a different range to allow extrapolation.
  //    The background correction is the applied, and finally chi-squared is
  //    calculated.
  //
  //  Inputs:
  //    contrastLayers  :
  //    rough           :
  //    geometry        :
  //    nba             :
  //    nbs             :
  //    resample        :
  //    calcSld         :
  //    sf              :
  //    qshift          :
  //    dataPresent     :
  //    data            :
  //    dataLimits      :
  //    simLimits       :
  //    repeatLayers    :
  //    background      :
  //    resol           :
  //    backsType       :
  //    params          :
  //    paralellPoints  :
  //
  //  Outputs:
  //
  //  ------------------------------------------------------------------------
  //
  //        (c) Arwel Hughes  -   12/1/21
  //
  //        Last Modified: 12/1/21 by Arwel Hughes.
  //
  //  ------------------------------------------------------------------------
  //  Bulid up the layers matrix for this contrast
  st.site = &rb_emlrtRSI;
  groupLayers_Mod(&st, contrastLayers_data, contrastLayers_size, rough,
                  geometry, nba, nbs, theseLayers_data, theseLayers_size,
                  ssubs);
  //  Make the SLD profiles.
  //  If resampling is needed, then enforce the calcSLD flag, so as to catch
  //  the error af trying to resample a non-existent profile.
  if ((resample == 1.0) && (calcSld == 0.0)) {
    calcSld = 1.0;
  }
  //  If calc SLD flag is set, then calculate the SLD profile
  if (calcSld == 1.0) {
    b_theseLayers_data.set(&theseLayers_data[0], theseLayers_size[0],
                           theseLayers_size[1]);
    st.site = &sb_emlrtRSI;
    makeSLDProfiles(&st, nba, nbs, b_theseLayers_data, *ssubs, repeatLayers,
                    sldProfile);
  } else {
    sldProfile.set_size(&ai_emlrtRTEI, sp, 1, 2);
    sldProfile[0] = 0.0;
    sldProfile[1] = 0.0;
  }
  //  If required, then resample the SLD
  if (resample == 1.0) {
    st.site = &tb_emlrtRSI;
    resampleLayers(&st, sldProfile, resamPars, layerSld);
    resamLayers.set_size(&di_emlrtRTEI, sp, layerSld.size(0), 3);
    loop_ub = layerSld.size(0) * 3;
    for (int32_T i{0}; i < loop_ub; i++) {
      resamLayers[i] = layerSld[i];
    }
  } else {
    layerSld.set_size(&bi_emlrtRTEI, sp, theseLayers_size[0], 3);
    loop_ub = theseLayers_size[0] * 3;
    for (int32_T i{0}; i < loop_ub; i++) {
      layerSld[i] = theseLayers_data[i];
    }
    resamLayers.set_size(&ci_emlrtRTEI, sp, 1, 3);
    resamLayers[0] = 0.0;
    resamLayers[1] = 0.0;
    resamLayers[2] = 0.0;
  }
  //  Apply scale factors and q shifts to the data
  b_data.set_size(&ei_emlrtRTEI, sp, data.size(0), data.size(1));
  loop_ub = data.size(0) * data.size(1) - 1;
  for (int32_T i{0}; i <= loop_ub; i++) {
    b_data[i] = data[i];
  }
  st.site = &ub_emlrtRSI;
  shiftdata(&st, sf, qshift, dataPresent, b_data, dataLimits, simLimits,
            shifted_dat);
  //  Calculate the reflectivity
  st.site = &vb_emlrtRSI;
  callReflectivity(&st, nba, nbs, simLimits, repeatLayers, shifted_dat,
                   layerSld, *ssubs, resol, reflect, Simul);
  //  Apply background correction, either to the simulation or the data
  st.site = &wb_emlrtRSI;
  if (backsType != static_cast<int32_T>(muDoubleScalarFloor(backsType))) {
    emlrtIntegerCheckR2012b(backsType, &gb_emlrtDCI, &st);
  }
  switch (static_cast<int32_T>(backsType)) {
  case 1:
    // Add background to the simulation
    emlrtSubAssignSizeCheckR2012b(reflect.size(), 1, reflect.size(), 1,
                                  &h_emlrtECI, &st);
    b_reflect.set_size(&fi_emlrtRTEI, &st, reflect.size(0));
    loop_ub = reflect.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reflect[i] = reflect[i + reflect.size(0)] + background;
    }
    loop_ub = b_reflect.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      reflect[i + reflect.size(0)] = b_reflect[i];
    }
    emlrtSubAssignSizeCheckR2012b(Simul.size(), 1, Simul.size(), 1, &i_emlrtECI,
                                  &st);
    b_reflect.set_size(&gi_emlrtRTEI, &st, Simul.size(0));
    loop_ub = Simul.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reflect[i] = Simul[i + Simul.size(0)] + background;
    }
    loop_ub = b_reflect.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      Simul[i + Simul.size(0)] = b_reflect[i];
    }
    break;
  case 2:
    //          %Subtract the background from the data..
    if (shifted_dat.size(1) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, shifted_dat.size(1), &bh_emlrtBCI,
                                    &st);
    }
    emlrtSubAssignSizeCheckR2012b(shifted_dat.size(), 1, shifted_dat.size(), 1,
                                  &j_emlrtECI, &st);
    b_reflect.set_size(&hi_emlrtRTEI, &st, shifted_dat.size(0));
    loop_ub = shifted_dat.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reflect[i] = shifted_dat[i + shifted_dat.size(0)] - background;
    }
    loop_ub = b_reflect.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      shifted_dat[i + shifted_dat.size(0)] = b_reflect[i];
    }
    // shifted_dat(:,3) = shifted_dat(:,3) - backg;
    break;
  }
  //  Calculate chi squared.
  st.site = &xb_emlrtRSI;
  *chiSq = chiSquared(&st, shifted_dat, reflect, params);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

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
    coder::array<real_T, 2U> &resamLayers, real_T *chiSq, real_T *ssubs)
{
  coder::array<real_T, 2U> b_data;
  coder::array<real_T, 2U> layerSld;
  coder::array<real_T, 1U> b_reflect;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //    This is the main reflectivity calculation for all Layers models in the
  //    standard target function.
  //
  //    The function first arranges the
  //    roughness' in the correct order according
  //    to geometry. Then, if required it calculates the SLD profile and if
  //    requested resamples this into a number of zero-roughness layers
  //    (roughness resampling). It the applies any scalefactors and qz shifts
  //    the data requires. This is done before calculating the reflectivity to
  //    ensure that the reflectivity is calculated over the same range in qz as
  //    the shifted datapoints. The main reflectivity calculation is then
  //    called, including the resolution function. The calculation outputs two
  //    profiles - 'reflect' which is the same range as the points, and
  //    'Simulation' which can be a different range to allow extrapolation.
  //    The background correction is the applied, and finally chi-squared is
  //    calculated.
  //
  //  Inputs:
  //    contrastLayers  :
  //    rough           :
  //    geometry        :
  //    nba             :
  //    nbs             :
  //    resample        :
  //    calcSld         :
  //    sf              :
  //    qshift          :
  //    dataPresent     :
  //    data            :
  //    dataLimits      :
  //    simLimits       :
  //    repeatLayers    :
  //    background      :
  //    resol           :
  //    backsType       :
  //    params          :
  //    paralellPoints  :
  //
  //  Outputs:
  //
  //  ------------------------------------------------------------------------
  //
  //        (c) Arwel Hughes  -   12/1/21
  //
  //        Last Modified: 12/1/21 by Arwel Hughes.
  //
  //  ------------------------------------------------------------------------
  //  Bulid up the layers matrix for this contrast
  st.site = &rb_emlrtRSI;
  groupLayers_Mod(&st, contrastLayers, rough, geometry, nba, nbs, theseLayers,
                  ssubs);
  //  Make the SLD profiles.
  //  If resampling is needed, then enforce the calcSLD flag, so as to catch
  //  the error af trying to resample a non-existent profile.
  if ((resample == 1.0) && (calcSld == 0.0)) {
    calcSld = 1.0;
  }
  //  If calc SLD flag is set, then calculate the SLD profile
  if (calcSld == 1.0) {
    st.site = &sb_emlrtRSI;
    makeSLDProfiles(&st, nba, nbs, theseLayers, *ssubs, repeatLayers,
                    sldProfile);
  } else {
    sldProfile.set_size(&ai_emlrtRTEI, sp, 1, 2);
    sldProfile[0] = 0.0;
    sldProfile[1] = 0.0;
  }
  //  If required, then resample the SLD
  if (resample == 1.0) {
    st.site = &tb_emlrtRSI;
    resampleLayers(&st, sldProfile, resamPars, layerSld);
    resamLayers.set_size(&di_emlrtRTEI, sp, layerSld.size(0), 3);
    loop_ub = layerSld.size(0) * 3;
    for (int32_T i{0}; i < loop_ub; i++) {
      resamLayers[i] = layerSld[i];
    }
  } else {
    layerSld.set_size(&bi_emlrtRTEI, sp, theseLayers.size(0), 3);
    loop_ub = theseLayers.size(0) * 3;
    for (int32_T i{0}; i < loop_ub; i++) {
      layerSld[i] = theseLayers[i];
    }
    resamLayers.set_size(&ci_emlrtRTEI, sp, 1, 3);
    resamLayers[0] = 0.0;
    resamLayers[1] = 0.0;
    resamLayers[2] = 0.0;
  }
  //  Apply scale factors and q shifts to the data
  b_data.set_size(&ei_emlrtRTEI, sp, data.size(0), data.size(1));
  loop_ub = data.size(0) * data.size(1) - 1;
  for (int32_T i{0}; i <= loop_ub; i++) {
    b_data[i] = data[i];
  }
  st.site = &ub_emlrtRSI;
  shiftdata(&st, sf, qshift, dataPresent, b_data, dataLimits, simLimits,
            shifted_dat);
  //  Calculate the reflectivity
  st.site = &vb_emlrtRSI;
  callReflectivity(&st, nba, nbs, simLimits, repeatLayers, shifted_dat,
                   layerSld, *ssubs, resol, reflect, Simul);
  //  Apply background correction, either to the simulation or the data
  st.site = &wb_emlrtRSI;
  if (backsType != static_cast<int32_T>(muDoubleScalarFloor(backsType))) {
    emlrtIntegerCheckR2012b(backsType, &gb_emlrtDCI, &st);
  }
  switch (static_cast<int32_T>(backsType)) {
  case 1:
    // Add background to the simulation
    emlrtSubAssignSizeCheckR2012b(reflect.size(), 1, reflect.size(), 1,
                                  &h_emlrtECI, &st);
    b_reflect.set_size(&fi_emlrtRTEI, &st, reflect.size(0));
    loop_ub = reflect.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reflect[i] = reflect[i + reflect.size(0)] + background;
    }
    loop_ub = b_reflect.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      reflect[i + reflect.size(0)] = b_reflect[i];
    }
    emlrtSubAssignSizeCheckR2012b(Simul.size(), 1, Simul.size(), 1, &i_emlrtECI,
                                  &st);
    b_reflect.set_size(&gi_emlrtRTEI, &st, Simul.size(0));
    loop_ub = Simul.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reflect[i] = Simul[i + Simul.size(0)] + background;
    }
    loop_ub = b_reflect.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      Simul[i + Simul.size(0)] = b_reflect[i];
    }
    break;
  case 2:
    //          %Subtract the background from the data..
    if (shifted_dat.size(1) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, shifted_dat.size(1), &bh_emlrtBCI,
                                    &st);
    }
    emlrtSubAssignSizeCheckR2012b(shifted_dat.size(), 1, shifted_dat.size(), 1,
                                  &j_emlrtECI, &st);
    b_reflect.set_size(&hi_emlrtRTEI, &st, shifted_dat.size(0));
    loop_ub = shifted_dat.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reflect[i] = shifted_dat[i + shifted_dat.size(0)] - background;
    }
    loop_ub = b_reflect.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      shifted_dat[i + shifted_dat.size(0)] = b_reflect[i];
    }
    // shifted_dat(:,3) = shifted_dat(:,3) - backg;
    break;
  }
  //  Calculate chi squared.
  st.site = &xb_emlrtRSI;
  *chiSq = chiSquared(&st, shifted_dat, reflect, params);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (standardTF_layers_core.cpp)
