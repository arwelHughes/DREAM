//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// adaptive_new.cpp
//
// Code generation for function 'adaptive_new'
//

// Include files
#include "adaptive_new.h"
#include "acos.h"
#include "any1.h"
#include "div.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "find.h"
#include "gwmcmc_compile_data.h"
#include "gwmcmc_compile_internal_types.h"
#include "linspace.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sortrows.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <string.h>

// Variable Definitions
static emlrtRSInfo me_emlrtRSI{
    241,            // lineNo
    "adaptive_new", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo ne_emlrtRSI{
    252,            // lineNo
    "adaptive_new", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo oe_emlrtRSI{
    255,            // lineNo
    "adaptive_new", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo pe_emlrtRSI{
    267,            // lineNo
    "adaptive_new", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo qe_emlrtRSI{
    281,            // lineNo
    "adaptive_new", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo re_emlrtRSI{
    304,            // lineNo
    "adaptive_new", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo se_emlrtRSI{
    305,            // lineNo
    "adaptive_new", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo te_emlrtRSI{
    376,                 // lineNo
    "normalizeFunction", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo ue_emlrtRSI{
    24,        // lineNo
    "sldFunc", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m" // pathName
};

static emlrtRSInfo ve_emlrtRSI{
    29,        // lineNo
    "sldFunc", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m" // pathName
};

static emlrtRSInfo we_emlrtRSI{
    30,        // lineNo
    "sldFunc", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m" // pathName
};

static emlrtRSInfo cf_emlrtRSI{
    225,             // lineNo
    "unaryMinOrMax", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pathName
};

static emlrtRSInfo df_emlrtRSI{
    318,                     // lineNo
    "unaryMinOrMaxDispatch", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pathName
};

static emlrtRSInfo ef_emlrtRSI{
    386,          // lineNo
    "minOrMax2D", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pathName
};

static emlrtRSInfo ff_emlrtRSI{
    468,                         // lineNo
    "minOrMax2DColumnMajorDim1", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pathName
};

static emlrtRSInfo gf_emlrtRSI{
    15,    // lineNo
    "min", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/min.m" // pathName
};

static emlrtRSInfo hf_emlrtRSI{
    46,         // lineNo
    "minOrMax", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

static emlrtRSInfo if_emlrtRSI{
    92,        // lineNo
    "minimum", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

static emlrtRSInfo jf_emlrtRSI{
    398,                      // lineNo
    "calculateCentralAngles", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo kf_emlrtRSI{
    399,                      // lineNo
    "calculateCentralAngles", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo lf_emlrtRSI{
    401,                      // lineNo
    "calculateCentralAngles", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo mf_emlrtRSI{
    403,                      // lineNo
    "calculateCentralAngles", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo nf_emlrtRSI{
    404,                      // lineNo
    "calculateCentralAngles", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo of_emlrtRSI{
    405,                      // lineNo
    "calculateCentralAngles", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo pf_emlrtRSI{
    408,                      // lineNo
    "calculateCentralAngles", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo qf_emlrtRSI{
    407,                      // lineNo
    "calculateCentralAngles", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo rf_emlrtRSI{
    409,                      // lineNo
    "calculateCentralAngles", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo wf_emlrtRSI{
    16,     // lineNo
    "sqrt", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" // pathName
};

static emlrtRSInfo cg_emlrtRSI{
    431,                // lineNo
    "increaseSampling", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo dg_emlrtRSI{
    433,                // lineNo
    "increaseSampling", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtDCInfo ob_emlrtDCI{
    274,            // lineNo
    30,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    4                                // checkKind
};

static emlrtECInfo o_emlrtECI{
    1,              // nDims
    283,            // lineNo
    25,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtECInfo p_emlrtECI{
    1,              // nDims
    289,            // lineNo
    21,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo mb_emlrtRTEI{
    28,              // lineNo
    27,              // colNo
    "unaryMinOrMax", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pName
};

static emlrtRTEInfo nb_emlrtRTEI{
    134,             // lineNo
    27,              // colNo
    "unaryMinOrMax", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pName
};

static emlrtECInfo q_emlrtECI{
    1,                  // nDims
    429,                // lineNo
    29,                 // colNo
    "increaseSampling", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtECInfo r_emlrtECI{
    -1,                 // nDims
    429,                // lineNo
    1,                  // colNo
    "increaseSampling", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtECInfo s_emlrtECI{
    -1,                 // nDims
    431,                // lineNo
    1,                  // colNo
    "increaseSampling", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtBCInfo ph_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    425,                // lineNo
    39,                 // colNo
    "segmentsToSplit",  // aName
    "increaseSampling", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    0                                // checkKind
};

static emlrtBCInfo qh_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    429,                // lineNo
    40,                 // colNo
    "dataPoints",       // aName
    "increaseSampling", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    0                                // checkKind
};

static emlrtBCInfo rh_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    430,                // lineNo
    14,                 // colNo
    "dataPoints",       // aName
    "increaseSampling", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    0                                // checkKind
};

static emlrtBCInfo sh_emlrtBCI{
    -1,                  // iFirst
    -1,                  // iLast
    376,                 // lineNo
    22,                  // colNo
    "x",                 // aName
    "normalizeFunction", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    0                                // checkKind
};

static emlrtECInfo t_emlrtECI{
    -1,                  // nDims
    376,                 // lineNo
    5,                   // colNo
    "normalizeFunction", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtBCInfo th_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    31,          // lineNo
    23,          // colNo
    "belowVals", // aName
    "sldFunc",   // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo uh_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    32,          // lineNo
    23,          // colNo
    "aboveVals", // aName
    "sldFunc",   // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo vh_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    34,        // lineNo
    18,        // colNo
    "rho",     // aName
    "sldFunc", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo wh_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    35,        // lineNo
    18,        // colNo
    "rho",     // aName
    "sldFunc", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo xh_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    38,        // lineNo
    26,        // colNo
    "z",       // aName
    "sldFunc", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo yh_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    42,        // lineNo
    20,        // colNo
    "z",       // aName
    "sldFunc", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo ai_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    27,        // lineNo
    18,        // colNo
    "rho",     // aName
    "sldFunc", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo bi_emlrtBCI{
    -1,                  // iFirst
    -1,                  // iLast
    376,                 // lineNo
    7,                   // colNo
    "y",                 // aName
    "normalizeFunction", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    0                                // checkKind
};

static emlrtECInfo u_emlrtECI{
    1,                        // nDims
    398,                      // lineNo
    3,                        // colNo
    "calculateCentralAngles", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtECInfo v_emlrtECI{
    -1,                       // nDims
    403,                      // lineNo
    21,                       // colNo
    "calculateCentralAngles", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtECInfo w_emlrtECI{
    -1,                       // nDims
    404,                      // lineNo
    21,                       // colNo
    "calculateCentralAngles", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtECInfo x_emlrtECI{
    -1,                       // nDims
    405,                      // lineNo
    21,                       // colNo
    "calculateCentralAngles", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtECInfo y_emlrtECI{
    1,                        // nDims
    407,                      // lineNo
    4,                        // colNo
    "calculateCentralAngles", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtECInfo ab_emlrtECI{
    1,                        // nDims
    408,                      // lineNo
    8,                        // colNo
    "calculateCentralAngles", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtBCInfo ci_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    386,                       // lineNo
    20,                        // colNo
    "XYdata",                  // aName
    "calculateTrianglesSides", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    0                                // checkKind
};

static emlrtBCInfo di_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    386,                       // lineNo
    22,                        // colNo
    "XYdata",                  // aName
    "calculateTrianglesSides", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ei_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    386,                       // lineNo
    40,                        // colNo
    "XYdata",                  // aName
    "calculateTrianglesSides", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    0                                // checkKind
};

static emlrtBCInfo fi_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    386,                       // lineNo
    42,                        // colNo
    "XYdata",                  // aName
    "calculateTrianglesSides", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    0                                // checkKind
};

static emlrtECInfo bb_emlrtECI{
    1,                         // nDims
    386,                       // lineNo
    13,                        // colNo
    "calculateTrianglesSides", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtBCInfo gi_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    387,                       // lineNo
    41,                        // colNo
    "XYdata",                  // aName
    "calculateTrianglesSides", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    0                                // checkKind
};

static emlrtBCInfo hi_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    387,                       // lineNo
    43,                        // colNo
    "XYdata",                  // aName
    "calculateTrianglesSides", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    0                                // checkKind
};

static emlrtECInfo cb_emlrtECI{
    1,                         // nDims
    387,                       // lineNo
    14,                        // colNo
    "calculateTrianglesSides", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtBCInfo ii_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    388,                       // lineNo
    40,                        // colNo
    "XYdata",                  // aName
    "calculateTrianglesSides", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ji_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    388,                       // lineNo
    42,                        // colNo
    "XYdata",                  // aName
    "calculateTrianglesSides", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m", // pName
    0                                // checkKind
};

static emlrtECInfo db_emlrtECI{
    1,                         // nDims
    388,                       // lineNo
    13,                        // colNo
    "calculateTrianglesSides", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo rb_emlrtRTEI{
    13,     // lineNo
    9,      // colNo
    "sqrt", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" // pName
};

static emlrtBCInfo wu_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    21,        // lineNo
    11,        // colNo
    "SLD",     // aName
    "sldFunc", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo xu_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    22,        // lineNo
    13,        // colNo
    "SLD",     // aName
    "sldFunc", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m", // pName
    0                           // checkKind
};

static emlrtRTEInfo dj_emlrtRTEI{
    241,            // lineNo
    3,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo ej_emlrtRTEI{
    255,            // lineNo
    1,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo fj_emlrtRTEI{
    281,            // lineNo
    42,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo gj_emlrtRTEI{
    282,            // lineNo
    5,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo hj_emlrtRTEI{
    283,            // lineNo
    5,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo ij_emlrtRTEI{
    289,            // lineNo
    21,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo jj_emlrtRTEI{
    289,            // lineNo
    50,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo kj_emlrtRTEI{
    426,            // lineNo
    1,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo lj_emlrtRTEI{
    429,            // lineNo
    40,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo mj_emlrtRTEI{
    430,            // lineNo
    14,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo nj_emlrtRTEI{
    305,            // lineNo
    18,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo pj_emlrtRTEI{
    431,            // lineNo
    40,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo qj_emlrtRTEI{
    305,   // lineNo
    14,    // colNo
    "cat", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/cat.m" // pName
};

static emlrtRTEInfo rj_emlrtRTEI{
    305,            // lineNo
    5,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo uj_emlrtRTEI{
    360,            // lineNo
    5,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo vj_emlrtRTEI{
    24,        // lineNo
    14,        // colNo
    "sldFunc", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m" // pName
};

static emlrtRTEInfo wj_emlrtRTEI{
    24,        // lineNo
    1,         // colNo
    "sldFunc", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m" // pName
};

static emlrtRTEInfo xj_emlrtRTEI{
    29,        // lineNo
    22,        // colNo
    "sldFunc", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m" // pName
};

static emlrtRTEInfo yj_emlrtRTEI{
    29,        // lineNo
    5,         // colNo
    "sldFunc", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m" // pName
};

static emlrtRTEInfo ak_emlrtRTEI{
    30,        // lineNo
    22,        // colNo
    "sldFunc", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m" // pName
};

static emlrtRTEInfo bk_emlrtRTEI{
    30,        // lineNo
    5,         // colNo
    "sldFunc", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/sldFunc.m" // pName
};

static emlrtRTEInfo ck_emlrtRTEI{
    376,            // lineNo
    12,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo fk_emlrtRTEI{
    398,            // lineNo
    3,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo gk_emlrtRTEI{
    397,            // lineNo
    1,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo hk_emlrtRTEI{
    386,            // lineNo
    1,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo ik_emlrtRTEI{
    387,            // lineNo
    1,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo jk_emlrtRTEI{
    388,            // lineNo
    1,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo kk_emlrtRTEI{
    403,            // lineNo
    21,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo lk_emlrtRTEI{
    403,            // lineNo
    42,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo mk_emlrtRTEI{
    404,            // lineNo
    21,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo nk_emlrtRTEI{
    404,            // lineNo
    42,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo ok_emlrtRTEI{
    405,            // lineNo
    21,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo pk_emlrtRTEI{
    405,            // lineNo
    42,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo qk_emlrtRTEI{
    407,            // lineNo
    4,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo rk_emlrtRTEI{
    409,            // lineNo
    20,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo sk_emlrtRTEI{
    409,            // lineNo
    1,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo dr_emlrtRTEI{
    40,     // lineNo
    5,      // colNo
    "find", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo qs_emlrtRTEI{
    283,            // lineNo
    25,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo rs_emlrtRTEI{
    408,            // lineNo
    8,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRTEInfo ss_emlrtRTEI{
    407,            // lineNo
    3,              // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

static emlrtRSInfo yk_emlrtRSI{
    289,            // lineNo
    "adaptive_new", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo al_emlrtRSI{
    283,            // lineNo
    "adaptive_new", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo bl_emlrtRSI{
    388,                       // lineNo
    "calculateTrianglesSides", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo cl_emlrtRSI{
    386,                       // lineNo
    "calculateTrianglesSides", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo dl_emlrtRSI{
    387,                       // lineNo
    "calculateTrianglesSides", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo el_emlrtRSI{
    397,                      // lineNo
    "calculateCentralAngles", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pathName
};

static emlrtRSInfo fl_emlrtRSI{
    52,    // lineNo
    "div", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/div.m" // pathName
};

// Function Declarations
static void b_binary_expand_op(const emlrtStack *sp,
                               coder::array<boolean_T, 1U> &in1,
                               const cell_17 *in2);

static void b_normalizeFunction(const emlrtStack *sp,
                                const coder::array<real_T, 1U> &x,
                                const coder::array<real_T, 2U> &sldProfile,
                                coder::array<real_T, 1U> &y);

static void b_or(const emlrtStack *sp, coder::array<boolean_T, 1U> &in1,
                 const coder::array<boolean_T, 1U> &in2);

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<creal_T, 1U> &in1,
                             const coder::array<real_T, 1U> &in2,
                             const coder::array<real_T, 1U> &in3);

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 1U> &in1,
                             const coder::array<real_T, 1U> &in2);

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2, int32_T in3,
                             int32_T in4, int32_T in5);

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2, int32_T in3,
                             int32_T in4, int32_T in5, int32_T in6);

static void calculateCentralAngles(const emlrtStack *sp,
                                   const coder::array<real_T, 2U> &XYdata,
                                   const real_T dataBoxSize[2],
                                   coder::array<real_T, 1U> &cornerAngle);

static void minus(const emlrtStack *sp, coder::array<real_T, 2U> &in1,
                  const coder::array<real_T, 2U> &in2);

static void normalizeFunction(const emlrtStack *sp,
                              const coder::array<real_T, 1U> &x,
                              const coder::array<real_T, 2U> &sldProfile,
                              coder::array<real_T, 1U> &y);

static void plus(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                 const coder::array<real_T, 1U> &in2,
                 const coder::array<real_T, 1U> &in3);

static void times(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                  const coder::array<real_T, 1U> &in2);

// Function Definitions
static void b_binary_expand_op(const emlrtStack *sp,
                               coder::array<boolean_T, 1U> &in1,
                               const cell_17 *in2)
{
  coder::array<boolean_T, 1U> r;
  int32_T i;
  int32_T in2_idx_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  in2_idx_0 = in2->f1.size(0);
  if (in1.size(0) == 1) {
    i = in2_idx_0 - 2;
  } else {
    i = in1.size(0);
  }
  r.set_size(&qs_emlrtRTEI, sp, i);
  stride_1_0 = (in1.size(0) != 1);
  if (in1.size(0) == 1) {
    in2_idx_0 -= 2;
  } else {
    in2_idx_0 = in1.size(0);
  }
  for (i = 0; i < in2_idx_0; i++) {
    r[i] = in1[i * stride_1_0];
  }
  in1.set_size(&qs_emlrtRTEI, sp, r.size(0));
  in2_idx_0 = r.size(0);
  for (i = 0; i < in2_idx_0; i++) {
    in1[i] = r[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void b_normalizeFunction(const emlrtStack *sp,
                                const coder::array<real_T, 1U> &x,
                                const coder::array<real_T, 2U> &sldProfile,
                                coder::array<real_T, 1U> &y)
{
  coder::array<real_T, 1U> belowVals;
  coder::array<int32_T, 1U> c_i;
  coder::array<int32_T, 1U> ii;
  coder::array<boolean_T, 1U> b_sldProfile_data;
  coder::array<boolean_T, 1U> c_sldProfile_data;
  coder::array<boolean_T, 1U> d_sldProfile_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  boolean_T sldProfile_data[10000];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Subfunctions
  //  NORMALIZEFUNCTION evaluates a function and returns a NxM array, where N
  //  is the number of elements of x and M is the number of outputs of func.
  //  All the outputs of func must be scalar.
  //  The optional parameter 'vectorizable' (default false) allows to specify
  //  that the input function can be vectorized.
  //  Modified by AVH for use with coder
  // if (~exist('vectorizable','var') || isempty(vectorizable))
  //  end
  // abs(nargout(func)); %for anonymous functions nargout<0
  y.set_size(&uj_emlrtRTEI, sp, x.size(0));
  //  if vectorizable
  //    % For uniformity reasons, transform the 'x' array into a column vector.
  //    % In this way it does not matter if it is given as a column or a row
  //    % vector.
  //    [newValues{:}] = func(x(:));
  //    y = cell2mat(newValues);
  //  else
  i = x.size(0);
  if (x.size(0) - 1 >= 0) {
    loop_ub = sldProfile.size(0);
  }
  for (int32_T b_i{0}; b_i < i; b_i++) {
    int32_T b_loop_ub;
    int32_T i1;
    int32_T sldProfile_size;
    //  Remove cell array so no need for cell2mat
    //  which won't compile - AVH
    // [newValues{:}] = func(x(i));
    // y(i,:) = cell2mat(newValues);
    st.site = &te_emlrtRSI;
    if (b_i + 1 > x.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, x.size(0), &sh_emlrtBCI, &st);
    }
    //  sldVal = sldFunc(x,SLD)
    //  SLD = [x rho;....xn rho]
    //    x = value in Angstrom.
    //
    //  This function returns the SLD (y) value associated with the
    //  supplied value of x. SLD is a two column, XY array defining an
    //  SLD profile. This function interpolates the SLD profile
    //  to return the SLD at the specific value of X. X can be a vector of
    //  multiple points.
    //
    //  (c) Arwel Hughes 2019.
    //  Last modified - AVH, 26/11/19.
    //  global sldProfile
    //
    //  SLD = sldProfile;
    // SLD = getappdata(0,'sldFuncSLD');
    if (sldProfile.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, sldProfile.size(1), &wu_emlrtBCI,
                                    &st);
    }
    if (sldProfile.size(1) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, sldProfile.size(1), &xu_emlrtBCI,
                                    &st);
    }
    b_st.site = &ue_emlrtRSI;
    sldProfile_size = sldProfile.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      sldProfile_data[i1] = (sldProfile[i1] == x[b_i]);
    }
    b_sldProfile_data.set(&sldProfile_data[0], sldProfile_size);
    c_st.site = &xe_emlrtRSI;
    coder::eml_find(&c_st, b_sldProfile_data, ii);
    c_i.set_size(&dr_emlrtRTEI, &b_st, ii.size(0));
    b_loop_ub = ii.size(0);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      c_i[i1] = ii[i1];
    }
    if (c_i.size(0) != 0) {
      belowVals.set_size(&ck_emlrtRTEI, &st, c_i.size(0));
      b_loop_ub = c_i.size(0);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        if ((c_i[i1] < 1) || (c_i[i1] > sldProfile.size(0))) {
          emlrtDynamicBoundsCheckR2012b(c_i[i1], 1, sldProfile.size(0),
                                        &ai_emlrtBCI, &st);
        }
        belowVals[i1] = sldProfile[(c_i[i1] + sldProfile.size(0)) - 1];
      }
    } else {
      real_T deltaY;
      real_T deltaY_tmp;
      b_st.site = &ve_emlrtRSI;
      sldProfile_size = sldProfile.size(0);
      b_loop_ub = sldProfile.size(0);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        sldProfile_data[i1] = (x[b_i] > sldProfile[i1]);
      }
      c_sldProfile_data.set(&sldProfile_data[0], sldProfile_size);
      c_st.site = &xe_emlrtRSI;
      coder::eml_find(&c_st, c_sldProfile_data, ii);
      c_i.set_size(&dr_emlrtRTEI, &b_st, ii.size(0));
      b_loop_ub = ii.size(0);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        c_i[i1] = ii[i1];
      }
      belowVals.set_size(&yj_emlrtRTEI, &st, ii.size(0));
      b_loop_ub = ii.size(0);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        belowVals[i1] = ii[i1];
      }
      b_st.site = &we_emlrtRSI;
      sldProfile_size = sldProfile.size(0);
      b_loop_ub = sldProfile.size(0);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        sldProfile_data[i1] = (x[b_i] < sldProfile[i1]);
      }
      d_sldProfile_data.set(&sldProfile_data[0], sldProfile_size);
      c_st.site = &xe_emlrtRSI;
      coder::eml_find(&c_st, d_sldProfile_data, ii);
      if (c_i.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(c_i.size(0), 1, c_i.size(0), &th_emlrtBCI,
                                      &st);
      }
      if (ii.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, ii.size(0), &uh_emlrtBCI, &st);
      }
      i1 = static_cast<int32_T>(belowVals[belowVals.size(0) - 1]);
      if ((i1 < 1) || (i1 > sldProfile.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, sldProfile.size(0), &vh_emlrtBCI,
                                      &st);
      }
      if ((ii[0] < 1) || (ii[0] > sldProfile.size(0))) {
        emlrtDynamicBoundsCheckR2012b(ii[0], 1, sldProfile.size(0),
                                      &wh_emlrtBCI, &st);
      }
      i1 = static_cast<int32_T>(belowVals[belowVals.size(0) - 1]);
      if ((i1 < 1) || (i1 > sldProfile.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, sldProfile.size(0), &xh_emlrtBCI,
                                      &st);
      }
      i1 = static_cast<int32_T>(belowVals[belowVals.size(0) - 1]);
      if ((i1 < 1) || (i1 > sldProfile.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, sldProfile.size(0), &yh_emlrtBCI,
                                      &st);
      }
      deltaY_tmp = sldProfile[(ii[0] + sldProfile.size(0)) - 1];
      deltaY =
          (x[b_i] - sldProfile[c_i[c_i.size(0) - 1] - 1]) *
          (muDoubleScalarAbs(deltaY_tmp -
                             sldProfile[(static_cast<int32_T>(
                                             belowVals[belowVals.size(0) - 1]) +
                                         sldProfile.size(0)) -
                                        1]) /
           (sldProfile[ii[0] - 1] -
            sldProfile[static_cast<int32_T>(belowVals[belowVals.size(0) - 1]) -
                       1]));
      if (sldProfile[(c_i[c_i.size(0) - 1] + sldProfile.size(0)) - 1] <
          deltaY_tmp) {
        belowVals.set_size(&ck_emlrtRTEI, &st, 1);
        belowVals[0] =
            sldProfile[(c_i[c_i.size(0) - 1] + sldProfile.size(0)) - 1] +
            deltaY;
      } else {
        belowVals.set_size(&ck_emlrtRTEI, &st, 1);
        belowVals[0] =
            sldProfile[(c_i[c_i.size(0) - 1] + sldProfile.size(0)) - 1] -
            deltaY;
      }
      // sldVal = interp1(z,rho,x);
    }
    if (belowVals.size(0) != 1) {
      emlrtSubAssignSizeCheck1dR2017a(1, belowVals.size(0), &t_emlrtECI,
                                      (emlrtConstCTX)sp);
    }
    if (b_i + 1 > y.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, y.size(0), &bi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    y[b_i] = belowVals[0];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  // end
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void b_or(const emlrtStack *sp, coder::array<boolean_T, 1U> &in1,
                 const coder::array<boolean_T, 1U> &in2)
{
  coder::array<boolean_T, 1U> b_in1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in2.size(0) == 1) {
    i = in1.size(0);
  } else {
    i = in2.size(0);
  }
  b_in1.set_size(&ij_emlrtRTEI, sp, i);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1[i] = (in1[i * stride_0_0] || in2[i * stride_1_0]);
  }
  in1.set_size(&ij_emlrtRTEI, sp, b_in1.size(0));
  loop_ub = b_in1.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<creal_T, 1U> &in1,
                             const coder::array<real_T, 1U> &in2,
                             const coder::array<real_T, 1U> &in3)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    i = in2.size(0);
  } else {
    i = in3.size(0);
  }
  in1.set_size(&rk_emlrtRTEI, sp, i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i].re = in2[i * stride_0_0] / in3[i * stride_1_0];
    in1[i].im = 0.0;
  }
}

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 1U> &in1,
                             const coder::array<real_T, 1U> &in2)
{
  coder::array<real_T, 1U> b_in1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in2.size(0) == 1) {
    i = in1.size(0);
  } else {
    i = in2.size(0);
  }
  b_in1.set_size(&ss_emlrtRTEI, sp, i);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1[i] = (in1[i * stride_0_0] - in2[i * stride_1_0]) / 2.0;
  }
  in1.set_size(&ss_emlrtRTEI, sp, b_in1.size(0));
  loop_ub = b_in1.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2, int32_T in3,
                             int32_T in4, int32_T in5)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in5 == 1) {
    i = in4 - in3;
  } else {
    i = in5;
  }
  in1.set_size(&jk_emlrtRTEI, sp, i, 2);
  stride_0_0 = (in4 - in3 != 1);
  stride_1_0 = (in5 != 1);
  if (in5 == 1) {
    loop_ub = in4 - in3;
  } else {
    loop_ub = in5;
  }
  for (i = 0; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] =
          in2[(in3 + i1 * stride_0_0) + in2.size(0) * i] -
          in2[i1 * stride_1_0 + in2.size(0) * i];
    }
  }
}

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2, int32_T in3,
                             int32_T in4, int32_T in5, int32_T in6)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in6 - in5 == 1) {
    i = in4 - in3;
  } else {
    i = in6 - in5;
  }
  in1.set_size(&ik_emlrtRTEI, sp, i, 2);
  stride_0_0 = (in4 - in3 != 1);
  stride_1_0 = (in6 - in5 != 1);
  if (in6 - in5 == 1) {
    loop_ub = in4 - in3;
  } else {
    loop_ub = in6 - in5;
  }
  for (i = 0; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] =
          in2[(in3 + i1 * stride_0_0) + in2.size(0) * i] -
          in2[(in5 + i1 * stride_1_0) + in2.size(0) * i];
    }
  }
}

static void calculateCentralAngles(const emlrtStack *sp,
                                   const coder::array<real_T, 2U> &XYdata,
                                   const real_T dataBoxSize[2],
                                   coder::array<real_T, 1U> &cornerAngle)
{
  coder::array<creal_T, 1U> r;
  coder::array<real_T, 2U> firstStep;
  coder::array<real_T, 2U> longStep;
  coder::array<real_T, 2U> normalizedData;
  coder::array<real_T, 2U> secondStep;
  coder::array<real_T, 1U> firstStepSquared;
  coder::array<real_T, 1U> longStepSquared;
  coder::array<real_T, 1U> secondStepSquared;
  coder::array<real_T, 1U> x;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  real_T minval[2];
  real_T b;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T j;
  int32_T m;
  boolean_T overflow;
  boolean_T p;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Calculate the central angle of the triangles formed by data points.
  //  For input size NxM, the output size is (N-2)xN, because the first and the
  //  last point are not the central corner of any triangle.
  //  Normalize data, because angles depend on scaling.
  st.site = &jf_emlrtRSI;
  b_st.site = &jf_emlrtRSI;
  coder::repmat(&b_st, dataBoxSize, static_cast<real_T>(XYdata.size(0)),
                normalizedData);
  b_st.site = &uf_emlrtRSI;
  c_st.site = &vf_emlrtRSI;
  if ((XYdata.size(0) != 1) && (normalizedData.size(0) != 1) &&
      (XYdata.size(0) != normalizedData.size(0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &qb_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (XYdata.size(0) == normalizedData.size(0)) {
    m = XYdata.size(0) * 2;
    normalizedData.set_size(&fk_emlrtRTEI, &b_st, XYdata.size(0), 2);
    for (i = 0; i < m; i++) {
      normalizedData[i] = XYdata[i] / normalizedData[i];
    }
  } else {
    c_st.site = &fl_emlrtRSI;
    rdivide(&c_st, normalizedData, XYdata);
  }
  st.site = &kf_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  c_st.site = &hf_emlrtRSI;
  d_st.site = &if_emlrtRSI;
  if (XYdata.size(0) == 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &mb_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if (XYdata.size(0) < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &nb_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &cf_emlrtRSI;
  f_st.site = &df_emlrtRSI;
  g_st.site = &ef_emlrtRSI;
  m = XYdata.size(0);
  overflow = (XYdata.size(0) > 2147483646);
  for (j = 0; j < 2; j++) {
    minval[j] = XYdata[XYdata.size(0) * j];
    h_st.site = &ff_emlrtRSI;
    if (overflow) {
      i_st.site = &hb_emlrtRSI;
      coder::check_forloop_overflow_error(&i_st);
    }
    for (b_i = 2; b_i <= m; b_i++) {
      b = XYdata[(b_i + XYdata.size(0) * j) - 1];
      if (muDoubleScalarIsNaN(b)) {
        p = false;
      } else {
        real_T d;
        d = minval[j];
        if (muDoubleScalarIsNaN(d)) {
          p = true;
        } else {
          p = (d > b);
        }
      }
      if (p) {
        minval[j] = b;
      }
    }
  }
  st.site = &kf_emlrtRSI;
  coder::repmat(&st, minval, static_cast<real_T>(XYdata.size(0)), longStep);
  if ((normalizedData.size(0) != longStep.size(0)) &&
      ((normalizedData.size(0) != 1) && (longStep.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(normalizedData.size(0), longStep.size(0),
                                &u_emlrtECI, (emlrtConstCTX)sp);
  }
  if (normalizedData.size(0) == longStep.size(0)) {
    m = normalizedData.size(0) * 2;
    normalizedData.set_size(&gk_emlrtRTEI, sp, normalizedData.size(0), 2);
    for (i = 0; i < m; i++) {
      normalizedData[i] = normalizedData[i] - longStep[i];
    }
  } else {
    st.site = &el_emlrtRSI;
    minus(&st, normalizedData, longStep);
  }
  //  calculate cosine of central angles
  st.site = &lf_emlrtRSI;
  //  Return the sides (deltaX, deltaY) of the triangles formed by data points.
  //  For input size NxM, the output size is (N-2)xN, because the first and the
  //  last point are not the central corner of any triangle.
  if (normalizedData.size(0) - 1 < 2) {
    i = 0;
    b_i = 0;
  } else {
    if (normalizedData.size(0) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, normalizedData.size(0), &ci_emlrtBCI,
                                    &st);
    }
    i = 1;
    if ((normalizedData.size(0) - 1 < 1) ||
        (normalizedData.size(0) - 1 > normalizedData.size(0))) {
      emlrtDynamicBoundsCheckR2012b(normalizedData.size(0) - 1, 1,
                                    normalizedData.size(0), &di_emlrtBCI, &st);
    }
    b_i = normalizedData.size(0) - 1;
  }
  if (normalizedData.size(0) - 2 < 1) {
    i1 = 0;
  } else {
    if (normalizedData.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, normalizedData.size(0), &ei_emlrtBCI,
                                    &st);
    }
    if ((normalizedData.size(0) - 2 < 1) ||
        (normalizedData.size(0) - 2 > normalizedData.size(0))) {
      emlrtDynamicBoundsCheckR2012b(normalizedData.size(0) - 2, 1,
                                    normalizedData.size(0), &fi_emlrtBCI, &st);
    }
    i1 = normalizedData.size(0) - 2;
  }
  m = b_i - i;
  if ((m != i1) && ((m != 1) && (i1 != 1))) {
    emlrtDimSizeImpxCheckR2021b(m, i1, &bb_emlrtECI, &st);
  }
  if (m == i1) {
    firstStep.set_size(&hk_emlrtRTEI, &st, m, 2);
    for (b_i = 0; b_i < 2; b_i++) {
      for (i1 = 0; i1 < m; i1++) {
        firstStep[i1 + firstStep.size(0) * b_i] =
            normalizedData[(i + i1) + normalizedData.size(0) * b_i] -
            normalizedData[i1 + normalizedData.size(0) * b_i];
      }
    }
  } else {
    b_st.site = &cl_emlrtRSI;
    binary_expand_op(&b_st, firstStep, normalizedData, i, b_i, i1);
  }
  if (normalizedData.size(0) < 3) {
    i = 0;
    b_i = 0;
    i1 = 0;
    i2 = 0;
  } else {
    i = 2;
    b_i = normalizedData.size(0);
    if (normalizedData.size(0) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, normalizedData.size(0), &gi_emlrtBCI,
                                    &st);
    }
    i1 = 1;
    if ((normalizedData.size(0) - 1 < 1) ||
        (normalizedData.size(0) - 1 > normalizedData.size(0))) {
      emlrtDynamicBoundsCheckR2012b(normalizedData.size(0) - 1, 1,
                                    normalizedData.size(0), &hi_emlrtBCI, &st);
    }
    i2 = normalizedData.size(0) - 1;
  }
  m = b_i - i;
  j = i2 - i1;
  if ((m != j) && ((m != 1) && (j != 1))) {
    emlrtDimSizeImpxCheckR2021b(m, j, &cb_emlrtECI, &st);
  }
  if (m == j) {
    secondStep.set_size(&ik_emlrtRTEI, &st, m, 2);
    for (b_i = 0; b_i < 2; b_i++) {
      for (i2 = 0; i2 < m; i2++) {
        secondStep[i2 + secondStep.size(0) * b_i] =
            normalizedData[(i + i2) + normalizedData.size(0) * b_i] -
            normalizedData[(i1 + i2) + normalizedData.size(0) * b_i];
      }
    }
  } else {
    b_st.site = &dl_emlrtRSI;
    binary_expand_op(&b_st, secondStep, normalizedData, i, b_i, i1, i2);
  }
  if (normalizedData.size(0) < 3) {
    i = 0;
    b_i = 0;
    i1 = 0;
  } else {
    i = 2;
    b_i = normalizedData.size(0);
    if (normalizedData.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, normalizedData.size(0), &ii_emlrtBCI,
                                    &st);
    }
    if ((normalizedData.size(0) - 2 < 1) ||
        (normalizedData.size(0) - 2 > normalizedData.size(0))) {
      emlrtDynamicBoundsCheckR2012b(normalizedData.size(0) - 2, 1,
                                    normalizedData.size(0), &ji_emlrtBCI, &st);
    }
    i1 = normalizedData.size(0) - 2;
  }
  m = b_i - i;
  if ((m != i1) && ((m != 1) && (i1 != 1))) {
    emlrtDimSizeImpxCheckR2021b(m, i1, &db_emlrtECI, &st);
  }
  if (m == i1) {
    longStep.set_size(&jk_emlrtRTEI, &st, m, 2);
    for (b_i = 0; b_i < 2; b_i++) {
      for (i1 = 0; i1 < m; i1++) {
        longStep[i1 + longStep.size(0) * b_i] =
            normalizedData[(i + i1) + normalizedData.size(0) * b_i] -
            normalizedData[i1 + normalizedData.size(0) * b_i];
      }
    }
  } else {
    b_st.site = &bl_emlrtRSI;
    binary_expand_op(&b_st, longStep, normalizedData, i, b_i, i1);
  }
  //  calculate area of squares of length of triangle sides
  st.site = &mf_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  firstStepSquared.set_size(&kk_emlrtRTEI, &b_st, firstStep.size(0));
  m = firstStep.size(0);
  for (i = 0; i < m; i++) {
    b = firstStep[i];
    firstStepSquared[i] = b * b;
  }
  st.site = &mf_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  x.set_size(&lk_emlrtRTEI, &b_st, firstStep.size(0));
  m = firstStep.size(0);
  for (i = 0; i < m; i++) {
    b = firstStep[i + firstStep.size(0)];
    x[i] = b * b;
  }
  if (firstStepSquared.size(0) != x.size(0)) {
    emlrtSizeEqCheck1DR2012b(firstStepSquared.size(0), x.size(0), &v_emlrtECI,
                             (emlrtConstCTX)sp);
  }
  m = firstStepSquared.size(0);
  for (i = 0; i < m; i++) {
    firstStepSquared[i] = firstStepSquared[i] + x[i];
  }
  st.site = &nf_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  secondStepSquared.set_size(&mk_emlrtRTEI, &b_st, secondStep.size(0));
  m = secondStep.size(0);
  for (i = 0; i < m; i++) {
    b = secondStep[i];
    secondStepSquared[i] = b * b;
  }
  st.site = &nf_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  x.set_size(&nk_emlrtRTEI, &b_st, secondStep.size(0));
  m = secondStep.size(0);
  for (i = 0; i < m; i++) {
    b = secondStep[i + secondStep.size(0)];
    x[i] = b * b;
  }
  if (secondStepSquared.size(0) != x.size(0)) {
    emlrtSizeEqCheck1DR2012b(secondStepSquared.size(0), x.size(0), &w_emlrtECI,
                             (emlrtConstCTX)sp);
  }
  m = secondStepSquared.size(0);
  for (i = 0; i < m; i++) {
    secondStepSquared[i] = secondStepSquared[i] + x[i];
  }
  st.site = &of_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  longStepSquared.set_size(&ok_emlrtRTEI, &b_st, longStep.size(0));
  m = longStep.size(0);
  for (i = 0; i < m; i++) {
    b = longStep[i];
    longStepSquared[i] = b * b;
  }
  st.site = &of_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  x.set_size(&pk_emlrtRTEI, &b_st, longStep.size(0));
  m = longStep.size(0);
  for (i = 0; i < m; i++) {
    b = longStep[i + longStep.size(0)];
    x[i] = b * b;
  }
  if (longStepSquared.size(0) != x.size(0)) {
    emlrtSizeEqCheck1DR2012b(longStepSquared.size(0), x.size(0), &x_emlrtECI,
                             (emlrtConstCTX)sp);
  }
  m = longStepSquared.size(0);
  for (i = 0; i < m; i++) {
    longStepSquared[i] = longStepSquared[i] + x[i];
  }
  if ((firstStepSquared.size(0) != secondStepSquared.size(0)) &&
      ((firstStepSquared.size(0) != 1) && (secondStepSquared.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(firstStepSquared.size(0),
                                secondStepSquared.size(0), &y_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (firstStepSquared.size(0) == secondStepSquared.size(0)) {
    x.set_size(&qk_emlrtRTEI, sp, firstStepSquared.size(0));
    m = firstStepSquared.size(0);
    for (i = 0; i < m; i++) {
      x[i] = firstStepSquared[i] + secondStepSquared[i];
    }
  } else {
    st.site = &qf_emlrtRSI;
    plus(&st, x, firstStepSquared, secondStepSquared);
  }
  if ((x.size(0) != longStepSquared.size(0)) &&
      ((x.size(0) != 1) && (longStepSquared.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(x.size(0), longStepSquared.size(0), &y_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if ((firstStepSquared.size(0) != secondStepSquared.size(0)) &&
      ((firstStepSquared.size(0) != 1) && (secondStepSquared.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(firstStepSquared.size(0),
                                secondStepSquared.size(0), &ab_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  st.site = &qf_emlrtRSI;
  if (x.size(0) == longStepSquared.size(0)) {
    m = x.size(0);
    for (i = 0; i < m; i++) {
      x[i] = (x[i] - longStepSquared[i]) / 2.0;
    }
  } else {
    b_st.site = &qf_emlrtRSI;
    binary_expand_op(&b_st, x, longStepSquared);
  }
  b_st.site = &pf_emlrtRSI;
  if (firstStepSquared.size(0) == secondStepSquared.size(0)) {
    m = firstStepSquared.size(0);
    for (i = 0; i < m; i++) {
      firstStepSquared[i] = firstStepSquared[i] * secondStepSquared[i];
    }
  } else {
    c_st.site = &pf_emlrtRSI;
    times(&c_st, firstStepSquared, secondStepSquared);
  }
  p = false;
  i = firstStepSquared.size(0);
  for (j = 0; j < i; j++) {
    if (p || (firstStepSquared[j] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &rb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  c_st.site = &wf_emlrtRSI;
  m = firstStepSquared.size(0);
  d_st.site = &xf_emlrtRSI;
  if (firstStepSquared.size(0) > 2147483646) {
    e_st.site = &hb_emlrtRSI;
    coder::check_forloop_overflow_error(&e_st);
  }
  for (j = 0; j < m; j++) {
    firstStepSquared[j] = muDoubleScalarSqrt(firstStepSquared[j]);
  }
  b_st.site = &uf_emlrtRSI;
  c_st.site = &vf_emlrtRSI;
  if ((x.size(0) != 1) && (firstStepSquared.size(0) != 1) &&
      (x.size(0) != firstStepSquared.size(0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &qb_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (x.size(0) == firstStepSquared.size(0)) {
    r.set_size(&rk_emlrtRTEI, sp, x.size(0));
    m = x.size(0);
    for (i = 0; i < m; i++) {
      r[i].re = x[i] / firstStepSquared[i];
      r[i].im = 0.0;
    }
  } else {
    binary_expand_op(sp, r, x, firstStepSquared);
  }
  st.site = &rf_emlrtRSI;
  coder::b_acos(&st, r);
  cornerAngle.set_size(&sk_emlrtRTEI, sp, r.size(0));
  m = r.size(0);
  for (i = 0; i < m; i++) {
    cornerAngle[i] = r[i].re;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void minus(const emlrtStack *sp, coder::array<real_T, 2U> &in1,
                  const coder::array<real_T, 2U> &in2)
{
  coder::array<real_T, 2U> b_in1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in2.size(0) == 1) {
    i = in1.size(0);
  } else {
    i = in2.size(0);
  }
  b_in1.set_size(&fk_emlrtRTEI, sp, i, 2);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  for (i = 0; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in1[i1 + b_in1.size(0) * i] = in1[i1 * stride_0_0 + in1.size(0) * i] -
                                      in2[i1 * stride_1_0 + in2.size(0) * i];
    }
  }
  in1.set_size(&fk_emlrtRTEI, sp, b_in1.size(0), 2);
  loop_ub = b_in1.size(0);
  for (i = 0; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in1[i1 + b_in1.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void normalizeFunction(const emlrtStack *sp,
                              const coder::array<real_T, 1U> &x,
                              const coder::array<real_T, 2U> &sldProfile,
                              coder::array<real_T, 1U> &y)
{
  coder::array<real_T, 1U> aboveVals;
  coder::array<int32_T, 1U> ii;
  coder::array<int32_T, 1U> where;
  coder::array<boolean_T, 1U> b_sldProfile;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  Subfunctions
  //  NORMALIZEFUNCTION evaluates a function and returns a NxM array, where N
  //  is the number of elements of x and M is the number of outputs of func.
  //  All the outputs of func must be scalar.
  //  The optional parameter 'vectorizable' (default false) allows to specify
  //  that the input function can be vectorized.
  //  Modified by AVH for use with coder
  // if (~exist('vectorizable','var') || isempty(vectorizable))
  //  end
  // abs(nargout(func)); %for anonymous functions nargout<0
  y.set_size(&uj_emlrtRTEI, sp, x.size(0));
  //  if vectorizable
  //    % For uniformity reasons, transform the 'x' array into a column vector.
  //    % In this way it does not matter if it is given as a column or a row
  //    % vector.
  //    [newValues{:}] = func(x(:));
  //    y = cell2mat(newValues);
  //  else
  i = x.size(0);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    int32_T i1;
    int32_T loop_ub;
    //  Remove cell array so no need for cell2mat
    //  which won't compile - AVH
    // [newValues{:}] = func(x(i));
    // y(i,:) = cell2mat(newValues);
    st.site = &te_emlrtRSI;
    if (b_i + 1 > x.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, x.size(0), &sh_emlrtBCI, &st);
    }
    //  sldVal = sldFunc(x,SLD)
    //  SLD = [x rho;....xn rho]
    //    x = value in Angstrom.
    //
    //  This function returns the SLD (y) value associated with the
    //  supplied value of x. SLD is a two column, XY array defining an
    //  SLD profile. This function interpolates the SLD profile
    //  to return the SLD at the specific value of X. X can be a vector of
    //  multiple points.
    //
    //  (c) Arwel Hughes 2019.
    //  Last modified - AVH, 26/11/19.
    //  global sldProfile
    //
    //  SLD = sldProfile;
    // SLD = getappdata(0,'sldFuncSLD');
    b_st.site = &ue_emlrtRSI;
    b_sldProfile.set_size(&vj_emlrtRTEI, &b_st, sldProfile.size(0));
    loop_ub = sldProfile.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_sldProfile[i1] = (sldProfile[i1] == x[b_i]);
    }
    c_st.site = &xe_emlrtRSI;
    coder::eml_find(&c_st, b_sldProfile, ii);
    where.set_size(&wj_emlrtRTEI, &b_st, ii.size(0));
    loop_ub = ii.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      where[i1] = ii[i1];
    }
    if (where.size(0) != 0) {
      aboveVals.set_size(&ck_emlrtRTEI, &st, where.size(0));
      loop_ub = where.size(0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        if ((where[i1] < 1) || (where[i1] > sldProfile.size(0))) {
          emlrtDynamicBoundsCheckR2012b(where[i1], 1, sldProfile.size(0),
                                        &ai_emlrtBCI, &st);
        }
        aboveVals[i1] = sldProfile[(where[i1] + sldProfile.size(0)) - 1];
      }
    } else {
      real_T deltaY;
      real_T deltaY_tmp;
      b_st.site = &ve_emlrtRSI;
      b_sldProfile.set_size(&xj_emlrtRTEI, &b_st, sldProfile.size(0));
      loop_ub = sldProfile.size(0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_sldProfile[i1] = (x[b_i] > sldProfile[i1]);
      }
      c_st.site = &xe_emlrtRSI;
      coder::eml_find(&c_st, b_sldProfile, ii);
      where.set_size(&yj_emlrtRTEI, &b_st, ii.size(0));
      loop_ub = ii.size(0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        where[i1] = ii[i1];
      }
      b_st.site = &we_emlrtRSI;
      b_sldProfile.set_size(&ak_emlrtRTEI, &b_st, sldProfile.size(0));
      loop_ub = sldProfile.size(0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_sldProfile[i1] = (x[b_i] < sldProfile[i1]);
      }
      c_st.site = &xe_emlrtRSI;
      coder::eml_find(&c_st, b_sldProfile, ii);
      aboveVals.set_size(&bk_emlrtRTEI, &b_st, ii.size(0));
      loop_ub = ii.size(0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        aboveVals[i1] = ii[i1];
      }
      if (where.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(where.size(0), 1, where.size(0),
                                      &th_emlrtBCI, &st);
      }
      if (aboveVals.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, aboveVals.size(0), &uh_emlrtBCI,
                                      &st);
      }
      i1 = where[where.size(0) - 1];
      if ((i1 < 1) || (i1 > sldProfile.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, sldProfile.size(0), &vh_emlrtBCI,
                                      &st);
      }
      if ((static_cast<int32_T>(aboveVals[0]) < 1) ||
          (static_cast<int32_T>(aboveVals[0]) > sldProfile.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(aboveVals[0]), 1,
                                      sldProfile.size(0), &wh_emlrtBCI, &st);
      }
      i1 = where[where.size(0) - 1];
      if ((i1 < 1) || (i1 > sldProfile.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, sldProfile.size(0), &xh_emlrtBCI,
                                      &st);
      }
      i1 = where[where.size(0) - 1];
      if ((i1 < 1) || (i1 > sldProfile.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, sldProfile.size(0), &yh_emlrtBCI,
                                      &st);
      }
      deltaY_tmp =
          sldProfile[(static_cast<int32_T>(aboveVals[0]) + sldProfile.size(0)) -
                     1];
      deltaY = (x[b_i] - sldProfile[where[where.size(0) - 1] - 1]) *
               (muDoubleScalarAbs(
                    deltaY_tmp -
                    sldProfile[(where[where.size(0) - 1] + sldProfile.size(0)) -
                               1]) /
                (sldProfile[static_cast<int32_T>(aboveVals[0]) - 1] -
                 sldProfile[where[where.size(0) - 1] - 1]));
      if (sldProfile[(where[where.size(0) - 1] + sldProfile.size(0)) - 1] <
          deltaY_tmp) {
        aboveVals.set_size(&ck_emlrtRTEI, &st, 1);
        aboveVals[0] =
            sldProfile[(where[where.size(0) - 1] + sldProfile.size(0)) - 1] +
            deltaY;
      } else {
        aboveVals.set_size(&ck_emlrtRTEI, &st, 1);
        aboveVals[0] =
            sldProfile[(where[where.size(0) - 1] + sldProfile.size(0)) - 1] -
            deltaY;
      }
      // sldVal = interp1(z,rho,x);
    }
    if (aboveVals.size(0) != 1) {
      emlrtSubAssignSizeCheck1dR2017a(1, aboveVals.size(0), &t_emlrtECI,
                                      (emlrtConstCTX)sp);
    }
    if (b_i + 1 > y.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, y.size(0), &bi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    y[b_i] = aboveVals[0];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  // end
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void plus(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                 const coder::array<real_T, 1U> &in2,
                 const coder::array<real_T, 1U> &in3)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    i = in2.size(0);
  } else {
    i = in3.size(0);
  }
  in1.set_size(&qk_emlrtRTEI, sp, i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = in2[i * stride_0_0] + in3[i * stride_1_0];
  }
}

static void times(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                  const coder::array<real_T, 1U> &in2)
{
  coder::array<real_T, 1U> b_in1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in2.size(0) == 1) {
    i = in1.size(0);
  } else {
    i = in2.size(0);
  }
  b_in1.set_size(&rs_emlrtRTEI, sp, i);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] * in2[i * stride_1_0];
  }
  in1.set_size(&rs_emlrtRTEI, sp, b_in1.size(0));
  loop_ub = b_in1.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void adaptive_new(const emlrtStack *sp,
                  const coder::array<real_T, 2U> &sldProfile,
                  const real_T startDomain[2], real_T minAngle, real_T nPoints,
                  cell_17 *out)
{
  coder::array<real_T, 2U> b_out;
  coder::array<real_T, 2U> newDataPoints;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 1U> hiVal;
  coder::array<real_T, 1U> newDomain;
  coder::array<int32_T, 1U> r2;
  coder::array<int32_T, 1U> r3;
  coder::array<int32_T, 1U> r4;
  coder::array<int32_T, 1U> r5;
  coder::array<boolean_T, 1U> r1;
  coder::array<boolean_T, 1U> segmentsToSplit;
  coder::array<boolean_T, 1U> sharpCorners;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  int32_T loop_ub;
  int32_T nRefinements;
  int32_T trueCount;
  boolean_T exitg1;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  adaptive: evaluates a matlab function on a given range
  //
  //  'adaptive.m' allows to sample a function using a reduced number of
  //  points. It works iteratively adding new points where needed.
  //  It is especially useful for functions which are computationally intensive
  //  (e.g. involve solving a differential equation).
  //
  //  Usage:
  //  XY = adaptive(func, [xstart, xend])
  //   evaluates 'func' in the range [xstart, xend]. Key-value arguments are
  //   used to control the function evaluation. If the function 'func' returns
  //   multiple output values, only the first one is used for the refinement
  //   process, but all of them are calculated and returned as additional
  //   columns in the output matrix. The output matrix XY contains the new
  //   domain points in the first column and the output values in the other
  //   columns.
  //  [x,yy] = adaptive(func, [xstart, xend])
  //    as before but separately returns the array with the domain points and
  //    the array/matrix with the function output values.
  //  [x,yy] = adaptive(func, xarray, ...)
  //    as before but explicitly provide an initial array of domain points.
  //
  //  Methods:
  //    'adaptive' provides three methods for refining the function evaluation:
  //    1) add more points near the sharp corners, which are found by
  //     considering the triangles formed by three successive points and
  //     measuring the central angle.
  //    2) measure the area of the same triangles and add more points when the
  //     area is bigger than a threshold.
  //    3) measure the length of the segments formed by pairs of successive
  //     and split the segments which are longer than a threshold.
  //    If no methods is explicitly specified, the 'angle' method is used.
  //
  //  Input parameters
  //   - func: input function (function handle)
  //   - initialDomain: initial domain points (1D array)
  //
  //  Optional key-value input parameters
  //   - 'nPoints': (default 20)
  //        initial number of domain points, only used if an initial domain
  //        array is not excplitely provided.
  //   - 'maxRefinements': (default 10)
  //        Specifies the maximum number of refinement steps.
  //   - 'minAngle': (default 0.8*pi)
  //        Refine near the  points which forms, together with their left and
  //        right neighbours, a triangle with central angle smaller than a given
  //        value.
  //   - 'maxArea': (default 5e-4)
  //        Refine near the points which forms, together with their left and
  //        right neighbours, a triangle with area larger than a threshold. The
  //        threshold in normalized to the area enclosing th graph:
  //        threshold==maxArea*(max(x)-min(x))*(max(f(x))-min(f(x)))
  //   - 'maxLength': (default Inf)
  //        Refine all the sements which are longer than a given threshold. The
  //        threshold is relative to the input and output ranges. Specifically,
  //        before applying the threshold, the data are normalized so that
  //        max(x)-min(x)==1 and max(f(x))-min(f(x))==1.
  //   - 'minLength': (default 0)
  //        Exclude from the refinement process the segments which are shorter
  //        than a given threshold. The threshold is relative to the input and
  //        output ranges. Specifically, before applying the threshold, the
  //        data are normalized so that max(x)-min(x)==1 and
  //        max(f(x))-min(f(x))==1.
  //   - 'minSignal': (default 0.2)
  //        Exclude from the refinement process the points where the function is
  //        below a threshold. The threshold is relative to the output range: In
  //        this example threshold == 0.01*(max(f(x))-min(f(x))).
  //   - 'vectorizable': (default false)
  //        Specifies whether the input function accepts arrays as input
  //        (e.g. f(x)==x.^2).
  //   - 'waitbar': (default false)
  //        Display a waitbar.
  //
  //  Output parameters
  //   - a NxM array where N is the number of domain points and M is the number
  //     of output parameters of the input function.
  //
  //  Examples:
  //
  //    % Refine a function near sharp corners. The option 'minAngle' is useful
  //    % for having more points near the peaks of the function.
  //    f = @(x) exp(-x.^2/4).*sin(3*x);
  //    % for test-purpose also evaluate the function directly
  //    x2 = -10:0.01:10;
  //    y2 = f(x2);
  //    y = adaptive(f, [-5,5], 'minAngle',0.8*pi);
  //    figure(1); plot(x2,f(x2),'k--',y(:,1),y(:,2),'o-');
  //    legend('high sampling','adaptive')
  //    title('y = adaptive(f, [xstart, xend], ''minAngle'',0.8*pi)')
  //    % as before but starting with an inital array of domain points
  //    x = -5:5;
  //    y = adaptive(f, x, 'minAngle',0.8*pi);
  //    figure(2); plot(x,f(x),'s-',x2,f(x2),'k--',y(:,1),y(:,2),'o-');
  //    legend('initial sampling','high sampling','adaptive')
  //    title('y = adaptive(f, x, ''minAngle'',0.8*pi)')
  //
  //    % Refine a function near sharp corners, but do not split segments which
  //    % are already shorter than 'minLength'.
  //    y = adaptive(f, x, 'minAngle',0.8*pi, 'minLength',0.05);
  //    figure(3); plot(x,f(x),'s-',x2,f(x2),'k--',y(:,1),y(:,2),'o-');
  //    legend('initial sampling','high sampling','adaptive')
  //    title('y = adaptive(f, x, ''minAngle'',0.8*pi, ''minLength'',0.05)');
  //
  //    % Refine a function until the areas of the triangles formed by
  //    % triplets of successive points are smaller than 'maxArea'.
  //    y = adaptive(f, x, 'maxArea',1e-3);
  //    figure(4); plot(x,f(x),'s-',x2,f(x2),'k--',y(:,1),y(:,2),'o-');
  //    legend('initial sampling','high sampling','adaptive')
  //    title('y = adaptive(f, x, ''maxArea'',1e-3)')
  //
  //    % Refine a function until the segments formed by pairs of successive
  //    % points are shorter than 'maxLength'.
  //    y = adaptive(f, x, 'maxLength',0.1);
  //    figure(5); plot(x,f(x),'s-',x2,f(x2),'k--',y(:,1),y(:,2),'o-');
  //    legend('initial sampling','high sampling','adaptive')
  //    title('y = adaptive(f, x, ''maxLength'',0.1)');
  //  Copyright
  //  2017, Alberto Comin -  LMU Muenchen
  //  Version changes:
  //
  //  24/01/2017: 1) new default: when no optional argument is given, use the
  //   'angle' method as default 2) it is now possible to provide just the
  //   start and the end of the function domain, instead of having to
  //   explicitly provide an initial array 3) a new key-word argument
  //   'nPoints' controls the number of initial domain points in the cases when
  //   the initial array is not explicitly provided. 4) it is now possible to
  //   return the domain points and the function values either as a single 2D
  //   array or as two separate arrays.
  //  25/01/2017: fixed defaults for the case when no method is specified
  //  Default settings
  // nPoints = 20;
  // minAngle = 0.8*pi;
  //  units normalized to data range
  //  Test-mode
  //  The test mode is activated by calling 'adaptive.m' with no input.
  //  if nargin==0
  //    initialDomain =  -10:10;
  //    input_func = @(x) 100*exp(-(x+5.2).^2) + 50*exp(-5*(x-0.5).^2)+
  //    20*exp(-10*(x-5.8).^2); thresholdingAngles = true; minAngle = 0.8*pi;
  //    thresholdingLength = true;
  //    minLength = 0.02;
  //    disp('Running adaptive.m in test mode');
  //    fprintf('input function: %s\n',func2str(input_func));
  //    disp('Plotting the function on a initial set of points');
  //    testFigureHandle = figure();
  //    plot(initialDomain, input_func(initialDomain),'bs-','LineWidth',1.5);
  //    grid on; xlabel('x'); ylabel('y'); title('adaptive.m example');
  //  end
  //  Processing input arguments
  //  assert(isa(input_func,'function_handle'),'adaptiveFunctionEvaluation:ArgChk',...
  //    'the first argument must be a function handle');
  //  assert(isnumeric(initialDomain) && isvector(initialDomain),...
  //    'adaptiveFunctionEvaluation:ArgChk','initial points must be specified as
  //    a numeric vector');
  //
  // nExtraArgIn = numel(varargin);
  //  if mod(nExtraArgIn,2)==1
  //    error('adaptiveFunctionEvaluation:ArgChk', ...
  //      'At least a key or a value is missing in the key-value arguments
  //      list.');
  //  end
  // usingDefaultMethod = true;
  // n = 1;
  // minAngle = 0.7 * pi;
  // thresholdingAngles = true;
  // nPoints = 50;
  //  while n < nExtraArgIn
  //    switch lower(varargin{n})
  //      case 'minangle'
  // minAngle = varargin{n+1};
  // n = n+2;
  //      case 'maxarea'
  //        maxArea = varargin{n+1};
  //        thresholdingArea = true;
  //        usingDefaultMethod = false;
  //        n = n+2;
  //      case 'maxlength'
  //        maxLength = varargin{n+1};
  //        thresholdingLength = true;
  //        usingDefaultMethod = false;
  //        n = n+2;
  //      case 'minlength'
  //        minLength = varargin{n+1};
  //        thresholdingLength = true;
  //        n = n+2;
  //      case 'minsignal'
  //        minSignal = varargin{n+1};
  //        thresholdingSignal = true;
  //        n = n+2;
  //      case 'npoints'
  //        nPoints = varargin{n+1};
  //        n = n+2;
  //      case 'vectorize'
  //        vectorizable = varargin{n+1};
  //        n = n+2;
  //      case 'maxrefinements'
  //        maxRefinements = varargin{n+1};
  //        n = n+2;
  //      case 'waitbar'
  //        displayWaitbar = varargin{n+1};
  //        n = n+2;
  //      otherwise
  //        error('adaptiveFunctionEvaluation:ArgChk',...
  //          ['unknown keyword argument: ', varargin{n}]);
  //    end
  //  end
  //  if no method is specified use the 'angle' method as default
  //  if usingDefaultMethod
  //    thresholdingAngles = true;
  //  end
  //  Initial function evaluation
  //  if initialDomain only contains the start and the end points, create a new
  //  array with 'nPoints' points.
  st.site = &me_emlrtRSI;
  coder::linspace(&st, startDomain[0], startDomain[1], nPoints, r);
  newDomain.set_size(&dj_emlrtRTEI, sp, r.size(1));
  loop_ub = r.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    newDomain[i] = r[i];
  }
  //  Normalize the input function: This step allows to use the same syntax for
  //  functions with single or multiple output parameters.
  //  Remove this syntax for compile - AVH
  // func = @(x) normalizeFunction(x,sldProfile,vectorizable);
  //  Evaluate the input function on the initial set of points.
  st.site = &ne_emlrtRSI;
  normalizeFunction(&st, newDomain, sldProfile, hiVal);
  // dataPoints = [initialDomain(:), func(initialDomain(:))];
  st.site = &oe_emlrtRSI;
  b_st.site = &hc_emlrtRSI;
  c_st.site = &ic_emlrtRSI;
  if (hiVal.size(0) != newDomain.size(0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &jb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  out->f1.set_size(&ej_emlrtRTEI, &b_st, newDomain.size(0), 2);
  loop_ub = newDomain.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    out->f1[i] = newDomain[i];
  }
  loop_ub = hiVal.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    out->f1[i + out->f1.size(0)] = hiVal[i];
  }
  //  Iterative function refinement
  //  if displayWaitbar
  //    refinementWaitbar = waitbar(0,['Evaluating function
  //    ',func2str(func)],...
  //      'CreateCancelBtn','setappdata(gcbf,''canceling'',true)');
  //    setappdata(refinementWaitbar,'canceling',false)
  //  end
  nRefinements = 0;
  exitg1 = false;
  while ((!exitg1) && (nRefinements < 10)) {
    real_T maxval[2];
    real_T minval[2];
    real_T b;
    real_T d;
    int32_T j;
    int32_T m;
    boolean_T overflow;
    boolean_T p;
    //  calculate the box which encloses the current data points:
    st.site = &pe_emlrtRSI;
    b_st.site = &fe_emlrtRSI;
    c_st.site = &ge_emlrtRSI;
    d_st.site = &he_emlrtRSI;
    if (out->f1.size(0) == 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &mb_emlrtRTEI,
                                    "Coder:toolbox:autoDimIncompatibility",
                                    "Coder:toolbox:autoDimIncompatibility", 0);
    }
    if (out->f1.size(0) < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &nb_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    e_st.site = &cf_emlrtRSI;
    f_st.site = &df_emlrtRSI;
    g_st.site = &ef_emlrtRSI;
    m = out->f1.size(0);
    overflow = (out->f1.size(0) > 2147483646);
    for (j = 0; j < 2; j++) {
      maxval[j] = out->f1[out->f1.size(0) * j];
      h_st.site = &ff_emlrtRSI;
      if (overflow) {
        i_st.site = &hb_emlrtRSI;
        coder::check_forloop_overflow_error(&i_st);
      }
      for (loop_ub = 2; loop_ub <= m; loop_ub++) {
        b = out->f1[(loop_ub + out->f1.size(0) * j) - 1];
        if (muDoubleScalarIsNaN(b)) {
          p = false;
        } else {
          d = maxval[j];
          if (muDoubleScalarIsNaN(d)) {
            p = true;
          } else {
            p = (d < b);
          }
        }
        if (p) {
          maxval[j] = b;
        }
      }
    }
    st.site = &pe_emlrtRSI;
    b_st.site = &gf_emlrtRSI;
    c_st.site = &hf_emlrtRSI;
    d_st.site = &if_emlrtRSI;
    if (out->f1.size(0) == 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &mb_emlrtRTEI,
                                    "Coder:toolbox:autoDimIncompatibility",
                                    "Coder:toolbox:autoDimIncompatibility", 0);
    }
    e_st.site = &cf_emlrtRSI;
    f_st.site = &df_emlrtRSI;
    g_st.site = &ef_emlrtRSI;
    m = out->f1.size(0);
    overflow = (out->f1.size(0) > 2147483646);
    for (j = 0; j < 2; j++) {
      minval[j] = out->f1[out->f1.size(0) * j];
      h_st.site = &ff_emlrtRSI;
      if (overflow) {
        i_st.site = &hb_emlrtRSI;
        coder::check_forloop_overflow_error(&i_st);
      }
      for (loop_ub = 2; loop_ub <= m; loop_ub++) {
        b = out->f1[(loop_ub + out->f1.size(0) * j) - 1];
        if (muDoubleScalarIsNaN(b)) {
          p = false;
        } else {
          d = minval[j];
          if (muDoubleScalarIsNaN(d)) {
            p = true;
          } else {
            p = (d > b);
          }
        }
        if (p) {
          minval[j] = b;
        }
      }
    }
    //  Each point is considered as the central corner of the triangle formed
    //  with its left and right hand side neighbours. The first and the last
    //  points are not the central corner of any triangle, so for N points
    //  there are only N-2 triangles.
    if (!(static_cast<real_T>(out->f1.size(0)) - 2.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(out->f1.size(0)) - 2.0,
                                  &ob_emlrtDCI, (emlrtConstCTX)sp);
    }
    //    if thresholdingArea
    //      triangleArea = calculateTrianglesArea(dataPoints(:,1:2));
    //      bigTriangles = triangleArea > (maxArea * dataBoxArea);
    //      trianglesToRefine = trianglesToRefine | bigTriangles;
    //    end
    loop_ub = out->f1.size(0);
    b_out.set_size(&fj_emlrtRTEI, sp, out->f1.size(0), 2);
    for (int32_T i{0}; i < 2; i++) {
      for (trueCount = 0; trueCount < loop_ub; trueCount++) {
        b_out[trueCount + b_out.size(0) * i] =
            out->f1[trueCount + out->f1.size(0) * i];
      }
      maxval[i] -= minval[i];
    }
    st.site = &qe_emlrtRSI;
    calculateCentralAngles(&st, b_out, maxval, newDomain);
    sharpCorners.set_size(&gj_emlrtRTEI, sp, newDomain.size(0));
    loop_ub = newDomain.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      sharpCorners[i] = (newDomain[i] < minAngle);
    }
    if ((out->f1.size(0) - 2 != sharpCorners.size(0)) &&
        ((out->f1.size(0) - 2 != 1) && (sharpCorners.size(0) != 1))) {
      emlrtDimSizeImpxCheckR2021b(out->f1.size(0) - 2, sharpCorners.size(0),
                                  &o_emlrtECI, (emlrtConstCTX)sp);
    }
    if (out->f1.size(0) - 2 == sharpCorners.size(0)) {
      sharpCorners.set_size(&hj_emlrtRTEI, sp, out->f1.size(0) - 2);
    } else {
      st.site = &al_emlrtRSI;
      b_binary_expand_op(&st, sharpCorners, out);
    }
    //  For N points there are N-2 triangles and N-1 triangle sides. Each
    //  triangle side is a segment, which can be split or not depending on the
    //  refinement parameters.
    segmentsToSplit.set_size(&ij_emlrtRTEI, sp, sharpCorners.size(0) + 1);
    loop_ub = sharpCorners.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      segmentsToSplit[i] = sharpCorners[i];
    }
    segmentsToSplit[sharpCorners.size(0)] = false;
    r1.set_size(&jj_emlrtRTEI, sp, sharpCorners.size(0) + 1);
    r1[0] = false;
    loop_ub = sharpCorners.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      r1[i + 1] = sharpCorners[i];
    }
    if ((segmentsToSplit.size(0) != r1.size(0)) &&
        ((segmentsToSplit.size(0) != 1) && (r1.size(0) != 1))) {
      emlrtDimSizeImpxCheckR2021b(segmentsToSplit.size(0), r1.size(0),
                                  &p_emlrtECI, (emlrtConstCTX)sp);
    }
    if (segmentsToSplit.size(0) == r1.size(0)) {
      loop_ub = segmentsToSplit.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        segmentsToSplit[i] = (segmentsToSplit[i] || r1[i]);
      }
    } else {
      st.site = &yk_emlrtRSI;
      b_or(&st, segmentsToSplit, r1);
    }
    //    if thresholdingLength
    //      dataSegments = diff(dataPoints(:,1:2));
    //      normalizedSegments = bsxfun(@rdivide, dataSegments, dataBoxSize);
    //      segmentsLengthNormalized = hypot(normalizedSegments(:,1),
    //      normalizedSegments(:,2)); tooLongSegments = segmentsLengthNormalized
    //      > maxLength; longEnoughSegments = segmentsLengthNormalized >
    //      minLength; segmentsToSplit = (segmentsToSplit | tooLongSegments) &
    //      longEnoughSegments;
    //    end
    //    if thresholdingSignal
    //      segmentsCenters = (dataPoints(1:end-1,2)+dataPoints(2:end,2))/2;
    //      centerAboveThreshold = segmentsCenters > minSignal *
    //      max(abs(dataPoints(:,2))); segmentsToSplit = segmentsToSplit &
    //      centerAboveThreshold;
    //    end
    st.site = &re_emlrtRSI;
    if (coder::any(&st, segmentsToSplit)) {
      st.site = &se_emlrtRSI;
      //  increaseSampling increase the sampling of an input function
      j = segmentsToSplit.size(0);
      for (loop_ub = 0; loop_ub < j; loop_ub++) {
        if (segmentsToSplit[loop_ub] &&
            (loop_ub + 1 > segmentsToSplit.size(0))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, segmentsToSplit.size(0),
                                        &ph_emlrtBCI, &st);
        }
      }
      j = segmentsToSplit.size(0);
      trueCount = 0;
      for (loop_ub = 0; loop_ub < j; loop_ub++) {
        if (segmentsToSplit[loop_ub]) {
          trueCount++;
        }
      }
      newDataPoints.set_size(&kj_emlrtRTEI, &st, trueCount, 2);
      loop_ub = trueCount << 1;
      for (int32_T i{0}; i < loop_ub; i++) {
        newDataPoints[i] = 0.0;
      }
      r1.set_size(&lj_emlrtRTEI, &st, segmentsToSplit.size(0) + 1);
      loop_ub = segmentsToSplit.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        r1[i] = segmentsToSplit[i];
      }
      r1[segmentsToSplit.size(0)] = false;
      j = r1.size(0);
      for (loop_ub = 0; loop_ub < j; loop_ub++) {
        if (r1[loop_ub] && (loop_ub + 1 > out->f1.size(0))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, out->f1.size(0),
                                        &qh_emlrtBCI, &st);
        }
      }
      sharpCorners.set_size(&mj_emlrtRTEI, &st, segmentsToSplit.size(0) + 1);
      sharpCorners[0] = false;
      loop_ub = segmentsToSplit.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        sharpCorners[i + 1] = segmentsToSplit[i];
      }
      j = sharpCorners.size(0);
      for (loop_ub = 0; loop_ub < j; loop_ub++) {
        if (sharpCorners[loop_ub] && (loop_ub + 1 > out->f1.size(0))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, out->f1.size(0),
                                        &rh_emlrtBCI, &st);
        }
      }
      j = r1.size(0) - 1;
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (r1[loop_ub]) {
          m++;
        }
      }
      r2.set_size(&nj_emlrtRTEI, &st, m);
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (r1[loop_ub]) {
          r2[m] = loop_ub + 1;
          m++;
        }
      }
      j = sharpCorners.size(0) - 1;
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (sharpCorners[loop_ub]) {
          m++;
        }
      }
      r3.set_size(&nj_emlrtRTEI, &st, m);
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (sharpCorners[loop_ub]) {
          r3[m] = loop_ub + 1;
          m++;
        }
      }
      if ((r2.size(0) != r3.size(0)) &&
          ((r2.size(0) != 1) && (r3.size(0) != 1))) {
        emlrtDimSizeImpxCheckR2021b(r2.size(0), r3.size(0), &q_emlrtECI, &st);
      }
      j = r1.size(0) - 1;
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (r1[loop_ub]) {
          m++;
        }
      }
      r4.set_size(&nj_emlrtRTEI, &st, m);
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (r1[loop_ub]) {
          r4[m] = loop_ub + 1;
          m++;
        }
      }
      j = sharpCorners.size(0) - 1;
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (sharpCorners[loop_ub]) {
          m++;
        }
      }
      r5.set_size(&nj_emlrtRTEI, &st, m);
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (sharpCorners[loop_ub]) {
          r5[m] = loop_ub + 1;
          m++;
        }
      }
      if (r4.size(0) == r5.size(0)) {
        newDomain.set_size(&oj_emlrtRTEI, &st, r4.size(0));
        loop_ub = r4.size(0);
        for (int32_T i{0}; i < loop_ub; i++) {
          newDomain[i] = 0.5 * (out->f1[r4[i] - 1] + out->f1[r5[i] - 1]);
        }
      } else {
        b_st.site = &xk_emlrtRSI;
        binary_expand_op(&b_st, newDomain, out, r4, r5);
      }
      emlrtSubAssignSizeCheckR2012b(&trueCount, 1, newDomain.size(), 1,
                                    &r_emlrtECI, &st);
      loop_ub = newDomain.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        newDataPoints[i] = newDomain[i];
      }
      hiVal.set_size(&pj_emlrtRTEI, &st, newDataPoints.size(0));
      loop_ub = newDataPoints.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        hiVal[i] = newDataPoints[i];
      }
      b_st.site = &cg_emlrtRSI;
      normalizeFunction(&b_st, hiVal, sldProfile, newDomain);
      emlrtSubAssignSizeCheckR2012b(newDataPoints.size(), 1, newDomain.size(),
                                    1, &s_emlrtECI, &st);
      loop_ub = newDomain.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        newDataPoints[i + newDataPoints.size(0)] = newDomain[i];
      }
      //  For simplicity append the new points at the end and then sort.
      b_st.site = &dg_emlrtRSI;
      c_st.site = &eg_emlrtRSI;
      d_st.site = &ic_emlrtRSI;
      if (newDataPoints.size(0) != 0) {
        m = newDataPoints.size(0);
      } else {
        m = 0;
      }
      j = out->f1.size(0);
      b_out.set_size(&qj_emlrtRTEI, &st, out->f1.size(0) + m, 2);
      loop_ub = out->f1.size(0);
      for (int32_T i{0}; i < 2; i++) {
        for (trueCount = 0; trueCount < loop_ub; trueCount++) {
          b_out[trueCount + b_out.size(0) * i] = out->f1[trueCount + j * i];
        }
      }
      for (int32_T i{0}; i < 2; i++) {
        for (trueCount = 0; trueCount < m; trueCount++) {
          b_out[(trueCount + j) + b_out.size(0) * i] =
              newDataPoints[trueCount + newDataPoints.size(0) * i];
        }
      }
      out->f1.set_size(&rj_emlrtRTEI, &st, b_out.size(0), 2);
      loop_ub = b_out.size(0) * 2;
      for (int32_T i{0}; i < loop_ub; i++) {
        out->f1[i] = b_out[i];
      }
      b_st.site = &dg_emlrtRSI;
      coder::sortrows(&b_st, out->f1);
      //  Removed waitbar for compile - AVH
      //    if displayWaitbar
      //      if getappdata(refinementWaitbar,'canceling'), break; end
      //      waitbar(nRefinements/maxRefinements,refinementWaitbar);
      //    end
      nRefinements++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    } else {
      exitg1 = true;
    }
  }
  //  if displayWaitbar
  //    delete(refinementWaitbar);
  //  end
  //  Plotting refined function
  //  Removed for compile - AVH
  //  if nargin==0 % test mode
  //    figure(testFigureHandle);
  //    hold on;
  //    plot(dataPoints(:,1), dataPoints(:,2),'ro-');
  //    legend('initial', 'refiniment');
  //  end
  // if nargout==1
  //  elseif nargout>1
  //    out{1} = dataPoints(:,1);
  //    out{2} = dataPoints(:,2:end);
  //  end
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void b_adaptive_new(const emlrtStack *sp,
                    const coder::array<real_T, 2U> &sldProfile,
                    const real_T startDomain[2], real_T minAngle,
                    real_T nPoints, cell_17 *out)
{
  coder::array<real_T, 2U> b_out;
  coder::array<real_T, 2U> newDataPoints;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 1U> hiVal;
  coder::array<real_T, 1U> newDomain;
  coder::array<int32_T, 1U> r2;
  coder::array<int32_T, 1U> r3;
  coder::array<int32_T, 1U> r4;
  coder::array<int32_T, 1U> r5;
  coder::array<boolean_T, 1U> r1;
  coder::array<boolean_T, 1U> segmentsToSplit;
  coder::array<boolean_T, 1U> sharpCorners;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  int32_T loop_ub;
  int32_T nRefinements;
  int32_T trueCount;
  boolean_T exitg1;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  adaptive: evaluates a matlab function on a given range
  //
  //  'adaptive.m' allows to sample a function using a reduced number of
  //  points. It works iteratively adding new points where needed.
  //  It is especially useful for functions which are computationally intensive
  //  (e.g. involve solving a differential equation).
  //
  //  Usage:
  //  XY = adaptive(func, [xstart, xend])
  //   evaluates 'func' in the range [xstart, xend]. Key-value arguments are
  //   used to control the function evaluation. If the function 'func' returns
  //   multiple output values, only the first one is used for the refinement
  //   process, but all of them are calculated and returned as additional
  //   columns in the output matrix. The output matrix XY contains the new
  //   domain points in the first column and the output values in the other
  //   columns.
  //  [x,yy] = adaptive(func, [xstart, xend])
  //    as before but separately returns the array with the domain points and
  //    the array/matrix with the function output values.
  //  [x,yy] = adaptive(func, xarray, ...)
  //    as before but explicitly provide an initial array of domain points.
  //
  //  Methods:
  //    'adaptive' provides three methods for refining the function evaluation:
  //    1) add more points near the sharp corners, which are found by
  //     considering the triangles formed by three successive points and
  //     measuring the central angle.
  //    2) measure the area of the same triangles and add more points when the
  //     area is bigger than a threshold.
  //    3) measure the length of the segments formed by pairs of successive
  //     and split the segments which are longer than a threshold.
  //    If no methods is explicitly specified, the 'angle' method is used.
  //
  //  Input parameters
  //   - func: input function (function handle)
  //   - initialDomain: initial domain points (1D array)
  //
  //  Optional key-value input parameters
  //   - 'nPoints': (default 20)
  //        initial number of domain points, only used if an initial domain
  //        array is not excplitely provided.
  //   - 'maxRefinements': (default 10)
  //        Specifies the maximum number of refinement steps.
  //   - 'minAngle': (default 0.8*pi)
  //        Refine near the  points which forms, together with their left and
  //        right neighbours, a triangle with central angle smaller than a given
  //        value.
  //   - 'maxArea': (default 5e-4)
  //        Refine near the points which forms, together with their left and
  //        right neighbours, a triangle with area larger than a threshold. The
  //        threshold in normalized to the area enclosing th graph:
  //        threshold==maxArea*(max(x)-min(x))*(max(f(x))-min(f(x)))
  //   - 'maxLength': (default Inf)
  //        Refine all the sements which are longer than a given threshold. The
  //        threshold is relative to the input and output ranges. Specifically,
  //        before applying the threshold, the data are normalized so that
  //        max(x)-min(x)==1 and max(f(x))-min(f(x))==1.
  //   - 'minLength': (default 0)
  //        Exclude from the refinement process the segments which are shorter
  //        than a given threshold. The threshold is relative to the input and
  //        output ranges. Specifically, before applying the threshold, the
  //        data are normalized so that max(x)-min(x)==1 and
  //        max(f(x))-min(f(x))==1.
  //   - 'minSignal': (default 0.2)
  //        Exclude from the refinement process the points where the function is
  //        below a threshold. The threshold is relative to the output range: In
  //        this example threshold == 0.01*(max(f(x))-min(f(x))).
  //   - 'vectorizable': (default false)
  //        Specifies whether the input function accepts arrays as input
  //        (e.g. f(x)==x.^2).
  //   - 'waitbar': (default false)
  //        Display a waitbar.
  //
  //  Output parameters
  //   - a NxM array where N is the number of domain points and M is the number
  //     of output parameters of the input function.
  //
  //  Examples:
  //
  //    % Refine a function near sharp corners. The option 'minAngle' is useful
  //    % for having more points near the peaks of the function.
  //    f = @(x) exp(-x.^2/4).*sin(3*x);
  //    % for test-purpose also evaluate the function directly
  //    x2 = -10:0.01:10;
  //    y2 = f(x2);
  //    y = adaptive(f, [-5,5], 'minAngle',0.8*pi);
  //    figure(1); plot(x2,f(x2),'k--',y(:,1),y(:,2),'o-');
  //    legend('high sampling','adaptive')
  //    title('y = adaptive(f, [xstart, xend], ''minAngle'',0.8*pi)')
  //    % as before but starting with an inital array of domain points
  //    x = -5:5;
  //    y = adaptive(f, x, 'minAngle',0.8*pi);
  //    figure(2); plot(x,f(x),'s-',x2,f(x2),'k--',y(:,1),y(:,2),'o-');
  //    legend('initial sampling','high sampling','adaptive')
  //    title('y = adaptive(f, x, ''minAngle'',0.8*pi)')
  //
  //    % Refine a function near sharp corners, but do not split segments which
  //    % are already shorter than 'minLength'.
  //    y = adaptive(f, x, 'minAngle',0.8*pi, 'minLength',0.05);
  //    figure(3); plot(x,f(x),'s-',x2,f(x2),'k--',y(:,1),y(:,2),'o-');
  //    legend('initial sampling','high sampling','adaptive')
  //    title('y = adaptive(f, x, ''minAngle'',0.8*pi, ''minLength'',0.05)');
  //
  //    % Refine a function until the areas of the triangles formed by
  //    % triplets of successive points are smaller than 'maxArea'.
  //    y = adaptive(f, x, 'maxArea',1e-3);
  //    figure(4); plot(x,f(x),'s-',x2,f(x2),'k--',y(:,1),y(:,2),'o-');
  //    legend('initial sampling','high sampling','adaptive')
  //    title('y = adaptive(f, x, ''maxArea'',1e-3)')
  //
  //    % Refine a function until the segments formed by pairs of successive
  //    % points are shorter than 'maxLength'.
  //    y = adaptive(f, x, 'maxLength',0.1);
  //    figure(5); plot(x,f(x),'s-',x2,f(x2),'k--',y(:,1),y(:,2),'o-');
  //    legend('initial sampling','high sampling','adaptive')
  //    title('y = adaptive(f, x, ''maxLength'',0.1)');
  //  Copyright
  //  2017, Alberto Comin -  LMU Muenchen
  //  Version changes:
  //
  //  24/01/2017: 1) new default: when no optional argument is given, use the
  //   'angle' method as default 2) it is now possible to provide just the
  //   start and the end of the function domain, instead of having to
  //   explicitly provide an initial array 3) a new key-word argument
  //   'nPoints' controls the number of initial domain points in the cases when
  //   the initial array is not explicitly provided. 4) it is now possible to
  //   return the domain points and the function values either as a single 2D
  //   array or as two separate arrays.
  //  25/01/2017: fixed defaults for the case when no method is specified
  //  Default settings
  // nPoints = 20;
  // minAngle = 0.8*pi;
  //  units normalized to data range
  //  Test-mode
  //  The test mode is activated by calling 'adaptive.m' with no input.
  //  if nargin==0
  //    initialDomain =  -10:10;
  //    input_func = @(x) 100*exp(-(x+5.2).^2) + 50*exp(-5*(x-0.5).^2)+
  //    20*exp(-10*(x-5.8).^2); thresholdingAngles = true; minAngle = 0.8*pi;
  //    thresholdingLength = true;
  //    minLength = 0.02;
  //    disp('Running adaptive.m in test mode');
  //    fprintf('input function: %s\n',func2str(input_func));
  //    disp('Plotting the function on a initial set of points');
  //    testFigureHandle = figure();
  //    plot(initialDomain, input_func(initialDomain),'bs-','LineWidth',1.5);
  //    grid on; xlabel('x'); ylabel('y'); title('adaptive.m example');
  //  end
  //  Processing input arguments
  //  assert(isa(input_func,'function_handle'),'adaptiveFunctionEvaluation:ArgChk',...
  //    'the first argument must be a function handle');
  //  assert(isnumeric(initialDomain) && isvector(initialDomain),...
  //    'adaptiveFunctionEvaluation:ArgChk','initial points must be specified as
  //    a numeric vector');
  //
  // nExtraArgIn = numel(varargin);
  //  if mod(nExtraArgIn,2)==1
  //    error('adaptiveFunctionEvaluation:ArgChk', ...
  //      'At least a key or a value is missing in the key-value arguments
  //      list.');
  //  end
  // usingDefaultMethod = true;
  // n = 1;
  // minAngle = 0.7 * pi;
  // thresholdingAngles = true;
  // nPoints = 50;
  //  while n < nExtraArgIn
  //    switch lower(varargin{n})
  //      case 'minangle'
  // minAngle = varargin{n+1};
  // n = n+2;
  //      case 'maxarea'
  //        maxArea = varargin{n+1};
  //        thresholdingArea = true;
  //        usingDefaultMethod = false;
  //        n = n+2;
  //      case 'maxlength'
  //        maxLength = varargin{n+1};
  //        thresholdingLength = true;
  //        usingDefaultMethod = false;
  //        n = n+2;
  //      case 'minlength'
  //        minLength = varargin{n+1};
  //        thresholdingLength = true;
  //        n = n+2;
  //      case 'minsignal'
  //        minSignal = varargin{n+1};
  //        thresholdingSignal = true;
  //        n = n+2;
  //      case 'npoints'
  //        nPoints = varargin{n+1};
  //        n = n+2;
  //      case 'vectorize'
  //        vectorizable = varargin{n+1};
  //        n = n+2;
  //      case 'maxrefinements'
  //        maxRefinements = varargin{n+1};
  //        n = n+2;
  //      case 'waitbar'
  //        displayWaitbar = varargin{n+1};
  //        n = n+2;
  //      otherwise
  //        error('adaptiveFunctionEvaluation:ArgChk',...
  //          ['unknown keyword argument: ', varargin{n}]);
  //    end
  //  end
  //  if no method is specified use the 'angle' method as default
  //  if usingDefaultMethod
  //    thresholdingAngles = true;
  //  end
  //  Initial function evaluation
  //  if initialDomain only contains the start and the end points, create a new
  //  array with 'nPoints' points.
  st.site = &me_emlrtRSI;
  coder::linspace(&st, startDomain[0], startDomain[1], nPoints, r);
  newDomain.set_size(&dj_emlrtRTEI, sp, r.size(1));
  loop_ub = r.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    newDomain[i] = r[i];
  }
  //  Normalize the input function: This step allows to use the same syntax for
  //  functions with single or multiple output parameters.
  //  Remove this syntax for compile - AVH
  // func = @(x) normalizeFunction(x,sldProfile,vectorizable);
  //  Evaluate the input function on the initial set of points.
  st.site = &ne_emlrtRSI;
  b_normalizeFunction(&st, newDomain, sldProfile, hiVal);
  // dataPoints = [initialDomain(:), func(initialDomain(:))];
  st.site = &oe_emlrtRSI;
  b_st.site = &hc_emlrtRSI;
  c_st.site = &ic_emlrtRSI;
  if (hiVal.size(0) != newDomain.size(0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &jb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  out->f1.set_size(&ej_emlrtRTEI, &b_st, newDomain.size(0), 2);
  loop_ub = newDomain.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    out->f1[i] = newDomain[i];
  }
  loop_ub = hiVal.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    out->f1[i + out->f1.size(0)] = hiVal[i];
  }
  //  Iterative function refinement
  //  if displayWaitbar
  //    refinementWaitbar = waitbar(0,['Evaluating function
  //    ',func2str(func)],...
  //      'CreateCancelBtn','setappdata(gcbf,''canceling'',true)');
  //    setappdata(refinementWaitbar,'canceling',false)
  //  end
  nRefinements = 0;
  exitg1 = false;
  while ((!exitg1) && (nRefinements < 10)) {
    real_T maxval[2];
    real_T minval[2];
    real_T b;
    real_T d;
    int32_T j;
    int32_T m;
    boolean_T overflow;
    boolean_T p;
    //  calculate the box which encloses the current data points:
    st.site = &pe_emlrtRSI;
    b_st.site = &fe_emlrtRSI;
    c_st.site = &ge_emlrtRSI;
    d_st.site = &he_emlrtRSI;
    if (out->f1.size(0) == 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &mb_emlrtRTEI,
                                    "Coder:toolbox:autoDimIncompatibility",
                                    "Coder:toolbox:autoDimIncompatibility", 0);
    }
    if (out->f1.size(0) < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &nb_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    e_st.site = &cf_emlrtRSI;
    f_st.site = &df_emlrtRSI;
    g_st.site = &ef_emlrtRSI;
    m = out->f1.size(0);
    overflow = (out->f1.size(0) > 2147483646);
    for (j = 0; j < 2; j++) {
      maxval[j] = out->f1[out->f1.size(0) * j];
      h_st.site = &ff_emlrtRSI;
      if (overflow) {
        i_st.site = &hb_emlrtRSI;
        coder::check_forloop_overflow_error(&i_st);
      }
      for (loop_ub = 2; loop_ub <= m; loop_ub++) {
        b = out->f1[(loop_ub + out->f1.size(0) * j) - 1];
        if (muDoubleScalarIsNaN(b)) {
          p = false;
        } else {
          d = maxval[j];
          if (muDoubleScalarIsNaN(d)) {
            p = true;
          } else {
            p = (d < b);
          }
        }
        if (p) {
          maxval[j] = b;
        }
      }
    }
    st.site = &pe_emlrtRSI;
    b_st.site = &gf_emlrtRSI;
    c_st.site = &hf_emlrtRSI;
    d_st.site = &if_emlrtRSI;
    if (out->f1.size(0) == 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &mb_emlrtRTEI,
                                    "Coder:toolbox:autoDimIncompatibility",
                                    "Coder:toolbox:autoDimIncompatibility", 0);
    }
    e_st.site = &cf_emlrtRSI;
    f_st.site = &df_emlrtRSI;
    g_st.site = &ef_emlrtRSI;
    m = out->f1.size(0);
    overflow = (out->f1.size(0) > 2147483646);
    for (j = 0; j < 2; j++) {
      minval[j] = out->f1[out->f1.size(0) * j];
      h_st.site = &ff_emlrtRSI;
      if (overflow) {
        i_st.site = &hb_emlrtRSI;
        coder::check_forloop_overflow_error(&i_st);
      }
      for (loop_ub = 2; loop_ub <= m; loop_ub++) {
        b = out->f1[(loop_ub + out->f1.size(0) * j) - 1];
        if (muDoubleScalarIsNaN(b)) {
          p = false;
        } else {
          d = minval[j];
          if (muDoubleScalarIsNaN(d)) {
            p = true;
          } else {
            p = (d > b);
          }
        }
        if (p) {
          minval[j] = b;
        }
      }
    }
    //  Each point is considered as the central corner of the triangle formed
    //  with its left and right hand side neighbours. The first and the last
    //  points are not the central corner of any triangle, so for N points
    //  there are only N-2 triangles.
    if (!(static_cast<real_T>(out->f1.size(0)) - 2.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(out->f1.size(0)) - 2.0,
                                  &ob_emlrtDCI, (emlrtConstCTX)sp);
    }
    //    if thresholdingArea
    //      triangleArea = calculateTrianglesArea(dataPoints(:,1:2));
    //      bigTriangles = triangleArea > (maxArea * dataBoxArea);
    //      trianglesToRefine = trianglesToRefine | bigTriangles;
    //    end
    loop_ub = out->f1.size(0);
    b_out.set_size(&fj_emlrtRTEI, sp, out->f1.size(0), 2);
    for (int32_T i{0}; i < 2; i++) {
      for (trueCount = 0; trueCount < loop_ub; trueCount++) {
        b_out[trueCount + b_out.size(0) * i] =
            out->f1[trueCount + out->f1.size(0) * i];
      }
      maxval[i] -= minval[i];
    }
    st.site = &qe_emlrtRSI;
    calculateCentralAngles(&st, b_out, maxval, newDomain);
    sharpCorners.set_size(&gj_emlrtRTEI, sp, newDomain.size(0));
    loop_ub = newDomain.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      sharpCorners[i] = (newDomain[i] < minAngle);
    }
    if ((out->f1.size(0) - 2 != sharpCorners.size(0)) &&
        ((out->f1.size(0) - 2 != 1) && (sharpCorners.size(0) != 1))) {
      emlrtDimSizeImpxCheckR2021b(out->f1.size(0) - 2, sharpCorners.size(0),
                                  &o_emlrtECI, (emlrtConstCTX)sp);
    }
    if (out->f1.size(0) - 2 == sharpCorners.size(0)) {
      sharpCorners.set_size(&hj_emlrtRTEI, sp, out->f1.size(0) - 2);
    } else {
      st.site = &al_emlrtRSI;
      b_binary_expand_op(&st, sharpCorners, out);
    }
    //  For N points there are N-2 triangles and N-1 triangle sides. Each
    //  triangle side is a segment, which can be split or not depending on the
    //  refinement parameters.
    segmentsToSplit.set_size(&ij_emlrtRTEI, sp, sharpCorners.size(0) + 1);
    loop_ub = sharpCorners.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      segmentsToSplit[i] = sharpCorners[i];
    }
    segmentsToSplit[sharpCorners.size(0)] = false;
    r1.set_size(&jj_emlrtRTEI, sp, sharpCorners.size(0) + 1);
    r1[0] = false;
    loop_ub = sharpCorners.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      r1[i + 1] = sharpCorners[i];
    }
    if ((segmentsToSplit.size(0) != r1.size(0)) &&
        ((segmentsToSplit.size(0) != 1) && (r1.size(0) != 1))) {
      emlrtDimSizeImpxCheckR2021b(segmentsToSplit.size(0), r1.size(0),
                                  &p_emlrtECI, (emlrtConstCTX)sp);
    }
    if (segmentsToSplit.size(0) == r1.size(0)) {
      loop_ub = segmentsToSplit.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        segmentsToSplit[i] = (segmentsToSplit[i] || r1[i]);
      }
    } else {
      st.site = &yk_emlrtRSI;
      b_or(&st, segmentsToSplit, r1);
    }
    //    if thresholdingLength
    //      dataSegments = diff(dataPoints(:,1:2));
    //      normalizedSegments = bsxfun(@rdivide, dataSegments, dataBoxSize);
    //      segmentsLengthNormalized = hypot(normalizedSegments(:,1),
    //      normalizedSegments(:,2)); tooLongSegments = segmentsLengthNormalized
    //      > maxLength; longEnoughSegments = segmentsLengthNormalized >
    //      minLength; segmentsToSplit = (segmentsToSplit | tooLongSegments) &
    //      longEnoughSegments;
    //    end
    //    if thresholdingSignal
    //      segmentsCenters = (dataPoints(1:end-1,2)+dataPoints(2:end,2))/2;
    //      centerAboveThreshold = segmentsCenters > minSignal *
    //      max(abs(dataPoints(:,2))); segmentsToSplit = segmentsToSplit &
    //      centerAboveThreshold;
    //    end
    st.site = &re_emlrtRSI;
    if (coder::any(&st, segmentsToSplit)) {
      st.site = &se_emlrtRSI;
      //  increaseSampling increase the sampling of an input function
      j = segmentsToSplit.size(0);
      for (loop_ub = 0; loop_ub < j; loop_ub++) {
        if (segmentsToSplit[loop_ub] &&
            (loop_ub + 1 > segmentsToSplit.size(0))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, segmentsToSplit.size(0),
                                        &ph_emlrtBCI, &st);
        }
      }
      j = segmentsToSplit.size(0);
      trueCount = 0;
      for (loop_ub = 0; loop_ub < j; loop_ub++) {
        if (segmentsToSplit[loop_ub]) {
          trueCount++;
        }
      }
      newDataPoints.set_size(&kj_emlrtRTEI, &st, trueCount, 2);
      loop_ub = trueCount << 1;
      for (int32_T i{0}; i < loop_ub; i++) {
        newDataPoints[i] = 0.0;
      }
      r1.set_size(&lj_emlrtRTEI, &st, segmentsToSplit.size(0) + 1);
      loop_ub = segmentsToSplit.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        r1[i] = segmentsToSplit[i];
      }
      r1[segmentsToSplit.size(0)] = false;
      j = r1.size(0);
      for (loop_ub = 0; loop_ub < j; loop_ub++) {
        if (r1[loop_ub] && (loop_ub + 1 > out->f1.size(0))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, out->f1.size(0),
                                        &qh_emlrtBCI, &st);
        }
      }
      sharpCorners.set_size(&mj_emlrtRTEI, &st, segmentsToSplit.size(0) + 1);
      sharpCorners[0] = false;
      loop_ub = segmentsToSplit.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        sharpCorners[i + 1] = segmentsToSplit[i];
      }
      j = sharpCorners.size(0);
      for (loop_ub = 0; loop_ub < j; loop_ub++) {
        if (sharpCorners[loop_ub] && (loop_ub + 1 > out->f1.size(0))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, out->f1.size(0),
                                        &rh_emlrtBCI, &st);
        }
      }
      j = r1.size(0) - 1;
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (r1[loop_ub]) {
          m++;
        }
      }
      r2.set_size(&nj_emlrtRTEI, &st, m);
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (r1[loop_ub]) {
          r2[m] = loop_ub + 1;
          m++;
        }
      }
      j = sharpCorners.size(0) - 1;
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (sharpCorners[loop_ub]) {
          m++;
        }
      }
      r3.set_size(&nj_emlrtRTEI, &st, m);
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (sharpCorners[loop_ub]) {
          r3[m] = loop_ub + 1;
          m++;
        }
      }
      if ((r2.size(0) != r3.size(0)) &&
          ((r2.size(0) != 1) && (r3.size(0) != 1))) {
        emlrtDimSizeImpxCheckR2021b(r2.size(0), r3.size(0), &q_emlrtECI, &st);
      }
      j = r1.size(0) - 1;
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (r1[loop_ub]) {
          m++;
        }
      }
      r4.set_size(&nj_emlrtRTEI, &st, m);
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (r1[loop_ub]) {
          r4[m] = loop_ub + 1;
          m++;
        }
      }
      j = sharpCorners.size(0) - 1;
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (sharpCorners[loop_ub]) {
          m++;
        }
      }
      r5.set_size(&nj_emlrtRTEI, &st, m);
      m = 0;
      for (loop_ub = 0; loop_ub <= j; loop_ub++) {
        if (sharpCorners[loop_ub]) {
          r5[m] = loop_ub + 1;
          m++;
        }
      }
      if (r4.size(0) == r5.size(0)) {
        newDomain.set_size(&oj_emlrtRTEI, &st, r4.size(0));
        loop_ub = r4.size(0);
        for (int32_T i{0}; i < loop_ub; i++) {
          newDomain[i] = 0.5 * (out->f1[r4[i] - 1] + out->f1[r5[i] - 1]);
        }
      } else {
        b_st.site = &xk_emlrtRSI;
        binary_expand_op(&b_st, newDomain, out, r4, r5);
      }
      emlrtSubAssignSizeCheckR2012b(&trueCount, 1, newDomain.size(), 1,
                                    &r_emlrtECI, &st);
      loop_ub = newDomain.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        newDataPoints[i] = newDomain[i];
      }
      hiVal.set_size(&pj_emlrtRTEI, &st, newDataPoints.size(0));
      loop_ub = newDataPoints.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        hiVal[i] = newDataPoints[i];
      }
      b_st.site = &cg_emlrtRSI;
      b_normalizeFunction(&b_st, hiVal, sldProfile, newDomain);
      emlrtSubAssignSizeCheckR2012b(newDataPoints.size(), 1, newDomain.size(),
                                    1, &s_emlrtECI, &st);
      loop_ub = newDomain.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        newDataPoints[i + newDataPoints.size(0)] = newDomain[i];
      }
      //  For simplicity append the new points at the end and then sort.
      b_st.site = &dg_emlrtRSI;
      c_st.site = &eg_emlrtRSI;
      d_st.site = &ic_emlrtRSI;
      if (newDataPoints.size(0) != 0) {
        m = newDataPoints.size(0);
      } else {
        m = 0;
      }
      j = out->f1.size(0);
      b_out.set_size(&qj_emlrtRTEI, &st, out->f1.size(0) + m, 2);
      loop_ub = out->f1.size(0);
      for (int32_T i{0}; i < 2; i++) {
        for (trueCount = 0; trueCount < loop_ub; trueCount++) {
          b_out[trueCount + b_out.size(0) * i] = out->f1[trueCount + j * i];
        }
      }
      for (int32_T i{0}; i < 2; i++) {
        for (trueCount = 0; trueCount < m; trueCount++) {
          b_out[(trueCount + j) + b_out.size(0) * i] =
              newDataPoints[trueCount + newDataPoints.size(0) * i];
        }
      }
      out->f1.set_size(&rj_emlrtRTEI, &st, b_out.size(0), 2);
      loop_ub = b_out.size(0) * 2;
      for (int32_T i{0}; i < loop_ub; i++) {
        out->f1[i] = b_out[i];
      }
      b_st.site = &dg_emlrtRSI;
      coder::sortrows(&b_st, out->f1);
      //  Removed waitbar for compile - AVH
      //    if displayWaitbar
      //      if getappdata(refinementWaitbar,'canceling'), break; end
      //      waitbar(nRefinements/maxRefinements,refinementWaitbar);
      //    end
      nRefinements++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    } else {
      exitg1 = true;
    }
  }
  //  if displayWaitbar
  //    delete(refinementWaitbar);
  //  end
  //  Plotting refined function
  //  Removed for compile - AVH
  //  if nargin==0 % test mode
  //    figure(testFigureHandle);
  //    hold on;
  //    plot(dataPoints(:,1), dataPoints(:,2),'ro-');
  //    legend('initial', 'refiniment');
  //  end
  // if nargout==1
  //  elseif nargout>1
  //    out{1} = dataPoints(:,1);
  //    out{2} = dataPoints(:,2:end);
  //  end
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (adaptive_new.cpp)
