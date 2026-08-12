/*
 * File: ModeStatAndRspCaller.c
 *
 * Code generated for Simulink model 'ModeStatAndRspCaller'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jul 12 10:00:11 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ModeStatAndRspCaller.h"

/* Model step function for TID1 */
void ModeStatAndRspRunnable(void)      /* Sample time: [0.01s, 0.0s] */
{
  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ModeStatAndRspRunnable_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ModeStatAndRspRunnable_sys'
   */
  /* Chart: '<S2>/Chart' incorporates:
   *  SubSystem: '<S3>/ModeStateCtrl_Cal'
   */
  /* FunctionCaller: '<S5>/ModeStateCtrl_Cal' */
  Rte_Call_ModeStateCtrl_Cal();

  /* Chart: '<S2>/Chart' incorporates:
   *  SubSystem: '<S3>/ModeRsp_Cal'
   */
  /* FunctionCaller: '<S4>/ModeRsp_Cal' */
  Rte_Call_ModeRsp_Cal();

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ModeStatAndRspRunnable_at_outport_1' */
}

/* Model initialize function */
void ModeStatAndRspCaller_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
