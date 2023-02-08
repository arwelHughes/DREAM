//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// allocateLayersForContrast.cpp
//
// Code generation for function 'allocateLayersForContrast'
//

// Include files
#include "allocateLayersForContrast.h"
#include "gwmcmc_compile_internal_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtDCInfo fb_emlrtDCI{
    16,                          // lineNo
    44,                          // colNo
    "allocateLayersForContrast", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/allocateLayersForContrast.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo ah_emlrtBCI{
    0,                           // iFirst
    0,                           // iLast
    16,                          // lineNo
    44,                          // colNo
    "outParameterisedLayers",    // aName
    "allocateLayersForContrast", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "groupLayers/allocateLayersForContrast.m", // pName
    0                                          // checkKind
};

// Function Definitions
void allocateLayersForContrast(const emlrtStack *sp, real_T contrastLayers,
                               const cell_wrap_15 outParameterisedLayers,
                               real_T thisContrastLayers_data[],
                               int32_T thisContrastLayers_size[2])
{
  //  Decide which layers are needed for a particular contrast.
  //  This function takes the master array of all layers
  //  and extracts which parameters are required for
  //  a particular contrast.
  //
  //  INPUTS:
  //      outParameterisedLayers - List of all the available layers
  //      thisContrastLayers     - Array detailing which layers are required for
  //      this contrast
  thisContrastLayers_size[0] = 1;
  thisContrastLayers_size[1] = 5;
  for (int32_T j{0}; j < 5; j++) {
    thisContrastLayers_data[j] = 0.0;
  }
  if (contrastLayers != 0.0) {
    if (contrastLayers !=
        static_cast<int32_T>(muDoubleScalarFloor(contrastLayers))) {
      emlrtIntegerCheckR2012b(contrastLayers, &fb_emlrtDCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(contrastLayers) - 1 < 0) ||
        (static_cast<int32_T>(contrastLayers) - 1 > 0)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(contrastLayers) - 1, 0,
                                    0, &ah_emlrtBCI, (emlrtConstCTX)sp);
    }
    for (int32_T j{0}; j < 5; j++) {
      thisContrastLayers_data[j] = outParameterisedLayers.f1[j];
    }
  } else {
    thisContrastLayers_size[0] = 0;
    thisContrastLayers_size[1] = 5;
  }
}

// End of code generation (allocateLayersForContrast.cpp)
