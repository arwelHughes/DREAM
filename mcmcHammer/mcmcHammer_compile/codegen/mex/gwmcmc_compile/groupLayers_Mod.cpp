//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// groupLayers_Mod.cpp
//
// Code generation for function 'groupLayers_Mod'
//

// Include files
#include "groupLayers_Mod.h"
#include "gwmcmc_compile_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstring>
#include <string.h>

// Variable Definitions
static emlrtRSInfo yb_emlrtRSI{
    60,                // lineNo
    "groupLayers_Mod", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pathName
};

static emlrtRSInfo ac_emlrtRSI{
    44,                // lineNo
    "groupLayers_Mod", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pathName
};

static emlrtRSInfo hi_emlrtRSI{
    62,                // lineNo
    "groupLayers_Mod", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pathName
};

static emlrtRSInfo ii_emlrtRSI{
    53,                // lineNo
    "groupLayers_Mod", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pathName
};

static emlrtBCInfo wo_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    79,                // lineNo
    30,                // colNo
    "layers",          // aName
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m", // pName
    0                                // checkKind
};

static emlrtECInfo kb_emlrtECI{
    2,                 // nDims
    45,                // lineNo
    17,                // colNo
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pName
};

static emlrtECInfo lb_emlrtECI{
    2,                 // nDims
    42,                // lineNo
    5,                 // colNo
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pName
};

static emlrtBCInfo xo_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    53,                // lineNo
    48,                // colNo
    "roughs",          // aName
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m", // pName
    0                                // checkKind
};

static emlrtBCInfo yo_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    49,                // lineNo
    34,                // colNo
    "output",          // aName
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ap_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    48,                // lineNo
    35,                // colNo
    "output",          // aName
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m", // pName
    0                                // checkKind
};

static emlrtBCInfo bp_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    87,                // lineNo
    26,                // colNo
    "layers",          // aName
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m", // pName
    0                                // checkKind
};

static emlrtBCInfo cp_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    72,                // lineNo
    35,                // colNo
    "output",          // aName
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m", // pName
    0                                // checkKind
};

static emlrtBCInfo dp_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    73,                // lineNo
    27,                // colNo
    "output",          // aName
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ep_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    79,                // lineNo
    85,                // colNo
    "layers",          // aName
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m", // pName
    0                                // checkKind
};

static emlrtRTEInfo ii_emlrtRTEI{
    60,                // lineNo
    21,                // colNo
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pName
};

static emlrtRTEInfo ji_emlrtRTEI{
    45,                // lineNo
    17,                // colNo
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pName
};

static emlrtRTEInfo ki_emlrtRTEI{
    89,                // lineNo
    5,                 // colNo
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pName
};

static emlrtRTEInfo li_emlrtRTEI{
    87,                // lineNo
    5,                 // colNo
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pName
};

static emlrtRTEInfo do_emlrtRTEI{
    42,                // lineNo
    14,                // colNo
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pName
};

static emlrtRTEInfo eo_emlrtRTEI{
    55,                // lineNo
    21,                // colNo
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pName
};

static emlrtRTEInfo fo_emlrtRTEI{
    53,                // lineNo
    21,                // colNo
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pName
};

static emlrtRTEInfo go_emlrtRTEI{
    62,                // lineNo
    21,                // colNo
    "groupLayers_Mod", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/groupLayers_Mod.m" // pName
};

// Function Definitions
void groupLayers_Mod(const emlrtStack *sp, const real_T allLayers_data[],
                     const int32_T allLayers_size[2], real_T allRoughs,
                     const coder::array<char_T, 2U> &geometry, real_T nbair,
                     real_T nbsubs, real_T outLayers_data[],
                     int32_T outLayers_size[2], real_T *outSsubs)
{
  emlrtStack st;
  real_T layers_data[5];
  int32_T layers_size_idx_0;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  // Arrange layers according to geometry and apply any coverage correction.
  //
  //  USAGE::
  //
  //      [outLayers, outSsubs] =
  //      groupLayers_Mod(allLayers,allRoughs,numberOfContrasts,geometry,nbairs,nbsubs)
  //
  //  INPUTS:
  //
  //      * allLayers =         cell array, one for each contrast. Each cell is
  //      the list of layer values for each contrast.
  //      * allRoughs =         Double of substrate roughness for each contrast.
  //      * numberOfContrasts = double.
  //      * geometry =          'Air / Liquid (or solid)' or 'Solid / Liquid'
  //      * nbairs =            vector of nbair values.
  //      * nbsubs =            vector of nbsub values.
  //
  //      The paratt calculation procedds through the
  //      z,rho,rough stack, and the parameter 'ssub' in
  //      callParatt is the final roughness encountered.
  //
  //      * For air liquid 'ssub' is therefore the substrate roughness.
  //
  //      * For solid liquid, the substrate roughness is the first roughness
  //      encountered, and 'ssub' is then the roughness of the outermost layer
  //
  //  Outputs:
  //
  //      * outLayers = cell array of layers param values for each contrast.
  //
  //      * outSsubs =  vector of substrate roughness values.
  //
  // outLayers = cell(1,numberOfContrasts);
  // outSsubs = zeros(1,numberOfContrasts);
  // for i = 1:numberOfContrasts
  *outSsubs = allRoughs;
  layers_size_idx_0 = static_cast<int8_T>(allLayers_size[0]);
  loop_ub = static_cast<int8_T>(allLayers_size[0]) * 5;
  if (loop_ub - 1 >= 0) {
    std::memset(&layers_data[0], 0,
                static_cast<uint32_T>(loop_ub) * sizeof(real_T));
  }
  if (allLayers_size[0] != 0) {
    real_T this_pcw;
    st.site = &ac_emlrtRSI;
    if (coder::internal::b_strcmp(&st, geometry)) {
      layers_size_idx_0 = 1;
      for (loop_ub = 0; loop_ub < 5; loop_ub++) {
        layers_data[loop_ub] = allLayers_data[loop_ub];
      }
      // s_sub = rsub;
    } else {
      *outSsubs = allLayers_data[allLayers_size[0] * 2];
      layers_size_idx_0 = 1;
      layers_data[0] = allLayers_data[0];
      layers_data[1] = allLayers_data[allLayers_size[0]];
      layers_data[2] = allRoughs;
      layers_data[3] = allLayers_data[allLayers_size[0] * 3];
    }
    // Deal with the %coverage if present
    this_pcw = allLayers_data[allLayers_size[0] * 3];
    if (!muDoubleScalarIsNaN(this_pcw)) {
      real_T d;
      if (allLayers_data[allLayers_size[0] * 4] == 1.0) {
        d = nbair;
      } else {
        d = nbsubs;
      }
      layers_data[1] =
          d * (this_pcw / 100.0) + (1.0 - this_pcw / 100.0) * layers_data[1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //      problem.layers{i} = layers;
  //      problem.ssubs(i) = s_sub;
  if (layers_size_idx_0 != 0) {
    outLayers_size[0] = 1;
    outLayers_size[1] = 3;
    outLayers_data[0] = layers_data[0];
    outLayers_data[1] = layers_data[layers_size_idx_0];
    outLayers_data[2] = layers_data[layers_size_idx_0 * 2];
  } else {
    outLayers_size[0] = 1;
    outLayers_size[1] = 3;
    outLayers_data[0] = 0.0;
    outLayers_data[1] = 0.0;
    outLayers_data[2] = 0.0;
  }
}

void groupLayers_Mod(const emlrtStack *sp,
                     const coder::array<real_T, 2U> &allLayers,
                     real_T allRoughs, const coder::array<char_T, 2U> &geometry,
                     real_T nbair, real_T nbsubs,
                     coder::array<real_T, 2U> &outLayers, real_T *outSsubs)
{
  coder::array<real_T, 2U> layers;
  coder::array<real_T, 1U> roughs;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  // Arrange layers according to geometry and apply any coverage correction.
  //
  //  USAGE::
  //
  //      [outLayers, outSsubs] =
  //      groupLayers_Mod(allLayers,allRoughs,numberOfContrasts,geometry,nbairs,nbsubs)
  //
  //  INPUTS:
  //
  //      * allLayers =         cell array, one for each contrast. Each cell is
  //      the list of layer values for each contrast.
  //      * allRoughs =         Double of substrate roughness for each contrast.
  //      * numberOfContrasts = double.
  //      * geometry =          'Air / Liquid (or solid)' or 'Solid / Liquid'
  //      * nbairs =            vector of nbair values.
  //      * nbsubs =            vector of nbsub values.
  //
  //      The paratt calculation procedds through the
  //      z,rho,rough stack, and the parameter 'ssub' in
  //      callParatt is the final roughness encountered.
  //
  //      * For air liquid 'ssub' is therefore the substrate roughness.
  //
  //      * For solid liquid, the substrate roughness is the first roughness
  //      encountered, and 'ssub' is then the roughness of the outermost layer
  //
  //  Outputs:
  //
  //      * outLayers = cell array of layers param values for each contrast.
  //
  //      * outSsubs =  vector of substrate roughness values.
  //
  // outLayers = cell(1,numberOfContrasts);
  // outSsubs = zeros(1,numberOfContrasts);
  // for i = 1:numberOfContrasts
  *outSsubs = allRoughs;
  layers.set_size(&do_emlrtRTEI, sp, allLayers.size(0), allLayers.size(1));
  loop_ub = allLayers.size(0) * allLayers.size(1);
  for (i = 0; i < loop_ub; i++) {
    layers[i] = 0.0;
  }
  if (allLayers.size(1) > 5) {
    emlrtDimSizeGeqCheckR2012b(5, allLayers.size(1), &lb_emlrtECI,
                               (emlrtCTX)sp);
  }
  if ((allLayers.size(0) != 0) && (allLayers.size(1) != 0)) {
    st.site = &ac_emlrtRSI;
    if (coder::internal::b_strcmp(&st, geometry)) {
      if (allLayers.size(1) > 5) {
        emlrtDimSizeGeqCheckR2012b(5, allLayers.size(1), &kb_emlrtECI,
                                   (emlrtCTX)sp);
      }
      layers.set_size(&ji_emlrtRTEI, sp, allLayers.size(0), allLayers.size(1));
      loop_ub = allLayers.size(0) * allLayers.size(1);
      for (i = 0; i < loop_ub; i++) {
        layers[i] = allLayers[i];
      }
      // s_sub = rsub;
    } else {
      if (allLayers.size(1) < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, allLayers.size(1), &ap_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (allLayers.size(1) < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, allLayers.size(1), &yo_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      *outSsubs = allLayers[(allLayers.size(0) + allLayers.size(0) * 2) - 1];
      if (allLayers.size(0) > 1) {
        int32_T iv[2];
        if (allLayers.size(0) - 1 > allLayers.size(0)) {
          emlrtDynamicBoundsCheckR2012b(allLayers.size(0) - 1, 1,
                                        allLayers.size(0), &xo_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        iv[0] = 1;
        iv[1] = allLayers.size(0) - 1;
        st.site = &ii_emlrtRSI;
        coder::internal::indexShapeCheck(&st, allLayers.size(0), iv);
        roughs.set_size(&fo_emlrtRTEI, sp, allLayers.size(0));
        roughs[0] = allRoughs;
        loop_ub = allLayers.size(0);
        for (i = 0; i <= loop_ub - 2; i++) {
          roughs[i + 1] = allLayers[i + allLayers.size(0) * 2];
        }
      } else {
        roughs.set_size(&eo_emlrtRTEI, sp, 1);
        roughs[0] = allRoughs;
      }
      if (allLayers.size(1) == 5) {
        st.site = &yb_emlrtRSI;
        b_st.site = &hc_emlrtRSI;
        c_st.site = &ic_emlrtRSI;
        if (roughs.size(0) != allLayers.size(0)) {
          emlrtErrorWithMessageIdR2018a(
              &c_st, &jb_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
        }
        layers.set_size(&ii_emlrtRTEI, sp, allLayers.size(0), 4);
        loop_ub = allLayers.size(0);
        for (i = 0; i < loop_ub; i++) {
          layers[i] = allLayers[i];
        }
        loop_ub = allLayers.size(0);
        for (i = 0; i < loop_ub; i++) {
          layers[i + layers.size(0)] = allLayers[i + allLayers.size(0)];
        }
        loop_ub = roughs.size(0);
        for (i = 0; i < loop_ub; i++) {
          layers[i + layers.size(0) * 2] = roughs[i];
        }
        loop_ub = allLayers.size(0);
        for (i = 0; i < loop_ub; i++) {
          layers[i + layers.size(0) * 3] = allLayers[i + allLayers.size(0) * 3];
        }
      } else {
        st.site = &hi_emlrtRSI;
        b_st.site = &hc_emlrtRSI;
        c_st.site = &ic_emlrtRSI;
        if (roughs.size(0) != allLayers.size(0)) {
          emlrtErrorWithMessageIdR2018a(
              &c_st, &jb_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
        }
        layers.set_size(&go_emlrtRTEI, sp, allLayers.size(0), 3);
        loop_ub = allLayers.size(0);
        for (i = 0; i < loop_ub; i++) {
          layers[i] = allLayers[i];
        }
        loop_ub = allLayers.size(0);
        for (i = 0; i < loop_ub; i++) {
          layers[i + layers.size(0)] = allLayers[i + allLayers.size(0)];
        }
        loop_ub = roughs.size(0);
        for (i = 0; i < loop_ub; i++) {
          layers[i + layers.size(0) * 2] = roughs[i];
        }
      }
    }
    // Deal with the %coverage if present
    if (allLayers.size(1) == 5) {
      i = allLayers.size(0);
      for (loop_ub = 0; loop_ub < i; loop_ub++) {
        real_T pc_add;
        real_T this_pcw;
        if (loop_ub + 1 > allLayers.size(0)) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, allLayers.size(0),
                                        &cp_emlrtBCI, (emlrtConstCTX)sp);
        }
        this_pcw = allLayers[loop_ub + allLayers.size(0) * 3];
        if (loop_ub + 1 > allLayers.size(0)) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, allLayers.size(0),
                                        &dp_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (allLayers[loop_ub + allLayers.size(0) * 4] == 1.0) {
          pc_add = nbair;
        } else {
          pc_add = nbsubs;
        }
        if (!muDoubleScalarIsNaN(this_pcw)) {
          if (layers.size(1) < 2) {
            emlrtDynamicBoundsCheckR2012b(2, 1, layers.size(1), &wo_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (loop_ub + 1 > layers.size(0)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, layers.size(0),
                                          &ep_emlrtBCI, (emlrtConstCTX)sp);
          }
          layers[loop_ub + layers.size(0)] =
              pc_add * (this_pcw / 100.0) +
              (1.0 - this_pcw / 100.0) * layers[loop_ub + layers.size(0)];
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    }
  }
  //      problem.layers{i} = layers;
  //      problem.ssubs(i) = s_sub;
  if ((layers.size(0) != 0) && (layers.size(1) != 0)) {
    outLayers.set_size(&li_emlrtRTEI, sp, layers.size(0), 3);
    loop_ub = layers.size(0);
    for (i = 0; i < 3; i++) {
      for (int32_T i1{0}; i1 < loop_ub; i1++) {
        if (i + 1 > layers.size(1)) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, layers.size(1), &bp_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        outLayers[i1 + outLayers.size(0) * i] = layers[i1 + layers.size(0) * i];
      }
    }
  } else {
    outLayers.set_size(&ki_emlrtRTEI, sp, 1, 3);
    outLayers[0] = 0.0;
    outLayers[1] = 0.0;
    outLayers[2] = 0.0;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (groupLayers_Mod.cpp)
