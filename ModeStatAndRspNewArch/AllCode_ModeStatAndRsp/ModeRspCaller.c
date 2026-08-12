/*
 * File: ModeRspCaller.c
 *
 * Code generated for Simulink model 'ModeRspCaller'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jul 12 09:52:50 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ModeRspCaller.h"

/* Model step function */
void ModeRsp_Cal()
{
  /* Outputs for Function Call SubSystem: '<S1>/ModeRsp_Cal_sys' */
  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/MdXX_RspOutCommCalc_Cal'
   */
  /* FunctionCaller: '<S6>/MdXX_RspOutCommCalc_Cal' */
  Rte_Call_MdXX_RspOutCommCalc_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/MdXX_Status_Cal'
   */
  /* FunctionCaller: '<S9>/MdXX_Status_Cal' */
  Rte_Call_MdXX_Status_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SRSModeState_Cal'
   */
  /* FunctionCaller: '<S10>/SRSModeState_Cal' */
  Rte_Call_SRSModeState_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/CHM2Ctrl_Cal'
   */
  /* FunctionCaller: '<S5>/CHM2Ctrl_Cal' */
  Rte_Call_CHM2Ctrl_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/StPassCmprtMdHMIDisCmdCalc_Cal'
   */
  /* FunctionCaller: '<S12>/StPassCmprtMdHMIDisCmdCalc_Cal' */
  Rte_Call_StPassCmprtMdHMIDisCmdCalc_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/MdXX_RspToNetWork_Cal'
   */
  /* FunctionCaller: '<S7>/MdXX_RspToNetWork_Cal' */
  Rte_Call_MdXX_RspToNetWork_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/MdXX_StatusToNetWork_Cal'
   */
  /* FunctionCaller: '<S8>/MdXX_StatusToNetWork_Cal' */
  Rte_Call_MdXX_StatusToNetWork_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SRSSwIndCtrl_Cal'
   */
  /* FunctionCaller: '<S11>/SRSSwIndCtrl_Cal' */
  Rte_Call_SRSSwIndCtrl_Cal();

  /* End of Outputs for SubSystem: '<S1>/ModeRsp_Cal_sys' */
}

/* Model initialize function */
void ModeRspCaller_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
