//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// rmmissing.cpp
//
// Code generation for function 'rmmissing'
//

// Include files
#include "rmmissing.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

// Function Definitions
namespace coder {
void b_rmmissing(const real_T a[16], real_T b_data[], int32_T b_size[2])
{
  int32_T partialTrueCount;
  int32_T trueCount;
  int8_T tmp_data[8];
  boolean_T missLoc[16];
  for (partialTrueCount = 0; partialTrueCount < 16; partialTrueCount++) {
    missLoc[partialTrueCount] = muDoubleScalarIsNaN(a[partialTrueCount]);
  }
  trueCount = 0;
  partialTrueCount = 0;
  for (int32_T j{0}; j < 8; j++) {
    boolean_T b;
    b = (missLoc[j] + missLoc[j + 8] >= 1);
    if (!b) {
      trueCount++;
      tmp_data[partialTrueCount] = static_cast<int8_T>(j + 1);
      partialTrueCount++;
    }
  }
  b_size[0] = trueCount;
  b_size[1] = 2;
  for (partialTrueCount = 0; partialTrueCount < 2; partialTrueCount++) {
    for (int32_T j{0}; j < trueCount; j++) {
      b_data[j + trueCount * partialTrueCount] =
          a[(tmp_data[j] + (partialTrueCount << 3)) - 1];
    }
  }
}

void rmmissing(const real_T a[24], real_T b_data[], int32_T b_size[2])
{
  int32_T nz[8];
  int32_T j;
  int32_T trueCount;
  int32_T xoffset;
  int8_T tmp_data[8];
  boolean_T missLoc[24];
  for (j = 0; j < 24; j++) {
    missLoc[j] = muDoubleScalarIsNaN(a[j]);
  }
  for (j = 0; j < 8; j++) {
    nz[j] = missLoc[j];
  }
  for (int32_T i{0}; i < 2; i++) {
    xoffset = (i + 1) << 3;
    for (j = 0; j < 8; j++) {
      nz[j] += missLoc[xoffset + j];
    }
  }
  trueCount = 0;
  j = 0;
  for (int32_T i{0}; i < 8; i++) {
    boolean_T b;
    b = (nz[i] >= 1);
    if (!b) {
      trueCount++;
      tmp_data[j] = static_cast<int8_T>(i + 1);
      j++;
    }
  }
  b_size[0] = trueCount;
  b_size[1] = 3;
  for (j = 0; j < 3; j++) {
    for (xoffset = 0; xoffset < trueCount; xoffset++) {
      b_data[xoffset + trueCount * j] = a[(tmp_data[xoffset] + (j << 3)) - 1];
    }
  }
}

} // namespace coder

// End of code generation (rmmissing.cpp)
