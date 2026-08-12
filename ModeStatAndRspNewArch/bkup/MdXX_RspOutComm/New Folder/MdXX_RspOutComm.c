/*
 * File: MdXX_RspOutComm.c
 *
 * Code generated for Simulink model 'MdXX_RspOutComm'.
 *
 * Model version                  : 1.42
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Nov 21 11:58:54 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MdXX_RspOutComm.h"
#include "MdXX_RspOutComm_private.h"

/* Named constants for Chart: '<S3>/Md10RspOutComm' */
#define MdXX_RspOutC_IN_NotSuccessfully ((uint8)1U)
#define MdXX_RspOutCo_IN_TartPosAlready ((uint8)2U)
#define MdXX_RspOutCo_IN_cmpmodeOngoing ((uint8)3U)
#define MdXX_RspOutCo_IN_exitingsuccess ((uint8)4U)
#define MdXX_RspOutComm_IN_othermode   ((uint8)5U)

/* Block signals (default storage) */
B_MdXX_RspOutComm_T MdXX_RspOutComm_B;

/* Block states (default storage) */
DW_MdXX_RspOutComm_T MdXX_RspOutComm_DW;

/*
 * System initialize for atomic system:
 *    '<S3>/Md10RspOutComm'
 *    '<S3>/Md11RspOutComm'
 *    '<S3>/Md12RspOutComm'
 *    '<S3>/Md13RspOutComm'
 *    '<S3>/Md14RspOutComm'
 *    '<S3>/Md15RspOutComm'
 *    '<S3>/Md16RspOutComm'
 *    '<S3>/Md17RspOutComm'
 *    '<S3>/Md18RspOutComm'
 *    '<S3>/Md19RspOutComm'
 *    ...
 */
void MdXX_RspOut_Md10RspOutComm_Init(uint8 *rty_ModeRspOut, SrcReqTp1
  *rty_MdSrcTpOut)
{
  *rty_ModeRspOut = 0U;
  *rty_MdSrcTpOut = SrcReqTp_None;
}

/*
 * Output and update for atomic system:
 *    '<S3>/Md10RspOutComm'
 *    '<S3>/Md11RspOutComm'
 *    '<S3>/Md12RspOutComm'
 *    '<S3>/Md13RspOutComm'
 *    '<S3>/Md14RspOutComm'
 *    '<S3>/Md15RspOutComm'
 *    '<S3>/Md16RspOutComm'
 *    '<S3>/Md17RspOutComm'
 *    '<S3>/Md18RspOutComm'
 *    '<S3>/Md19RspOutComm'
 *    ...
 */
void MdXX_RspOutComm_Md10RspOutComm(boolean rtu_Mode_En, uint8 rtu_k_exitTm,
  MdRspLocal2 rtu_ModeRsp, boolean rtu_isArrivedTrgtPos, SrcReqTp1 rtu_MdSrcTpIn,
  uint8 *rty_ModeRspOut, SrcReqTp1 *rty_MdSrcTpOut,
  DW_Md10RspOutComm_MdXX_RspOut_T *localDW)
{
  /* Chart: '<S3>/Md10RspOutComm' */
  if (localDW->is_active_c2_RspLib == 0U) {
    localDW->is_active_c2_RspLib = 1U;
    localDW->is_c2_RspLib = MdXX_RspOutComm_IN_othermode;
    *rty_ModeRspOut = 0U;
    localDW->cntexit = 1U;
    *rty_MdSrcTpOut = SrcReqTp_None;
  } else {
    switch (localDW->is_c2_RspLib) {
     case MdXX_RspOutC_IN_NotSuccessfully:
      if (rtu_Mode_En) {
        localDW->is_c2_RspLib = MdXX_RspOutCo_IN_cmpmodeOngoing;
        *rty_ModeRspOut = 4U;
        *rty_MdSrcTpOut = rtu_MdSrcTpIn;
      } else if (localDW->cntexit >= rtu_k_exitTm) {
        localDW->is_c2_RspLib = MdXX_RspOutComm_IN_othermode;
        *rty_ModeRspOut = 0U;
        localDW->cntexit = 1U;
        *rty_MdSrcTpOut = SrcReqTp_None;
      } else {
        localDW->cntexit++;
      }
      break;

     case MdXX_RspOutCo_IN_TartPosAlready:
      if (localDW->cntexit >= rtu_k_exitTm) {
        localDW->is_c2_RspLib = MdXX_RspOutComm_IN_othermode;
        *rty_ModeRspOut = 0U;
        localDW->cntexit = 1U;
        *rty_MdSrcTpOut = SrcReqTp_None;
      } else {
        localDW->cntexit++;
      }
      break;

     case MdXX_RspOutCo_IN_cmpmodeOngoing:
      if ((!rtu_Mode_En) && rtu_isArrivedTrgtPos) {
        localDW->is_c2_RspLib = MdXX_RspOutCo_IN_exitingsuccess;
        *rty_ModeRspOut = (uint8)MdRsp_RecallSuccessfully;
      } else {
        if (!rtu_Mode_En) {
          localDW->is_c2_RspLib = MdXX_RspOutC_IN_NotSuccessfully;
          *rty_ModeRspOut = (uint8)rtu_ModeRsp;
        }
      }
      break;

     case MdXX_RspOutCo_IN_exitingsuccess:
      if (localDW->cntexit >= rtu_k_exitTm) {
        localDW->is_c2_RspLib = MdXX_RspOutComm_IN_othermode;
        *rty_ModeRspOut = 0U;
        localDW->cntexit = 1U;
        *rty_MdSrcTpOut = SrcReqTp_None;
      } else {
        localDW->cntexit++;
      }
      break;

     default:
      if (rtu_Mode_En) {
        if (rtu_isArrivedTrgtPos) {
          localDW->is_c2_RspLib = MdXX_RspOutCo_IN_TartPosAlready;
          *rty_ModeRspOut = (uint8)MdRsp_TargetPositionAlready;
          *rty_MdSrcTpOut = rtu_MdSrcTpIn;
        } else {
          localDW->is_c2_RspLib = MdXX_RspOutCo_IN_cmpmodeOngoing;
          *rty_ModeRspOut = 4U;
          *rty_MdSrcTpOut = rtu_MdSrcTpIn;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Md10RspOutComm' */
}

/* Model step function for TID1 */
void MdXX_RspOutCommRunnable(void)     /* Sample time: [0.01s, 0.0s] */
{
  MdRspLocal2 tmpRead;
  MdRspLocal2 tmpRead_0;
  MdRspLocal2 tmpRead_1;
  MdRspLocal2 tmpRead_2;
  MdRspLocal2 tmpRead_3;
  MdRspLocal2 tmpRead_4;
  MdRspLocal2 tmpRead_5;
  MdRspLocal2 tmpRead_6;
  MdRspLocal2 tmpRead_7;
  MdRspLocal2 tmpRead_8;
  MdRspLocal2 tmpRead_9;
  MdRspLocal2 tmpRead_a;
  MdRspLocal2 tmpRead_b;
  MdRspLocal2 tmpRead_c;
  MdRspLocal2 tmpRead_d;
  MdRspLocal2 tmpRead_e;
  MdRspLocal2 tmpRead_f;
  MdRspLocal2 tmpRead_g;
  MdRspLocal2 tmpRead_h;
  MdRspLocal2 tmpRead_i;
  SrcReqTp1 tmpRead_j;
  SrcReqTp1 tmpRead_k;
  SrcReqTp1 tmpRead_l;
  SrcReqTp1 tmpRead_m;
  SrcReqTp1 tmpRead_n;
  SrcReqTp1 tmpRead_o;
  SrcReqTp1 tmpRead_p;
  SrcReqTp1 tmpRead_q;
  SrcReqTp1 tmpRead_r;
  SrcReqTp1 tmpRead_s;
  SrcReqTp1 tmpRead_t;
  SrcReqTp1 tmpRead_u;
  SrcReqTp1 tmpRead_v;
  SrcReqTp1 tmpRead_w;
  SrcReqTp1 tmpRead_x;
  SrcReqTp1 tmpRead_y;
  SrcReqTp1 tmpRead_z;
  SrcReqTp1 tmpRead_10;
  SrcReqTp1 tmpRead_11;
  SrcReqTp1 tmpRead_12;
  uint32 rtb_TmpSignalConversionAtIsTarg;
  uint32 rtb_TmpSignalConversionAtmodest;

  /* Inport: '<Root>/MdXX_SrcReqTp_Md9_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md9_SrcTp(&tmpRead_12);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md8_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md8_SrcTp(&tmpRead_11);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md7_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md7_SrcTp(&tmpRead_10);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md6_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md6_SrcTp(&tmpRead_z);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md5_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md5_SrcTp(&tmpRead_y);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md4_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md4_SrcTp(&tmpRead_x);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md3_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md3_SrcTp(&tmpRead_w);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md20_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md20_SrcTp(&tmpRead_v);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md2_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md2_SrcTp(&tmpRead_u);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md19_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md19_SrcTp(&tmpRead_t);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md18_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md18_SrcTp(&tmpRead_s);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md17_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md17_SrcTp(&tmpRead_r);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md16_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md16_SrcTp(&tmpRead_q);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md15_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md15_SrcTp(&tmpRead_p);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md14_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md14_SrcTp(&tmpRead_o);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md13_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md13_SrcTp(&tmpRead_n);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md12_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md12_SrcTp(&tmpRead_m);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md11_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md11_SrcTp(&tmpRead_l);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md10_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md10_SrcTp(&tmpRead_k);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md1_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md1_SrcTp(&tmpRead_j);

  /* Inport: '<Root>/MdXX_Rsp_Md9_Rsp' */
  Rte_Read_MdXX_Rsp_Md9_Rsp(&tmpRead_i);

  /* Inport: '<Root>/MdXX_Rsp_Md8_Rsp' */
  Rte_Read_MdXX_Rsp_Md8_Rsp(&tmpRead_h);

  /* Inport: '<Root>/MdXX_Rsp_Md7_Rsp' */
  Rte_Read_MdXX_Rsp_Md7_Rsp(&tmpRead_g);

  /* Inport: '<Root>/MdXX_Rsp_Md6_Rsp' */
  Rte_Read_MdXX_Rsp_Md6_Rsp(&tmpRead_f);

  /* Inport: '<Root>/MdXX_Rsp_Md5_Rsp' */
  Rte_Read_MdXX_Rsp_Md5_Rsp(&tmpRead_e);

  /* Inport: '<Root>/MdXX_Rsp_Md4_Rsp' */
  Rte_Read_MdXX_Rsp_Md4_Rsp(&tmpRead_d);

  /* Inport: '<Root>/MdXX_Rsp_Md3_Rsp' */
  Rte_Read_MdXX_Rsp_Md3_Rsp(&tmpRead_c);

  /* Inport: '<Root>/MdXX_Rsp_Md20_Rsp' */
  Rte_Read_MdXX_Rsp_Md20_Rsp(&tmpRead_b);

  /* Inport: '<Root>/MdXX_Rsp_Md2_Rsp' */
  Rte_Read_MdXX_Rsp_Md2_Rsp(&tmpRead_a);

  /* Inport: '<Root>/MdXX_Rsp_Md19_Rsp' */
  Rte_Read_MdXX_Rsp_Md19_Rsp(&tmpRead_9);

  /* Inport: '<Root>/MdXX_Rsp_Md18_Rsp' */
  Rte_Read_MdXX_Rsp_Md18_Rsp(&tmpRead_8);

  /* Inport: '<Root>/MdXX_Rsp_Md17_Rsp' */
  Rte_Read_MdXX_Rsp_Md17_Rsp(&tmpRead_7);

  /* Inport: '<Root>/MdXX_Rsp_Md16_Rsp' */
  Rte_Read_MdXX_Rsp_Md16_Rsp(&tmpRead_6);

  /* Inport: '<Root>/MdXX_Rsp_Md15_Rsp' */
  Rte_Read_MdXX_Rsp_Md15_Rsp(&tmpRead_5);

  /* Inport: '<Root>/MdXX_Rsp_Md14_Rsp' */
  Rte_Read_MdXX_Rsp_Md14_Rsp(&tmpRead_4);

  /* Inport: '<Root>/MdXX_Rsp_Md13_Rsp' */
  Rte_Read_MdXX_Rsp_Md13_Rsp(&tmpRead_3);

  /* Inport: '<Root>/MdXX_Rsp_Md12_Rsp' */
  Rte_Read_MdXX_Rsp_Md12_Rsp(&tmpRead_2);

  /* Inport: '<Root>/MdXX_Rsp_Md11_Rsp' */
  Rte_Read_MdXX_Rsp_Md11_Rsp(&tmpRead_1);

  /* Inport: '<Root>/MdXX_Rsp_Md10_Rsp' */
  Rte_Read_MdXX_Rsp_Md10_Rsp(&tmpRead_0);

  /* Inport: '<Root>/MdXX_Rsp_Md1_Rsp' */
  Rte_Read_MdXX_Rsp_Md1_Rsp(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_MdXX_RspOutCommRunnable_at_outport_1' incorporates:
   *  SubSystem: '<Root>/MdXX_RspOutCommRunnable_sys'
   */
  /* SignalConversion: '<S1>/TmpSignal ConversionAtIsTargetPos32Bit_Val_readOutport1' incorporates:
   *  Inport: '<Root>/IsTargetPos32Bit_Val'
   */
  Rte_Read_IsTargetPos32Bit_Val(&rtb_TmpSignalConversionAtIsTarg);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtmodestate32_Val_readOutport1' incorporates:
   *  Inport: '<Root>/modestate32_Val'
   */
  Rte_Read_modestate32_Val(&rtb_TmpSignalConversionAtmodest);

  /* Chart: '<S3>/Md10RspOutComm' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S15>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S14>/Relational Operator'
   *  RelationalOperator: '<S15>/Relational Operator'
   *  S-Function (sfix_bitop): '<S14>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S15>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 512U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_0,
    (rtb_TmpSignalConversionAtIsTarg & 512U) > 0U, tmpRead_k,
    &MdXX_RspOutComm_B.ModeRspOut_or, &MdXX_RspOutComm_B.MdSrcTpOut_kq,
    &MdXX_RspOutComm_DW.sf_Md10RspOutComm);

  /* Chart: '<S3>/Md11RspOutComm' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S18>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S17>/Relational Operator'
   *  RelationalOperator: '<S18>/Relational Operator'
   *  S-Function (sfix_bitop): '<S17>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S18>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 1024U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_1,
    (rtb_TmpSignalConversionAtIsTarg & 1024U) > 0U, tmpRead_l,
    &MdXX_RspOutComm_B.ModeRspOut_ez, &MdXX_RspOutComm_B.MdSrcTpOut_c1,
    &MdXX_RspOutComm_DW.sf_Md11RspOutComm);

  /* Chart: '<S3>/Md12RspOutComm' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S20>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S19>/Relational Operator'
   *  RelationalOperator: '<S20>/Relational Operator'
   *  S-Function (sfix_bitop): '<S19>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S20>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 2048U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_2,
    (rtb_TmpSignalConversionAtIsTarg & 2048U) > 0U, tmpRead_m,
    &MdXX_RspOutComm_B.ModeRspOut_d, &MdXX_RspOutComm_B.MdSrcTpOut_pj,
    &MdXX_RspOutComm_DW.sf_Md12RspOutComm);

  /* Chart: '<S3>/Md13RspOutComm' incorporates:
   *  Constant: '<S21>/Constant'
   *  Constant: '<S22>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S21>/Relational Operator'
   *  RelationalOperator: '<S22>/Relational Operator'
   *  S-Function (sfix_bitop): '<S21>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S22>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 4096U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_3,
    (rtb_TmpSignalConversionAtIsTarg & 4096U) > 0U, tmpRead_n,
    &MdXX_RspOutComm_B.ModeRspOut_l, &MdXX_RspOutComm_B.MdSrcTpOut_p,
    &MdXX_RspOutComm_DW.sf_Md13RspOutComm);

  /* Chart: '<S3>/Md14RspOutComm' incorporates:
   *  Constant: '<S23>/Constant'
   *  Constant: '<S24>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S23>/Relational Operator'
   *  RelationalOperator: '<S24>/Relational Operator'
   *  S-Function (sfix_bitop): '<S23>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S24>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 8192U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_4,
    (rtb_TmpSignalConversionAtIsTarg & 8192U) > 0U, tmpRead_o,
    &MdXX_RspOutComm_B.ModeRspOut_oc, &MdXX_RspOutComm_B.MdSrcTpOut_ld,
    &MdXX_RspOutComm_DW.sf_Md14RspOutComm);

  /* Chart: '<S3>/Md15RspOutComm' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S26>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S25>/Relational Operator'
   *  RelationalOperator: '<S26>/Relational Operator'
   *  S-Function (sfix_bitop): '<S25>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S26>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 16384U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_5,
    (rtb_TmpSignalConversionAtIsTarg & 16384U) > 0U, tmpRead_p,
    &MdXX_RspOutComm_B.ModeRspOut_ml, &MdXX_RspOutComm_B.MdSrcTpOut_i,
    &MdXX_RspOutComm_DW.sf_Md15RspOutComm);

  /* Chart: '<S3>/Md16RspOutComm' incorporates:
   *  Constant: '<S28>/Constant'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S28>/Relational Operator'
   *  RelationalOperator: '<S29>/Relational Operator'
   *  S-Function (sfix_bitop): '<S28>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S29>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 32768U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_6,
    (rtb_TmpSignalConversionAtIsTarg & 32768U) > 0U, tmpRead_q,
    &MdXX_RspOutComm_B.ModeRspOut_m2, &MdXX_RspOutComm_B.MdSrcTpOut_k,
    &MdXX_RspOutComm_DW.sf_Md16RspOutComm);

  /* Chart: '<S3>/Md17RspOutComm' incorporates:
   *  Constant: '<S30>/Constant'
   *  Constant: '<S31>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S30>/Relational Operator'
   *  RelationalOperator: '<S31>/Relational Operator'
   *  S-Function (sfix_bitop): '<S30>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S31>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 65536U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_7,
    (rtb_TmpSignalConversionAtIsTarg & 65536U) > 0U, tmpRead_r,
    &MdXX_RspOutComm_B.ModeRspOut_pf, &MdXX_RspOutComm_B.MdSrcTpOut_g,
    &MdXX_RspOutComm_DW.sf_Md17RspOutComm);

  /* Chart: '<S3>/Md18RspOutComm' incorporates:
   *  Constant: '<S32>/Constant'
   *  Constant: '<S33>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S32>/Relational Operator'
   *  RelationalOperator: '<S33>/Relational Operator'
   *  S-Function (sfix_bitop): '<S32>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S33>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 131072U) >
    0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_8,
    (rtb_TmpSignalConversionAtIsTarg & 131072U) > 0U, tmpRead_s,
    &MdXX_RspOutComm_B.ModeRspOut_m, &MdXX_RspOutComm_B.MdSrcTpOut_ok,
    &MdXX_RspOutComm_DW.sf_Md18RspOutComm);

  /* Chart: '<S3>/Md19RspOutComm' incorporates:
   *  Constant: '<S34>/Constant'
   *  Constant: '<S35>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S34>/Relational Operator'
   *  RelationalOperator: '<S35>/Relational Operator'
   *  S-Function (sfix_bitop): '<S34>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S35>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 262144U) >
    0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_9,
    (rtb_TmpSignalConversionAtIsTarg & 262144U) > 0U, tmpRead_t,
    &MdXX_RspOutComm_B.ModeRspOut_g, &MdXX_RspOutComm_B.MdSrcTpOut_c,
    &MdXX_RspOutComm_DW.sf_Md19RspOutComm);

  /* Chart: '<S3>/Md1RspOutComm' incorporates:
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  RelationalOperator: '<S4>/Relational Operator'
   *  RelationalOperator: '<S5>/Relational Operator'
   *  S-Function (sfix_bitop): '<S4>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S5>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 1U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead, (rtb_TmpSignalConversionAtIsTarg
    & 1U) > 0U, tmpRead_j, &MdXX_RspOutComm_B.ModeRspOut_a,
    &MdXX_RspOutComm_B.MdSrcTpOut_a, &MdXX_RspOutComm_DW.sf_Md1RspOutComm);

  /* Chart: '<S3>/Md20RspOutComm' incorporates:
   *  Constant: '<S36>/Constant'
   *  Constant: '<S37>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S36>/Relational Operator'
   *  RelationalOperator: '<S37>/Relational Operator'
   *  S-Function (sfix_bitop): '<S36>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S37>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 524288U) >
    0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_b,
    (rtb_TmpSignalConversionAtIsTarg & 524288U) > 0U, tmpRead_v,
    &MdXX_RspOutComm_B.ModeRspOut_km, &MdXX_RspOutComm_B.MdSrcTpOut_l,
    &MdXX_RspOutComm_DW.sf_Md20RspOutComm);

  /* Chart: '<S3>/Md2RspOutComm' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S27>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S16>/Relational Operator'
   *  RelationalOperator: '<S27>/Relational Operator'
   *  S-Function (sfix_bitop): '<S16>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S27>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 2U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_a,
    (rtb_TmpSignalConversionAtIsTarg & 2U) > 0U, tmpRead_u,
    &MdXX_RspOutComm_B.ModeRspOut_b, &MdXX_RspOutComm_B.MdSrcTpOut_m4,
    &MdXX_RspOutComm_DW.sf_Md2RspOutComm);

  /* Chart: '<S3>/Md3RspOutComm' incorporates:
   *  Constant: '<S38>/Constant'
   *  Constant: '<S39>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S38>/Relational Operator'
   *  RelationalOperator: '<S39>/Relational Operator'
   *  S-Function (sfix_bitop): '<S38>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S39>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 4U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_c,
    (rtb_TmpSignalConversionAtIsTarg & 4U) > 0U, tmpRead_w,
    &MdXX_RspOutComm_B.ModeRspOut_e, &MdXX_RspOutComm_B.MdSrcTpOut_m,
    &MdXX_RspOutComm_DW.sf_Md3RspOutComm);

  /* Chart: '<S3>/Md4RspOutComm' incorporates:
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S40>/Constant'
   *  Constant: '<S41>/Constant'
   *  RelationalOperator: '<S40>/Relational Operator'
   *  RelationalOperator: '<S41>/Relational Operator'
   *  S-Function (sfix_bitop): '<S40>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S41>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 8U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_d,
    (rtb_TmpSignalConversionAtIsTarg & 8U) > 0U, tmpRead_x,
    &MdXX_RspOutComm_B.ModeRspOut_k, &MdXX_RspOutComm_B.MdSrcTpOut_nz,
    &MdXX_RspOutComm_DW.sf_Md4RspOutComm);

  /* Chart: '<S3>/Md5RspOutComm' incorporates:
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S42>/Constant'
   *  Constant: '<S43>/Constant'
   *  RelationalOperator: '<S42>/Relational Operator'
   *  RelationalOperator: '<S43>/Relational Operator'
   *  S-Function (sfix_bitop): '<S42>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S43>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 16U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_e,
    (rtb_TmpSignalConversionAtIsTarg & 16U) > 0U, tmpRead_y,
    &MdXX_RspOutComm_B.ModeRspOut_p, &MdXX_RspOutComm_B.MdSrcTpOut_d,
    &MdXX_RspOutComm_DW.sf_Md5RspOutComm);

  /* Chart: '<S3>/Md6RspOutComm' incorporates:
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S6>/Constant'
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  RelationalOperator: '<S7>/Relational Operator'
   *  S-Function (sfix_bitop): '<S6>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S7>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 32U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_f,
    (rtb_TmpSignalConversionAtIsTarg & 32U) > 0U, tmpRead_z,
    &MdXX_RspOutComm_B.ModeRspOut_cb, &MdXX_RspOutComm_B.MdSrcTpOut_o,
    &MdXX_RspOutComm_DW.sf_Md6RspOutComm);

  /* Chart: '<S3>/Md7RspOutComm' incorporates:
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S8>/Constant'
   *  Constant: '<S9>/Constant'
   *  RelationalOperator: '<S8>/Relational Operator'
   *  RelationalOperator: '<S9>/Relational Operator'
   *  S-Function (sfix_bitop): '<S8>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S9>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 64U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_g,
    (rtb_TmpSignalConversionAtIsTarg & 64U) > 0U, tmpRead_10,
    &MdXX_RspOutComm_B.ModeRspOut_o, &MdXX_RspOutComm_B.MdSrcTpOut_n,
    &MdXX_RspOutComm_DW.sf_Md7RspOutComm);

  /* Chart: '<S3>/Md8RspOutComm' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S10>/Relational Operator'
   *  RelationalOperator: '<S11>/Relational Operator'
   *  S-Function (sfix_bitop): '<S10>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S11>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 128U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_h,
    (rtb_TmpSignalConversionAtIsTarg & 128U) > 0U, tmpRead_11,
    &MdXX_RspOutComm_B.ModeRspOut_c, &MdXX_RspOutComm_B.MdSrcTpOut_b,
    &MdXX_RspOutComm_DW.sf_Md8RspOutComm);

  /* Chart: '<S3>/Md9RspOutComm' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  RelationalOperator: '<S12>/Relational Operator'
   *  RelationalOperator: '<S13>/Relational Operator'
   *  S-Function (sfix_bitop): '<S12>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S13>/Bitwise Operator'
   */
  MdXX_RspOutComm_Md10RspOutComm((rtb_TmpSignalConversionAtmodest & 256U) > 0U,
    Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead_i,
    (rtb_TmpSignalConversionAtIsTarg & 256U) > 0U, tmpRead_12,
    &MdXX_RspOutComm_B.ModeRspOut, &MdXX_RspOutComm_B.MdSrcTpOut,
    &MdXX_RspOutComm_DW.sf_Md9RspOutComm);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_MdXX_RspOutCommRunnable_at_outport_1' */

  /* Outport: '<Root>/MdXX_RspOutComm_Md1_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md1_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_a);

  /* Outport: '<Root>/MdXX_RspOutComm_Md10_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md10_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_or);

  /* Outport: '<Root>/MdXX_RspOutComm_Md11_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md11_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_ez);

  /* Outport: '<Root>/MdXX_RspOutComm_Md12_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md12_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_d);

  /* Outport: '<Root>/MdXX_RspOutComm_Md13_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md13_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_l);

  /* Outport: '<Root>/MdXX_RspOutComm_Md14_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md14_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_oc);

  /* Outport: '<Root>/MdXX_RspOutComm_Md15_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md15_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_ml);

  /* Outport: '<Root>/MdXX_RspOutComm_Md16_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md16_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_m2);

  /* Outport: '<Root>/MdXX_RspOutComm_Md17_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md17_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_pf);

  /* Outport: '<Root>/MdXX_RspOutComm_Md18_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md18_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_m);

  /* Outport: '<Root>/MdXX_RspOutComm_Md19_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md19_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_g);

  /* Outport: '<Root>/MdXX_RspOutComm_Md2_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md2_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_b);

  /* Outport: '<Root>/MdXX_RspOutComm_Md20_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md20_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_km);

  /* Outport: '<Root>/MdXX_RspOutComm_Md21_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md21_RspOutComm(0U);

  /* Outport: '<Root>/MdXX_RspOutComm_Md22_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md22_RspOutComm(0U);

  /* Outport: '<Root>/MdXX_RspOutComm_Md23_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md23_RspOutComm(0U);

  /* Outport: '<Root>/MdXX_RspOutComm_Md24_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md24_RspOutComm(0U);

  /* Outport: '<Root>/MdXX_RspOutComm_Md25_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md25_RspOutComm(0U);

  /* Outport: '<Root>/MdXX_RspOutComm_Md26_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md26_RspOutComm(0U);

  /* Outport: '<Root>/MdXX_RspOutComm_Md27_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md27_RspOutComm(0U);

  /* Outport: '<Root>/MdXX_RspOutComm_Md28_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md28_RspOutComm(0U);

  /* Outport: '<Root>/MdXX_RspOutComm_Md29_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md29_RspOutComm(0U);

  /* Outport: '<Root>/MdXX_RspOutComm_Md3_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md3_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_e);

  /* Outport: '<Root>/MdXX_RspOutComm_Md30_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md30_RspOutComm(0U);

  /* Outport: '<Root>/MdXX_RspOutComm_Md31_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md31_RspOutComm(0U);

  /* Outport: '<Root>/MdXX_RspOutComm_Md32_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md32_RspOutComm(0U);

  /* Outport: '<Root>/MdXX_RspOutComm_Md4_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md4_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_k);

  /* Outport: '<Root>/MdXX_RspOutComm_Md5_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md5_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_p);

  /* Outport: '<Root>/MdXX_RspOutComm_Md6_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md6_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_cb);

  /* Outport: '<Root>/MdXX_RspOutComm_Md7_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md7_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_o);

  /* Outport: '<Root>/MdXX_RspOutComm_Md8_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md8_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_c);

  /* Outport: '<Root>/MdXX_RspOutComm_Md9_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md9_RspOutComm(MdXX_RspOutComm_B.ModeRspOut);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md1_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md1_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_a);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md10_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md10_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_kq);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md11_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md11_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_c1);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md12_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md12_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_pj);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md13_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md13_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_p);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md14_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md14_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_ld);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md15_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md15_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_i);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md16_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md16_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_k);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md17_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md17_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_g);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md18_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md18_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_ok);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md19_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md19_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_c);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md2_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md2_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_m4);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md20_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md20_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_l);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md21_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md21_SrcTp(SrcReqTp_None);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md22_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md22_SrcTp(SrcReqTp_None);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md23_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md23_SrcTp(SrcReqTp_None);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md24_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md24_SrcTp(SrcReqTp_None);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md25_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md25_SrcTp(SrcReqTp_None);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md26_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md26_SrcTp(SrcReqTp_None);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md27_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md27_SrcTp(SrcReqTp_None);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md28_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md28_SrcTp(SrcReqTp_None);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md29_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md29_SrcTp(SrcReqTp_None);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md3_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md3_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_m);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md30_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md30_SrcTp(SrcReqTp_None);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md31_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md31_SrcTp(SrcReqTp_None);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md32_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md32_SrcTp(SrcReqTp_None);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md4_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md4_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_nz);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md5_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md5_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_d);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md6_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md6_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_o);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md7_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md7_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_n);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md8_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md8_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_b);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md9_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md9_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut);
}

/* Model initialize function */
void MdXX_RspOutComm_Init(void)
{
  /* SystemInitialize for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_MdXX_RspOutCommRunnable_at_outport_1' incorporates:
   *  SubSystem: '<Root>/MdXX_RspOutCommRunnable_sys'
   */

  /* SystemInitialize for Chart: '<S3>/Md10RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_or,
    &MdXX_RspOutComm_B.MdSrcTpOut_kq);

  /* SystemInitialize for Chart: '<S3>/Md11RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_ez,
    &MdXX_RspOutComm_B.MdSrcTpOut_c1);

  /* SystemInitialize for Chart: '<S3>/Md12RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_d,
    &MdXX_RspOutComm_B.MdSrcTpOut_pj);

  /* SystemInitialize for Chart: '<S3>/Md13RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_l,
    &MdXX_RspOutComm_B.MdSrcTpOut_p);

  /* SystemInitialize for Chart: '<S3>/Md14RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_oc,
    &MdXX_RspOutComm_B.MdSrcTpOut_ld);

  /* SystemInitialize for Chart: '<S3>/Md15RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_ml,
    &MdXX_RspOutComm_B.MdSrcTpOut_i);

  /* SystemInitialize for Chart: '<S3>/Md16RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_m2,
    &MdXX_RspOutComm_B.MdSrcTpOut_k);

  /* SystemInitialize for Chart: '<S3>/Md17RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_pf,
    &MdXX_RspOutComm_B.MdSrcTpOut_g);

  /* SystemInitialize for Chart: '<S3>/Md18RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_m,
    &MdXX_RspOutComm_B.MdSrcTpOut_ok);

  /* SystemInitialize for Chart: '<S3>/Md19RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_g,
    &MdXX_RspOutComm_B.MdSrcTpOut_c);

  /* SystemInitialize for Chart: '<S3>/Md1RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_a,
    &MdXX_RspOutComm_B.MdSrcTpOut_a);

  /* SystemInitialize for Chart: '<S3>/Md20RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_km,
    &MdXX_RspOutComm_B.MdSrcTpOut_l);

  /* SystemInitialize for Chart: '<S3>/Md2RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_b,
    &MdXX_RspOutComm_B.MdSrcTpOut_m4);

  /* SystemInitialize for Chart: '<S3>/Md3RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_e,
    &MdXX_RspOutComm_B.MdSrcTpOut_m);

  /* SystemInitialize for Chart: '<S3>/Md4RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_k,
    &MdXX_RspOutComm_B.MdSrcTpOut_nz);

  /* SystemInitialize for Chart: '<S3>/Md5RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_p,
    &MdXX_RspOutComm_B.MdSrcTpOut_d);

  /* SystemInitialize for Chart: '<S3>/Md6RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_cb,
    &MdXX_RspOutComm_B.MdSrcTpOut_o);

  /* SystemInitialize for Chart: '<S3>/Md7RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_o,
    &MdXX_RspOutComm_B.MdSrcTpOut_n);

  /* SystemInitialize for Chart: '<S3>/Md8RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut_c,
    &MdXX_RspOutComm_B.MdSrcTpOut_b);

  /* SystemInitialize for Chart: '<S3>/Md9RspOutComm' */
  MdXX_RspOut_Md10RspOutComm_Init(&MdXX_RspOutComm_B.ModeRspOut,
    &MdXX_RspOutComm_B.MdSrcTpOut);

  /* End of SystemInitialize for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_MdXX_RspOutCommRunnable_at_outport_1' */

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md1_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md1_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_a);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md10_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md10_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_kq);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md11_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md11_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_c1);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md12_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md12_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_pj);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md13_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md13_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_p);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md14_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md14_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_ld);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md15_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md15_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_i);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md16_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md16_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_k);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md17_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md17_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_g);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md18_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md18_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_ok);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md19_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md19_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_c);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md2_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md2_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_m4);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md20_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md20_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_l);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md3_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md3_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_m);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md4_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md4_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_nz);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md5_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md5_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_d);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md6_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md6_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_o);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md7_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md7_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_n);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md8_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md8_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_b);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md9_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md9_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
