/*
 * File: Md53StEnCtrl.c
 *
 * Code generated for Simulink model 'Md53StEnCtrl'.
 *
 * Model version                  : V1.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Jun 24 14:16:55 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Md53StEnCtrl.h"

/* Block signals (default storage) */
B_Md53StEnCtrl_T Md53StEnCtrl_B;

/* Block states (default storage) */
DW_Md53StEnCtrl_T Md53StEnCtrl_DW;

/* Model step function */
void Md53StEnCtrl_Cal()
{
  uint16 tmpRead[3];
  uint16 tmpRead_0;
  uint16 tmpRead_1;
  uint32 tmpRead_2;
  boolean tmpRead_3;
  boolean tmpRead_4;
  boolean rtb_LogicalOperator;
  boolean rtb_ThdRwRtStCshnFldEn;
  boolean rtb_SecRwRtStBkReclnEn;
  boolean rtb_ThdRwRtStBkReclnEn;
  uint8 rtb_LogicalOperator_0;

  /* Inport: '<Root>/ThdRwRtStCshnFldStgDone_Val' */
  Rte_Read_ThdRwRtStCshnFldStgDone_Val(&tmpRead_4);

  /* Inport: '<Root>/ThdRwRtStBkReclnStgDone_Val' */
  Rte_Read_ThdRwRtStBkReclnStgDone_Val(&rtb_LogicalOperator);

  /* Inport: '<Root>/SecRwRtStBkReclnStgDone_Val' */
  Rte_Read_SecRwRtStBkReclnStgDone_Val(&tmpRead_3);

  /* Inport: '<Root>/MdXXIsTargetPosZone_Val' */
  Rte_Read_MdXXIsTargetPosZone_Val(&tmpRead_2);

  /* Inport: '<Root>/IfVeSMSuThdRwRtStCshnFldUpwdDnwdPos_Val' */
  Rte_Read_IfVeSMSuThdRwRtStCshnFldUpwdDnwdPos_Val(&tmpRead_1);

  /* Inport: '<Root>/IfVeSMSuSecRwRtStBkReclnUpwdDnwdPos_Val' */
  Rte_Read_IfVeSMSuSecRwRtStBkReclnUpwdDnwdPos_Val(&tmpRead_0);

  /* Inport: '<Root>/EZER2RBkReclnUpwdDnwdTrgtPosCalib1_TrgtPosArray'
   *
   * Block description for '<Root>/EZER2RBkReclnUpwdDnwdTrgtPosCalib1_TrgtPosArray':
   *  0:Pos
   *  1:Max
   *  2:Min
   */
  Rte_Read_EZER2RBkReclnUpwdDnwdTrgtPosCalib1_TrgtPosArray(tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/Md53StEnCtrl_Cal_sys' */
  /* RelationalOperator: '<S3>/Relational Operator1' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtEZER2RBkReclnUpwdDnwdTrgtPosCalib1_TrgtPosArray_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIfVeSMSuSecRwRtStBkReclnUpwdDnwdPos_Val_readOutport1'
   */
  Md53StEnCtrl_B.RelationalOperator1 = (tmpRead_0 <= tmpRead[0]);

  /* Chart: '<S3>/Chart' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtSecRwRtStBkReclnStgDone_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtThdRwRtStBkReclnStgDone_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtThdRwRtStCshnFldStgDone_Val_readOutport1'
   */
  rtb_SecRwRtStBkReclnEn = false;
  rtb_ThdRwRtStCshnFldEn = false;
  rtb_ThdRwRtStBkReclnEn = false;
  if ((!Md53StEnCtrl_B.RelationalOperator1) && (!tmpRead_3)) {
    rtb_SecRwRtStBkReclnEn = true;
    Md53StEnCtrl_B.SecRwRtStFirstStepMov = true;
  }

  if (Md53StEnCtrl_B.RelationalOperator1 || tmpRead_3) {
    if (tmpRead_4) {
      if (!rtb_LogicalOperator) {
        rtb_ThdRwRtStBkReclnEn = true;
      }

      if (Md53StEnCtrl_B.SecRwRtStFirstStepMov) {
        rtb_SecRwRtStBkReclnEn = true;
      }
    } else {
      rtb_ThdRwRtStCshnFldEn = true;
    }
  }

  /* End of Chart: '<S3>/Chart' */

  /* If: '<S3>/If1' */
  if (rtb_ThdRwRtStBkReclnEn) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* FunctionCaller: '<S9>/ThdRwRtStBkReclnEn_Set' incorporates:
     *  Constant: '<S9>/Constant'
     */
    Rte_Call_ThdRwRtStBkReclnEn_Set(17);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* FunctionCaller: '<S6>/ThdRwRtStBkReclnEn_Clear' incorporates:
     *  Constant: '<S6>/Constant'
     */
    Rte_Call_ThdRwRtStBkReclnEn_Clear(17);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem1' */
  }

  /* End of If: '<S3>/If1' */

  /* If: '<S3>/If8' */
  if (rtb_SecRwRtStBkReclnEn) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem14' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* FunctionCaller: '<S8>/SecRwRtStBkReclnEn_Set' incorporates:
     *  Constant: '<S8>/Constant'
     */
    Rte_Call_SecRwRtStBkReclnEn_Set(17);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem14' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem11' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* FunctionCaller: '<S7>/SecRwRtStBkReclnEn_Clear' incorporates:
     *  Constant: '<S7>/Constant'
     */
    Rte_Call_SecRwRtStBkReclnEn_Clear(17);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem11' */
  }

  /* End of If: '<S3>/If8' */

  /* If: '<S3>/If2' */
  if (rtb_ThdRwRtStCshnFldEn) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* FunctionCaller: '<S11>/ThdRwRtStCshnFldEn_Set' incorporates:
     *  Constant: '<S11>/Constant'
     */
    Rte_Call_ThdRwRtStCshnFldEn_Set(17);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem4' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* FunctionCaller: '<S10>/ThdRwRtStCshnFldEn_Clear' incorporates:
     *  Constant: '<S10>/Constant'
     */
    Rte_Call_ThdRwRtStCshnFldEn_Clear(17);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem3' */
  }

  /* End of If: '<S3>/If2' */

  /* Logic: '<S3>/Logical Operator' incorporates:
   *  Constant: '<S3>/Constant'
   *  Logic: '<S3>/Logical Operator2'
   *  Logic: '<S3>/Logical Operator3'
   *  Logic: '<S3>/Logical Operator7'
   *  RelationalOperator: '<S3>/Relational Operator2'
   *  SignalConversion: '<S1>/TmpLatchAtIfVeSMSuThdRwRtStCshnFldUpwdDnwdPos_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSecRwRtStBkReclnStgDone_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtThdRwRtStBkReclnStgDone_Val_readOutport1'
   *  UnitDelay: '<S3>/Unit Delay'
   */
  rtb_LogicalOperator = ((tmpRead_1 >= 4000) || (rtb_LogicalOperator &&
    ((!Md53StEnCtrl_B.SecRwRtStFirstStepMov) || tmpRead_3) &&
    Md53StEnCtrl_DW.UnitDelay_DSTATE));

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S4>/Constant'
   *  Logic: '<S3>/Logical Operator9'
   *  RelationalOperator: '<S4>/Relational Operator'
   *  S-Function (sfix_bitop): '<S4>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosZone_Val_readOutport1'
   *  Switch: '<S3>/Switch1'
   */
  if (rtb_LogicalOperator && ((tmpRead_2 & 2147483648U) > 0U)) {
    /* Outport: '<Root>/Md53MdDone_Val' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    (void) Rte_Write_Md53MdDone_Val(1U);
  } else {
    if (rtb_LogicalOperator) {
      /* Switch: '<S3>/Switch1' incorporates:
       *  Constant: '<S3>/Constant2'
       */
      rtb_LogicalOperator_0 = 2U;
    } else {
      /* Switch: '<S3>/Switch1' incorporates:
       *  Constant: '<S3>/Constant3'
       */
      rtb_LogicalOperator_0 = 0U;
    }

    /* Outport: '<Root>/Md53MdDone_Val' */
    (void) Rte_Write_Md53MdDone_Val(rtb_LogicalOperator_0);
  }

  /* End of Switch: '<S3>/Switch' */

  /* Outport: '<Root>/Md53R2RBkReclnResetFlg_Val' incorporates:
   *  Logic: '<S3>/Logical Operator4'
   *  Logic: '<S3>/Logical Operator5'
   *  SignalConversion: '<S1>/TmpLatchAtThdRwRtStCshnFldStgDone_Val_readOutport1'
   *  UnitDelay: '<S3>/Unit Delay1'
   */
  (void) Rte_Write_Md53R2RBkReclnResetFlg_Val(tmpRead_4 &&
    (!Md53StEnCtrl_DW.UnitDelay1_DSTATE));

  /* Outport: '<Root>/R2RBkReclinFirstStepPassFlg_Val' incorporates:
   *  Outport: '<S1>/R2RBkReclinFirstStepPassFlg_Val_write'
   */
  (void) Rte_Write_R2RBkReclinFirstStepPassFlg_Val
    (Md53StEnCtrl_B.RelationalOperator1);

  /* Update for UnitDelay: '<S3>/Unit Delay' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtThdRwRtStCshnFldStgDone_Val_readOutport1'
   */
  Md53StEnCtrl_DW.UnitDelay_DSTATE = tmpRead_4;

  /* Update for UnitDelay: '<S3>/Unit Delay1' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtThdRwRtStCshnFldStgDone_Val_readOutport1'
   */
  Md53StEnCtrl_DW.UnitDelay1_DSTATE = tmpRead_4;

  /* End of Outputs for SubSystem: '<Root>/Md53StEnCtrl_Cal_sys' */

  /* Outport: '<Root>/R2RBkReclinFirstStepPassFlg_Val' */
  (void) Rte_Write_R2RBkReclinFirstStepPassFlg_Val
    (Md53StEnCtrl_B.RelationalOperator1);
}

/* Model initialize function */
void Md53StEnCtrl_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
