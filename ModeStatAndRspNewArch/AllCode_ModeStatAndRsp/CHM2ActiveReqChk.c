/*
 * File: CHM2ActiveReqChk.c
 *
 * Code generated for Simulink model 'CHM2ActiveReqChk'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 14:26:52 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CHM2ActiveReqChk.h"

/* Block states (default storage) */
DW_CHM2ActiveReqChk_T CHM2ActiveReqChk_DW;

/* Model step function */
void CHM2ActiveReqChk_Cal()
{
  uint32 tmpRead;

  /* Inport: '<Root>/modestate32_Val' */
  Rte_Read_modestate32_Val(&tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/CHM2ActiveReqChk_Cal_sys' */
  /* Switch: '<S6>/Switch1' incorporates:
   *  Constant: '<S3>/Constant5'
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  Constant: '<S6>/Constant6'
   *  Constant: '<S6>/Constant7'
   *  Logic: '<S3>/Logical Operator'
   *  Logic: '<S3>/Logical Operator1'
   *  Logic: '<S3>/NOT'
   *  Logic: '<S3>/NOT1'
   *  RelationalOperator: '<S3>/Relational Operator1'
   *  RelationalOperator: '<S4>/Relational Operator'
   *  RelationalOperator: '<S5>/Relational Operator'
   *  S-Function (sfix_bitop): '<S4>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S5>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   *  Sum: '<S6>/Add'
   *  UnitDelay: '<S6>/Unit Delay'
   */
  if ((tmpRead > 0U) && (((tmpRead & 1024U) <= 0U) && ((tmpRead & 4096U) <= 0U)))
  {
    CHM2ActiveReqChk_DW.UnitDelay_DSTATE++;
  } else {
    CHM2ActiveReqChk_DW.UnitDelay_DSTATE = 0U;
  }

  /* End of Switch: '<S6>/Switch1' */

  /* Saturate: '<S6>/Saturation' */
  if (CHM2ActiveReqChk_DW.UnitDelay_DSTATE >= 3) {
    CHM2ActiveReqChk_DW.UnitDelay_DSTATE = 3U;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* Outport: '<Root>/CHM2ActiveReq_Val' incorporates:
   *  Constant: '<S6>/Constant5'
   *  RelationalOperator: '<S6>/Relational Operator3'
   *  UnitDelay: '<S6>/Unit Delay'
   */
  (void) Rte_Write_CHM2ActiveReq_Val(CHM2ActiveReqChk_DW.UnitDelay_DSTATE >= 3);

  /* End of Outputs for SubSystem: '<Root>/CHM2ActiveReqChk_Cal_sys' */
}

/* Model initialize function */
void CHM2ActiveReqChk_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
