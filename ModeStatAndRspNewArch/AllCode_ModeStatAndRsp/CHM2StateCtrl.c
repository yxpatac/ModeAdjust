/*
 * File: CHM2StateCtrl.c
 *
 * Code generated for Simulink model 'CHM2StateCtrl'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 14:30:52 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CHM2StateCtrl.h"
#define CHM2StateCtrl_IN_CHIM2Req      ((uint8)1U)
#define CHM2StateCtrl_IN_Cancel        ((uint8)2U)
#define CHM2StateCtrl_IN_Idle          ((uint8)4U)
#define CHM2State_IN_CancelwithNoCancel ((uint8)3U)

/* Block signals (default storage) */
B_CHM2StateCtrl_T CHM2StateCtrl_B;

/* Block states (default storage) */
DW_CHM2StateCtrl_T CHM2StateCtrl_DW;

/* Model step function */
void CHM2StateCtrl_Cal()
{
  boolean tmpRead;
  uint16 tmpRead_0;

  /* Inport: '<Root>/IfVeSMSuChmMgrStat_Val' */
  Rte_Read_IfVeSMSuChmMgrStat_Val(&tmpRead_0);

  /* Inport: '<Root>/CHM2ActiveReq_Val' */
  Rte_Read_CHM2ActiveReq_Val(&tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/CHM2StateCtrl_Cal_sys' */
  /* Chart: '<S3>/Chart' incorporates:
   *  Constant: '<S1>/PA_KeSMSuChmReqDurnTm_Val'
   *  SignalConversion: '<S1>/TmpLatchAtCHM2ActiveReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIfVeSMSuChmMgrStat_Val_readOutport1'
   */
  if (CHM2StateCtrl_DW.temporalCounter_i1 < MAX_uint32_T) {
    CHM2StateCtrl_DW.temporalCounter_i1++;
  }

  if (CHM2StateCtrl_DW.is_active_c1_CHM2StateCtrl == 0U) {
    CHM2StateCtrl_DW.is_active_c1_CHM2StateCtrl = 1U;
    CHM2StateCtrl_DW.is_c1_CHM2StateCtrl = CHM2StateCtrl_IN_Idle;
    CHM2StateCtrl_B.oChime = EventSts_NoAct;
  } else {
    switch (CHM2StateCtrl_DW.is_c1_CHM2StateCtrl) {
     case CHM2StateCtrl_IN_CHIM2Req:
      if ((!tmpRead) && (tmpRead_0 == 2725)) {
        CHM2StateCtrl_B.CHM2ActiveSubState = false;
        CHM2StateCtrl_DW.is_c1_CHM2StateCtrl = CHM2StateCtrl_IN_Cancel;
        CHM2StateCtrl_DW.temporalCounter_i1 = 0U;
        CHM2StateCtrl_B.oChime = EventSts_CancleChime;
      } else {
        if (!tmpRead) {
          CHM2StateCtrl_B.CHM2ActiveSubState = false;
          CHM2StateCtrl_DW.is_c1_CHM2StateCtrl = CHM2State_IN_CancelwithNoCancel;
          CHM2StateCtrl_DW.temporalCounter_i1 = 0U;
          CHM2StateCtrl_B.oChime = EventSts_NoAct;
        }
      }
      break;

     case CHM2StateCtrl_IN_Cancel:
      CHM2StateCtrl_B.oChime = EventSts_CancleChime;
      if (CHM2StateCtrl_DW.temporalCounter_i1 >= Rte_Prm_KeSMSuChmReqDurnTm_Val()
          / 10U) {
        CHM2StateCtrl_DW.is_c1_CHM2StateCtrl = CHM2StateCtrl_IN_Idle;
        CHM2StateCtrl_B.oChime = EventSts_NoAct;
      }
      break;

     case CHM2State_IN_CancelwithNoCancel:
      CHM2StateCtrl_B.oChime = EventSts_NoAct;
      if (CHM2StateCtrl_DW.temporalCounter_i1 >= Rte_Prm_KeSMSuChmReqDurnTm_Val()
          / 10U) {
        CHM2StateCtrl_DW.is_c1_CHM2StateCtrl = CHM2StateCtrl_IN_Idle;
        CHM2StateCtrl_B.oChime = EventSts_NoAct;
      } else {
        if (tmpRead_0 == 2725) {
          CHM2StateCtrl_DW.is_c1_CHM2StateCtrl = CHM2StateCtrl_IN_Cancel;
          CHM2StateCtrl_DW.temporalCounter_i1 = 0U;
          CHM2StateCtrl_B.oChime = EventSts_CancleChime;
        }
      }
      break;

     default:
      CHM2StateCtrl_B.oChime = EventSts_NoAct;
      if (tmpRead) {
        CHM2StateCtrl_DW.is_c1_CHM2StateCtrl = CHM2StateCtrl_IN_CHIM2Req;
        CHM2StateCtrl_B.CHM2ActiveSubState = true;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Chart' */

  /* Outport: '<Root>/CHM2ActiveSubState_Val' incorporates:
   *  Outport: '<S1>/CHM2ActiveSubState_Val_write'
   */
  (void) Rte_Write_CHM2ActiveSubState_Val(CHM2StateCtrl_B.CHM2ActiveSubState);

  /* Outport: '<Root>/IfVeSMSeStPassCmprtMdNoti2ChmEvntStatLocal_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSeStPassCmprtMdNoti2ChmEvntStatLocal_Val_write'
   */
  (void) Rte_Write_IfVeSMSeStPassCmprtMdNoti2ChmEvntStatLocal_Val
    (CHM2StateCtrl_B.oChime);

  /* End of Outputs for SubSystem: '<Root>/CHM2StateCtrl_Cal_sys' */
  (void) Rte_Write_IfVeSMSeStPassCmprtMdNoti2ChmEvntStatLocal_Val
    (CHM2StateCtrl_B.oChime);

  /* Outport: '<Root>/CHM2ActiveSubState_Val' */
  (void) Rte_Write_CHM2ActiveSubState_Val(CHM2StateCtrl_B.CHM2ActiveSubState);
}

/* Model initialize function */
void CHM2StateCtrl_Init(void)
{
  /* SystemInitialize for S-Function (sfun_private_function_caller): '<Root>/sfcn_inserted_server' incorporates:
   *  SubSystem: '<Root>/CHM2StateCtrl_Cal_sys'
   */
  /* SystemInitialize for Chart: '<S3>/Chart' */
  CHM2StateCtrl_B.oChime = EventSts_NoAct;

  /* End of SystemInitialize for S-Function (sfun_private_function_caller): '<Root>/sfcn_inserted_server' */

  /* SystemInitialize for Outport: '<Root>/IfVeSMSeStPassCmprtMdNoti2ChmEvntStatLocal_Val' */
  (void) Rte_Write_IfVeSMSeStPassCmprtMdNoti2ChmEvntStatLocal_Val
    (CHM2StateCtrl_B.oChime);

  /* SystemInitialize for Outport: '<Root>/CHM2ActiveSubState_Val' */
  (void) Rte_Write_CHM2ActiveSubState_Val(CHM2StateCtrl_B.CHM2ActiveSubState);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
