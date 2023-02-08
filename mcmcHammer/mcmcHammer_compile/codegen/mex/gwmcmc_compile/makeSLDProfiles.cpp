//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// makeSLDProfiles.cpp
//
// Code generation for function 'makeSLDProfiles'
//

// Include files
#include "makeSLDProfiles.h"
#include "asymconvstep.h"
#include "eml_int_forloop_overflow_check.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo jc_emlrtRSI{
    12,                // lineNo
    "makeSLDProfiles", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfiles.m" // pathName
};

static emlrtRSInfo kc_emlrtRSI{
    4,                  // lineNo
    "makeSLDProfileXY", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pathName
};

static emlrtRSInfo lc_emlrtRSI{
    11,                 // lineNo
    "makeSLDProfileXY", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pathName
};

static emlrtRSInfo mc_emlrtRSI{
    26,                 // lineNo
    "makeSLDProfileXY", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pathName
};

static emlrtRSInfo nc_emlrtRSI{
    37,                 // lineNo
    "makeSLDProfileXY", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pathName
};

static emlrtRSInfo oc_emlrtRSI{
    42,                 // lineNo
    "makeSLDProfileXY", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pathName
};

static emlrtRSInfo pc_emlrtRSI{
    45,                 // lineNo
    "makeSLDProfileXY", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pathName
};

static emlrtRSInfo qc_emlrtRSI{
    47,                 // lineNo
    "makeSLDProfileXY", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pathName
};

static emlrtRSInfo rc_emlrtRSI{
    48,                 // lineNo
    "makeSLDProfileXY", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pathName
};

static emlrtRSInfo sc_emlrtRSI{
    49,                 // lineNo
    "makeSLDProfileXY", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pathName
};

static emlrtRSInfo tc_emlrtRSI{
    54,                 // lineNo
    "makeSLDProfileXY", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pathName
};

static emlrtRSInfo yd_emlrtRSI{
    112,                // lineNo
    "blockedSummation", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo ae_emlrtRSI{
    173,                // lineNo
    "colMajorFlatIter", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo be_emlrtRSI{
    192,                // lineNo
    "colMajorFlatIter", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo ce_emlrtRSI{
    207,                // lineNo
    "colMajorFlatIter", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo de_emlrtRSI{
    227,                // lineNo
    "colMajorFlatIter", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo ee_emlrtRSI{
    238,                // lineNo
    "colMajorFlatIter", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo ie_emlrtRSI{
    190,             // lineNo
    "unaryMinOrMax", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pathName
};

static emlrtRSInfo je_emlrtRSI{
    901,                    // lineNo
    "maxRealVectorOmitNaN", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pathName
};

static emlrtECInfo k_emlrtECI{
    -1,                 // nDims
    40,                 // lineNo
    5,                  // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pName
};

static emlrtBCInfo ch_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    40,                 // lineNo
    12,                 // colNo
    "Lays",             // aName
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m", // pName
    0                                     // checkKind
};

static emlrtDCInfo hb_emlrtDCI{
    40,                 // lineNo
    12,                 // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m", // pName
    1                                     // checkKind
};

static emlrtECInfo l_emlrtECI{
    -1,                 // nDims
    37,                 // lineNo
    5,                  // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pName
};

static emlrtBCInfo dh_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    37,                 // lineNo
    12,                 // colNo
    "Lays",             // aName
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m", // pName
    0                                     // checkKind
};

static emlrtDCInfo ib_emlrtDCI{
    37,                 // lineNo
    12,                 // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m", // pName
    1                                     // checkKind
};

static emlrtECInfo m_emlrtECI{
    -1,                 // nDims
    27,                 // lineNo
    13,                 // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pName
};

static emlrtBCInfo eh_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    27,                 // lineNo
    20,                 // colNo
    "Lays",             // aName
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo fh_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    33,                 // lineNo
    23,                 // colNo
    "x",                // aName
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo gh_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    16,                 // lineNo
    33,                 // colNo
    "layers",           // aName
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m", // pName
    0                                     // checkKind
};

static emlrtRTEInfo kb_emlrtRTEI{
    13,                 // lineNo
    13,                 // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pName
};

static emlrtDCInfo jb_emlrtDCI{
    7,                  // lineNo
    28,                 // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m", // pName
    1                                     // checkKind
};

static emlrtDCInfo kb_emlrtDCI{
    7,                  // lineNo
    28,                 // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m", // pName
    4                                     // checkKind
};

static emlrtDCInfo lb_emlrtDCI{
    7,                  // lineNo
    5,                  // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m", // pName
    1                                     // checkKind
};

static emlrtDCInfo mb_emlrtDCI{
    7,                  // lineNo
    5,                  // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m", // pName
    4                                     // checkKind
};

static emlrtBCInfo hh_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    15,                 // lineNo
    35,                 // colNo
    "layers",           // aName
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo ih_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    19,                 // lineNo
    39,                 // colNo
    "layers",           // aName
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m", // pName
    0                                     // checkKind
};

static emlrtRTEInfo mi_emlrtRTEI{
    44,                 // lineNo
    5,                  // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pName
};

static emlrtRTEInfo ni_emlrtRTEI{
    44,                 // lineNo
    9,                  // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pName
};

static emlrtRTEInfo oi_emlrtRTEI{
    50,                 // lineNo
    5,                  // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pName
};

static emlrtRTEInfo pi_emlrtRTEI{
    4,                  // lineNo
    23,                 // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pName
};

static emlrtRTEInfo qi_emlrtRTEI{
    6,                  // lineNo
    5,                  // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pName
};

static emlrtRTEInfo ri_emlrtRTEI{
    7,                  // lineNo
    5,                  // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pName
};

static emlrtRTEInfo si_emlrtRTEI{
    146,                // lineNo
    24,                 // colNo
    "blockedSummation", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pName
};

static emlrtRTEInfo ti_emlrtRTEI{
    153,                // lineNo
    23,                 // colNo
    "blockedSummation", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pName
};

static emlrtRTEInfo ui_emlrtRTEI{
    42,                 // lineNo
    11,                 // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pName
};

static emlrtRTEInfo vi_emlrtRTEI{
    42,                 // lineNo
    5,                  // colNo
    "makeSLDProfileXY", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfileXY.m" // pName
};

static emlrtRTEInfo wi_emlrtRTEI{
    12,                // lineNo
    1,                 // colNo
    "makeSLDProfiles", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "makeSLDProfiles/makeSLDProfiles.m" // pName
};

// Function Definitions
void makeSLDProfiles(const emlrtStack *sp, real_T nbair, real_T nbsub,
                     const coder::array<real_T, 2U> &sld, real_T ssub,
                     const real_T repeats[2],
                     coder::array<real_T, 2U> &sldProfile)
{
  coder::array<real_T, 2U> Lays;
  coder::array<real_T, 2U> SLD;
  coder::array<real_T, 2U> airBox;
  coder::array<real_T, 2U> thisBox;
  coder::array<real_T, 2U> x;
  coder::array<real_T, 1U> b_sld;
  coder::array<real_T, 1U> bsum;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  real_T nrepeats;
  int32_T hi;
  int32_T lastBlockLength;
  int32_T xblockoffset;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  xblockoffset = sld.size(0);
  if (repeats[0] == 0.0) {
    nrepeats = 1.0;
  } else {
    nrepeats = repeats[1];
  }
  st.site = &jc_emlrtRSI;
  if (sld.size(0) > 0) {
    real_T lastBoxEdge;
    real_T layerThicks;
    real_T nextLayRough;
    int32_T bvstride;
    int32_T firstBlockLength;
    int32_T nblocks;
    int32_T vstride;
    b_sld.set_size(&pi_emlrtRTEI, &st, sld.size(0));
    hi = sld.size(0);
    for (lastBlockLength = 0; lastBlockLength < hi; lastBlockLength++) {
      b_sld[lastBlockLength] = sld[lastBlockLength];
    }
    b_st.site = &kc_emlrtRSI;
    layerThicks = coder::sum(&b_st, b_sld);
    layerThicks = layerThicks * nrepeats + 150.0;
    if (muDoubleScalarIsNaN(layerThicks)) {
      x.set_size(&qi_emlrtRTEI, &st, 1, 1);
      x[0] = rtNaN;
    } else if (layerThicks < 0.0) {
      x.set_size(&qi_emlrtRTEI, &st, 1, 0);
    } else {
      x.set_size(&qi_emlrtRTEI, &st, 1, static_cast<int32_T>(layerThicks) + 1);
      hi = static_cast<int32_T>(layerThicks);
      for (lastBlockLength = 0; lastBlockLength <= hi; lastBlockLength++) {
        x[lastBlockLength] = lastBlockLength;
      }
    }
    Lays.set_size(&ri_emlrtRTEI, &st, x.size(1), Lays.size(1));
    layerThicks = static_cast<real_T>(sld.size(0)) * nrepeats + 2.0;
    if (!(layerThicks >= 0.0)) {
      emlrtNonNegativeCheckR2012b(layerThicks, &kb_emlrtDCI, &st);
    }
    if (layerThicks != static_cast<int32_T>(muDoubleScalarFloor(layerThicks))) {
      emlrtIntegerCheckR2012b(layerThicks, &jb_emlrtDCI, &st);
    }
    Lays.set_size(&ri_emlrtRTEI, &st, Lays.size(0),
                  static_cast<int32_T>(layerThicks));
    layerThicks = static_cast<real_T>(sld.size(0)) * nrepeats + 2.0;
    if (!(layerThicks >= 0.0)) {
      emlrtNonNegativeCheckR2012b(layerThicks, &mb_emlrtDCI, &st);
    }
    if (layerThicks != static_cast<int32_T>(muDoubleScalarFloor(layerThicks))) {
      emlrtIntegerCheckR2012b(layerThicks, &lb_emlrtDCI, &st);
    }
    hi = x.size(1) * static_cast<int32_T>(layerThicks);
    for (lastBlockLength = 0; lastBlockLength < hi; lastBlockLength++) {
      Lays[lastBlockLength] = 0.0;
    }
    nextLayRough = sld[sld.size(0) * 2];
    b_st.site = &lc_emlrtRSI;
    asymconvstep(&b_st, x, 100.0, 0.0, nextLayRough, nextLayRough, nbair,
                 airBox);
    lastBoxEdge = 50.0;
    lastBlockLength = static_cast<int32_T>(nrepeats);
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, nrepeats, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(nrepeats), &kb_emlrtRTEI,
                                  &st);
    for (vstride = 0; vstride < lastBlockLength; vstride++) {
      for (bvstride = 0; bvstride < xblockoffset; bvstride++) {
        real_T thisLayThick;
        if (bvstride + 1 > sld.size(0)) {
          emlrtDynamicBoundsCheckR2012b(bvstride + 1, 1, sld.size(0),
                                        &hh_emlrtBCI, &st);
        }
        thisLayThick = sld[bvstride];
        if (bvstride + 1 > sld.size(0)) {
          emlrtDynamicBoundsCheckR2012b(bvstride + 1, 1, sld.size(0),
                                        &gh_emlrtBCI, &st);
        }
        if (bvstride + 1 < xblockoffset) {
          if ((static_cast<int32_T>(static_cast<uint32_T>(bvstride) + 2U) <
               1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(bvstride) + 2U) >
               sld.size(0))) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(bvstride) + 2U), 1,
                sld.size(0), &ih_emlrtBCI, &st);
          }
          nextLayRough = sld[(bvstride + sld.size(0) * 2) + 1];
          //              elseif (i == numberOfLayers) && (n < nrepeats)
          //                  nextLayRough = layers(1,3);
        } else {
          nextLayRough = ssub;
        }
        layerThicks = lastBoxEdge + thisLayThick / 2.0;
        b_st.site = &mc_emlrtRSI;
        asymconvstep(&b_st, x, thisLayThick, layerThicks,
                     sld[bvstride + sld.size(0) * 2], nextLayRough,
                     sld[bvstride + sld.size(0)], thisBox);
        firstBlockLength = static_cast<int32_T>(
            (static_cast<real_T>(bvstride) + 1.0) +
            static_cast<real_T>(xblockoffset) *
                ((static_cast<real_T>(vstride) + 1.0) - 1.0));
        if ((firstBlockLength < 1) || (firstBlockLength > Lays.size(1))) {
          emlrtDynamicBoundsCheckR2012b(firstBlockLength, 1, Lays.size(1),
                                        &eh_emlrtBCI, &st);
        }
        emlrtSubAssignSizeCheckR2012b(Lays.size(), 1, thisBox.size(), 2,
                                      &m_emlrtECI, &st);
        hi = Lays.size(0);
        for (nblocks = 0; nblocks < hi; nblocks++) {
          Lays[nblocks + Lays.size(0) * (firstBlockLength - 1)] =
              thisBox[nblocks];
        }
        lastBoxEdge = layerThicks + thisLayThick / 2.0;
        // plot(x,Lays(:,i));
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    // layers(end,3);
    if (x.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(x.size(1), 1, x.size(1), &fh_emlrtBCI, &st);
    }
    layerThicks = static_cast<real_T>(sld.size(0)) * nrepeats + 1.0;
    if (layerThicks != static_cast<int32_T>(muDoubleScalarFloor(layerThicks))) {
      emlrtIntegerCheckR2012b(layerThicks, &ib_emlrtDCI, &st);
    }
    if ((static_cast<int32_T>(layerThicks) < 1) ||
        (static_cast<int32_T>(layerThicks) > Lays.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(layerThicks), 1,
                                    Lays.size(1), &dh_emlrtBCI, &st);
    }
    b_st.site = &nc_emlrtRSI;
    asymconvstep(&b_st, x, (x[x.size(1) - 1] - lastBoxEdge) * 2.0,
                 x[x.size(1) - 1], nextLayRough, ssub, nbsub, thisBox);
    emlrtSubAssignSizeCheckR2012b(Lays.size(), 1, thisBox.size(), 2,
                                  &l_emlrtECI, &st);
    hi = Lays.size(0);
    for (lastBlockLength = 0; lastBlockLength < hi; lastBlockLength++) {
      Lays[lastBlockLength + Lays.size(0) * (static_cast<int32_T>(layerThicks) -
                                             1)] = thisBox[lastBlockLength];
    }
    // plot(x,Lays(:,(numberOfLayers*nrepeats)+1))
    layerThicks = static_cast<real_T>(sld.size(0)) * nrepeats + 2.0;
    if (layerThicks != static_cast<int32_T>(muDoubleScalarFloor(layerThicks))) {
      emlrtIntegerCheckR2012b(layerThicks, &hb_emlrtDCI, &st);
    }
    if ((static_cast<int32_T>(layerThicks) < 1) ||
        (static_cast<int32_T>(layerThicks) > Lays.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(layerThicks), 1,
                                    Lays.size(1), &ch_emlrtBCI, &st);
    }
    emlrtSubAssignSizeCheckR2012b(Lays.size(), 1, airBox.size(), 2, &k_emlrtECI,
                                  &st);
    hi = Lays.size(0);
    for (lastBlockLength = 0; lastBlockLength < hi; lastBlockLength++) {
      Lays[lastBlockLength + Lays.size(0) * (static_cast<int32_T>(layerThicks) -
                                             1)] = airBox[lastBlockLength];
    }
    // plot(x,Lays(:,(numberOfLayers*nrepeats)+2))
    b_st.site = &oc_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    d_st.site = &vc_emlrtRSI;
    e_st.site = &wc_emlrtRSI;
    if ((Lays.size(0) == 0) || (Lays.size(1) == 0)) {
      b_sld.set_size(&ui_emlrtRTEI, &e_st, Lays.size(0));
      hi = Lays.size(0);
      for (lastBlockLength = 0; lastBlockLength < hi; lastBlockLength++) {
        b_sld[lastBlockLength] = 0.0;
      }
    } else {
      int32_T xoffset;
      f_st.site = &yd_emlrtRSI;
      vstride = Lays.size(0);
      bvstride = Lays.size(0) << 10;
      b_sld.set_size(&si_emlrtRTEI, &f_st, Lays.size(0));
      bsum.set_size(&ti_emlrtRTEI, &f_st, Lays.size(0));
      if (Lays.size(1) <= 1024) {
        firstBlockLength = Lays.size(1);
        lastBlockLength = 0;
        nblocks = 1;
      } else {
        firstBlockLength = 1024;
        nblocks =
            static_cast<int32_T>(static_cast<uint32_T>(Lays.size(1)) >> 10);
        lastBlockLength = Lays.size(1) - (nblocks << 10);
        if (lastBlockLength > 0) {
          nblocks++;
        } else {
          lastBlockLength = 1024;
        }
      }
      g_st.site = &ae_emlrtRSI;
      if (Lays.size(0) > 2147483646) {
        h_st.site = &hb_emlrtRSI;
        coder::check_forloop_overflow_error(&h_st);
      }
      for (int32_T xj{0}; xj < vstride; xj++) {
        b_sld[xj] = Lays[xj];
        bsum[xj] = 0.0;
      }
      for (int32_T k{2}; k <= firstBlockLength; k++) {
        xoffset = (k - 1) * vstride;
        g_st.site = &be_emlrtRSI;
        if (vstride > 2147483646) {
          h_st.site = &hb_emlrtRSI;
          coder::check_forloop_overflow_error(&h_st);
        }
        for (int32_T xj{0}; xj < vstride; xj++) {
          b_sld[xj] = b_sld[xj] + Lays[xoffset + xj];
        }
      }
      for (firstBlockLength = 2; firstBlockLength <= nblocks;
           firstBlockLength++) {
        xblockoffset = (firstBlockLength - 1) * bvstride;
        g_st.site = &ce_emlrtRSI;
        if (vstride > 2147483646) {
          h_st.site = &hb_emlrtRSI;
          coder::check_forloop_overflow_error(&h_st);
        }
        for (int32_T xj{0}; xj < vstride; xj++) {
          bsum[xj] = Lays[xblockoffset + xj];
        }
        if (firstBlockLength == nblocks) {
          hi = lastBlockLength;
        } else {
          hi = 1024;
        }
        for (int32_T k{2}; k <= hi; k++) {
          xoffset = xblockoffset + (k - 1) * vstride;
          g_st.site = &de_emlrtRSI;
          for (int32_T xj{0}; xj < vstride; xj++) {
            bsum[xj] = bsum[xj] + Lays[xoffset + xj];
          }
        }
        g_st.site = &ee_emlrtRSI;
        for (int32_T xj{0}; xj < vstride; xj++) {
          b_sld[xj] = b_sld[xj] + bsum[xj];
        }
      }
    }
    SLD.set_size(&vi_emlrtRTEI, &st, b_sld.size(0), 1);
    hi = b_sld.size(0);
    for (lastBlockLength = 0; lastBlockLength < hi; lastBlockLength++) {
      SLD[lastBlockLength] = b_sld[lastBlockLength];
    }
  } else {
    int32_T firstBlockLength;
    x.set_size(&mi_emlrtRTEI, &st, 1, 101);
    for (lastBlockLength = 0; lastBlockLength < 101; lastBlockLength++) {
      x[lastBlockLength] = lastBlockLength;
    }
    b_st.site = &pc_emlrtRSI;
    c_st.site = &fe_emlrtRSI;
    d_st.site = &ge_emlrtRSI;
    e_st.site = &he_emlrtRSI;
    f_st.site = &ie_emlrtRSI;
    g_st.site = &je_emlrtRSI;
    xblockoffset = 0;
    for (int32_T k{0}; k < 100; k++) {
      if (xblockoffset < k + 1) {
        xblockoffset = k + 1;
      }
    }
    b_st.site = &qc_emlrtRSI;
    c_st.site = &fe_emlrtRSI;
    d_st.site = &ge_emlrtRSI;
    e_st.site = &he_emlrtRSI;
    f_st.site = &ie_emlrtRSI;
    g_st.site = &je_emlrtRSI;
    firstBlockLength = 0;
    for (int32_T k{0}; k < 100; k++) {
      if (firstBlockLength < k + 1) {
        firstBlockLength = k + 1;
      }
    }
    Lays.set_size(&ni_emlrtRTEI, &st, 1, 101);
    for (lastBlockLength = 0; lastBlockLength < 101; lastBlockLength++) {
      Lays[lastBlockLength] = lastBlockLength;
    }
    b_st.site = &rc_emlrtRSI;
    asymconvstep(&b_st, Lays, static_cast<real_T>(firstBlockLength), 0.0, ssub,
                 ssub, nbair, airBox);
    Lays.set_size(&ni_emlrtRTEI, &st, 1, 101);
    for (lastBlockLength = 0; lastBlockLength < 101; lastBlockLength++) {
      Lays[lastBlockLength] = lastBlockLength;
    }
    b_st.site = &sc_emlrtRSI;
    asymconvstep(&b_st, Lays, static_cast<real_T>(firstBlockLength),
                 static_cast<real_T>(xblockoffset), ssub, ssub, nbsub, thisBox);
    SLD.set_size(&oi_emlrtRTEI, &st, 1, airBox.size(1));
    hi = airBox.size(1);
    for (lastBlockLength = 0; lastBlockLength < hi; lastBlockLength++) {
      SLD[lastBlockLength] = airBox[lastBlockLength] + thisBox[lastBlockLength];
    }
  }
  // plot(x,SLD)
  b_st.site = &tc_emlrtRSI;
  c_st.site = &hc_emlrtRSI;
  d_st.site = &ic_emlrtRSI;
  if (SLD.size(0) * SLD.size(1) != x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &jb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  xblockoffset = SLD.size(0) * SLD.size(1);
  sldProfile.set_size(&wi_emlrtRTEI, &c_st, x.size(1), 2);
  hi = x.size(1);
  for (lastBlockLength = 0; lastBlockLength < hi; lastBlockLength++) {
    sldProfile[lastBlockLength] = x[lastBlockLength];
  }
  for (lastBlockLength = 0; lastBlockLength < xblockoffset; lastBlockLength++) {
    sldProfile[lastBlockLength + sldProfile.size(0)] = SLD[lastBlockLength];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (makeSLDProfiles.cpp)
