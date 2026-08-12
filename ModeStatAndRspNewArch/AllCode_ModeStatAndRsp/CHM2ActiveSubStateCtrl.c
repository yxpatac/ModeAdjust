/*
 * File: CHM2ActiveSubStateCtrl.c
 *
 * Code generated for Simulink model 'CHM2ActiveSubStateCtrl'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 14:36:00 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CHM2ActiveSubStateCtrl.h"
#define CHM2Ac_IN_CHM2ActiveSubStateOff ((uint8)1U)
#define CHM2Act_IN_CHM2ActiveSubStateOn ((uint8)2U)
#define CHM2ActiveSu_IN_NO_ACTIVE_CHILD ((uint8)0U)
#define CHM2ActiveSubStateCt_IN_Active1 ((uint8)1U)
#define CHM2ActiveSubStateCtrl_IN_Idle ((uint8)2U)

/* Block signals (default storage) */
B_CHM2ActiveSubStateCtrl_T CHM2ActiveSubStateCtrl_B;

/* Block states (default storage) */
DW_CHM2ActiveSubStateCtrl_T CHM2ActiveSubStateCtrl_DW;

/* Model step function */
void CHM2ActiveSubStateCtrl_Cal()
{
  boolean tmpRead;
  EventSts1 tmpRead_0;
  uint16 tmpRead_1;
  boolean guard1 = false;

  /* Inport: '<Root>/IfVeSMSuChmMgrStat_Val' */
  Rte_Read_IfVeSMSuChmMgrStat_Val(&tmpRead_1);

  /* Inport: '<Root>/IfVeSMSeStPassCmprtMdNoti2ChmEvntStatLocal_Val' */
  Rte_Read_IfVeSMSeStPassCmprtMdNoti2ChmEvntStatLocal_Val(&tmpRead_0);

  /* Inport: '<Root>/CHM2ActiveSubState_Val' */
  Rte_Read_CHM2ActiveSubState_Val(&tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/CHM2ActiveSubStateCtrl_Cal_sys' */
  /* Chart: '<S3>/Chart' incorporates:
   *  Constant: '<S1>/PA_KeSMSuChmReqDurnTm_Val'
   *  Constant: '<S1>/PA_KeSMSuChmReqIntlTm_Val'
   *  Inport: '<Root>/IfVeSMSeStPassCmprtMdNoti2ChmEvntStatLocal_Val'
   *  SignalConversion: '<S1>/TmpLatchAtCHM2ActiveSubState_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIfVeSMSeStPassCmprtMdNoti2ChmEvntStatLocal_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIfVeSMSuChmMgrStat_Val_readOutport1'
   */
  if (CHM2ActiveSubStateCtrl_DW.temporalCounter_i1 < MAX_uint32_T) {
    CHM2ActiveSubStateCtrl_DW.temporalCounter_i1++;
  }

  CHM2ActiveSubStateCtrl_DW.iChmMgrStat_prev =
    CHM2ActiveSubStateCtrl_DW.iChmMgrStat_start;
  CHM2ActiveSubStateCtrl_DW.iChmMgrStat_start = tmpRead_1;
  if (CHM2ActiveSubStateCtrl_DW.is_active_c1_CHM2ActiveSubState == 0U) {
    CHM2ActiveSubStateCtrl_DW.iChmMgrStat_prev = tmpRead_1;
    CHM2ActiveSubStateCtrl_DW.is_active_c1_CHM2ActiveSubState = 1U;
    CHM2ActiveSubStateCtrl_DW.is_c1_CHM2ActiveSubStateCtrl =
      CHM2Ac_IN_CHM2ActiveSubStateOff;
    CHM2ActiveSubStateCtrl_B.oChime = tmpRead_0;
  } else if (CHM2ActiveSubStateCtrl_DW.is_c1_CHM2ActiveSubStateCtrl ==
             CHM2Ac_IN_CHM2ActiveSubStateOff) {
    if (tmpRead) {
      CHM2ActiveSubStateCtrl_DW.is_c1_CHM2ActiveSubStateCtrl =
        CHM2Act_IN_CHM2ActiveSubStateOn;
      CHM2ActiveSubStateCtrl_DW.retrycnt = 0U;
      CHM2ActiveSubStateCtrl_DW.is_CHM2ActiveSubStateOn =
        CHM2ActiveSubStateCtrl_IN_Idle;
      CHM2ActiveSubStateCtrl_DW.temporalCounter_i1 = 0U;
      CHM2ActiveSubStateCtrl_B.oChime = EventSts_NoAct;
    } else {
      CHM2ActiveSubStateCtrl_B.oChime = tmpRead_0;
    }
  } else if ((CHM2ActiveSubStateCtrl_DW.iChmMgrStat_prev !=
              CHM2ActiveSubStateCtrl_DW.iChmMgrStat_start) && (tmpRead_1 != 0) &&
             (tmpRead_1 != 2725)) {
    CHM2ActiveSubStateCtrl_DW.is_c1_CHM2ActiveSubStateCtrl =
      CHM2Act_IN_CHM2ActiveSubStateOn;
    CHM2ActiveSubStateCtrl_DW.retrycnt = 0U;
    CHM2ActiveSubStateCtrl_DW.is_CHM2ActiveSubStateOn =
      CHM2ActiveSubStateCtrl_IN_Idle;
    CHM2ActiveSubStateCtrl_DW.temporalCounter_i1 = 0U;
    CHM2ActiveSubStateCtrl_B.oChime = EventSts_NoAct;
  } else if (!tmpRead) {
    CHM2ActiveSubStateCtrl_DW.is_CHM2ActiveSubStateOn =
      CHM2ActiveSu_IN_NO_ACTIVE_CHILD;
    CHM2ActiveSubStateCtrl_DW.is_c1_CHM2ActiveSubStateCtrl =
      CHM2Ac_IN_CHM2ActiveSubStateOff;
    CHM2ActiveSubStateCtrl_B.oChime = tmpRead_0;
  } else if (CHM2ActiveSubStateCtrl_DW.is_CHM2ActiveSubStateOn ==
             CHM2ActiveSubStateCt_IN_Active1) {
    guard1 = false;
    if (CHM2ActiveSubStateCtrl_DW.temporalCounter_i1 >=
        Rte_Prm_KeSMSuChmReqDurnTm_Val() / 10U) {
      CHM2ActiveSubStateCtrl_DW.retrycnt++;
      guard1 = true;
    } else {
      if ((tmpRead_1 == 2725) || (tmpRead_1 == 0)) {
        guard1 = true;
      }
    }

    if (guard1) {
      CHM2ActiveSubStateCtrl_DW.is_CHM2ActiveSubStateOn =
        CHM2ActiveSubStateCtrl_IN_Idle;
      CHM2ActiveSubStateCtrl_DW.temporalCounter_i1 = 0U;
      CHM2ActiveSubStateCtrl_B.oChime = EventSts_NoAct;
    }
  } else {
    if ((tmpRead_1 != 0) && (tmpRead_1 != 2725) &&
        (CHM2ActiveSubStateCtrl_DW.retrycnt < 4) &&
        (CHM2ActiveSubStateCtrl_DW.temporalCounter_i1 >=
         Rte_Prm_KeSMSuChmReqIntlTm_Val() / 10U)) {
      CHM2ActiveSubStateCtrl_DW.is_CHM2ActiveSubStateOn =
        CHM2ActiveSubStateCt_IN_Active1;
      CHM2ActiveSubStateCtrl_DW.temporalCounter_i1 = 0U;
      CHM2ActiveSubStateCtrl_B.oChime = EventSts_Act;
    }
  }

  /* End of Chart: '<S3>/Chart' */

  /* Outport: '<Root>/IfVeSMSeStPassCmprtMdNoti2ChmEvntStat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSeStPassCmprtMdNoti2ChmEvntStat_Val_write'
   */
  (void) Rte_Write_IfVeSMSeStPassCmprtMdNoti2ChmEvntStat_Val
    (CHM2ActiveSubStateCtrl_B.oChime);

  /* End of Outputs for SubSystem: '<Root>/CHM2ActiveSubStateCtrl_Cal_sys' */
  (void) Rte_Write_IfVeSMSeStPassCmprtMdNoti2ChmEvntStat_Val
    (CHM2ActiveSubStateCtrl_B.oChime);
}

/* Model initialize function */
void CHM2ActiveSubStateCtrl_Init(void)
{
  /* SystemInitialize for S-Function (sfun_private_function_caller): '<Root>/sfcn_inserted_server' incorporates:
   *  SubSystem: '<Root>/CHM2ActiveSubStateCtrl_Cal_sys'
   */
  /* SystemInitialize for Chart: '<S3>/Chart' */
  CHM2ActiveSubStateCtrl_B.oChime = EventSts_NoAct;

  /* End of SystemInitialize for S-Function (sfun_private_function_caller): '<Root>/sfcn_inserted_server' */

  /* SystemInitialize for Outport: '<Root>/IfVeSMSeStPassCmprtMdNoti2ChmEvntStat_Val' */
  (void) Rte_Write_IfVeSMSeStPassCmprtMdNoti2ChmEvntStat_Val
    (CHM2ActiveSubStateCtrl_B.oChime);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
