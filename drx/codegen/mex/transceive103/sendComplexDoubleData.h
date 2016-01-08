/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * sendComplexDoubleData.h
 *
 * Code generation for function 'sendComplexDoubleData'
 *
 */

#ifndef __SENDCOMPLEXDOUBLEDATA_H__
#define __SENDCOMPLEXDOUBLEDATA_H__

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "transceive103_types.h"

/* Function Declarations */
extern void sendComplexDoubleData(const emlrtStack *sp, int32_T driverApiH,
  const creal_T data[1408], const real_T freq[2], const real_T loOffset[2],
  const real_T gain[2], real_T interp, uint32_T *underflow, UsrpErrorCapiEnumT
  *errStat, char_T errStr_data[], int32_T errStr_size[2]);

#endif

/* End of code generation (sendComplexDoubleData.h) */
