//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// backSort.cpp
//
// Code generation for function 'backSort'
//

// Include files
#include "backSort.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtBCInfo tg_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    40,         // lineNo
    27,         // colNo
    "backs",    // aName
    "backSort", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/backSorts/"
    "backSort.m", // pName
    0             // checkKind
};

static emlrtDCInfo y_emlrtDCI{
    40,         // lineNo
    27,         // colNo
    "backSort", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/backSorts/"
    "backSort.m", // pName
    1             // checkKind
};

static emlrtBCInfo ug_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    43,         // lineNo
    29,         // colNo
    "shifts",   // aName
    "backSort", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/backSorts/"
    "backSort.m", // pName
    0             // checkKind
};

static emlrtDCInfo ab_emlrtDCI{
    43,         // lineNo
    29,         // colNo
    "backSort", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/backSorts/"
    "backSort.m", // pName
    1             // checkKind
};

static emlrtBCInfo vg_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    46,         // lineNo
    21,         // colNo
    "sf",       // aName
    "backSort", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/backSorts/"
    "backSort.m", // pName
    0             // checkKind
};

static emlrtDCInfo bb_emlrtDCI{
    46,         // lineNo
    21,         // colNo
    "backSort", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/backSorts/"
    "backSort.m", // pName
    1             // checkKind
};

static emlrtBCInfo wg_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    49,         // lineNo
    23,         // colNo
    "nba",      // aName
    "backSort", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/backSorts/"
    "backSort.m", // pName
    0             // checkKind
};

static emlrtDCInfo cb_emlrtDCI{
    49,         // lineNo
    23,         // colNo
    "backSort", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/backSorts/"
    "backSort.m", // pName
    1             // checkKind
};

static emlrtBCInfo xg_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    52,         // lineNo
    23,         // colNo
    "nbs",      // aName
    "backSort", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/backSorts/"
    "backSort.m", // pName
    0             // checkKind
};

static emlrtDCInfo db_emlrtDCI{
    52,         // lineNo
    23,         // colNo
    "backSort", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/backSorts/"
    "backSort.m", // pName
    1             // checkKind
};

static emlrtBCInfo yg_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    56,         // lineNo
    29,         // colNo
    "res",      // aName
    "backSort", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/backSorts/"
    "backSort.m", // pName
    0             // checkKind
};

static emlrtDCInfo eb_emlrtDCI{
    56,         // lineNo
    29,         // colNo
    "backSort", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/backSorts/"
    "backSort.m", // pName
    1             // checkKind
};

// Function Definitions
void backSort(const emlrtStack *sp, real_T cBacks, real_T cShifts,
              real_T cScales, real_T cNbas, real_T cNbss, real_T cRes,
              const coder::array<real_T, 2U> &backs,
              const coder::array<real_T, 2U> &shifts,
              const coder::array<real_T, 2U> &sf,
              const coder::array<real_T, 2U> &nba,
              const coder::array<real_T, 2U> &nbs,
              const coder::array<real_T, 2U> &res, real_T *backg,
              real_T *qshift, real_T *b_sf, real_T *b_nba, real_T *b_nbs,
              real_T *resol)
{
  //      Distributes the background and shift values among the different
  //      contrasts
  //
  //      USAGE::
  //
  //          [backg,qshift,sf,nba,nbs,resol] =
  //          backsort(cBacks,cShifts,cScales,cNbas,cNbss,cRes,backs,shifts,sf,nba,nbs,res)
  //
  //      INPUTS:
  //         * cBacks  :         Which backround value is associated with each
  //         contrast
  //         * cShifts  :        Which qz_shift value is associated with each
  //         contrast
  //         * cScales  :        Which scalefactor value is associated with each
  //         contrast
  //         * cNbas  :          Which NBa value is associated with each
  //         contrast
  //         * cNbss  :          Which Nbs value is associated with each
  //         contrast
  //         * cRes  :           Which resolution value is associated with each
  //         contrast
  //         * backs  :          List of all background values.
  //         * shifts  :         List of all qz-shift values
  //         * sf :              List of all scalefactor values
  //         * nba :             List of all nba values
  //         * nbs :             List of all nbs values
  //         * res :             List of all resolution values
  //
  //      OUTPUTS:
  //         * backgs : list of actual background values for each contrast
  //         * qshifts : list of actual shift values for each contrast
  //         * sfs : list of actual shift values for each contrast
  //         * nbas : list of actual shift values for each contrast
  //         * nbss : list of actual shift values for each contrast
  //         * nbss : list of actual shift values for each contrast
  //
  // for i = 1:nc
  // thisBack = cBacks(i);
  if (cBacks != static_cast<int32_T>(muDoubleScalarFloor(cBacks))) {
    emlrtIntegerCheckR2012b(cBacks, &y_emlrtDCI, (emlrtConstCTX)sp);
  }
  if ((static_cast<int32_T>(cBacks) < 1) ||
      (static_cast<int32_T>(cBacks) > backs.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(cBacks), 1,
                                  backs.size(1), &tg_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  *backg = backs[static_cast<int32_T>(cBacks) - 1];
  // thisShift = cShifts(i);
  if (cShifts != static_cast<int32_T>(muDoubleScalarFloor(cShifts))) {
    emlrtIntegerCheckR2012b(cShifts, &ab_emlrtDCI, (emlrtConstCTX)sp);
  }
  if ((static_cast<int32_T>(cShifts) < 1) ||
      (static_cast<int32_T>(cShifts) > shifts.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(cShifts), 1,
                                  shifts.size(1), &ug_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  *qshift = shifts[static_cast<int32_T>(cShifts) - 1];
  // thisScale = cScales(i);
  if (cScales != static_cast<int32_T>(muDoubleScalarFloor(cScales))) {
    emlrtIntegerCheckR2012b(cScales, &bb_emlrtDCI, (emlrtConstCTX)sp);
  }
  if ((static_cast<int32_T>(cScales) < 1) ||
      (static_cast<int32_T>(cScales) > sf.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(cScales), 1, sf.size(1),
                                  &vg_emlrtBCI, (emlrtConstCTX)sp);
  }
  *b_sf = sf[static_cast<int32_T>(cScales) - 1];
  // thisNbair = cNbas(i);
  if (cNbas != static_cast<int32_T>(muDoubleScalarFloor(cNbas))) {
    emlrtIntegerCheckR2012b(cNbas, &cb_emlrtDCI, (emlrtConstCTX)sp);
  }
  if ((static_cast<int32_T>(cNbas) < 1) ||
      (static_cast<int32_T>(cNbas) > nba.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(cNbas), 1, nba.size(1),
                                  &wg_emlrtBCI, (emlrtConstCTX)sp);
  }
  *b_nba = nba[static_cast<int32_T>(cNbas) - 1];
  // thisNbsub = cNbss(i);
  if (cNbss != static_cast<int32_T>(muDoubleScalarFloor(cNbss))) {
    emlrtIntegerCheckR2012b(cNbss, &db_emlrtDCI, (emlrtConstCTX)sp);
  }
  if ((static_cast<int32_T>(cNbss) < 1) ||
      (static_cast<int32_T>(cNbss) > nbs.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(cNbss), 1, nbs.size(1),
                                  &xg_emlrtBCI, (emlrtConstCTX)sp);
  }
  *b_nbs = nbs[static_cast<int32_T>(cNbss) - 1];
  // thisResol = cRes(i);
  if (cRes != -1.0) {
    if (cRes != static_cast<int32_T>(muDoubleScalarFloor(cRes))) {
      emlrtIntegerCheckR2012b(cRes, &eb_emlrtDCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(cRes) < 1) ||
        (static_cast<int32_T>(cRes) > res.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(cRes), 1, res.size(1),
                                    &yg_emlrtBCI, (emlrtConstCTX)sp);
    }
    *resol = res[static_cast<int32_T>(cRes) - 1];
  } else {
    *resol = -1.0;
    //  Negative value means we have a data resolution..
  }
  // end
}

// End of code generation (backSort.cpp)
