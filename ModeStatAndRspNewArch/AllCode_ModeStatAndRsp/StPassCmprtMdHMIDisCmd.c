/*
 * File: StPassCmprtMdHMIDisCmd.c
 *
 * Code generated for Simulink model 'StPassCmprtMdHMIDisCmd'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 15:13:41 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "StPassCmprtMdHMIDisCmd.h"

/* Block states (default storage) */
DW_StPassCmprtMdHMIDisCmd_T StPassCmprtMdHMIDisCmd_DW;

/* Model step function */
void StPassCmprtMdHMIDisCmdCalc_Cal()
{
  uint32 tmpRead;
  PowerMode1 tmpRead_0;

  /* Inport: '<Root>/PwrMdChked_Val' */
  Rte_Read_PwrMdChked_Val(&tmpRead_0);

  /* Inport: '<Root>/modestate32_Val' */
  Rte_Read_modestate32_Val(&tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/StPassCmprtMdHMIDisCmdCalc_Cal_sys' */
  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant5'
   *  Constant: '<S4>/Constant6'
   *  Constant: '<S4>/Constant7'
   *  Inport: '<Root>/PwrMdChked_Val'
   *  Logic: '<S3>/Logical Operator'
   *  RelationalOperator: '<S3>/Relational Operator1'
   *  RelationalOperator: '<S3>/Relational Operator2'
   *  SignalConversion: '<S1>/TmpLatchAtPwrMdChked_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   *  Sum: '<S4>/Add'
   *  UnitDelay: '<S4>/Unit Delay'
   */
  if ((tmpRead_0 == PowerMode_Off) && (tmpRead > 0U)) {
    StPassCmprtMdHMIDisCmd_DW.UnitDelay_DSTATE++;
  } else {
    StPassCmprtMdHMIDisCmd_DW.UnitDelay_DSTATE = 0U;
  }

  /* End of Switch: '<S4>/Switch1' */

  /* Saturate: '<S4>/Saturation' */
  if (StPassCmprtMdHMIDisCmd_DW.UnitDelay_DSTATE >= 3) {
    StPassCmprtMdHMIDisCmd_DW.UnitDelay_DSTATE = 3U;
  }

  /* End of Saturate: '<S4>/Saturation' */

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMdHMIDisCmd_Val' incorporates:
   *  Constant: '<S4>/Constant5'
   *  RelationalOperator: '<S4>/Relational Operator3'
   *  Switch: '<S3>/Switch'
   *  UnitDelay: '<S4>/Unit Delay'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMdHMIDisCmd_Val((uint8)
    (StPassCmprtMdHMIDisCmd_DW.UnitDelay_DSTATE >= 3));

  /* End of Outputs for SubSystem: '<Root>/StPassCmprtMdHMIDisCmdCalc_Cal_sys' */
}

/* Model initialize function */
void StPassCmprtMdHMIDisCmd_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
