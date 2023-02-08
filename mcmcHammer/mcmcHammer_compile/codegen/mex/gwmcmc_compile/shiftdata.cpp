//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// shiftdata.cpp
//
// Code generation for function 'shiftdata'
//

// Include files
#include "shiftdata.h"
#include "find.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo ug_emlrtRSI{
    27,          // lineNo
    "shiftdata", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pathName
};

static emlrtRSInfo vg_emlrtRSI{
    34,          // lineNo
    "shiftdata", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pathName
};

static emlrtBCInfo ki_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    20,          // lineNo
    28,          // colNo
    "data",      // aName
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m", // pName
    0              // checkKind
};

static emlrtBCInfo li_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    20,          // lineNo
    16,          // colNo
    "data",      // aName
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m", // pName
    0              // checkKind
};

static emlrtECInfo eb_emlrtECI{
    -1,          // nDims
    20,          // lineNo
    9,           // colNo
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pName
};

static emlrtBCInfo mi_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    21,          // lineNo
    28,          // colNo
    "data",      // aName
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m", // pName
    0              // checkKind
};

static emlrtBCInfo ni_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    21,          // lineNo
    16,          // colNo
    "data",      // aName
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m", // pName
    0              // checkKind
};

static emlrtECInfo fb_emlrtECI{
    -1,          // nDims
    21,          // lineNo
    9,           // colNo
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pName
};

static emlrtBCInfo oi_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    22,          // lineNo
    28,          // colNo
    "data",      // aName
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m", // pName
    0              // checkKind
};

static emlrtBCInfo pi_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    22,          // lineNo
    16,          // colNo
    "data",      // aName
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m", // pName
    0              // checkKind
};

static emlrtECInfo gb_emlrtECI{
    -1,          // nDims
    22,          // lineNo
    9,           // colNo
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pName
};

static emlrtBCInfo qi_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    27,          // lineNo
    32,          // colNo
    "data",      // aName
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m", // pName
    0              // checkKind
};

static emlrtBCInfo ri_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    34,          // lineNo
    31,          // colNo
    "data",      // aName
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m", // pName
    0              // checkKind
};

static emlrtBCInfo si_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    38,          // lineNo
    37,          // colNo
    "data",      // aName
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m", // pName
    0              // checkKind
};

static emlrtBCInfo ti_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    41,          // lineNo
    29,          // colNo
    "data",      // aName
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m", // pName
    0              // checkKind
};

static emlrtBCInfo ui_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    41,          // lineNo
    38,          // colNo
    "data",      // aName
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m", // pName
    0              // checkKind
};

static emlrtDCInfo pb_emlrtDCI{
    15,          // lineNo
    1,           // colNo
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m", // pName
    1              // checkKind
};

static emlrtRTEInfo uk_emlrtRTEI{
    48,          // lineNo
    9,           // colNo
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pName
};

static emlrtRTEInfo vk_emlrtRTEI{
    20,          // lineNo
    21,          // colNo
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pName
};

static emlrtRTEInfo wk_emlrtRTEI{
    21,          // lineNo
    21,          // colNo
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pName
};

static emlrtRTEInfo xk_emlrtRTEI{
    22,          // lineNo
    21,          // colNo
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pName
};

static emlrtRTEInfo yk_emlrtRTEI{
    27,          // lineNo
    25,          // colNo
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pName
};

static emlrtRTEInfo al_emlrtRTEI{
    27,          // lineNo
    9,           // colNo
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pName
};

static emlrtRTEInfo bl_emlrtRTEI{
    34,          // lineNo
    24,          // colNo
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pName
};

static emlrtRTEInfo cl_emlrtRTEI{
    34,          // lineNo
    9,           // colNo
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pName
};

static emlrtRTEInfo dl_emlrtRTEI{
    41,          // lineNo
    9,           // colNo
    "shiftdata", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/shiftData/"
    "shiftdata.m" // pName
};

// Function Definitions
void shiftdata(const emlrtStack *sp, real_T scalefac, real_T horshift,
               real_T dataPresent, coder::array<real_T, 2U> &data,
               const real_T dataLimits[2], const real_T simLimits[2],
               coder::array<real_T, 2U> &shifted_data)
{
  coder::array<real_T, 1U> lowIndex;
  coder::array<int32_T, 1U> ii;
  coder::array<boolean_T, 1U> b_data;
  emlrtStack b_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Shifts the data according to scale factor. If there is no data, makes
  //  x-data over the simulation range.
  //
  //  INPUTS:
  //
  //      * scalefac = problem.scalefactors;
  //      * horshift = problem.qshifts;
  //      * numberOfContrasts = problem.numberOfContrasts;
  //      * dataPresent = problem.dataPresent;
  //      * allData = problem.data;
  //      * dataLimits = problem.dataLimits;
  if (dataPresent != static_cast<int32_T>(muDoubleScalarFloor(dataPresent))) {
    emlrtIntegerCheckR2012b(dataPresent, &pb_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (static_cast<int32_T>(dataPresent) == 1) {
    int32_T b_lowIndex;
    int32_T hiIndex;
    int32_T i;
    int32_T loop_ub;
    if (scalefac == 0.0) {
      scalefac = 1.0E-30;
    }
    if (data.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, data.size(1), &li_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (data.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, data.size(1), &ki_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    emlrtSubAssignSizeCheckR2012b(data.size(), 1, data.size(), 1, &eb_emlrtECI,
                                  (emlrtCTX)sp);
    lowIndex.set_size(&vk_emlrtRTEI, sp, data.size(0));
    loop_ub = data.size(0);
    for (i = 0; i < loop_ub; i++) {
      lowIndex[i] = data[i] + horshift;
    }
    loop_ub = lowIndex.size(0);
    for (i = 0; i < loop_ub; i++) {
      data[i] = lowIndex[i];
    }
    if (data.size(1) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, data.size(1), &ni_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (data.size(1) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, data.size(1), &mi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    lowIndex.set_size(&wk_emlrtRTEI, sp, data.size(0));
    loop_ub = data.size(0);
    for (i = 0; i < loop_ub; i++) {
      lowIndex[i] = data[i + data.size(0)] / scalefac;
    }
    emlrtSubAssignSizeCheckR2012b(data.size(), 1, lowIndex.size(), 1,
                                  &fb_emlrtECI, (emlrtCTX)sp);
    loop_ub = lowIndex.size(0);
    for (i = 0; i < loop_ub; i++) {
      data[i + data.size(0)] = lowIndex[i];
    }
    if (data.size(1) < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, data.size(1), &pi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (data.size(1) < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, data.size(1), &oi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    lowIndex.set_size(&xk_emlrtRTEI, sp, data.size(0));
    loop_ub = data.size(0);
    for (i = 0; i < loop_ub; i++) {
      lowIndex[i] = data[i + data.size(0) * 2] / scalefac;
    }
    emlrtSubAssignSizeCheckR2012b(data.size(), 1, lowIndex.size(), 1,
                                  &gb_emlrtECI, (emlrtCTX)sp);
    loop_ub = lowIndex.size(0);
    for (i = 0; i < loop_ub; i++) {
      data[i + data.size(0) * 2] = lowIndex[i];
    }
    if (data.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, data.size(1), &qi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &ug_emlrtRSI;
    b_data.set_size(&yk_emlrtRTEI, &st, data.size(0));
    loop_ub = data.size(0);
    for (i = 0; i < loop_ub; i++) {
      b_data[i] = (data[i] < dataLimits[0]);
    }
    b_st.site = &xe_emlrtRSI;
    coder::eml_find(&b_st, b_data, ii);
    lowIndex.set_size(&al_emlrtRTEI, &st, ii.size(0));
    loop_ub = ii.size(0);
    for (i = 0; i < loop_ub; i++) {
      lowIndex[i] = ii[i];
    }
    if (lowIndex.size(0) != 0) {
      b_lowIndex = static_cast<int32_T>(lowIndex[lowIndex.size(0) - 1]);
    } else {
      b_lowIndex = 1;
    }
    if (data.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, data.size(1), &ri_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &vg_emlrtRSI;
    b_data.set_size(&bl_emlrtRTEI, &st, data.size(0));
    loop_ub = data.size(0);
    for (i = 0; i < loop_ub; i++) {
      b_data[i] = (data[i] > dataLimits[1]);
    }
    b_st.site = &xe_emlrtRSI;
    coder::eml_find(&b_st, b_data, ii);
    lowIndex.set_size(&cl_emlrtRTEI, &st, ii.size(0));
    loop_ub = ii.size(0);
    for (i = 0; i < loop_ub; i++) {
      lowIndex[i] = ii[i];
    }
    if (lowIndex.size(0) != 0) {
      hiIndex = static_cast<int32_T>(lowIndex[0]);
    } else {
      if (data.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, data.size(1), &si_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      hiIndex = data.size(0);
    }
    if (b_lowIndex > hiIndex) {
      i = 0;
      hiIndex = 0;
    } else {
      if ((b_lowIndex < 1) || (b_lowIndex > data.size(0))) {
        emlrtDynamicBoundsCheckR2012b(b_lowIndex, 1, data.size(0), &ti_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = b_lowIndex - 1;
      if ((hiIndex < 1) || (hiIndex > data.size(0))) {
        emlrtDynamicBoundsCheckR2012b(hiIndex, 1, data.size(0), &ui_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    loop_ub = hiIndex - i;
    shifted_data.set_size(&dl_emlrtRTEI, sp, loop_ub, data.size(1));
    hiIndex = data.size(1);
    for (b_lowIndex = 0; b_lowIndex < hiIndex; b_lowIndex++) {
      for (int32_T i1{0}; i1 < loop_ub; i1++) {
        shifted_data[i1 + shifted_data.size(0) * b_lowIndex] =
            data[(i + i1) + data.size(0) * b_lowIndex];
      }
    }
  } else {
    real_T b_simXData[300];
    real_T simXData[100];
    real_T d2scaled;
    d2scaled = simLimits[0];
    simXData[99] = simLimits[1];
    simXData[0] = simLimits[0];
    if (simLimits[0] == -simLimits[1]) {
      d2scaled = simLimits[1] / 99.0;
      for (int32_T hiIndex{0}; hiIndex < 98; hiIndex++) {
        simXData[hiIndex + 1] =
            (2.0 * (static_cast<real_T>(hiIndex) + 2.0) - 101.0) * d2scaled;
      }
    } else if (((simLimits[0] < 0.0) != (simLimits[1] < 0.0)) &&
               ((muDoubleScalarAbs(simLimits[0]) > 8.9884656743115785E+307) ||
                (muDoubleScalarAbs(simLimits[1]) > 8.9884656743115785E+307))) {
      real_T delta1;
      real_T delta2;
      delta1 = simLimits[0] / 99.0;
      delta2 = simLimits[1] / 99.0;
      for (int32_T hiIndex{0}; hiIndex < 98; hiIndex++) {
        simXData[hiIndex + 1] =
            (d2scaled + delta2 * (static_cast<real_T>(hiIndex) + 1.0)) -
            delta1 * (static_cast<real_T>(hiIndex) + 1.0);
      }
    } else {
      real_T delta1;
      delta1 = (simLimits[1] - simLimits[0]) / 99.0;
      for (int32_T hiIndex{0}; hiIndex < 98; hiIndex++) {
        simXData[hiIndex + 1] =
            d2scaled + (static_cast<real_T>(hiIndex) + 1.0) * delta1;
      }
    }
    for (int32_T i{0}; i < 100; i++) {
      b_simXData[i] = simXData[i];
      b_simXData[i + 100] = 0.0;
      b_simXData[i + 200] = 0.0;
    }
    shifted_data.set_size(&uk_emlrtRTEI, sp, 100, 3);
    for (int32_T i{0}; i < 300; i++) {
      shifted_data[i] = b_simXData[i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (shiftdata.cpp)
