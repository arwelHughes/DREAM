//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// gwmcmc_compile.cpp
//
// Code generation for function 'gwmcmc_compile'
//

// Include files
#include "gwmcmc_compile.h"
#include "all.h"
#include "bsxfun.h"
#include "eml_int_forloop_overflow_check.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "gwmcmc_compile_types.h"
#include "nullAssignment.h"
#include "rand.h"
#include "randn.h"
#include "reflectivity_calculation_wrapper.h"
#include "rt_nonfinite.h"
#include "textOut.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include "omp.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    96,               // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    127,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    154,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    163,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    164,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    176,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    183,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    184,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    185,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    186,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    220,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    222,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    242,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    251,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    254,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo p_emlrtRSI{
    255,              // lineNo
    "gwmcmc_compile", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    315,        // lineNo
    "logPFuns", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo s_emlrtRSI{
    317,        // lineNo
    "logPFuns", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo t_emlrtRSI{
    336,       // lineNo
    "logLike", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    338,       // lineNo
    "logLike", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo v_emlrtRSI{
    340,       // lineNo
    "logLike", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo sj_emlrtRSI{
    384,        // lineNo
    "logPrior", // fcnName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pathName
};

static emlrtRSInfo ak_emlrtRSI{
    17,    // lineNo
    "log", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elfun/log.m" // pathName
};

static emlrtMCInfo emlrtMCI{
    27,      // lineNo
    5,       // colNo
    "error", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/lang/error.m" // pName
};

static emlrtBCInfo emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    154,              // lineNo
    32,               // colNo
    "minit",          // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    159,              // lineNo
    22,               // colNo
    "logP",           // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    163,              // lineNo
    31,               // colNo
    "logP",           // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    142,              // lineNo
    12,               // colNo
    "models",         // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtECInfo emlrtECI{
    -1,               // nDims
    142,              // lineNo
    1,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtBCInfo e_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    173,              // lineNo
    17,               // colNo
    "models",         // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    174,              // lineNo
    18,               // colNo
    "logP",           // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtRTEInfo emlrtRTEI{
    178,              // lineNo
    9,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtECInfo b_emlrtECI{
    2,                // nDims
    185,              // lineNo
    48,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtECInfo c_emlrtECI{
    1,                // nDims
    185,              // lineNo
    19,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtECInfo d_emlrtECI{
    2,                // nDims
    185,              // lineNo
    19,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtBCInfo g_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    220,              // lineNo
    54,               // colNo
    "proposedm",      // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    220,              // lineNo
    70,               // colNo
    "zz",             // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    222,              // lineNo
    69,               // colNo
    "proposedm",      // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    233,              // lineNo
    45,               // colNo
    "proposedm",      // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    233,              // lineNo
    28,               // colNo
    "curm",           // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtECInfo e_emlrtECI{
    -1,               // nDims
    233,              // lineNo
    21,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtBCInfo l_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    233,              // lineNo
    61,               // colNo
    "curlogP",        // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    245,              // lineNo
    16,               // colNo
    "models",         // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtECInfo f_emlrtECI{
    -1,               // nDims
    245,              // lineNo
    5,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtBCInfo n_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    246,              // lineNo
    14,               // colNo
    "logP",           // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtECInfo g_emlrtECI{
    -1,               // nDims
    246,              // lineNo
    5,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo c_emlrtRTEI{
    14,    // lineNo
    9,     // colNo
    "log", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elfun/log.m" // pName
};

static emlrtDCInfo emlrtDCI{
    151,              // lineNo
    25,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    1                   // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    140,              // lineNo
    23,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    1                   // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    140,              // lineNo
    23,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    4                   // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    151,              // lineNo
    1,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    1                   // checkKind
};

static emlrtBCInfo o_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    159,              // lineNo
    18,               // colNo
    "logP",           // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    185,              // lineNo
    55,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    1                   // checkKind
};

static emlrtBCInfo p_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    185,              // lineNo
    55,               // colNo
    "curm",           // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    185,              // lineNo
    26,               // colNo
    "curm",           // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo r_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    220,              // lineNo
    30,               // colNo
    "logrand",        // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    235,              // lineNo
    40,               // colNo
    "reject",         // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo t_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    223,              // lineNo
    42,               // colNo
    "logrand",        // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    223,              // lineNo
    77,               // colNo
    "curlogP",        // aName
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    122,            // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    118,            // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    105,            // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo y_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    101,            // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    88,             // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    84,             // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    70,             // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    66,             // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    53,             // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    49,             // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    37,             // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    33,             // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo ib_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    20,             // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo jb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    16,             // lineNo
    16,             // colNo
    "uppars",       // aName
    "unpackparams", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo kb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    20,                     // lineNo
    55,                     // colNo
    "problemDef.otherpars", // aName
    "unpackparams",         // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    16,                   // lineNo
    53,                   // colNo
    "problemDef.fitpars", // aName
    "unpackparams",       // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo mb_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    377,         // lineNo
    32,          // colNo
    "fitConstr", // aName
    "logPrior",  // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo nb_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    381,        // lineNo
    39,         // colNo
    "m",        // aName
    "logPrior", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo ob_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    381,        // lineNo
    63,         // colNo
    "m",        // aName
    "logPrior", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo pb_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    381,           // lineNo
    17,            // colNo
    "thisLogical", // aName
    "logPrior",    // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m", // pName
    0                   // checkKind
};

static emlrtBCInfo qb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    37,                     // lineNo
    55,                     // colNo
    "problemDef.otherpars", // aName
    "unpackparams",         // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo rb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    33,                   // lineNo
    53,                   // colNo
    "problemDef.fitpars", // aName
    "unpackparams",       // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo sb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    53,                     // lineNo
    55,                     // colNo
    "problemDef.otherpars", // aName
    "unpackparams",         // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo tb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    49,                   // lineNo
    53,                   // colNo
    "problemDef.fitpars", // aName
    "unpackparams",       // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo ub_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    70,                     // lineNo
    55,                     // colNo
    "problemDef.otherpars", // aName
    "unpackparams",         // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo vb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    66,                   // lineNo
    53,                   // colNo
    "problemDef.fitpars", // aName
    "unpackparams",       // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo wb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    88,                     // lineNo
    55,                     // colNo
    "problemDef.otherpars", // aName
    "unpackparams",         // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo xb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    84,                   // lineNo
    53,                   // colNo
    "problemDef.fitpars", // aName
    "unpackparams",       // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo yb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    105,                    // lineNo
    55,                     // colNo
    "problemDef.otherpars", // aName
    "unpackparams",         // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo ac_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    101,                  // lineNo
    53,                   // colNo
    "problemDef.fitpars", // aName
    "unpackparams",       // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo bc_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    122,                    // lineNo
    55,                     // colNo
    "problemDef.otherpars", // aName
    "unpackparams",         // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtBCInfo cc_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    118,                  // lineNo
    53,                   // colNo
    "problemDef.fitpars", // aName
    "unpackparams",       // fName
    "/Users/arwel.hughes/Documents/coding/RAT/minimisers/generalUtils/"
    "unpackparams.m", // pName
    0                 // checkKind
};

static emlrtRTEInfo ce_emlrtRTEI{
    96,               // lineNo
    24,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo de_emlrtRTEI{
    140,              // lineNo
    1,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo ee_emlrtRTEI{
    151,              // lineNo
    1,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo fe_emlrtRTEI{
    154,              // lineNo
    24,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo ge_emlrtRTEI{
    16,      // lineNo
    13,      // colNo
    "isinf", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/isinf.m" // pName
};

static emlrtRTEInfo he_emlrtRTEI{
    16,      // lineNo
    13,      // colNo
    "isnan", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/isnan.m" // pName
};

static emlrtRTEInfo
    ie_emlrtRTEI{
        14,         // lineNo
        5,          // colNo
        "isfinite", // fName
        "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/"
        "isfinite.m" // pName
    };

static emlrtRTEInfo je_emlrtRTEI{
    168,              // lineNo
    1,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo ke_emlrtRTEI{
    173,              // lineNo
    1,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo le_emlrtRTEI{
    174,              // lineNo
    1,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo me_emlrtRTEI{
    140,              // lineNo
    8,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo ne_emlrtRTEI{
    28,      // lineNo
    9,       // colNo
    "colon", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/colon.m" // pName
};

static emlrtRTEInfo oe_emlrtRTEI{
    31,            // lineNo
    30,            // colNo
    "unsafeSxfun", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unsafeSxfun.m" // pName
};

static emlrtRTEInfo pe_emlrtRTEI{
    184,              // lineNo
    9,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo qe_emlrtRTEI{
    185,              // lineNo
    55,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo re_emlrtRTEI{
    185,              // lineNo
    48,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo te_emlrtRTEI{
    185,              // lineNo
    9,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo ue_emlrtRTEI{
    222,              // lineNo
    57,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo ve_emlrtRTEI{
    254,              // lineNo
    16,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo we_emlrtRTEI{
    255,              // lineNo
    14,               // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo ye_emlrtRTEI{
    374,              // lineNo
    1,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo af_emlrtRTEI{
    335,              // lineNo
    1,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo bf_emlrtRTEI{
    336,              // lineNo
    1,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRTEInfo cf_emlrtRTEI{
    338,              // lineNo
    1,                // colNo
    "gwmcmc_compile", // fName
    "/Users/arwel.hughes/Documents/coding/DREAM/mcmcHammer/mcmcHammer_compile/"
    "gwmcmc_compile.m" // pName
};

static emlrtRSInfo nk_emlrtRSI{
    27,      // lineNo
    "error", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/lang/error.m" // pathName
};

// Function Declarations
static void b_error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location);

static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location);

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2,
                             const coder::array<real_T, 1U> &in3,
                             const coder::array<real_T, 2U> &in4);

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2,
                             const coder::array<real_T, 1U> &in3);

static real_T logPFuns(const emlrtStack *sp, real_T which,
                       const coder::array<real_T, 1U> &in,
                       const struct1_T *extras_f1, const cell_5 *extras_f2,
                       const struct3_T *extras_f4);

// Function Definitions
static void b_error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, nullptr, 2, &pArrays[0], "error",
                        true, location);
}

static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, nullptr, 1, &pArray, "error",
                        true, location);
}

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2,
                             const coder::array<real_T, 1U> &in3,
                             const coder::array<real_T, 2U> &in4)
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in4.size(0) == 1) {
    i = in2.size(0);
  } else {
    i = in4.size(0);
  }
  if (in4.size(1) == 1) {
    i1 = in3.size(0);
  } else {
    i1 = in4.size(1);
  }
  in1.set_size(&te_emlrtRTEI, sp, i, i1);
  stride_0_0 = (in2.size(0) != 1);
  stride_0_1 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  stride_1_1 = (in4.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in4.size(1) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T b_loop_ub;
    i1 = in4.size(0);
    if (i1 == 1) {
      b_loop_ub = in2.size(0);
    } else {
      b_loop_ub = i1;
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] =
          in2[i1 * stride_0_0 +
              in2.size(0) * (static_cast<int32_T>(in3[aux_0_1]) - 1)] -
          in4[i1 * stride_1_0 + in4.size(0) * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2,
                             const coder::array<real_T, 1U> &in3)
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in2.size(1) == 1) {
    i = in3.size(0);
  } else {
    i = in2.size(1);
  }
  in1.set_size(&re_emlrtRTEI, sp, in2.size(0), i);
  stride_0_0 = (in2.size(0) != 1);
  stride_0_1 = (in3.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  stride_1_1 = (in2.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in2.size(1) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in2.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T b_loop_ub;
    b_loop_ub = in2.size(0);
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] =
          in2[i1 * stride_0_0 +
              in2.size(0) * (static_cast<int32_T>(in3[aux_0_1]) - 1)] -
          in2[i1 * stride_1_0 + in2.size(0) * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static real_T logPFuns(const emlrtStack *sp, real_T which,
                       const coder::array<real_T, 1U> &in,
                       const struct1_T *extras_f1, const cell_5 *extras_f2,
                       const struct3_T *extras_f4)
{
  coder::array<int8_T, 1U> thisLogical;
  c_struct_T problem;
  cell_12 result;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  struct_T expl_temp;
  real_T out;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  TODO: make standard diagnostics to give warnings...
  //  TODO: make some diagnostic plots if nargout==0;
  //  -----------------------------
  //  function progress(pct,curm,rejectpct)
  //
  //  persistent lastNchar lasttime starttime
  //  if isempty(lastNchar)||pct==0
  //      lasttime=cputime-10;starttime=cputime;lastNchar=0;
  //      pct=1e-16;
  //  end
  //  if pct==1
  //      fprintf('%s',repmat(char(8),1,lastNchar));lastNchar=0;
  //      return
  //  end
  //  if (cputime-lasttime>0.1)
  //
  //      ETA=datestr((cputime-starttime)*(1-pct)/(pct*60*60*24),13);
  //      progressmsg=[183-uint8((1:40)<=(pct*40)).*(183-'*') ''];
  //      %progressmsg=['-'-uint8((1:40)<=(pct*40)).*('-'-'') ''];
  //      %progressmsg=[uint8((1:40)<=(pct*40)).*'#' ''];
  //      curmtxt=sprintf('% 9.3g\n',curm(1:min(end,20),1));
  //      curmtxt = '';
  //      %curmtxt=mat2str(curm);
  //      progressmsg=sprintf('\nGWMCMC %5.1f%% [%s] %s\n%3.0f%%
  //      rejected\n%s\n',pct*100,progressmsg,ETA,rejectpct*100,curmtxt);
  //
  //      fprintf('%s%s',repmat(char(8),1,lastNchar),progressmsg);
  //      drawnow;lasttime=cputime;
  //      lastNchar=length(progressmsg);
  //  end
  //
  //  end
  //  -----------------------------
  //  function noaction(varargin)
  //
  //  % Acknowledgements: I became aware of the GW algorithm via a student
  //  report % which was using emcee for python. Great stuff.
  //
  //  end
  //  -----------------------------
  if (which == 1.0) {
    int32_T loop_ub;
    int32_T packed_counter;
    int32_T unpacked_counter;
    st.site = &r_emlrtRSI;
    //  -----------------------------
    // global problemDef problemDef_cells problemDef_limits controls
    expl_temp.fitpars.set_size(&af_emlrtRTEI, &st, in.size(0), 1);
    loop_ub = in.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.fitpars[i] = in[i];
    }
    b_st.site = &t_emlrtRSI;
    // Unpack the params out of the fitparsma and otherparams arrays
    // back into problem.params
    // problem = getappdata(0,'problem');
    unpacked_counter = 1;
    packed_counter = 1;
    expl_temp.params.set_size(&bf_emlrtRTEI, &b_st, 1,
                              extras_f1->params.size(1));
    loop_ub = extras_f1->params.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.params[i] = 0.0;
    }
    if (extras_f4->checks.params_fitYesNo == 1.0) {
      if (extras_f1->params.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->params.size(1),
                                      &jb_emlrtBCI, &b_st);
      }
      if (in.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, in.size(0), &lb_emlrtBCI, &b_st);
      }
      expl_temp.params[0] = in[0];
      unpacked_counter = 2;
    } else {
      if (extras_f1->params.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->params.size(1),
                                      &ib_emlrtBCI, &b_st);
      }
      if (extras_f1->otherpars.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->otherpars.size(0),
                                      &kb_emlrtBCI, &b_st);
      }
      expl_temp.params[0] = extras_f1->otherpars[0];
      packed_counter = 2;
    }
    // Also the backgrounds
    expl_temp.backs.set_size(&bf_emlrtRTEI, &b_st, 1, extras_f1->backs.size(1));
    loop_ub = extras_f1->backs.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.backs[i] = 0.0;
    }
    if (extras_f4->checks.backs_fitYesNo == 1.0) {
      if (extras_f1->backs.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->backs.size(1),
                                      &hb_emlrtBCI, &b_st);
      }
      if (unpacked_counter > in.size(0)) {
        emlrtDynamicBoundsCheckR2012b(unpacked_counter, 1, in.size(0),
                                      &rb_emlrtBCI, &b_st);
      }
      expl_temp.backs[0] = in[unpacked_counter - 1];
      unpacked_counter++;
    } else {
      if (extras_f1->backs.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->backs.size(1),
                                      &gb_emlrtBCI, &b_st);
      }
      if (packed_counter > extras_f1->otherpars.size(0)) {
        emlrtDynamicBoundsCheckR2012b(packed_counter, 1,
                                      extras_f1->otherpars.size(0),
                                      &qb_emlrtBCI, &b_st);
      }
      expl_temp.backs[0] = extras_f1->otherpars[packed_counter - 1];
      packed_counter++;
    }
    // Scalefactors
    expl_temp.sf.set_size(&bf_emlrtRTEI, &b_st, 1, extras_f1->sf.size(1));
    loop_ub = extras_f1->sf.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.sf[i] = 0.0;
    }
    if (extras_f4->checks.scales_fitYesNo == 1.0) {
      if (extras_f1->sf.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->sf.size(1), &fb_emlrtBCI,
                                      &b_st);
      }
      if (unpacked_counter > in.size(0)) {
        emlrtDynamicBoundsCheckR2012b(unpacked_counter, 1, in.size(0),
                                      &tb_emlrtBCI, &b_st);
      }
      expl_temp.sf[0] = in[unpacked_counter - 1];
      unpacked_counter++;
    } else {
      if (extras_f1->sf.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->sf.size(1), &eb_emlrtBCI,
                                      &b_st);
      }
      if (packed_counter > extras_f1->otherpars.size(0)) {
        emlrtDynamicBoundsCheckR2012b(packed_counter, 1,
                                      extras_f1->otherpars.size(0),
                                      &sb_emlrtBCI, &b_st);
      }
      expl_temp.sf[0] = extras_f1->otherpars[packed_counter - 1];
      packed_counter++;
    }
    // qshifts
    expl_temp.shifts.set_size(&bf_emlrtRTEI, &b_st, 1,
                              extras_f1->shifts.size(1));
    loop_ub = extras_f1->shifts.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.shifts[i] = 0.0;
    }
    if (extras_f4->checks.shifts_fitYesNo == 1.0) {
      if (extras_f1->shifts.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->shifts.size(1),
                                      &db_emlrtBCI, &b_st);
      }
      if (unpacked_counter > in.size(0)) {
        emlrtDynamicBoundsCheckR2012b(unpacked_counter, 1, in.size(0),
                                      &vb_emlrtBCI, &b_st);
      }
      expl_temp.shifts[0] = in[unpacked_counter - 1];
      unpacked_counter++;
    } else {
      if (extras_f1->shifts.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->shifts.size(1),
                                      &cb_emlrtBCI, &b_st);
      }
      if (packed_counter > extras_f1->otherpars.size(0)) {
        emlrtDynamicBoundsCheckR2012b(packed_counter, 1,
                                      extras_f1->otherpars.size(0),
                                      &ub_emlrtBCI, &b_st);
      }
      expl_temp.shifts[0] = extras_f1->otherpars[packed_counter - 1];
      packed_counter++;
    }
    // Nbairs
    expl_temp.nba.set_size(&bf_emlrtRTEI, &b_st, 1, extras_f1->nba.size(1));
    loop_ub = extras_f1->nba.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.nba[i] = 0.0;
    }
    if (extras_f4->checks.nbairs_fitYesNo == 1.0) {
      if (extras_f1->nba.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->nba.size(1),
                                      &bb_emlrtBCI, &b_st);
      }
      if (unpacked_counter > in.size(0)) {
        emlrtDynamicBoundsCheckR2012b(unpacked_counter, 1, in.size(0),
                                      &xb_emlrtBCI, &b_st);
      }
      expl_temp.nba[0] = in[unpacked_counter - 1];
      unpacked_counter++;
    } else {
      if (extras_f1->nba.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->nba.size(1),
                                      &ab_emlrtBCI, &b_st);
      }
      if (packed_counter > extras_f1->otherpars.size(0)) {
        emlrtDynamicBoundsCheckR2012b(packed_counter, 1,
                                      extras_f1->otherpars.size(0),
                                      &wb_emlrtBCI, &b_st);
      }
      expl_temp.nba[0] = extras_f1->otherpars[packed_counter - 1];
      packed_counter++;
    }
    // Nbsubs
    expl_temp.nbs.set_size(&bf_emlrtRTEI, &b_st, 1, extras_f1->nbs.size(1));
    loop_ub = extras_f1->nbs.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.nbs[i] = 0.0;
    }
    if (extras_f4->checks.nbsubs_fitYesNo == 1.0) {
      if (extras_f1->nbs.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->nbs.size(1), &y_emlrtBCI,
                                      &b_st);
      }
      if (unpacked_counter > in.size(0)) {
        emlrtDynamicBoundsCheckR2012b(unpacked_counter, 1, in.size(0),
                                      &ac_emlrtBCI, &b_st);
      }
      expl_temp.nbs[0] = in[unpacked_counter - 1];
      unpacked_counter++;
    } else {
      if (extras_f1->nbs.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->nbs.size(1), &x_emlrtBCI,
                                      &b_st);
      }
      if (packed_counter > extras_f1->otherpars.size(0)) {
        emlrtDynamicBoundsCheckR2012b(packed_counter, 1,
                                      extras_f1->otherpars.size(0),
                                      &yb_emlrtBCI, &b_st);
      }
      expl_temp.nbs[0] = extras_f1->otherpars[packed_counter - 1];
      packed_counter++;
    }
    // Finally resolutions
    expl_temp.res.set_size(&bf_emlrtRTEI, &b_st, 1, extras_f1->res.size(1));
    loop_ub = extras_f1->res.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.res[i] = 0.0;
    }
    if (extras_f4->checks.resol_fitYesNo == 1.0) {
      if (extras_f1->res.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->res.size(1), &w_emlrtBCI,
                                      &b_st);
      }
      if (unpacked_counter > in.size(0)) {
        emlrtDynamicBoundsCheckR2012b(unpacked_counter, 1, in.size(0),
                                      &cc_emlrtBCI, &b_st);
      }
      expl_temp.res[0] = in[unpacked_counter - 1];
    } else {
      if (extras_f1->res.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, extras_f1->res.size(1), &v_emlrtBCI,
                                      &b_st);
      }
      if (packed_counter > extras_f1->otherpars.size(0)) {
        emlrtDynamicBoundsCheckR2012b(packed_counter, 1,
                                      extras_f1->otherpars.size(0),
                                      &bc_emlrtBCI, &b_st);
      }
      expl_temp.res[0] = extras_f1->otherpars[packed_counter - 1];
    }
    // setappdata(0,'problem',problem);
    expl_temp.otherconstr.set_size(&cf_emlrtRTEI, &st,
                                   extras_f1->otherconstr.size(0), 2);
    loop_ub = extras_f1->otherconstr.size(0) * 2;
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.otherconstr[i] = extras_f1->otherconstr[i];
    }
    expl_temp.fitconstr.set_size(&cf_emlrtRTEI, &st,
                                 extras_f1->fitconstr.size(0), 2);
    loop_ub = extras_f1->fitconstr.size(0) * 2;
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.fitconstr[i] = extras_f1->fitconstr[i];
    }
    expl_temp.otherpars.set_size(&cf_emlrtRTEI, &st,
                                 extras_f1->otherpars.size(0));
    loop_ub = extras_f1->otherpars.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.otherpars[i] = extras_f1->otherpars[i];
    }
    expl_temp.contrastCustomFiles.set_size(
        &cf_emlrtRTEI, &st, 1, extras_f1->contrastCustomFiles.size(1));
    loop_ub = extras_f1->contrastCustomFiles.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.contrastCustomFiles[i] = extras_f1->contrastCustomFiles[i];
    }
    expl_temp.modelType.set_size(&cf_emlrtRTEI, &st, 1,
                                 extras_f1->modelType.size(1));
    loop_ub = extras_f1->modelType.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.modelType[i] = extras_f1->modelType[i];
    }
    expl_temp.numberOfLayers = extras_f1->numberOfLayers;
    expl_temp.contrastRes.set_size(&cf_emlrtRTEI, &st, 1,
                                   extras_f1->contrastRes.size(1));
    loop_ub = extras_f1->contrastRes.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.contrastRes[i] = extras_f1->contrastRes[i];
    }
    expl_temp.contrastNbss.set_size(&cf_emlrtRTEI, &st, 1,
                                    extras_f1->contrastNbss.size(1));
    loop_ub = extras_f1->contrastNbss.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.contrastNbss[i] = extras_f1->contrastNbss[i];
    }
    expl_temp.contrastNbas.set_size(&cf_emlrtRTEI, &st, 1,
                                    extras_f1->contrastNbas.size(1));
    loop_ub = extras_f1->contrastNbas.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.contrastNbas[i] = extras_f1->contrastNbas[i];
    }
    expl_temp.contrastScales.set_size(&cf_emlrtRTEI, &st, 1,
                                      extras_f1->contrastScales.size(1));
    loop_ub = extras_f1->contrastScales.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.contrastScales[i] = extras_f1->contrastScales[i];
    }
    expl_temp.contrastShifts.set_size(&cf_emlrtRTEI, &st, 1,
                                      extras_f1->contrastShifts.size(1));
    loop_ub = extras_f1->contrastShifts.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.contrastShifts[i] = extras_f1->contrastShifts[i];
    }
    expl_temp.geometry.set_size(&cf_emlrtRTEI, &st, 1,
                                extras_f1->geometry.size(1));
    loop_ub = extras_f1->geometry.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.geometry[i] = extras_f1->geometry[i];
    }
    expl_temp.numberOfContrasts = extras_f1->numberOfContrasts;
    expl_temp.dataPresent.set_size(&cf_emlrtRTEI, &st, 1,
                                   extras_f1->dataPresent.size(1));
    loop_ub = extras_f1->dataPresent.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.dataPresent[i] = extras_f1->dataPresent[i];
    }
    expl_temp.resample.set_size(&cf_emlrtRTEI, &st, 1,
                                extras_f1->resample.size(1));
    loop_ub = extras_f1->resample.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.resample[i] = extras_f1->resample[i];
    }
    expl_temp.TF.set_size(&cf_emlrtRTEI, &st, 1, extras_f1->TF.size(1));
    loop_ub = extras_f1->TF.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.TF[i] = extras_f1->TF[i];
    }
    expl_temp.contrastBacksType.set_size(&cf_emlrtRTEI, &st, 1,
                                         extras_f1->contrastBacksType.size(1));
    loop_ub = extras_f1->contrastBacksType.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.contrastBacksType[i] = extras_f1->contrastBacksType[i];
    }
    expl_temp.contrastBacks.set_size(&cf_emlrtRTEI, &st, 1,
                                     extras_f1->contrastBacks.size(1));
    loop_ub = extras_f1->contrastBacks.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      expl_temp.contrastBacks[i] = extras_f1->contrastBacks[i];
    }
    b_st.site = &u_emlrtRSI;
    c_reflectivity_calculation_wrap(&b_st, &expl_temp, extras_f2, extras_f4,
                                    &problem, &result);
    b_st.site = &v_emlrtRSI;
    out = muDoubleScalarLog(
        muDoubleScalarExp(-problem.calculations.sum_chi / 2.0));
  } else {
    int32_T i;
    int32_T loop_ub;
    boolean_T exitg1;
    boolean_T tempOut;
    st.site = &s_emlrtRSI;
    //  -----------------------------
    //  global problemDef problemDef_cells problemDef_limits controls
    //  Prior information
    //
    //  Here we formulate our prior knowledge about the model parameters. Here
    //  we use flat priors within a hard limits for each of the 3 model
    //  parameters. GWMCMC allows you to specify these kinds of priors as
    //  logical expressions. e.g. logprior =@(m) (m(1)>-5)&&(m(1)<0.5) &&
    //  (m(2)>0)&&(m(2)<10) && (m(3)>-10)&&(m(3)<1) ;
    // try
    // catch
    // disp('uh oh');
    // end
    thisLogical.set_size(&ye_emlrtRTEI, &st, in.size(0));
    loop_ub = in.size(0);
    for (i = 0; i < loop_ub; i++) {
      thisLogical[i] = 0;
    }
    i = in.size(0);
    for (loop_ub = 0; loop_ub < i; loop_ub++) {
      // try
      if (loop_ub + 1 > extras_f1->fitconstr.size(0)) {
        emlrtDynamicBoundsCheckR2012b(
            loop_ub + 1, 1, extras_f1->fitconstr.size(0), &mb_emlrtBCI, &st);
      }
      // catch
      //  disp('fitconstr missing');
      // end
      if (loop_ub + 1 > in.size(0)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, in.size(0), &nb_emlrtBCI,
                                      &st);
      }
      if (extras_f1->fitconstr[loop_ub] < in[loop_ub]) {
        if (loop_ub + 1 > in.size(0)) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, in.size(0),
                                        &ob_emlrtBCI, &st);
        }
        if (extras_f1->fitconstr[loop_ub + extras_f1->fitconstr.size(0)] >
            in[loop_ub]) {
          tempOut = true;
        } else {
          tempOut = false;
        }
      } else {
        tempOut = false;
      }
      if (loop_ub + 1 > thisLogical.size(0)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, thisLogical.size(0),
                                      &pb_emlrtBCI, &st);
      }
      thisLogical[loop_ub] = static_cast<int8_T>(tempOut);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    b_st.site = &sj_emlrtRSI;
    c_st.site = &ag_emlrtRSI;
    tempOut = false;
    d_st.site = &bg_emlrtRSI;
    if (thisLogical.size(0) > 2147483646) {
      e_st.site = &hb_emlrtRSI;
      coder::check_forloop_overflow_error(&e_st);
    }
    loop_ub = 1;
    exitg1 = false;
    while ((!exitg1) && (loop_ub <= thisLogical.size(0))) {
      if (thisLogical[loop_ub - 1] != 0) {
        tempOut = true;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    // logPrior = thisLogical;
    out = tempOut;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return out;
}

emlrtCTX emlrtGetRootTLSGlobal()
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

void gwmcmc_compile(const emlrtStack *sp, coder::array<real_T, 2U> &minit,
                    real_T mccount, const struct0_T *, const cell_6 *extras,
                    coder::array<real_T, 3U> &models,
                    coder::array<real_T, 3U> &logP)
{
  static const int32_T iv[2]{1, 22};
  static const int32_T iv1[2]{1, 132};
  static const int32_T iv2[2]{1, 53};
  static const char_T varargin_2[132]{
      'C', 'h', 'e', 'c', 'k', ' ', 'm', 'i', 'n', 'i',  't', ' ', 'd', 'i',
      'm', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', '\\', 'n', 'I', 't', ' ',
      'i', 's', ' ', 'r', 'e', 'c', 'o', 'm', 'm', 'e',  'n', 'd', 'e', 'd',
      ' ', 't', 'h', 'a', 't', ' ', 't', 'h', 'e', 'r',  'e', ' ', 'b', 'e',
      ' ', 'a', 't', 'l', 'e', 'a', 's', 't', ' ', 't',  'w', 'i', 'c', 'e',
      ' ', 'a', 's', ' ', 'm', 'a', 'n', 'y', ' ', 'w',  'a', 'l', 'k', 'e',
      'r', 's', ' ', 'i', 'n', ' ', 't', 'h', 'e', ' ',  'e', 'n', 's', 'e',
      'm', 'b', 'l', 'e', ' ', 'a', 's', ' ', 't', 'h',  'e', 'r', 'e', ' ',
      'a', 'r', 'e', ' ', 'm', 'o', 'd', 'e', 'l', ' ',  'd', 'i', 'm', 'e',
      'n', 's', 'i', 'o', 'n', '.'};
  static const char_T b_varargin_1[53]{
      'S', 't', 'a', 'r', 't', 'i', 'n', 'g', ' ', 'p', 'o', 'i', 'n', 't',
      's', ' ', 'f', 'o', 'r', ' ', 'a', 'l', 'l', ' ', 'w', 'a', 'l', 'k',
      'e', 'r', 's', ' ', 'm', 'u', 's', 't', ' ', 'h', 'a', 'v', 'e', ' ',
      'f', 'i', 'n', 'i', 't', 'e', ' ', 'l', 'o', 'g', 'P'};
  static const char_T varargin_1[22]{'G', 'W', 'M', 'C', 'M', 'C', ':', 'm',
                                     'i', 'n', 'i', 't', 'd', 'i', 'm', 'e',
                                     'n', 's', 'i', 'o', 'n', 's'};
  coder::array<real_T, 2U> b;
  coder::array<real_T, 2U> b_minit;
  coder::array<real_T, 2U> curlogP;
  coder::array<real_T, 2U> curm;
  coder::array<real_T, 2U> logrand;
  coder::array<real_T, 2U> proposedm;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> zz;
  coder::array<real_T, 1U> c_minit;
  coder::array<real_T, 1U> reject;
  coder::array<int32_T, 2U> r5;
  coder::array<uint32_T, 2U> d_y;
  coder::array<boolean_T, 2U> r1;
  coder::array<boolean_T, 2U> r2;
  coder::array<boolean_T, 2U> r3;
  coder::array<boolean_T, 2U> r4;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T Nkeep;
  real_T v;
  int32_T b_models[2];
  int32_T M;
  int32_T Nwalkers;
  int32_T acoef;
  int32_T b_fix;
  int32_T bcoef;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Cascaded affine invariant ensemble MCMC sampler. "The MCMC hammer"
  //
  //  GWMCMC is an implementation of the Goodman and Weare 2010 Affine
  //  invariant ensemble Markov Chain Monte Carlo (MCMC) sampler. MCMC sampling
  //  enables bayesian inference. The problem with many traditional MCMC
  //  samplers is that they can have slow convergence for badly scaled problems,
  //  and that it is difficult to optimize the random walk for high-dimensional
  //  problems. This is where the GW-algorithm really excels as it is affine
  //  invariant. It can achieve much better convergence on badly scaled
  //  problems. It is much simpler to get to work straight out of the box, and
  //  for that reason it truly deserves to be called the MCMC hammer.
  //
  //  (This code uses a cascaded variant of the Goodman and Weare algorithm).
  //
  //  USAGE:
  //   [models,logP]=gwmcmc(minit,logPfuns,mccount,
  //   Parameter,Value,Parameter,Value);
  //
  //  INPUTS:
  //      minit: an MxW matrix of initial values for each of the walkers in the
  //             ensemble. (M:number of model params. W: number of walkers). W
  //             should be atleast 2xM. (see e.g. mvnrnd).
  //   logPfuns: a cell of function handles returning the log probality of a
  //             proposed set of model parameters. Typically this cell will
  //             contain two function handles: one to the logprior and another
  //             to the loglikelihood. E.g. {@(m)logprior(m) @(m)loglike(m)}
  //    mccount: What is the desired total number of monte carlo proposals.
  //             This is the total number, -NOT the number per chain.
  //
  //  Named Parameter-Value pairs:
  //    'StepSize': unit-less stepsize (default=2.5).
  //    'ThinChain': Thin all the chains by only storing every N'th step
  //    (default=10) 'ProgressBar': Show a text progress bar (default=true)
  //    'Parallel': Run in ensemble of walkers in parallel. (default=false)
  //    'BurnIn': fraction of the chain that should be removed. (default=0)
  //
  //  OUTPUTS:
  //     models: A MxWxT matrix with the thinned markov chains (with T samples
  //             per walker). T=~mccount/p.ThinChain/W.
  //       logP: A PxWxT matrix of log probabilities for each model in the
  //             models. here P is the number of functions in logPfuns.
  //
  //  Note on cascaded evaluation of log probabilities:
  //  The logPfuns-argument can be specifed as a cell-array to allow a cascaded
  //  evaluation of the probabilities. The computationally cheapest function
  //  should be placed first in the cell (this will typically the prior). This
  //  allows the routine to avoid calculating the likelihood, if the proposed
  //  model can be rejected based on the prior alone. logPfuns={logprior
  //  loglike} is faster but equivalent to logPfuns={@(m)logprior(m)+loglike(m)}
  //
  //  TIP: if you aim to analyze the entire set of ensemble members as a single
  //  sample from the distribution then you may collapse output models-matrix
  //  thus: models=models(:,:); This will reshape the MxWxT matrix into a
  //  Mx(W*T)-matrix while preserving the order.
  //
  //  EXAMPLE: Here we sample a multivariate normal distribution.
  //
  //  %define problem:
  //  mu = [5;-3;6];
  //  C = [.5 -.4 0;-.4 .5 0; 0 0 1];
  //  iC=pinv(C);
  //  logPfuns={@(m)-0.5*sum((m-mu)'*iC*(m-mu))}
  //
  //  %make a set of starting points for the entire ensemble of walkers
  //  minit=randn(length(mu),length(mu)*2);
  //
  //  %Apply the MCMC hammer
  //  [models,logP]=gwmcmc(minit,logPfuns,100000);
  //  models(:,:,1:floor(size(models,3)*.2))=[]; %remove 20% as burn-in
  //  models=models(:,:)'; %reshape matrix to collapse the ensemble member
  //  dimension scatter(models(:,1),models(:,2)) prctile(models,[5 50 95])
  //
  //  References:
  //  Goodman & Weare (2010), Ensemble Samplers With Affine Invariance, Comm.
  //  App. Math. Comp. Sci., Vol. 5, No. 1, 6580 Foreman-Mackey, Hogg, Lang,
  //  Goodman (2013), emcee: The MCMC Hammer, arXiv:1202.3665
  //
  //  WebPage: https://github.com/grinsted/gwmcmc
  //
  //  -Aslak Grinsted 2015
  //  persistent isoctave;
  //  if isempty(isoctave)
  //      isoctave = (exist ('OCTAVE_VERSION', 'builtin') > 0);
  //  end
  //  if nargin<3
  //      error('GWMCMC:toofewinputs','GWMCMC requires atleast 3 inputs.')
  //  end
  M = minit.size(0);
  if (minit.size(1) == 1) {
    st.site = &emlrtRSI;
    coder::randn(&st, static_cast<real_T>(minit.size(0)),
                 static_cast<real_T>(minit.size(0)) * 5.0, r);
    b_minit.set_size(&ce_emlrtRTEI, sp, minit.size(0), minit.size(1));
    acoef = minit.size(0) * minit.size(1) - 1;
    for (i = 0; i <= acoef; i++) {
      b_minit[i] = minit[i];
    }
    st.site = &emlrtRSI;
    coder::bsxfun(&st, b_minit, r, minit);
  }
  //  p=inputParser;
  //  if isoctave
  //      p=p.addParamValue('StepSize',2,@isnumeric); %addParamValue is chosen
  //      for compatibility with octave. Still Untested.
  //      p=p.addParamValue('ThinChain',10,@isnumeric);
  //      p=p.addParamValue('ProgressBar',true,@islogical);
  //      p=p.addParamValue('Parallel',false,@islogical);
  //      p=p.addParamValue('BurnIn',0,@(x)(x>=0)&&(x<1));
  //      p=p.parse(varargin{:});
  // else
  //      p.addParameter('StepSize',2,@isnumeric); %addParamValue is chose for
  //      compatibility with octave. Still Untested.
  //      p.addParameter('ThinChain',10,@isnumeric);
  //      p.addParameter('ProgressBar',true,@islogical);
  //      p.addParameter('Parallel',false,@islogical);
  //      p.addParameter('BurnIn',0,@(x)(x>=0)&&(x<1));
  //      p.parse(varargin{:});
  //  %end
  //  p=p.Results;
  Nwalkers = minit.size(1);
  if ((static_cast<uint32_T>(minit.size(0)) << 1) >
      static_cast<uint32_T>(minit.size(1))) {
    st.site = &b_emlrtRSI;
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 22, m, &varargin_1[0]);
    emlrtAssign(&y, m);
    b_y = nullptr;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 132, m, &varargin_2[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &nk_emlrtRSI;
    b_error(&b_st, y, b_y, &emlrtMCI);
  }
  //  if p.ProgressBar
  //      progress=@textprogress;
  //  else
  //      progress=@noaction;
  //  end
  Nkeep =
      muDoubleScalarCeil(mccount / 10.0 / static_cast<real_T>(minit.size(1)));
  // number of samples drawn from each walker
  if (!(Nkeep >= 0.0)) {
    emlrtNonNegativeCheckR2012b(Nkeep, &c_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (Nkeep != static_cast<int32_T>(Nkeep)) {
    emlrtIntegerCheckR2012b(Nkeep, &b_emlrtDCI, (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(Nkeep);
  models.set_size(&de_emlrtRTEI, sp, M, minit.size(1),
                  static_cast<int32_T>(Nkeep));
  acoef = M * minit.size(1) * static_cast<int32_T>(Nkeep);
  for (i1 = 0; i1 < acoef; i1++) {
    models[i1] = rtNaN;
  }
  // pre-allocate output matrix
  if (static_cast<int32_T>(Nkeep) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(Nkeep),
                                  &d_emlrtBCI, (emlrtConstCTX)sp);
  }
  b_models[0] = M;
  b_models[1] = minit.size(1);
  emlrtSubAssignSizeCheckR2012b(&b_models[0], 2, minit.size(), 2, &emlrtECI,
                                (emlrtCTX)sp);
  acoef = minit.size(1);
  for (i1 = 0; i1 < acoef; i1++) {
    bcoef = minit.size(0);
    for (i2 = 0; i2 < bcoef; i2++) {
      models[i2 + models.size(0) * i1] = minit[i2 + minit.size(0) * i1];
    }
  }
  //  if ~iscell(logPfuns)
  //      logPfuns={logPfuns};
  //  end
  // numel(logPfuns);
  // calculate logP state initial pos of walkers
  logP.set_size(&ee_emlrtRTEI, sp, 2, minit.size(1), logP.size(2));
  if (Nkeep != static_cast<int32_T>(Nkeep)) {
    emlrtIntegerCheckR2012b(Nkeep, &emlrtDCI, (emlrtConstCTX)sp);
  }
  logP.set_size(&ee_emlrtRTEI, sp, logP.size(0), logP.size(1),
                static_cast<int32_T>(Nkeep));
  if (Nkeep != static_cast<int32_T>(Nkeep)) {
    emlrtIntegerCheckR2012b(Nkeep, &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  acoef = (minit.size(1) << 1) * static_cast<int32_T>(Nkeep);
  for (i1 = 0; i1 < acoef; i1++) {
    logP[i1] = rtNaN;
  }
  i1 = minit.size(1);
  for (bcoef = 0; bcoef < i1; bcoef++) {
    acoef = minit.size(0);
    for (b_fix = 0; b_fix < 2; b_fix++) {
      if (bcoef + 1 > minit.size(1)) {
        emlrtDynamicBoundsCheckR2012b(bcoef + 1, 1, minit.size(1), &emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      c_minit.set_size(&fe_emlrtRTEI, sp, minit.size(0));
      for (i2 = 0; i2 < acoef; i2++) {
        c_minit[i2] = minit[i2 + minit.size(0) * bcoef];
      }
      st.site = &c_emlrtRSI;
      v = logPFuns(&st, static_cast<real_T>(b_fix) + 1.0, c_minit, &extras->f1,
                   &extras->f2, &extras->f4);
      //          if islogical(v) %reformulate function so that false=-inf for
      //          logical constraints.
      //              v=-1/v;
      //              logPfuns{fix}=@(m)-1/logPfuns{fix}(m); %experimental
      //              implementation of experimental feature
      //          end
      if (logP.size(2) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, logP.size(2), &b_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (bcoef + 1 > logP.size(1)) {
        emlrtDynamicBoundsCheckR2012b(bcoef + 1, 1, logP.size(1), &o_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      logP[b_fix + 2 * bcoef] = v;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  if (logP.size(2) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, logP.size(2), &c_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  r1.set_size(&ge_emlrtRTEI, sp, 2, logP.size(1));
  acoef = logP.size(1);
  for (i1 = 0; i1 < acoef; i1++) {
    r1[2 * i1] = muDoubleScalarIsInf(logP[2 * i1]);
    r1[2 * i1 + 1] = muDoubleScalarIsInf(logP[2 * i1 + 1]);
  }
  r2.set_size(&he_emlrtRTEI, sp, 2, logP.size(1));
  acoef = logP.size(1);
  for (i1 = 0; i1 < acoef; i1++) {
    r2[2 * i1] = muDoubleScalarIsNaN(logP[2 * i1]);
    r2[2 * i1 + 1] = muDoubleScalarIsNaN(logP[2 * i1 + 1]);
  }
  r3.set_size(&ie_emlrtRTEI, sp, 2, r1.size(1));
  acoef = 2 * r1.size(1);
  for (i1 = 0; i1 < acoef; i1++) {
    r3[i1] = ((!r1[i1]) && (!r2[i1]));
  }
  st.site = &d_emlrtRSI;
  coder::all(&st, r3, r4);
  st.site = &d_emlrtRSI;
  if (!coder::b_all(&st, r4)) {
    st.site = &e_emlrtRSI;
    c_y = nullptr;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 53, m, &b_varargin_1[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &nk_emlrtRSI;
    b_error(&b_st, c_y, &emlrtMCI);
  }
  reject.set_size(&je_emlrtRTEI, sp, minit.size(1));
  acoef = minit.size(1);
  for (i1 = 0; i1 < acoef; i1++) {
    reject[i1] = 0.0;
  }
  v = 1.0;
  if (models.size(2) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, models.size(2), &e_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  curm.set_size(&ke_emlrtRTEI, sp, models.size(0), models.size(1));
  acoef = models.size(1);
  for (i1 = 0; i1 < acoef; i1++) {
    bcoef = models.size(0);
    for (i2 = 0; i2 < bcoef; i2++) {
      curm[i2 + curm.size(0) * i1] = models[i2 + models.size(0) * i1];
    }
  }
  if (logP.size(2) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, logP.size(2), &f_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  curlogP.set_size(&le_emlrtRTEI, sp, 2, logP.size(1));
  acoef = logP.size(1);
  for (i1 = 0; i1 < acoef; i1++) {
    curlogP[2 * i1] = logP[2 * i1];
    curlogP[2 * i1 + 1] = logP[2 * i1 + 1];
  }
  // progress(0,0,0)
  st.site = &f_emlrtRSI;
  textOut(&st, 0.0, 1.0);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, Nkeep, mxDOUBLE_CLASS,
                                static_cast<int32_T>(Nkeep), &emlrtRTEI,
                                (emlrtConstCTX)sp);
  models.set_size(&me_emlrtRTEI, sp, M, minit.size(1),
                  static_cast<int32_T>(Nkeep));
  if (static_cast<int32_T>(Nkeep) - 1 >= 0) {
    if (minit.size(1) < 1) {
      d_y.set_size(&ne_emlrtRTEI, sp, 1, 0);
    } else {
      d_y.set_size(&ne_emlrtRTEI, sp, 1, minit.size(1));
      acoef = minit.size(1) - 1;
      for (i1 = 0; i1 <= acoef; i1++) {
        d_y[i1] = static_cast<uint32_T>(i1) + 1U;
      }
    }
    loop_ub = d_y.size(1);
    i3 = minit.size(1);
  }
  for (int32_T row{0}; row < i; row++) {
    for (int32_T jj{0}; jj < 10; jj++) {
      real_T c_varargin_1;
      real_T x;
      boolean_T acceptfullstep;
      // generate proposals for all walkers
      // (done outside walker loop, in order to be compatible with parfor - some
      // penalty for memory): -Note it appears to give a slight performance
      // boost for non-parallel.
      st.site = &g_emlrtRSI;
      x = coder::b_rand() * (static_cast<real_T>(Nwalkers) - 1.0);
      x = muDoubleScalarFloor(x);
      // pick a random partner
      st.site = &h_emlrtRSI;
      coder::b_rand(&st, static_cast<real_T>(Nwalkers), b);
      st.site = &h_emlrtRSI;
      b_st.site = &id_emlrtRSI;
      zz.set_size(&oe_emlrtRTEI, sp, 1, b.size(1));
      acoef = b.size(1);
      for (i1 = 0; i1 < acoef; i1++) {
        c_varargin_1 = b[i1] + 1.0;
        zz[i1] = c_varargin_1 * c_varargin_1;
      }
      zz.set_size(&pe_emlrtRTEI, sp, 1, zz.size(1));
      acoef = zz.size(1) - 1;
      for (i1 = 0; i1 <= acoef; i1++) {
        zz[i1] = zz[i1] / 2.0;
      }
      b.set_size(&oe_emlrtRTEI, sp, 1, d_y.size(1));
      for (i1 = 0; i1 < loop_ub; i1++) {
        real_T varargout_1;
        c_varargin_1 = static_cast<real_T>(d_y[i1]) + x;
        varargout_1 = c_varargin_1;
        if (Nwalkers == 0) {
          if (c_varargin_1 == 0.0) {
            varargout_1 = 0.0;
          }
        } else if (muDoubleScalarIsNaN(c_varargin_1) ||
                   muDoubleScalarIsInf(c_varargin_1)) {
          varargout_1 = rtNaN;
        } else if (c_varargin_1 == 0.0) {
          varargout_1 = 0.0;
        } else {
          varargout_1 =
              muDoubleScalarRem(c_varargin_1, static_cast<real_T>(Nwalkers));
          if (varargout_1 == 0.0) {
            varargout_1 = 0.0;
          } else if (c_varargin_1 < 0.0) {
            varargout_1 += static_cast<real_T>(Nwalkers);
          }
        }
        b[i1] = varargout_1;
      }
      c_minit.set_size(&qe_emlrtRTEI, sp, b.size(1));
      acoef = b.size(1);
      for (i1 = 0; i1 < acoef; i1++) {
        c_minit[i1] = b[i1] + 1.0;
      }
      acoef = c_minit.size(0);
      for (i1 = 0; i1 < acoef; i1++) {
        if (c_minit[i1] !=
            static_cast<int32_T>(muDoubleScalarFloor(c_minit[i1]))) {
          emlrtIntegerCheckR2012b(c_minit[i1], &e_emlrtDCI, (emlrtConstCTX)sp);
        }
        i2 = static_cast<int32_T>(c_minit[i1]);
        if ((i2 < 1) || (i2 > curm.size(1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, curm.size(1), &p_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if ((c_minit.size(0) != curm.size(1)) &&
          ((c_minit.size(0) != 1) && (curm.size(1) != 1))) {
        emlrtDimSizeImpxCheckR2021b(c_minit.size(0), curm.size(1), &b_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      acoef = c_minit.size(0);
      for (i1 = 0; i1 < acoef; i1++) {
        i2 = static_cast<int32_T>(c_minit[i1]);
        if ((i2 < 1) || (i2 > curm.size(1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, curm.size(1), &q_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      st.site = &i_emlrtRSI;
      if (c_minit.size(0) == curm.size(1)) {
        proposedm.set_size(&re_emlrtRTEI, &st, curm.size(0), c_minit.size(0));
        acoef = c_minit.size(0);
        for (i1 = 0; i1 < acoef; i1++) {
          bcoef = curm.size(0);
          for (i2 = 0; i2 < bcoef; i2++) {
            proposedm[i2 + proposedm.size(0) * i1] =
                curm[i2 +
                     curm.size(0) * (static_cast<int32_T>(c_minit[i1]) - 1)] -
                curm[i2 + curm.size(0) * i1];
          }
        }
      } else {
        b_st.site = &i_emlrtRSI;
        binary_expand_op(&b_st, proposedm, curm, c_minit);
      }
      if (zz.size(1) == 1) {
        i4 = proposedm.size(1);
      } else if (proposedm.size(1) == 1) {
        i4 = zz.size(1);
      } else if (proposedm.size(1) == zz.size(1)) {
        i4 = proposedm.size(1);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &st, &b_emlrtRTEI, "MATLAB:bsxfun:arrayDimensionsMustMatch",
            "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
      }
      r.set_size(&se_emlrtRTEI, &st, proposedm.size(0), i4);
      if ((proposedm.size(0) != 0) && (i4 != 0)) {
        M = (proposedm.size(1) != 1);
        bcoef = (zz.size(1) != 1);
        i1 = i4 - 1;
        acoef = (proposedm.size(0) != 1);
        for (int32_T k{0}; k <= i1; k++) {
          int32_T varargin_3;
          b_fix = M * k;
          varargin_3 = bcoef * k;
          i2 = r.size(0) - 1;
          for (int32_T b_k{0}; b_k <= i2; b_k++) {
            r[b_k + r.size(0) * k] =
                proposedm[acoef * b_k + proposedm.size(0) * b_fix] *
                zz[varargin_3];
          }
        }
      }
      if ((curm.size(0) != r.size(0)) &&
          ((curm.size(0) != 1) && (r.size(0) != 1))) {
        emlrtDimSizeImpxCheckR2021b(curm.size(0), r.size(0), &c_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      if ((c_minit.size(0) != r.size(1)) &&
          ((c_minit.size(0) != 1) && (r.size(1) != 1))) {
        emlrtDimSizeImpxCheckR2021b(c_minit.size(0), r.size(1), &d_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      if ((curm.size(0) == r.size(0)) && (c_minit.size(0) == r.size(1))) {
        proposedm.set_size(&te_emlrtRTEI, sp, curm.size(0), c_minit.size(0));
        acoef = c_minit.size(0);
        for (i1 = 0; i1 < acoef; i1++) {
          bcoef = curm.size(0);
          for (i2 = 0; i2 < bcoef; i2++) {
            proposedm[i2 + proposedm.size(0) * i1] =
                curm[i2 +
                     curm.size(0) * (static_cast<int32_T>(c_minit[i1]) - 1)] -
                r[i2 + r.size(0) * i1];
          }
        }
      } else {
        st.site = &i_emlrtRSI;
        binary_expand_op(&st, proposedm, curm, c_minit, r);
      }
      st.site = &j_emlrtRSI;
      b_st.site = &j_emlrtRSI;
      coder::c_rand(&b_st, static_cast<real_T>(Nwalkers), logrand);
      acceptfullstep = false;
      i1 = 3 * logrand.size(1);
      for (int32_T k{0}; k < i1; k++) {
        if (acceptfullstep || (logrand[k] < 0.0)) {
          acceptfullstep = true;
        }
      }
      if (acceptfullstep) {
        emlrtErrorWithMessageIdR2018a(
            &st, &c_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      b_st.site = &ak_emlrtRSI;
      M = 3 * logrand.size(1);
      c_st.site = &xf_emlrtRSI;
      if (M > 2147483646) {
        d_st.site = &hb_emlrtRSI;
        coder::check_forloop_overflow_error(&d_st);
      }
      for (int32_T k{0}; k < M; k++) {
        logrand[k] = muDoubleScalarLog(logrand[k]);
      }
      // moved outside because rand is slow inside parfor
      //          if p.Parallel
      //              %parallel/non-parallel code is currently mirrored in
      //              %order to enable experimentation with separate
      //              optimization %techniques for each branch. Parallel is not
      //              really great yet. %TODO: use SPMD instead of parfor.
      //
      //              parfor wix=1:Nwalkers
      //                  cp=curlogP(:,wix);
      //                  lr=logrand(:,wix);
      //                  acceptfullstep=true;
      //                  proposedlogP=nan(NPfun,1);
      //                  if lr(1)<(numel(proposedm(:,wix))-1)*log(zz(wix))
      //                      for fix=1:NPfun
      //                          proposedlogP(fix)=logPFuns(fix,proposedm(:,wix));
      //                          %have tested workerobjwrapper but that is
      //                          slower. if lr(fix+1)>proposedlogP(fix)-cp(fix)
      //                          || ~isreal(proposedlogP(fix)) || isnan(
      //                          proposedlogP(fix) )
      //                              %if ~(lr(fix+1)<proposedlogP(fix)-cp(fix))
      //                              acceptfullstep=false;
      //                              break
      //                          end
      //                      end
      //                  else
      //                      acceptfullstep=false;
      //                  end
      //                  if acceptfullstep
      //                      curm(:,wix)=proposedm(:,wix);
      //                      curlogP(:,wix)=proposedlogP;
      //                  else
      //                      reject(wix)=reject(wix)+1;
      //                  end
      //              end
      //          else %NON-PARALLEL
      for (bcoef = 0; bcoef < i3; bcoef++) {
        real_T proposedlogP[2];
        acceptfullstep = true;
        proposedlogP[0] = rtNaN;
        proposedlogP[1] = rtNaN;
        if (bcoef + 1 > proposedm.size(1)) {
          emlrtDynamicBoundsCheckR2012b(bcoef + 1, 1, proposedm.size(1),
                                        &g_emlrtBCI, (emlrtConstCTX)sp);
        }
        st.site = &k_emlrtRSI;
        if (bcoef + 1 > zz.size(1)) {
          emlrtDynamicBoundsCheckR2012b(bcoef + 1, 1, zz.size(1), &h_emlrtBCI,
                                        &st);
        }
        if (zz[bcoef] < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &c_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        if (bcoef + 1 > logrand.size(1)) {
          emlrtDynamicBoundsCheckR2012b(bcoef + 1, 1, logrand.size(1),
                                        &r_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (logrand[3 * bcoef] <
            (static_cast<real_T>(proposedm.size(0)) - 1.0) *
                muDoubleScalarLog(zz[bcoef])) {
          boolean_T exitg1;
          b_fix = 0;
          exitg1 = false;
          while ((!exitg1) && (b_fix < 2)) {
            if (bcoef + 1 > proposedm.size(1)) {
              emlrtDynamicBoundsCheckR2012b(bcoef + 1, 1, proposedm.size(1),
                                            &i_emlrtBCI, (emlrtConstCTX)sp);
            }
            c_minit.set_size(&ue_emlrtRTEI, sp, proposedm.size(0));
            acoef = proposedm.size(0);
            for (i1 = 0; i1 < acoef; i1++) {
              c_minit[i1] = proposedm[i1 + proposedm.size(0) * bcoef];
            }
            st.site = &l_emlrtRSI;
            proposedlogP[b_fix] =
                logPFuns(&st, static_cast<real_T>(b_fix) + 1.0, c_minit,
                         &extras->f1, &extras->f2, &extras->f4);
            if (bcoef + 1 > logrand.size(1)) {
              emlrtDynamicBoundsCheckR2012b(bcoef + 1, 1, logrand.size(1),
                                            &t_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (bcoef + 1 > curlogP.size(1)) {
              emlrtDynamicBoundsCheckR2012b(bcoef + 1, 1, curlogP.size(1),
                                            &u_emlrtBCI, (emlrtConstCTX)sp);
            }
            if ((logrand[(b_fix + 3 * bcoef) + 1] >
                 proposedlogP[b_fix] - curlogP[b_fix + 2 * bcoef]) ||
                muDoubleScalarIsNaN(proposedlogP[b_fix])) {
              // if ~(logrand(fix+1,wix)<proposedlogP(fix)-curlogP(fix,wix))
              // %inverted expression to ensure rejection of nan and imaginary
              // logP's.
              acceptfullstep = false;
              exitg1 = true;
            } else {
              b_fix++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b((emlrtConstCTX)sp);
              }
            }
          }
        } else {
          acceptfullstep = false;
        }
        if (acceptfullstep) {
          if (bcoef + 1 > curm.size(1)) {
            emlrtDynamicBoundsCheckR2012b(bcoef + 1, 1, curm.size(1),
                                          &k_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (bcoef + 1 > proposedm.size(1)) {
            emlrtDynamicBoundsCheckR2012b(bcoef + 1, 1, proposedm.size(1),
                                          &j_emlrtBCI, (emlrtConstCTX)sp);
          }
          acoef = proposedm.size(0);
          emlrtSubAssignSizeCheckR2012b(curm.size(), 1, proposedm.size(), 1,
                                        &e_emlrtECI, (emlrtCTX)sp);
          for (i1 = 0; i1 < acoef; i1++) {
            curm[i1 + curm.size(0) * bcoef] =
                proposedm[i1 + proposedm.size(0) * bcoef];
          }
          if (bcoef + 1 > curlogP.size(1)) {
            emlrtDynamicBoundsCheckR2012b(bcoef + 1, 1, curlogP.size(1),
                                          &l_emlrtBCI, (emlrtConstCTX)sp);
          }
          curlogP[2 * bcoef] = proposedlogP[0];
          curlogP[2 * bcoef + 1] = proposedlogP[1];
        } else {
          if (bcoef + 1 > reject.size(0)) {
            emlrtDynamicBoundsCheckR2012b(bcoef + 1, 1, reject.size(0),
                                          &s_emlrtBCI, (emlrtConstCTX)sp);
          }
          reject[bcoef] = reject[bcoef] + 1.0;
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      // end
      v++;
      st.site = &m_emlrtRSI;
      textOut(&st,
              (((static_cast<real_T>(row) + 1.0) - 1.0) +
               (static_cast<real_T>(jj) + 1.0) / 10.0) /
                  Nkeep,
              v);
      // ,sum(reject)/totcount)
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if ((row + 1 < 1) || (row + 1 > models.size(2))) {
      emlrtDynamicBoundsCheckR2012b(row + 1, 1, models.size(2), &m_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_models[0] = models.size(0);
    b_models[1] = models.size(1);
    emlrtSubAssignSizeCheckR2012b(&b_models[0], 2, curm.size(), 2, &f_emlrtECI,
                                  (emlrtCTX)sp);
    acoef = curm.size(1);
    for (i1 = 0; i1 < acoef; i1++) {
      bcoef = curm.size(0);
      for (i2 = 0; i2 < bcoef; i2++) {
        models[(i2 + models.size(0) * i1) +
               models.size(0) * models.size(1) * row] =
            curm[i2 + curm.size(0) * i1];
      }
    }
    if ((row + 1 < 1) || (row + 1 > logP.size(2))) {
      emlrtDynamicBoundsCheckR2012b(row + 1, 1, logP.size(2), &n_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_models[0] = 2;
    b_models[1] = logP.size(1);
    emlrtSubAssignSizeCheckR2012b(&b_models[0], 2, curlogP.size(), 2,
                                  &g_emlrtECI, (emlrtCTX)sp);
    acoef = curlogP.size(1);
    for (i1 = 0; i1 < acoef; i1++) {
      logP[2 * i1 + 2 * logP.size(1) * row] = curlogP[2 * i1];
      logP[(2 * i1 + 2 * logP.size(1) * row) + 1] = curlogP[2 * i1 + 1];
    }
    // progress bar
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  st.site = &n_emlrtRSI;
  textOut(&st, 100.0, v);
  // ,0);
  v = muDoubleScalarCeil(Nkeep * 0.4);
  r5.set_size(&ve_emlrtRTEI, sp, 1, static_cast<int32_T>(v - 1.0) + 1);
  acoef = static_cast<int32_T>(v - 1.0);
  for (i = 0; i <= acoef; i++) {
    r5[i] = i + 1;
  }
  st.site = &o_emlrtRSI;
  coder::internal::nullAssignment(&st, models, r5);
  // TODO: never allocate space for them ?
  r5.set_size(&we_emlrtRTEI, sp, 1, static_cast<int32_T>(v - 1.0) + 1);
  acoef = static_cast<int32_T>(v - 1.0);
  for (i = 0; i <= acoef; i++) {
    r5[i] = i + 1;
  }
  st.site = &p_emlrtRSI;
  coder::internal::b_nullAssignment(&st, logP, r5);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (gwmcmc_compile.cpp)
