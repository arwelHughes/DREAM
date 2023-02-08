//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// gwmcmc_compile_data.cpp
//
// Code generation for function 'gwmcmc_compile_data'
//

// Include files
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include <string.h>

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131627U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "gwmcmc_compile",                                     // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

emlrtRSInfo hb_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" // pathName
};

emlrtRSInfo rb_emlrtRSI{
    58,                       // lineNo
    "standardTF_layers_core", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_layers_core.m" // pathName
};

emlrtRSInfo sb_emlrtRSI{
    69,                       // lineNo
    "standardTF_layers_core", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_layers_core.m" // pathName
};

emlrtRSInfo tb_emlrtRSI{
    76,                       // lineNo
    "standardTF_layers_core", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_layers_core.m" // pathName
};

emlrtRSInfo ub_emlrtRSI{
    84,                       // lineNo
    "standardTF_layers_core", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_layers_core.m" // pathName
};

emlrtRSInfo vb_emlrtRSI{
    88,                       // lineNo
    "standardTF_layers_core", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_layers_core.m" // pathName
};

emlrtRSInfo wb_emlrtRSI{
    91,                       // lineNo
    "standardTF_layers_core", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_layers_core.m" // pathName
};

emlrtRSInfo xb_emlrtRSI{
    94,                       // lineNo
    "standardTF_layers_core", // fcnName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_layers_core.m" // pathName
};

emlrtRSInfo hc_emlrtRSI{
    36,    // lineNo
    "cat", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/cat.m" // pathName
};

emlrtRSInfo ic_emlrtRSI{
    110,        // lineNo
    "cat_impl", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/cat.m" // pathName
};

emlrtRSInfo uc_emlrtRSI{
    20,    // lineNo
    "sum", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/sum.m" // pathName
};

emlrtRSInfo vc_emlrtRSI{
    99,        // lineNo
    "sumprod", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" // pathName
};

emlrtRSInfo wc_emlrtRSI{
    74,                      // lineNo
    "combineVectorElements", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" // pathName
};

emlrtRSInfo id_emlrtRSI{
    71,      // lineNo
    "power", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/power.m" // pathName
};

emlrtRSInfo fe_emlrtRSI{
    15,    // lineNo
    "max", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/max.m" // pathName
};

emlrtRSInfo ge_emlrtRSI{
    44,         // lineNo
    "minOrMax", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

emlrtRSInfo he_emlrtRSI{
    79,        // lineNo
    "maximum", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

emlrtRSInfo xe_emlrtRSI{
    39,     // lineNo
    "find", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

emlrtRSInfo uf_emlrtRSI{
    34,               // lineNo
    "rdivide_helper", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "rdivide_helper.m" // pathName
};

emlrtRSInfo vf_emlrtRSI{
    51,    // lineNo
    "div", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/div.m" // pathName
};

emlrtRSInfo xf_emlrtRSI{
    33,                           // lineNo
    "applyScalarFunctionInPlace", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunctionInPlace.m" // pathName
};

emlrtRSInfo ag_emlrtRSI{
    13,    // lineNo
    "any", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/any.m" // pathName
};

emlrtRSInfo bg_emlrtRSI{
    143,        // lineNo
    "allOrAny", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "allOrAny.m" // pathName
};

emlrtRSInfo eg_emlrtRSI{
    38,    // lineNo
    "cat", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/cat.m" // pathName
};

omp_lock_t emlrtLockGlobal;

omp_nest_lock_t gwmcmc_compile_nestLockGlobal;

emlrtRTEInfo b_emlrtRTEI{
    53,       // lineNo
    15,       // colNo
    "bsxfun", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/bsxfun.m" // pName
};

emlrtRTEInfo w_emlrtRTEI{
    15,                      // lineNo
    9,                       // colNo
    "assertSupportedString", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "assertSupportedString.m" // pName
};

emlrtDCInfo gb_emlrtDCI{
    3,                           // lineNo
    8,                           // colNo
    "applyBackgroundCorrection", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/applyBackgroundCorrection.m", // pName
    1                                               // checkKind
};

emlrtECInfo h_emlrtECI{
    -1,                          // nDims
    6,                           // lineNo
    9,                           // colNo
    "applyBackgroundCorrection", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/applyBackgroundCorrection.m" // pName
};

emlrtECInfo i_emlrtECI{
    -1,                          // nDims
    7,                           // lineNo
    9,                           // colNo
    "applyBackgroundCorrection", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/applyBackgroundCorrection.m" // pName
};

emlrtBCInfo bh_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    10,                          // lineNo
    23,                          // colNo
    "shifted_dat",               // aName
    "applyBackgroundCorrection", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/applyBackgroundCorrection.m", // pName
    0                                               // checkKind
};

emlrtECInfo j_emlrtECI{
    -1,                          // nDims
    10,                          // lineNo
    9,                           // colNo
    "applyBackgroundCorrection", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/applyBackgroundCorrection.m" // pName
};

emlrtRTEInfo jb_emlrtRTEI{
    285,                   // lineNo
    27,                    // colNo
    "check_non_axis_size", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/cat.m" // pName
};

emlrtRTEInfo qb_emlrtRTEI{
    13,                     // lineNo
    27,                     // colNo
    "assertCompatibleDims", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/assertCompatibleDims.m" // pName
};

emlrtRTEInfo ub_emlrtRTEI{
    14,     // lineNo
    9,      // colNo
    "asin", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elfun/asin.m" // pName
};

emlrtRTEInfo ld_emlrtRTEI{
    13,               // lineNo
    13,               // colNo
    "toLogicalCheck", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "toLogicalCheck.m" // pName
};

emlrtRTEInfo se_emlrtRTEI{
    60,       // lineNo
    20,       // colNo
    "bsxfun", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/bsxfun.m" // pName
};

emlrtRTEInfo ai_emlrtRTEI{
    71,                       // lineNo
    5,                        // colNo
    "standardTF_layers_core", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_layers_core.m" // pName
};

emlrtRTEInfo bi_emlrtRTEI{
    79,                       // lineNo
    5,                        // colNo
    "standardTF_layers_core", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_layers_core.m" // pName
};

emlrtRTEInfo ci_emlrtRTEI{
    80,                       // lineNo
    5,                        // colNo
    "standardTF_layers_core", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_layers_core.m" // pName
};

emlrtRTEInfo di_emlrtRTEI{
    77,                       // lineNo
    5,                        // colNo
    "standardTF_layers_core", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_layers_core.m" // pName
};

emlrtRTEInfo fi_emlrtRTEI{
    6,                           // lineNo
    24,                          // colNo
    "applyBackgroundCorrection", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/applyBackgroundCorrection.m" // pName
};

emlrtRTEInfo gi_emlrtRTEI{
    7,                           // lineNo
    22,                          // colNo
    "applyBackgroundCorrection", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/applyBackgroundCorrection.m" // pName
};

emlrtRTEInfo hi_emlrtRTEI{
    10,                          // lineNo
    28,                          // colNo
    "applyBackgroundCorrection", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "callReflectivity/applyBackgroundCorrection.m" // pName
};

emlrtRTEInfo oj_emlrtRTEI{
    429,            // lineNo
    22,             // colNo
    "adaptive_new", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/common/"
    "resampleLayers/adaptive_new.m" // pName
};

emlrtRTEInfo tn_emlrtRTEI{
    72,                          // lineNo
    6,                           // colNo
    "standardTF_custlay_single", // fName
    "/Users/arwel.hughes/Documents/coding/RAT/targetFunctions/standard_TF/"
    "standardTF_custLay/standardTF_custlay_single.m" // pName
};

emlrtRTEInfo ts_emlrtRTEI{
    52,    // lineNo
    9,     // colNo
    "div", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/div.m" // pName
};

const char_T cv[128]{
    '\x00', '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\x07', '\x08',
    '\x09', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f', '\x10', '\x11',
    '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19', '\x1a',
    '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ',    '!',    '\"',   '#',
    '$',    '%',    '&',    '\'',   '(',    ')',    '*',    '+',    ',',
    '-',    '.',    '/',    '0',    '1',    '2',    '3',    '4',    '5',
    '6',    '7',    '8',    '9',    ':',    ';',    '<',    '=',    '>',
    '?',    '@',    'a',    'b',    'c',    'd',    'e',    'f',    'g',
    'h',    'i',    'j',    'k',    'l',    'm',    'n',    'o',    'p',
    'q',    'r',    's',    't',    'u',    'v',    'w',    'x',    'y',
    'z',    '[',    '\\',   ']',    '^',    '_',    '`',    'a',    'b',
    'c',    'd',    'e',    'f',    'g',    'h',    'i',    'j',    'k',
    'l',    'm',    'n',    'o',    'p',    'q',    'r',    's',    't',
    'u',    'v',    'w',    'x',    'y',    'z',    '{',    '|',    '}',
    '~',    '\x7f'};

const char_T cv1[29]{'l', 'o', 'o', 'p', 'M', 'a', 't', 'l', 'a', 'b',
                     'C', 'u', 's', 't', 'o', 'm', 'L', 'a', 'y', 'e',
                     'r', 's', '_', 's', 'i', 'n', 'g', 'l', 'e'};

const char_T cv2[29]{'l', 'o', 'o', 'p', 'M', 'a', 't', 'l', 'a', 'b',
                     'C', 'u', 's', 't', 'o', 'm', 'L', 'a', 'y', 'e',
                     'r', 's', '_', 'p', 'o', 'i', 'n', 't', 's'};

emlrtRSInfo xk_emlrtRSI{
    76,                  // lineNo
    "eml_mtimes_helper", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" // pathName
};

// End of code generation (gwmcmc_compile_data.cpp)
