//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// gwmcmc_compile_terminate.cpp
//
// Code generation for function 'gwmcmc_compile_terminate'
//

// Include files
#include "gwmcmc_compile_terminate.h"
#include "_coder_gwmcmc_compile_mex.h"
#include "gwmcmc_compile_data.h"
#include "rt_nonfinite.h"
#include <string.h>

// Function Definitions
void gwmcmc_compile_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void gwmcmc_compile_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (gwmcmc_compile_terminate.cpp)
