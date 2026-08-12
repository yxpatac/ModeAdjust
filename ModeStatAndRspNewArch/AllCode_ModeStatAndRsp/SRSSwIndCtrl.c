/*
 * File: SRSSwIndCtrl.c
 *
 * Code generated for Simulink model 'SRSSwIndCtrl'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 15:20:43 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Renesas->RH850
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SRSSwIndCtrl.h"
#define SRSSwIndCtrl_IN_MdStatOut      ((uint8)1U)
#define SRSSwIndCtrl_IN_SwOut          ((uint8)2U)

/* Block signals (default storage) */
B_SRSSwIndCtrl_T SRSSwIndCtrl_B;

/* Block states (default storage) */
DW_SRSSwIndCtrl_T SRSSwIndCtrl_DW;

/* Model step function */
void SRSSwIndCtrl_Cal()
{
  SRSSlctSwIndTyp tmpRead;
  SRSIndicatorStat tmpRead_0;
  uint8 tmpRead_1;

  /* Inport: '<Root>/IfVeSMStPassCmprtMd_RfCtrl_Sw_RclRspStat' */
  Rte_Read_IfVeSMStPassCmprtMd_RfCtrl_Sw_RclRspStat_Val(&tmpRead_1);

  /* Inport: '<Root>/SRSMdSlctSwStat_67_2_In_Val' */
  Rte_Read_SRSMdSlctSwStat_67_2_In_Val(&tmpRead_0);

  /* Inport: '<Root>/IfVeSMSuSRSMdSlctSwIndTyp_67_2_In_Val' */
  Rte_Read_IfVeSMSuSRSMdSlctSwIndTyp_67_2_In_Val(&tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/SRSSwIndCtrl_Cal_sys' */
  /* Chart: '<S3>/firstTimeChk' */
  if (!SRSSwIndCtrl_DW.chkflg) {
    SRSSwIndCtrl_DW.chkflg = true;

    /* Outputs for Enabled SubSystem: '<S3>/Subsystem' incorporates:
     *  EnablePort: '<S5>/Enable'
     */
    /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw1_Stat_Val' incorporates:
     *  Constant: '<S5>/Constant1'
     *  DataTypeConversion: '<S5>/Data Type Conversion'
     */
    (void) Rte_Write_IfVeSMSuSRSCrt_MdSw1_Stat_Val(0U);

    /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw10_Stat_Val' incorporates:
     *  Constant: '<S5>/Constant10'
     *  DataTypeConversion: '<S5>/Data Type Conversion9'
     */
    (void) Rte_Write_IfVeSMSuSRSCrt_MdSw10_Stat_Val(0U);

    /* Outport: '<Root>/IfVeSMSuSRSCrtMdIndTyp_67_2_Val' incorporates:
     *  Constant: '<S5>/Constant11'
     *  DataTypeConversion: '<S5>/Data Type Conversion10'
     */
    (void) Rte_Write_IfVeSMSuSRSCrtMdIndTyp_67_2_Val(0U);

    /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw2_Stat_Val' incorporates:
     *  Constant: '<S5>/Constant2'
     *  DataTypeConversion: '<S5>/Data Type Conversion1'
     */
    (void) Rte_Write_IfVeSMSuSRSCrt_MdSw2_Stat_Val(0U);

    /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw3_Stat_Val' incorporates:
     *  Constant: '<S5>/Constant3'
     *  DataTypeConversion: '<S5>/Data Type Conversion2'
     */
    (void) Rte_Write_IfVeSMSuSRSCrt_MdSw3_Stat_Val(0U);

    /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw4_Stat_Val' incorporates:
     *  Constant: '<S5>/Constant4'
     *  DataTypeConversion: '<S5>/Data Type Conversion3'
     */
    (void) Rte_Write_IfVeSMSuSRSCrt_MdSw4_Stat_Val(0U);

    /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw5_Stat_Val' incorporates:
     *  Constant: '<S5>/Constant5'
     *  DataTypeConversion: '<S5>/Data Type Conversion4'
     */
    (void) Rte_Write_IfVeSMSuSRSCrt_MdSw5_Stat_Val(0U);

    /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw6_Stat_Val' incorporates:
     *  Constant: '<S5>/Constant6'
     *  DataTypeConversion: '<S5>/Data Type Conversion5'
     */
    (void) Rte_Write_IfVeSMSuSRSCrt_MdSw6_Stat_Val(0U);

    /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw7_Stat_Val' incorporates:
     *  Constant: '<S5>/Constant7'
     *  DataTypeConversion: '<S5>/Data Type Conversion6'
     */
    (void) Rte_Write_IfVeSMSuSRSCrt_MdSw7_Stat_Val(0U);

    /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw8_Stat_Val' incorporates:
     *  Constant: '<S5>/Constant8'
     *  DataTypeConversion: '<S5>/Data Type Conversion7'
     */
    (void) Rte_Write_IfVeSMSuSRSCrt_MdSw8_Stat_Val(0U);

    /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw9_Stat_Val' incorporates:
     *  Constant: '<S5>/Constant9'
     *  DataTypeConversion: '<S5>/Data Type Conversion8'
     */
    (void) Rte_Write_IfVeSMSuSRSCrt_MdSw9_Stat_Val(0U);

    /* End of Outputs for SubSystem: '<S3>/Subsystem' */
  }

  /* End of Chart: '<S3>/firstTimeChk' */

  /* Chart: '<S3>/Chart' incorporates:
   *  Constant: '<S3>/PA_KeSMSuSRSMdSlctSwDurnTm_Val'
   *  Inport: '<Root>/IfVeSMSuSRSMdSlctSwIndTyp_67_2_In_Val'
   *  Inport: '<Root>/SRSMdSlctSwStat_67_2_In_Val'
   *  SignalConversion: '<S1>/TmpLatchAtIfVeSMStPassCmprtMd_RfCtrl_Sw_RclRspStat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIfVeSMSuSRSMdSlctSwIndTyp_67_2_In_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSRSMdSlctSwStat_67_2_In_Val_readOutport1'
   */
  if (SRSSwIndCtrl_DW.temporalCounter_i1 < 65535U) {
    SRSSwIndCtrl_DW.temporalCounter_i1++;
  }

  SRSSwIndCtrl_DW.IfVeSMStPassCmprtMd_RfCtrl_Sw_R =
    SRSSwIndCtrl_DW.IfVeSMStPassCmprtMd_RfCtrl_Sw_j;
  SRSSwIndCtrl_DW.IfVeSMStPassCmprtMd_RfCtrl_Sw_j = tmpRead_1;
  SRSSwIndCtrl_DW.MdSlctSwStat_prev = SRSSwIndCtrl_DW.MdSlctSwStat_start;
  SRSSwIndCtrl_DW.MdSlctSwStat_start = tmpRead_0;
  if (SRSSwIndCtrl_DW.is_active_c2_SRSSwIndCtrl == 0U) {
    SRSSwIndCtrl_DW.IfVeSMStPassCmprtMd_RfCtrl_Sw_R = tmpRead_1;
    SRSSwIndCtrl_DW.MdSlctSwStat_prev = tmpRead_0;
    SRSSwIndCtrl_DW.is_active_c2_SRSSwIndCtrl = 1U;
    SRSSwIndCtrl_DW.TmpTmTick = (uint16)(Rte_Prm_KeSMSuSRSMdSlctSwDurnTm_Val() *
      10);
    SRSSwIndCtrl_DW.is_c2_SRSSwIndCtrl = SRSSwIndCtrl_IN_SwOut;
    SRSSwIndCtrl_B.MdSlctSwStatOut = tmpRead_0;
    SRSSwIndCtrl_B.SRSMdSlctSwIndTypOut = tmpRead;
  } else if (SRSSwIndCtrl_DW.is_c2_SRSSwIndCtrl == SRSSwIndCtrl_IN_MdStatOut) {
    if ((SRSSwIndCtrl_DW.MdSlctSwStat_prev != SRSSwIndCtrl_DW.MdSlctSwStat_start)
        && (tmpRead_0 != SRSIndicatorStat_NoIndicator)) {
      SRSSwIndCtrl_DW.is_c2_SRSSwIndCtrl = SRSSwIndCtrl_IN_SwOut;
      SRSSwIndCtrl_B.MdSlctSwStatOut = tmpRead_0;
      SRSSwIndCtrl_B.SRSMdSlctSwIndTypOut = tmpRead;
    } else {
      if (SRSSwIndCtrl_DW.temporalCounter_i1 >= SRSSwIndCtrl_DW.TmpTmTick) {
        SRSSwIndCtrl_DW.is_c2_SRSSwIndCtrl = SRSSwIndCtrl_IN_SwOut;
        SRSSwIndCtrl_B.MdSlctSwStatOut = tmpRead_0;
        SRSSwIndCtrl_B.SRSMdSlctSwIndTypOut = tmpRead;
      }
    }
  } else if (((SRSSwIndCtrl_DW.IfVeSMStPassCmprtMd_RfCtrl_Sw_R !=
               SRSSwIndCtrl_DW.IfVeSMStPassCmprtMd_RfCtrl_Sw_j) &&
              (SRSSwIndCtrl_DW.IfVeSMStPassCmprtMd_RfCtrl_Sw_j == 5)) ||
             ((SRSSwIndCtrl_DW.IfVeSMStPassCmprtMd_RfCtrl_Sw_R !=
               SRSSwIndCtrl_DW.IfVeSMStPassCmprtMd_RfCtrl_Sw_j) &&
              (SRSSwIndCtrl_DW.IfVeSMStPassCmprtMd_RfCtrl_Sw_j == 1))) {
    SRSSwIndCtrl_DW.is_c2_SRSSwIndCtrl = SRSSwIndCtrl_IN_MdStatOut;
    SRSSwIndCtrl_DW.temporalCounter_i1 = 0U;
    SRSSwIndCtrl_B.SRSMdSlctSwIndTypOut = Continuous;
  } else {
    SRSSwIndCtrl_B.MdSlctSwStatOut = tmpRead_0;
    SRSSwIndCtrl_B.SRSMdSlctSwIndTypOut = tmpRead;
  }

  /* End of Chart: '<S3>/Chart' */

  /* Outport: '<Root>/IfVeSMSuSRSMdSlctSwIndTyp_67_2_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSMdSlctSwIndTyp_67_2_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSMdSlctSwIndTyp_67_2_Val
    (SRSSwIndCtrl_B.SRSMdSlctSwIndTypOut);

  /* Outport: '<Root>/SRSMdSlctSwStat_67_2_Val' incorporates:
   *  Outport: '<S1>/SRSMdSlctSwStat_67_2_Val_write'
   */
  (void) Rte_Write_SRSMdSlctSwStat_67_2_Val(SRSSwIndCtrl_B.MdSlctSwStatOut);

  /* End of Outputs for SubSystem: '<Root>/SRSSwIndCtrl_Cal_sys' */

  /* Outport: '<Root>/IfVeSMSuSRSMdSlctSwIndTyp_67_2_Val' */
  (void) Rte_Write_IfVeSMSuSRSMdSlctSwIndTyp_67_2_Val
    (SRSSwIndCtrl_B.SRSMdSlctSwIndTypOut);

  /* Outport: '<Root>/SRSMdSlctSwStat_67_2_Val' */
  (void) Rte_Write_SRSMdSlctSwStat_67_2_Val(SRSSwIndCtrl_B.MdSlctSwStatOut);
}

/* Model initialize function */
void SRSSwIndCtrl_Init(void)
{
  /* SystemInitialize for S-Function (sfun_private_function_caller): '<Root>/sfcn_inserted_server' incorporates:
   *  SubSystem: '<Root>/SRSSwIndCtrl_Cal_sys'
   */
  /* SystemInitialize for Chart: '<S3>/Chart' */
  SRSSwIndCtrl_B.SRSMdSlctSwIndTypOut = IndicationOff;
  SRSSwIndCtrl_B.MdSlctSwStatOut = SRSIndicatorStat_NoIndicator;

  /* End of SystemInitialize for S-Function (sfun_private_function_caller): '<Root>/sfcn_inserted_server' */

  /* SystemInitialize for Outport: '<Root>/IfVeSMSuSRSMdSlctSwIndTyp_67_2_Val' */
  (void) Rte_Write_IfVeSMSuSRSMdSlctSwIndTyp_67_2_Val
    (SRSSwIndCtrl_B.SRSMdSlctSwIndTypOut);

  /* SystemInitialize for Outport: '<Root>/SRSMdSlctSwStat_67_2_Val' */
  (void) Rte_Write_SRSMdSlctSwStat_67_2_Val(SRSSwIndCtrl_B.MdSlctSwStatOut);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
