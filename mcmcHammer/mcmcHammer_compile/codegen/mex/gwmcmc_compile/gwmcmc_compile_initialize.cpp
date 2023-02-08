//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// gwmcmc_compile_initialize.cpp
//
// Code generation for function 'gwmcmc_compile_initialize'
//

// Include files
#include "gwmcmc_compile_initialize.h"
#include "_coder_gwmcmc_compile_mex.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include <string.h>

// Function Declarations
static void gwmcmc_compile_once();

// Function Definitions
static void gwmcmc_compile_once()
{
  mex_InitInfAndNan();
}

void gwmcmc_compile_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    gwmcmc_compile_once();
  }
}

// End of code generation (gwmcmc_compile_initialize.cpp)
