/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rffe_50_initialize.c
 *
 * Code generation for function 'rffe_50_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_50.h"
#include "rffe_50_initialize.h"
#include "_coder_rffe_50_mex.h"
#include "rffe_50_data.h"

/* Function Declarations */
static void rffe_50_once(void);

/* Function Definitions */
static void rffe_50_once(void)
{
  hrr_not_empty_init();
  hf_not_empty_init();
  he_not_empty_init();
  hd_not_empty_init();
  ha_not_empty_init();
}

void rffe_50_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Communication_Toolbox", 2);
  emlrtLicenseCheckR2012b(&st, "Signal_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    rffe_50_once();
  }
}

/* End of code generation (rffe_50_initialize.c) */
