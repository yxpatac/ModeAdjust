/*
 * File: MdSWReqChk.c
 *
 * Code generated for Simulink model 'MdSWReqChk'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 25 10:45:46 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MdSWReqChk.h"

/* Named constants for Chart: '<S19>/Chart' */
#define MdSWReqChk_IN_fobid            ((uint8)1U)
#define MdSWReqChk_IN_fobidCntStart    ((uint8)2U)
#define MdSWReqChk_IN_fobidStop        ((uint8)3U)

/* Block signals (default storage) */
B_MdSWReqChk_T MdSWReqChk_B;

/* Block states (default storage) */
DW_MdSWReqChk_T MdSWReqChk_DW;
extern const uint32 rtCP_pooled_BrdaRfnXe7GS[32];
extern const uint32 rtCP_pooled_WN72w2tXjvU7[32];
extern const uint32 rtCP_pooled_kLaVXc13qiFX[32];

#define rtCP_Constant_Value            rtCP_pooled_BrdaRfnXe7GS  /* Computed Parameter: rtCP_Constant_Value
                                                                  * Referenced by: '<S3>/Constant'
                                                                  */
#define rtCP_Constant1_Value           rtCP_pooled_WN72w2tXjvU7  /* Computed Parameter: rtCP_Constant1_Value
                                                                  * Referenced by: '<S3>/Constant1'
                                                                  */
#define rtCP_Constant2_Value           rtCP_pooled_WN72w2tXjvU7  /* Computed Parameter: rtCP_Constant2_Value
                                                                  * Referenced by: '<S3>/Constant2'
                                                                  */
#define rtCP_Constant7_Value           rtCP_pooled_kLaVXc13qiFX  /* Computed Parameter: rtCP_Constant7_Value
                                                                  * Referenced by: '<S3>/Constant7'
                                                                  */

static void MdSWReqChk_Chart(boolean rtu_forbidcntstart, uint8
  rtu_KeSMSuButtonLongPressedThrs, boolean *rty_Notforbid, DW_Chart_MdSWReqChk_T
  *localDW);

/*
 * Output and update for atomic system:
 *    '<S19>/Chart'
 *    '<S20>/Chart'
 *    '<S21>/Chart'
 *    '<S22>/Chart'
 *    '<S23>/Chart'
 *    '<S24>/Chart'
 *    '<S25>/Chart'
 */
static void MdSWReqChk_Chart(boolean rtu_forbidcntstart, uint8
  rtu_KeSMSuButtonLongPressedThrs, boolean *rty_Notforbid, DW_Chart_MdSWReqChk_T
  *localDW)
{
  /* Chart: '<S19>/Chart' */
  if (localDW->is_active_c8_MdSWReqChk == 0U) {
    localDW->is_active_c8_MdSWReqChk = 1U;
    localDW->is_c8_MdSWReqChk = MdSWReqChk_IN_fobidStop;
    *rty_Notforbid = true;
  } else {
    switch (localDW->is_c8_MdSWReqChk) {
     case MdSWReqChk_IN_fobid:
      *rty_Notforbid = false;
      if (localDW->forbidcnt > 10) {
        localDW->is_c8_MdSWReqChk = MdSWReqChk_IN_fobidStop;
        *rty_Notforbid = true;
      } else {
        localDW->forbidcnt++;
      }
      break;

     case MdSWReqChk_IN_fobidCntStart:
      if (localDW->forbidcnt >= (uint8)(rtu_KeSMSuButtonLongPressedThrs - 5U)) {
        localDW->is_c8_MdSWReqChk = MdSWReqChk_IN_fobid;
        *rty_Notforbid = false;
        localDW->forbidcnt = 1U;
      } else {
        localDW->forbidcnt++;
      }
      break;

     default:
      *rty_Notforbid = true;
      if (rtu_forbidcntstart) {
        localDW->is_c8_MdSWReqChk = MdSWReqChk_IN_fobidCntStart;
        localDW->forbidcnt = 1U;
      }
      break;
    }
  }

  /* End of Chart: '<S19>/Chart' */
}

/* Model step function */
void MdSWReqChk_Cal(uint32 modestate32)
{
  /* local block i/o variables */
  uint32 SetBsyBitArray[32];
  boolean tmpRead;
  boolean tmpRead_0;
  boolean tmpRead_1;
  boolean tmpRead_2;
  boolean tmpRead_3;
  uint16 tmpRead_4;
  boolean tmpRead_5;
  boolean tmpRead_6;
  IntEnable tmpRead_7;
  IntEnable tmpRead_8;
  IntEnable tmpRead_9;
  IntEnable tmpRead_a;
  IntEnable tmpRead_b;
  IntEnable tmpRead_c;
  IntEnable tmpRead_d;
  boolean tmpRead_e;
  boolean tmpRead_f;
  boolean tmpRead_g;
  boolean tmpRead_h;
  boolean tmpRead_i;
  boolean tmpRead_j;
  boolean tmpRead_k;
  boolean tmpRead_l;
  boolean tmpRead_m;
  boolean tmpRead_n;
  boolean tmpRead_o;
  boolean tmpRead_p;
  boolean tmpRead_q;
  boolean tmpRead_r;
  boolean tmpRead_s;
  boolean tmpRead_t;
  boolean tmpRead_u;
  boolean tmpRead_v;
  boolean tmpRead_w;
  boolean tmpRead_x;
  boolean tmpRead_y;
  boolean tmpRead_z;
  boolean tmpRead_10;
  boolean tmpRead_11;
  boolean tmpRead_12;
  uint32 rtb_BitwiseOperator2;
  uint32 rtb_BitwiseOperator3;
  boolean tmpRead_13[32];
  uint32 tmpRead_14[32];
  uint8 tmpRead_15;

  /* Inport: '<Root>/WelcomeFwdMdReq_Val' */
  Rte_Read_WelcomeFwdMdReq_Val(&tmpRead_12);

  /* Inport: '<Root>/WelcomeBkwdMdReq_Val' */
  Rte_Read_WelcomeBkwdMdReq_Val(&tmpRead_11);

  /* Inport: '<Root>/VipMdRtAvl_Val' */
  Rte_Read_VipMdRtAvl_Val(&tmpRead_10);

  /* Inport: '<Root>/VipMdLtAvl_Val' */
  Rte_Read_VipMdLtAvl_Val(&tmpRead_z);

  /* Inport: '<Root>/StNumFlg_Is7s' */
  Rte_Read_StNumFlg_Is7s(&tmpRead_y);

  /* Inport: '<Root>/StNumFlg_Is6s7s' */
  Rte_Read_StNumFlg_Is6s7s(&tmpRead_x);

  /* Inport: '<Root>/RtLyMdReq_Val' */
  Rte_Read_RtLyMdReq_Val(&tmpRead_w);

  /* Inport: '<Root>/RtLugMdReq_Val' */
  Rte_Read_RtLugMdReq_Val(&tmpRead_v);

  /* Inport: '<Root>/RtFamlyMdReq_Val' */
  Rte_Read_RtFamlyMdReq_Val(&tmpRead_u);

  /* Inport: '<Root>/LugMdRtAvl_Val' */
  Rte_Read_LugMdRtAvl_Val(&tmpRead_t);

  /* Inport: '<Root>/LugMdLtAvl_Val' */
  Rte_Read_LugMdLtAvl_Val(&tmpRead_s);

  /* Inport: '<Root>/LtLugMdReq_Val' */
  Rte_Read_LtLugMdReq_Val(&tmpRead_r);

  /* Inport: '<Root>/LgrstOpenRtMdReq_Val' */
  Rte_Read_LgrstOpenRtMdReq_Val(&tmpRead_q);

  /* Inport: '<Root>/LgrstOpenLtMdReq_Val' */
  Rte_Read_LgrstOpenLtMdReq_Val(&tmpRead_p);

  /* Inport: '<Root>/LgrstCloseRtMdReq_Val' */
  Rte_Read_LgrstCloseRtMdReq_Val(&tmpRead_o);

  /* Inport: '<Root>/LgrstCloseLtMdReq_Val' */
  Rte_Read_LgrstCloseLtMdReq_Val(&tmpRead_n);

  /* Inport: '<Root>/LfLyMdReq_Val' */
  Rte_Read_LfLyMdReq_Val(&tmpRead_m);

  /* Inport: '<Root>/LfFamlyReq_Val' */
  Rte_Read_LfFamlyReq_Val(&tmpRead_l);

  /* Inport: '<Root>/INTMMdReq_Val' */
  Rte_Read_INTMMdReq_Val(&tmpRead_k);

  /* Inport: '<Root>/IntimacyRtMdReq_Val' */
  Rte_Read_IntimacyRtMdReq_Val(&tmpRead_j);

  /* Inport: '<Root>/EZQ4sRtMdReq_Val' */
  Rte_Read_EZQ4sRtMdReq_Val(&tmpRead_i);

  /* Inport: '<Root>/EZQ4sLtMdReq_Val' */
  Rte_Read_EZQ4sLtMdReq_Val(&tmpRead_h);

  /* Inport: '<Root>/EZE4sRtMdReq_Val' */
  Rte_Read_EZE4sRtMdReq_Val(&tmpRead_g);

  /* Inport: '<Root>/EZE4sLtMdReq_Val' */
  Rte_Read_EZE4sLtMdReq_Val(&tmpRead_f);

  /* Inport: '<Root>/AllVipMdReq_Val' */
  Rte_Read_AllVipMdReq_Val(&tmpRead_e);

  /* Inport: '<Root>/SwIntAllLug_Val' */
  Rte_Read_SwIntAllLug_Val(&tmpRead_d);

  /* Inport: '<Root>/SwIntRtVip_Val' */
  Rte_Read_SwIntRtVip_Val(&tmpRead_c);

  /* Inport: '<Root>/SwIntRtRcvy_Val' */
  Rte_Read_SwIntRtRcvy_Val(&tmpRead_b);

  /* Inport: '<Root>/SwIntLfVip_Val' */
  Rte_Read_SwIntLfVip_Val(&tmpRead_a);

  /* Inport: '<Root>/SwIntLfRcvy_Val' */
  Rte_Read_SwIntLfRcvy_Val(&tmpRead_9);

  /* Inport: '<Root>/SwIntAcsExt_Val' */
  Rte_Read_SwIntAcsExt_Val(&tmpRead_8);

  /* Inport: '<Root>/SwIntAcsEnty_Val' */
  Rte_Read_SwIntAcsEnty_Val(&tmpRead_7);

  /* Inport: '<Root>/RtVipMdReq_Val' */
  Rte_Read_RtVipMdReq_Val(&tmpRead_6);

  /* Inport: '<Root>/RtRcvyMdReq_Val' */
  Rte_Read_RtRcvyMdReq_Val(&tmpRead_5);

  /* Inport: '<Root>/MdSWIntSrc_R_Val' */
  Rte_Read_MdSWIntSrc_R_Val(&tmpRead_4);

  /* Inport: '<Root>/LtVipMdReq_Val' */
  Rte_Read_LtVipMdReq_Val(&tmpRead_3);

  /* Inport: '<Root>/LtRcvyMdReq_Val' */
  Rte_Read_LtRcvyMdReq_Val(&tmpRead_2);

  /* Inport: '<Root>/AllLugMdReq_Val' */
  Rte_Read_AllLugMdReq_Val(&tmpRead_1);

  /* Inport: '<Root>/acsExtMdReq_Val' */
  Rte_Read_acsExtMdReq_Val(&tmpRead_0);

  /* Inport: '<Root>/acsEntyMdReq_Val' */
  Rte_Read_acsEntyMdReq_Val(&tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/MdSWReqChk_Cal_sys' */
  /* SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is6s7s_readOutport1' */
  if (tmpRead_x) {
    /* Switch: '<S3>/Switch1' incorporates:
     *  Constant: '<S3>/Constant'
     */
    memcpy(&tmpRead_14[0], &rtCP_Constant_Value[0], sizeof(uint32) << 5U);
  } else {
    /* Switch: '<S3>/Switch1' incorporates:
     *  Constant: '<S3>/Constant'
     *  Constant: '<S3>/Constant1'
     */
    memcpy(&tmpRead_14[0], &rtCP_Constant1_Value[0], sizeof(uint32) << 5U);
  }

  /* Outport: '<Root>/ChkBsyBitArray_Val' incorporates:
   *  Switch: '<S3>/Switch1'
   */
  (void) Rte_Write_ChkBsyBitArray_Val(tmpRead_14);

  /* Switch: '<S3>/Switch2' incorporates:
   *  ArithShift: '<S3>/Shift Arithmetic'
   *  ArithShift: '<S3>/Shift Arithmetic1'
   *  ArithShift: '<S3>/Shift Arithmetic2'
   *  ArithShift: '<S3>/Shift Arithmetic3'
   *  Constant: '<S3>/Constant26'
   *  Constant: '<S3>/Constant27'
   *  Constant: '<S3>/Constant28'
   *  Constant: '<S3>/Constant29'
   *  Constant: '<S3>/Constant30'
   *  Constant: '<S3>/Constant31'
   *  Constant: '<S3>/Constant32'
   *  Constant: '<S3>/Constant33'
   *  Constant: '<S3>/Constant34'
   *  Constant: '<S3>/Constant35'
   *  Constant: '<S3>/Constant36'
   *  Constant: '<S3>/Constant37'
   *  Constant: '<S3>/Constant38'
   *  Constant: '<S3>/Constant39'
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   *  DataTypeConversion: '<S3>/Data Type Conversion2'
   *  DataTypeConversion: '<S3>/Data Type Conversion3'
   *  S-Function (sfix_bitop): '<S3>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S3>/Bitwise Operator1'
   *  SignalConversion: '<S1>/TmpLatchAtLugMdLtAvl_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLugMdRtAvl_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is6s7s_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtVipMdLtAvl_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtVipMdRtAvl_Val_readOutport1'
   */
  if (tmpRead_x) {
    tmpRead_14[0] = 1U;
    tmpRead_14[1] = 8U;
    tmpRead_14[2] = 512U;
    tmpRead_14[3] = 2048U;
    tmpRead_14[4] = (uint32)tmpRead_z << 9 | 2U | (uint32)tmpRead_10 << 11;
    tmpRead_14[5] = 1024U;
    tmpRead_14[6] = 4096U;
    tmpRead_14[7] = 64U;
    tmpRead_14[8] = 32U;
    tmpRead_14[9] = 16U;
    tmpRead_14[10] = 524288U;
    tmpRead_14[11] = 128U;
    tmpRead_14[12] = 256U;
    tmpRead_14[13] = (uint32)tmpRead_s << 7 | 4U | (uint32)tmpRead_t << 8;
    tmpRead_14[14] = 0U;
    tmpRead_14[15] = 0U;
    tmpRead_14[16] = 0U;
    tmpRead_14[17] = 0U;
    tmpRead_14[18] = 0U;
    tmpRead_14[19] = 0U;
    tmpRead_14[20] = 0U;
    tmpRead_14[21] = 0U;
    tmpRead_14[22] = 0U;
    tmpRead_14[23] = 0U;
    tmpRead_14[24] = 0U;
    tmpRead_14[25] = 0U;
    tmpRead_14[26] = 0U;
    tmpRead_14[27] = 0U;
    tmpRead_14[28] = 0U;
    tmpRead_14[29] = 0U;
    tmpRead_14[30] = 0U;
    tmpRead_14[31] = 0U;

    /* Outport: '<Root>/SetEnBitArray_Val' incorporates:
     *  ArithShift: '<S3>/Shift Arithmetic'
     *  ArithShift: '<S3>/Shift Arithmetic1'
     *  ArithShift: '<S3>/Shift Arithmetic2'
     *  ArithShift: '<S3>/Shift Arithmetic3'
     *  Constant: '<S3>/Constant26'
     *  Constant: '<S3>/Constant27'
     *  Constant: '<S3>/Constant28'
     *  Constant: '<S3>/Constant29'
     *  Constant: '<S3>/Constant30'
     *  Constant: '<S3>/Constant31'
     *  Constant: '<S3>/Constant32'
     *  Constant: '<S3>/Constant33'
     *  Constant: '<S3>/Constant34'
     *  Constant: '<S3>/Constant35'
     *  Constant: '<S3>/Constant36'
     *  Constant: '<S3>/Constant37'
     *  Constant: '<S3>/Constant38'
     *  Constant: '<S3>/Constant39'
     *  DataTypeConversion: '<S3>/Data Type Conversion'
     *  DataTypeConversion: '<S3>/Data Type Conversion1'
     *  DataTypeConversion: '<S3>/Data Type Conversion2'
     *  DataTypeConversion: '<S3>/Data Type Conversion3'
     *  S-Function (sfix_bitop): '<S3>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S3>/Bitwise Operator1'
     *  SignalConversion: '<S1>/TmpLatchAtLugMdLtAvl_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLugMdRtAvl_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtVipMdLtAvl_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtVipMdRtAvl_Val_readOutport1'
     */
    (void) Rte_Write_SetEnBitArray_Val(tmpRead_14);
  } else {
    /* Outport: '<Root>/SetEnBitArray_Val' */
    (void) Rte_Write_SetEnBitArray_Val(rtCP_Constant2_Value);
  }

  /* End of Switch: '<S3>/Switch2' */

  /* S-Function (sfix_bitop): '<S3>/Bitwise Operator2' incorporates:
   *  ArithShift: '<S3>/Shift Arithmetic4'
   *  Constant: '<S3>/Constant42'
   *  DataTypeConversion: '<S3>/Data Type Conversion4'
   *  SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is7s_readOutport1'
   */
  rtb_BitwiseOperator2 = (uint32)tmpRead_y << 8 | 526079U;

  /* S-Function (sfix_bitop): '<S3>/Bitwise Operator3' incorporates:
   *  ArithShift: '<S3>/Shift Arithmetic5'
   *  Constant: '<S3>/Constant43'
   *  DataTypeConversion: '<S3>/Data Type Conversion5'
   *  SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is7s_readOutport1'
   */
  rtb_BitwiseOperator3 = (uint32)tmpRead_y << 7 | 530815U;

  /* DataTypeConversion: '<S3>/Data Type Conversion11' incorporates:
   *  ArithShift: '<S3>/Shift Arithmetic6'
   *  ArithShift: '<S3>/Shift Arithmetic7'
   *  ArithShift: '<S3>/Shift Arithmetic8'
   *  ArithShift: '<S3>/Shift Arithmetic9'
   *  Constant: '<S3>/Constant40'
   *  Constant: '<S3>/Constant41'
   *  Constant: '<S3>/Constant44'
   *  Constant: '<S3>/Constant45'
   *  Constant: '<S3>/Constant46'
   *  Constant: '<S3>/Constant47'
   *  Constant: '<S3>/Constant48'
   *  Constant: '<S3>/Constant49'
   *  Constant: '<S3>/Constant50'
   *  Constant: '<S3>/Constant51'
   *  DataTypeConversion: '<S3>/Data Type Conversion6'
   *  S-Function (sfix_bitop): '<S3>/Bitwise Operator4'
   *  S-Function (sfix_bitop): '<S3>/Bitwise Operator5'
   *  SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is7s_readOutport1'
   */
  SetBsyBitArray[0] = 532479U;
  SetBsyBitArray[1] = 532479U;
  SetBsyBitArray[2] = rtb_BitwiseOperator2;
  SetBsyBitArray[3] = rtb_BitwiseOperator3;
  SetBsyBitArray[4] = 532479U;
  SetBsyBitArray[5] = rtb_BitwiseOperator2;
  SetBsyBitArray[6] = rtb_BitwiseOperator3;
  SetBsyBitArray[7] = 532479U;
  SetBsyBitArray[8] = 532479U;
  SetBsyBitArray[9] = 532479U;
  SetBsyBitArray[10] = 532479U;
  SetBsyBitArray[11] = (uint32)tmpRead_y << 12 | 526079U | (uint32)tmpRead_y <<
    11;
  SetBsyBitArray[12] = (uint32)tmpRead_y << 10 | 530815U | (uint32)tmpRead_y <<
    9;
  SetBsyBitArray[13] = 532479U;
  SetBsyBitArray[14] = 0U;
  SetBsyBitArray[15] = 0U;
  SetBsyBitArray[16] = 0U;
  SetBsyBitArray[17] = 0U;
  SetBsyBitArray[18] = 0U;
  SetBsyBitArray[19] = 0U;
  SetBsyBitArray[20] = 0U;
  SetBsyBitArray[21] = 0U;
  SetBsyBitArray[22] = 0U;
  SetBsyBitArray[23] = 0U;
  SetBsyBitArray[24] = 0U;
  SetBsyBitArray[25] = 0U;
  SetBsyBitArray[26] = 0U;
  SetBsyBitArray[27] = 0U;
  SetBsyBitArray[28] = 0U;
  SetBsyBitArray[29] = 0U;
  SetBsyBitArray[30] = 0U;
  SetBsyBitArray[31] = 0U;

  /* SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is6s7s_readOutport1' */
  if (tmpRead_x) {
    /* Switch: '<S3>/Switch3' */
    memcpy(&tmpRead_14[0], (&(SetBsyBitArray[0])), sizeof(uint32) << 5U);
  } else {
    /* Switch: '<S3>/Switch3' incorporates:
     *  Constant: '<S3>/Constant7'
     */
    memcpy(&tmpRead_14[0], &rtCP_Constant7_Value[0], sizeof(uint32) << 5U);
  }

  /* Outport: '<Root>/SetBsyBitArray_Val' incorporates:
   *  Switch: '<S3>/Switch3'
   */
  (void) Rte_Write_SetBsyBitArray_Val(tmpRead_14);

  /* Chart: '<S23>/Chart' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S3>/PA_KeSMSuButtonLongPressedThrshldTm_Val'
   *  Logic: '<S23>/Logical Operator'
   *  Logic: '<S23>/Logical Operator1'
   *  RelationalOperator: '<S13>/Relational Operator'
   *  RelationalOperator: '<S8>/Relational Operator'
   *  S-Function (sfix_bitop): '<S13>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S8>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtMdSWIntSrc_R_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntAllLug_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtmodestate32Outport1'
   */
  MdSWReqChk_Chart(((tmpRead_4 & 16) > 0) && tmpRead_d && ((modestate32 & 4U) >
    0U), Rte_Prm_KeSMSuButtonLongPressedThrshldTm_Val(),
                   &MdSWReqChk_B.Notforbid_l, &MdSWReqChk_DW.sf_Chart_i);

  /* Chart: '<S19>/Chart' incorporates:
   *  Constant: '<S3>/PA_KeSMSuButtonLongPressedThrshldTm_Val'
   *  Constant: '<S6>/Constant'
   *  Logic: '<S19>/Logical Operator'
   *  Logic: '<S19>/Logical Operator1'
   *  RelationalOperator: '<S17>/Relational Operator'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  S-Function (sfix_bitop): '<S17>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S6>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtMdSWIntSrc_R_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntAcsExt_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtmodestate32Outport1'
   */
  MdSWReqChk_Chart(((tmpRead_4 & 1) > 0) && tmpRead_8 && ((modestate32 & 8U) >
    0U), Rte_Prm_KeSMSuButtonLongPressedThrshldTm_Val(),
                   &MdSWReqChk_B.Notforbid_j, &MdSWReqChk_DW.sf_Chart);

  /* Chart: '<S20>/Chart' incorporates:
   *  Constant: '<S3>/PA_KeSMSuButtonLongPressedThrshldTm_Val'
   *  Constant: '<S5>/Constant'
   *  Logic: '<S20>/Logical Operator'
   *  Logic: '<S20>/Logical Operator1'
   *  RelationalOperator: '<S16>/Relational Operator'
   *  RelationalOperator: '<S5>/Relational Operator'
   *  S-Function (sfix_bitop): '<S16>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S5>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtMdSWIntSrc_R_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntAcsEnty_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtmodestate32Outport1'
   */
  MdSWReqChk_Chart(((tmpRead_4 & 2) > 0) && tmpRead_7 && ((modestate32 & 1U) >
    0U), Rte_Prm_KeSMSuButtonLongPressedThrshldTm_Val(),
                   &MdSWReqChk_B.Notforbid_k, &MdSWReqChk_DW.sf_Chart_n);

  /* Chart: '<S21>/Chart' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S3>/PA_KeSMSuButtonLongPressedThrshldTm_Val'
   *  Logic: '<S21>/Logical Operator'
   *  Logic: '<S21>/Logical Operator1'
   *  RelationalOperator: '<S11>/Relational Operator'
   *  RelationalOperator: '<S18>/Relational Operator'
   *  S-Function (sfix_bitop): '<S11>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S18>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtMdSWIntSrc_R_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntLfVip_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtmodestate32Outport1'
   */
  MdSWReqChk_Chart(((tmpRead_4 & 4) > 0) && tmpRead_a && ((modestate32 & 512U) >
    0U), Rte_Prm_KeSMSuButtonLongPressedThrshldTm_Val(),
                   &MdSWReqChk_B.Notforbid_i, &MdSWReqChk_DW.sf_Chart_c);

  /* Chart: '<S22>/Chart' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S3>/PA_KeSMSuButtonLongPressedThrshldTm_Val'
   *  Logic: '<S22>/Logical Operator'
   *  Logic: '<S22>/Logical Operator1'
   *  RelationalOperator: '<S12>/Relational Operator'
   *  RelationalOperator: '<S7>/Relational Operator'
   *  S-Function (sfix_bitop): '<S12>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S7>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtMdSWIntSrc_R_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntRtVip_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtmodestate32Outport1'
   */
  MdSWReqChk_Chart(((tmpRead_4 & 8) > 0) && tmpRead_c && ((modestate32 & 2048U) >
    0U), Rte_Prm_KeSMSuButtonLongPressedThrshldTm_Val(),
                   &MdSWReqChk_B.Notforbid_c, &MdSWReqChk_DW.sf_Chart_p);

  /* Chart: '<S24>/Chart' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S3>/PA_KeSMSuButtonLongPressedThrshldTm_Val'
   *  Logic: '<S24>/Logical Operator'
   *  Logic: '<S24>/Logical Operator1'
   *  RelationalOperator: '<S14>/Relational Operator'
   *  RelationalOperator: '<S9>/Relational Operator'
   *  S-Function (sfix_bitop): '<S14>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S9>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtMdSWIntSrc_R_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntLfRcvy_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtmodestate32Outport1'
   */
  MdSWReqChk_Chart(((tmpRead_4 & 32) > 0) && tmpRead_9 && ((modestate32 & 1024U)
    > 0U), Rte_Prm_KeSMSuButtonLongPressedThrshldTm_Val(),
                   &MdSWReqChk_B.Notforbid_e, &MdSWReqChk_DW.sf_Chart_k);

  /* Chart: '<S25>/Chart' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S3>/PA_KeSMSuButtonLongPressedThrshldTm_Val'
   *  Logic: '<S25>/Logical Operator'
   *  Logic: '<S25>/Logical Operator1'
   *  RelationalOperator: '<S10>/Relational Operator'
   *  RelationalOperator: '<S15>/Relational Operator'
   *  S-Function (sfix_bitop): '<S10>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S15>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtMdSWIntSrc_R_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntRtRcvy_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtmodestate32Outport1'
   */
  MdSWReqChk_Chart(((tmpRead_4 & 64) > 0) && tmpRead_b && ((modestate32 & 4096U)
    > 0U), Rte_Prm_KeSMSuButtonLongPressedThrshldTm_Val(),
                   &MdSWReqChk_B.Notforbid, &MdSWReqChk_DW.sf_Chart_nk);

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/PA_KeSMSAutoEZEFwdBkwdPosEna_Val'
   *  Logic: '<S19>/Logical Operator2'
   *  Logic: '<S20>/Logical Operator2'
   *  Logic: '<S21>/Logical Operator2'
   *  Logic: '<S22>/Logical Operator2'
   *  Logic: '<S23>/Logical Operator2'
   *  Logic: '<S24>/Logical Operator2'
   *  Logic: '<S25>/Logical Operator2'
   *  Logic: '<S3>/Logical Operator'
   *  Logic: '<S3>/Logical Operator1'
   *  Logic: '<S3>/Logical Operator2'
   *  Logic: '<S3>/Logical Operator3'
   *  Logic: '<S3>/Logical Operator5'
   *  RelationalOperator: '<S3>/Relational Operator'
   *  SignalConversion: '<S1>/TmpLatchAtAllLugMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtAllVipMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtEZE4sLtMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtEZE4sRtMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtEZQ4sLtMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtEZQ4sRtMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtINTMMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIntimacyRtMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLfFamlyReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLfLyMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLgrstCloseLtMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLgrstCloseRtMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLgrstOpenLtMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLgrstOpenRtMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLtLugMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLtRcvyMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLtVipMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLugMdLtAvl_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLugMdRtAvl_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtRtFamlyMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtRtLugMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtRtLyMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtRtRcvyMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtRtVipMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is6s7s_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtVipMdLtAvl_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtVipMdRtAvl_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtWelcomeBkwdMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtWelcomeFwdMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtacsEntyMdReq_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtacsExtMdReq_Val_readOutport1'
   */
  if (tmpRead_x) {
    tmpRead_13[0] = (tmpRead && MdSWReqChk_B.Notforbid_k);
    tmpRead_13[1] = (tmpRead_0 && MdSWReqChk_B.Notforbid_j);
    tmpRead_13[2] = (tmpRead_3 && MdSWReqChk_B.Notforbid_i);
    tmpRead_13[3] = (tmpRead_6 && MdSWReqChk_B.Notforbid_c);
    tmpRead_13[4] = ((tmpRead_z || tmpRead_10) && tmpRead_e);
    tmpRead_13[5] = (tmpRead_2 && MdSWReqChk_B.Notforbid_e);
    tmpRead_13[6] = (tmpRead_5 && MdSWReqChk_B.Notforbid);
    tmpRead_13[7] = tmpRead_l;
    tmpRead_13[8] = tmpRead_u;
    tmpRead_13[9] = tmpRead_k;
    tmpRead_13[10] = tmpRead_j;
    tmpRead_13[11] = tmpRead_r;
    tmpRead_13[12] = tmpRead_v;
    tmpRead_13[13] = ((tmpRead_s || tmpRead_t) && (tmpRead_1 &&
      MdSWReqChk_B.Notforbid_l));
    tmpRead_13[14] = false;
    tmpRead_13[15] = false;
    tmpRead_13[16] = false;
    tmpRead_13[17] = false;
    tmpRead_13[18] = false;
    tmpRead_13[19] = false;
    tmpRead_13[20] = false;
    tmpRead_13[21] = false;
    tmpRead_13[22] = false;
    tmpRead_13[23] = false;
    tmpRead_13[24] = false;
    tmpRead_13[25] = false;
    tmpRead_13[26] = false;
    tmpRead_13[27] = false;
    tmpRead_13[28] = false;
    tmpRead_13[29] = false;
    tmpRead_13[30] = false;
    tmpRead_13[31] = false;

    /* Outport: '<Root>/MdReqArray_Val' incorporates:
     *  Logic: '<S19>/Logical Operator2'
     *  Logic: '<S20>/Logical Operator2'
     *  Logic: '<S21>/Logical Operator2'
     *  Logic: '<S22>/Logical Operator2'
     *  Logic: '<S23>/Logical Operator2'
     *  Logic: '<S24>/Logical Operator2'
     *  Logic: '<S25>/Logical Operator2'
     *  Logic: '<S3>/Logical Operator'
     *  Logic: '<S3>/Logical Operator1'
     *  Logic: '<S3>/Logical Operator2'
     *  Logic: '<S3>/Logical Operator3'
     *  SignalConversion: '<S1>/TmpLatchAtAllLugMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtAllVipMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtINTMMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtIntimacyRtMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLfFamlyReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLtLugMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLtRcvyMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLtVipMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLugMdLtAvl_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLugMdRtAvl_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtRtFamlyMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtRtLugMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtRtRcvyMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtRtVipMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtVipMdLtAvl_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtVipMdRtAvl_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtacsEntyMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtacsExtMdReq_Val_readOutport1'
     */
    (void) Rte_Write_MdReqArray_Val(tmpRead_13);

    /* Switch: '<S3>/Switch4' incorporates:
     *  Constant: '<S3>/PA_KeSMSuMdNum6s7s_Val'
     */
    tmpRead_15 = Rte_Prm_KeSMSuMdNum6s7s_Val();
  } else {
    tmpRead_13[0] = (tmpRead_3 && MdSWReqChk_B.Notforbid_i);
    tmpRead_13[1] = (tmpRead_2 && MdSWReqChk_B.Notforbid_e);
    tmpRead_13[2] = tmpRead_m;
    tmpRead_13[3] = tmpRead_p;
    tmpRead_13[4] = tmpRead_n;
    tmpRead_13[5] = tmpRead_f;
    tmpRead_13[6] = tmpRead_h;
    tmpRead_13[7] = (tmpRead_6 && MdSWReqChk_B.Notforbid_c);
    tmpRead_13[8] = (tmpRead_5 && MdSWReqChk_B.Notforbid);
    tmpRead_13[9] = tmpRead_w;
    tmpRead_13[10] = tmpRead_q;
    tmpRead_13[11] = tmpRead_o;
    tmpRead_13[12] = tmpRead_g;
    tmpRead_13[13] = tmpRead_i;
    tmpRead_13[14] = ((Rte_Prm_KeSMSAutoEZEFwdBkwdPosEna_Val() <= 0) &&
                      tmpRead_11);
    tmpRead_13[15] = tmpRead_12;
    tmpRead_13[16] = false;
    tmpRead_13[17] = false;
    tmpRead_13[18] = false;
    tmpRead_13[19] = false;
    tmpRead_13[20] = false;
    tmpRead_13[21] = false;
    tmpRead_13[22] = false;
    tmpRead_13[23] = false;
    tmpRead_13[24] = false;
    tmpRead_13[25] = false;
    tmpRead_13[26] = false;
    tmpRead_13[27] = false;
    tmpRead_13[28] = false;
    tmpRead_13[29] = false;
    tmpRead_13[30] = false;
    tmpRead_13[31] = false;

    /* Outport: '<Root>/MdReqArray_Val' incorporates:
     *  Constant: '<S3>/PA_KeSMSAutoEZEFwdBkwdPosEna_Val'
     *  Logic: '<S21>/Logical Operator2'
     *  Logic: '<S22>/Logical Operator2'
     *  Logic: '<S24>/Logical Operator2'
     *  Logic: '<S25>/Logical Operator2'
     *  Logic: '<S3>/Logical Operator5'
     *  RelationalOperator: '<S3>/Relational Operator'
     *  SignalConversion: '<S1>/TmpLatchAtEZE4sLtMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtEZE4sRtMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtEZQ4sLtMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtEZQ4sRtMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLfLyMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLgrstCloseLtMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLgrstCloseRtMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLgrstOpenLtMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLgrstOpenRtMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLtRcvyMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtLtVipMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtRtLyMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtRtRcvyMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtRtVipMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtWelcomeBkwdMdReq_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtWelcomeFwdMdReq_Val_readOutport1'
     */
    (void) Rte_Write_MdReqArray_Val(tmpRead_13);

    /* Switch: '<S3>/Switch4' incorporates:
     *  Constant: '<S3>/PA_KeSMSuMdNum4s_Val'
     */
    tmpRead_15 = Rte_Prm_KeSMSuMdNum4s_Val();
  }

  /* End of Switch: '<S3>/Switch' */

  /* Outport: '<Root>/VeSMSuMdNum_Val' incorporates:
   *  Switch: '<S3>/Switch4'
   */
  (void) Rte_Write_VeSMSuMdNum_Val(tmpRead_15);

  /* End of Outputs for SubSystem: '<Root>/MdSWReqChk_Cal_sys' */
}

/* Model initialize function */
void MdSWReqChk_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
