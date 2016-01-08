/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * transceive202_initialize.c
 *
 * Code generation for function 'transceive202_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "transceive202_initialize.h"
#include "mapiPrivate.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "eml_rand_shr3cong_stateful.h"
#include "eml_rand_mcg16807_stateful.h"
#include "eml_rand.h"
#include "_coder_transceive202_mex.h"
#include "transceive202_data.h"

/* Function Declarations */
static void transceive202_once(void);

/* Function Definitions */
static void transceive202_once(void)
{
  c_isSetupsdruCalled_not_empty_i();
  c_state_not_empty_init();
  b_state_not_empty_init();
  state_not_empty_init();
  method_not_empty_init();
  htx_not_empty_init();
  hrx_not_empty_init();
  eml_rand_init();
  eml_rand_mcg16807_stateful_init();
  eml_rand_shr3cong_stateful_init();
  c_eml_rand_mt19937ar_stateful_i();
  mapiPrivate_init();
}

void transceive202_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "communication_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    transceive202_once();
  }
}

/* End of code generation (transceive202_initialize.c) */
