/*
 * File: CHM2Ctrl_Caller.c
 *
 * Code generated for Simulink model 'CHM2Ctrl_Caller'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 14:42:29 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CHM2Ctrl_Caller.h"

/* Model step function */
void CHM2Ctrl_Cal()
{
  /* Outputs for Function Call SubSystem: '<S1>/CHM2Ctrl_Cal_sys' */
  /* Chart: '<S3>/Chart' incorporates:
   *  Constant: '<S3>/PA_KeSMSbMdChime2Enable_Val'
   */
  if (Rte_Prm_KeSMSbMdChime2Enable_Val()) {
    /* Outputs for Function Call SubSystem: '<S4>/CHM2ActiveReqChk_Cal' */
    /* FunctionCaller: '<S5>/CHM2ActiveReqChk_Cal' */
    Rte_Call_CHM2ActiveReqChk_Cal();

    /* End of Outputs for SubSystem: '<S4>/CHM2ActiveReqChk_Cal' */

    /* Outputs for Function Call SubSystem: '<S4>/CHM2StateCtrl_Cal' */
    /* FunctionCaller: '<S7>/CHM2StateCtrl_Cal' */
    Rte_Call_CHM2StateCtrl_Cal();

    /* End of Outputs for SubSystem: '<S4>/CHM2StateCtrl_Cal' */

    /* Outputs for Function Call SubSystem: '<S4>/CHM2ActiveSubStateCtrl_Cal' */
    /* FunctionCaller: '<S6>/CHM2ActiveSubStateCtrl_Cal' */
    Rte_Call_CHM2ActiveSubStateCtrl_Cal();

    /* End of Outputs for SubSystem: '<S4>/CHM2ActiveSubStateCtrl_Cal' */
  }

  /* End of Chart: '<S3>/Chart' */
  /* End of Outputs for SubSystem: '<S1>/CHM2Ctrl_Cal_sys' */
}

/* Model initialize function */
void CHM2Ctrl_Caller_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
