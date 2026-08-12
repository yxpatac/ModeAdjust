/*
 * File: MdXX_RspOutComm.c
 *
 * Code generated for Simulink model 'MdXX_RspOutComm'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 14:11:12 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MdXX_RspOutComm.h"

/* Named constants for Chart: '<S3>/MdRsp1' */
#define MdXX_RspOutC_IN_NO_ACTIVE_CHILD ((uint8)0U)
#define MdXX_RspOutC_IN_NotSuccessfully ((uint8)1U)
#define MdXX_RspOutCo_IN_TartPosAlready ((uint8)2U)
#define MdXX_RspOutCo_IN_cmpmodeOngoing ((uint8)2U)
#define MdXX_RspOutCo_IN_exitingsuccess ((uint8)3U)
#define MdXX_RspOutComm_IN_MidState    ((uint8)1U)
#define MdXX_RspOutComm_IN_othermode   ((uint8)3U)

/* Invariant block signals (default storage) */
const ConstB_MdXX_RspOutComm_T MdXX_RspOutComm_ConstB = {
  1U,                                  /* '<S68>/Shift Arithmetic' */
  1U,                                  /* '<S69>/Shift Arithmetic' */
  512U,                                /* '<S70>/Shift Arithmetic' */
  512U,                                /* '<S71>/Shift Arithmetic' */
  1024U,                               /* '<S72>/Shift Arithmetic' */
  1024U,                               /* '<S73>/Shift Arithmetic' */
  2048U,                               /* '<S74>/Shift Arithmetic' */
  2048U,                               /* '<S75>/Shift Arithmetic' */
  4096U,                               /* '<S76>/Shift Arithmetic' */
  4096U,                               /* '<S77>/Shift Arithmetic' */
  8192U,                               /* '<S78>/Shift Arithmetic' */
  8192U,                               /* '<S79>/Shift Arithmetic' */
  16384U,                              /* '<S80>/Shift Arithmetic' */
  16384U,                              /* '<S81>/Shift Arithmetic' */
  32768U,                              /* '<S82>/Shift Arithmetic' */
  32768U,                              /* '<S83>/Shift Arithmetic' */
  65536U,                              /* '<S84>/Shift Arithmetic' */
  65536U,                              /* '<S85>/Shift Arithmetic' */
  131072U,                             /* '<S86>/Shift Arithmetic' */
  131072U,                             /* '<S87>/Shift Arithmetic' */
  262144U,                             /* '<S88>/Shift Arithmetic' */
  262144U,                             /* '<S89>/Shift Arithmetic' */
  2U,                                  /* '<S90>/Shift Arithmetic' */
  2U,                                  /* '<S91>/Shift Arithmetic' */
  524288U,                             /* '<S92>/Shift Arithmetic' */
  524288U,                             /* '<S93>/Shift Arithmetic' */
  1048576U,                            /* '<S94>/Shift Arithmetic' */
  1048576U,                            /* '<S95>/Shift Arithmetic' */
  2097152U,                            /* '<S96>/Shift Arithmetic' */
  2097152U,                            /* '<S97>/Shift Arithmetic' */
  4194304U,                            /* '<S98>/Shift Arithmetic' */
  4194304U,                            /* '<S99>/Shift Arithmetic' */
  8388608U,                            /* '<S100>/Shift Arithmetic' */
  8388608U,                            /* '<S101>/Shift Arithmetic' */
  16777216U,                           /* '<S102>/Shift Arithmetic' */
  16777216U,                           /* '<S103>/Shift Arithmetic' */
  33554432U,                           /* '<S104>/Shift Arithmetic' */
  33554432U,                           /* '<S105>/Shift Arithmetic' */
  67108864U,                           /* '<S106>/Shift Arithmetic' */
  67108864U,                           /* '<S107>/Shift Arithmetic' */
  134217728U,                          /* '<S108>/Shift Arithmetic' */
  134217728U,                          /* '<S109>/Shift Arithmetic' */
  268435456U,                          /* '<S110>/Shift Arithmetic' */
  268435456U,                          /* '<S111>/Shift Arithmetic' */
  4U,                                  /* '<S112>/Shift Arithmetic' */
  4U,                                  /* '<S113>/Shift Arithmetic' */
  536870912U,                          /* '<S114>/Shift Arithmetic' */
  536870912U,                          /* '<S115>/Shift Arithmetic' */
  1073741824U,                         /* '<S116>/Shift Arithmetic' */
  1073741824U,                         /* '<S117>/Shift Arithmetic' */
  2147483648U,                         /* '<S118>/Shift Arithmetic' */
  2147483648U,                         /* '<S119>/Shift Arithmetic' */
  8U,                                  /* '<S120>/Shift Arithmetic' */
  8U,                                  /* '<S121>/Shift Arithmetic' */
  16U,                                 /* '<S122>/Shift Arithmetic' */
  16U,                                 /* '<S123>/Shift Arithmetic' */
  32U,                                 /* '<S124>/Shift Arithmetic' */
  32U,                                 /* '<S125>/Shift Arithmetic' */
  64U,                                 /* '<S126>/Shift Arithmetic' */
  64U,                                 /* '<S127>/Shift Arithmetic' */
  128U,                                /* '<S128>/Shift Arithmetic' */
  128U,                                /* '<S129>/Shift Arithmetic' */
  256U,                                /* '<S130>/Shift Arithmetic' */
  256U                                 /* '<S131>/Shift Arithmetic' */
};

/* Block signals (default storage) */
B_MdXX_RspOutComm_T MdXX_RspOutComm_B;

/* Block states (default storage) */
DW_MdXX_RspOutComm_T MdXX_RspOutComm_DW;
static void MdXX_RspOutComm_MdRsp1_Init(uint8 *rty_ModeRspOut, SrcReqTp1
  *rty_MdSrcTpOut);
static void MdXX_RspOutComm_MdRsp1(boolean rtu_Mode_En, uint8 rtu_k_exitTm,
  MdRspLocal2 rtu_ModeRsp, boolean rtu_isArrivedTrgtPos, SrcReqTp1 rtu_MdSrcTpIn,
  uint8 *rty_ModeRspOut, SrcReqTp1 *rty_MdSrcTpOut, DW_MdRsp1_MdXX_RspOutComm_T *
  localDW);

/*
 * System initialize for atomic system:
 *    '<S3>/MdRsp1'
 *    '<S3>/MdRsp10'
 *    '<S3>/MdRsp11'
 *    '<S3>/MdRsp12'
 *    '<S3>/MdRsp13'
 *    '<S3>/MdRsp14'
 *    '<S3>/MdRsp15'
 *    '<S3>/MdRsp16'
 *    '<S3>/MdRsp17'
 *    '<S3>/MdRsp18'
 *    ...
 */
static void MdXX_RspOutComm_MdRsp1_Init(uint8 *rty_ModeRspOut, SrcReqTp1
  *rty_MdSrcTpOut)
{
  *rty_ModeRspOut = 0U;
  *rty_MdSrcTpOut = SrcReqTp_None;
}

/*
 * Output and update for atomic system:
 *    '<S3>/MdRsp1'
 *    '<S3>/MdRsp10'
 *    '<S3>/MdRsp11'
 *    '<S3>/MdRsp12'
 *    '<S3>/MdRsp13'
 *    '<S3>/MdRsp14'
 *    '<S3>/MdRsp15'
 *    '<S3>/MdRsp16'
 *    '<S3>/MdRsp17'
 *    '<S3>/MdRsp18'
 *    ...
 */
static void MdXX_RspOutComm_MdRsp1(boolean rtu_Mode_En, uint8 rtu_k_exitTm,
  MdRspLocal2 rtu_ModeRsp, boolean rtu_isArrivedTrgtPos, SrcReqTp1 rtu_MdSrcTpIn,
  uint8 *rty_ModeRspOut, SrcReqTp1 *rty_MdSrcTpOut, DW_MdRsp1_MdXX_RspOutComm_T *
  localDW)
{
  /* Chart: '<S3>/MdRsp1' */
  if (localDW->is_active_c2_RspLib == 0U) {
    localDW->is_active_c2_RspLib = 1U;
    localDW->is_c2_RspLib = MdXX_RspOutComm_IN_othermode;
    *rty_ModeRspOut = 0U;
    localDW->cntexit = 1U;
    *rty_MdSrcTpOut = SrcReqTp_None;
  } else {
    switch (localDW->is_c2_RspLib) {
     case MdXX_RspOutComm_IN_MidState:
      if (localDW->cntexit >= rtu_k_exitTm) {
        localDW->is_MidState = MdXX_RspOutC_IN_NO_ACTIVE_CHILD;
        localDW->is_c2_RspLib = MdXX_RspOutComm_IN_othermode;
        *rty_ModeRspOut = 0U;
        localDW->cntexit = 1U;
        *rty_MdSrcTpOut = SrcReqTp_None;
      } else {
        switch (localDW->is_MidState) {
         case MdXX_RspOutC_IN_NotSuccessfully:
          if (rtu_Mode_En) {
            localDW->is_MidState = MdXX_RspOutC_IN_NO_ACTIVE_CHILD;
            localDW->is_c2_RspLib = MdXX_RspOutCo_IN_cmpmodeOngoing;
            *rty_ModeRspOut = 4U;
            *rty_MdSrcTpOut = rtu_MdSrcTpIn;
          } else {
            localDW->cntexit++;
          }
          break;

         case MdXX_RspOutCo_IN_TartPosAlready:
          localDW->cntexit++;
          break;

         default:
          localDW->cntexit++;
          break;
        }
      }
      break;

     case MdXX_RspOutCo_IN_cmpmodeOngoing:
      if ((!rtu_Mode_En) && rtu_isArrivedTrgtPos) {
        localDW->is_c2_RspLib = MdXX_RspOutComm_IN_MidState;
        localDW->is_MidState = MdXX_RspOutCo_IN_exitingsuccess;
        *rty_ModeRspOut = MdRsp_RecallSuccessfully;
      } else {
        if (!rtu_Mode_En) {
          localDW->is_c2_RspLib = MdXX_RspOutComm_IN_MidState;
          localDW->is_MidState = MdXX_RspOutC_IN_NotSuccessfully;
          *rty_ModeRspOut = rtu_ModeRsp;
        }
      }
      break;

     default:
      if (rtu_Mode_En) {
        if (rtu_isArrivedTrgtPos) {
          localDW->is_c2_RspLib = MdXX_RspOutComm_IN_MidState;
          localDW->is_MidState = MdXX_RspOutCo_IN_TartPosAlready;
          *rty_ModeRspOut = MdRsp_TargetPositionAlready;
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

  /* End of Chart: '<S3>/MdRsp1' */
}

/* Model step function */
void MdXX_RspOutCommCalc_Cal()
{
  MdRspLocal2 tmpRead[32];
  SrcReqTp1 tmpRead_0[32];
  uint32 tmpRead_1;
  uint32 tmpRead_2;

  /* Inport: '<Root>/modestate32_Val' */
  Rte_Read_modestate32_Val(&tmpRead_2);

  /* Inport: '<Root>/MdXXIsTargetPosAlready_Val' */
  Rte_Read_MdXXIsTargetPosAlready_Val(&tmpRead_1);

  /* Inport: '<Root>/MdXX_SrcReqTpArray_Val' */
  Rte_Read_MdXX_SrcReqTpArray_Val(tmpRead_0);

  /* Inport: '<Root>/MdXX_QuitArray_Val' */
  Rte_Read_MdXX_QuitArray_Val(tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/MdXX_RspOutCommCalc_Cal_sys' */
  /* Chart: '<S3>/MdRsp1' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S68>/Constant4'
   *  Constant: '<S69>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S68>/Relational Operator'
   *  RelationalOperator: '<S69>/Relational Operator'
   *  S-Function (sfix_bitop): '<S68>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S69>/Bitwise Operator'
   *  Selector: '<S36>/Selector'
   *  Selector: '<S36>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic) >
    0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[0], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_b) > 0U, tmpRead_0[0],
    &MdXX_RspOutComm_B.ModeRspOut_cv, &MdXX_RspOutComm_B.MdSrcTpOut_j2,
    &MdXX_RspOutComm_DW.sf_MdRsp1);

  /* Chart: '<S3>/MdRsp10' incorporates:
   *  Constant: '<S3>/Constant9'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S70>/Constant4'
   *  Constant: '<S71>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S70>/Relational Operator'
   *  RelationalOperator: '<S71>/Relational Operator'
   *  S-Function (sfix_bitop): '<S70>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S71>/Bitwise Operator'
   *  Selector: '<S37>/Selector'
   *  Selector: '<S37>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_c) >
    0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[9], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_l) > 0U, tmpRead_0[9],
    &MdXX_RspOutComm_B.ModeRspOut_kk, &MdXX_RspOutComm_B.MdSrcTpOut_ao,
    &MdXX_RspOutComm_DW.sf_MdRsp10);

  /* Chart: '<S3>/MdRsp11' incorporates:
   *  Constant: '<S3>/Constant10'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S72>/Constant4'
   *  Constant: '<S73>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S72>/Relational Operator'
   *  RelationalOperator: '<S73>/Relational Operator'
   *  S-Function (sfix_bitop): '<S72>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S73>/Bitwise Operator'
   *  Selector: '<S38>/Selector'
   *  Selector: '<S38>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_m) >
    0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[10], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_lg) > 0U, tmpRead_0[10],
    &MdXX_RspOutComm_B.ModeRspOut_m2, &MdXX_RspOutComm_B.MdSrcTpOut_o,
    &MdXX_RspOutComm_DW.sf_MdRsp11);

  /* Chart: '<S3>/MdRsp12' incorporates:
   *  Constant: '<S3>/Constant11'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S74>/Constant4'
   *  Constant: '<S75>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S74>/Relational Operator'
   *  RelationalOperator: '<S75>/Relational Operator'
   *  S-Function (sfix_bitop): '<S74>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S75>/Bitwise Operator'
   *  Selector: '<S39>/Selector'
   *  Selector: '<S39>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_i) >
    0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[11], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_ig) > 0U, tmpRead_0[11],
    &MdXX_RspOutComm_B.ModeRspOut_dp, &MdXX_RspOutComm_B.MdSrcTpOut_bj,
    &MdXX_RspOutComm_DW.sf_MdRsp12);

  /* Chart: '<S3>/MdRsp13' incorporates:
   *  Constant: '<S3>/Constant12'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S76>/Constant4'
   *  Constant: '<S77>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S76>/Relational Operator'
   *  RelationalOperator: '<S77>/Relational Operator'
   *  S-Function (sfix_bitop): '<S76>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S77>/Bitwise Operator'
   *  Selector: '<S40>/Selector'
   *  Selector: '<S40>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_f) >
    0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[12], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_g) > 0U, tmpRead_0[12],
    &MdXX_RspOutComm_B.ModeRspOut_gx, &MdXX_RspOutComm_B.MdSrcTpOut_cn,
    &MdXX_RspOutComm_DW.sf_MdRsp13);

  /* Chart: '<S3>/MdRsp14' incorporates:
   *  Constant: '<S3>/Constant13'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S78>/Constant4'
   *  Constant: '<S79>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S78>/Relational Operator'
   *  RelationalOperator: '<S79>/Relational Operator'
   *  S-Function (sfix_bitop): '<S78>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S79>/Bitwise Operator'
   *  Selector: '<S41>/Selector'
   *  Selector: '<S41>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_e) >
    0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[13], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_iv) > 0U, tmpRead_0[13],
    &MdXX_RspOutComm_B.ModeRspOut_kt, &MdXX_RspOutComm_B.MdSrcTpOut_i,
    &MdXX_RspOutComm_DW.sf_MdRsp14);

  /* Chart: '<S3>/MdRsp15' incorporates:
   *  Constant: '<S3>/Constant14'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S80>/Constant4'
   *  Constant: '<S81>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S80>/Relational Operator'
   *  RelationalOperator: '<S81>/Relational Operator'
   *  S-Function (sfix_bitop): '<S80>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S81>/Bitwise Operator'
   *  Selector: '<S42>/Selector'
   *  Selector: '<S42>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_f0)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[14], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_bg) > 0U, tmpRead_0[14],
    &MdXX_RspOutComm_B.ModeRspOut_o, &MdXX_RspOutComm_B.MdSrcTpOut_fu,
    &MdXX_RspOutComm_DW.sf_MdRsp15);

  /* Chart: '<S3>/MdRsp16' incorporates:
   *  Constant: '<S3>/Constant15'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S82>/Constant4'
   *  Constant: '<S83>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S82>/Relational Operator'
   *  RelationalOperator: '<S83>/Relational Operator'
   *  S-Function (sfix_bitop): '<S82>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S83>/Bitwise Operator'
   *  Selector: '<S43>/Selector'
   *  Selector: '<S43>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_a) >
    0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[15], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_g4) > 0U, tmpRead_0[15],
    &MdXX_RspOutComm_B.ModeRspOut_n, &MdXX_RspOutComm_B.MdSrcTpOut_k,
    &MdXX_RspOutComm_DW.sf_MdRsp16);

  /* Chart: '<S3>/MdRsp17' incorporates:
   *  Constant: '<S3>/Constant16'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S84>/Constant4'
   *  Constant: '<S85>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S84>/Relational Operator'
   *  RelationalOperator: '<S85>/Relational Operator'
   *  S-Function (sfix_bitop): '<S84>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S85>/Bitwise Operator'
   *  Selector: '<S44>/Selector'
   *  Selector: '<S44>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_ay)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[16], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_igb) > 0U, tmpRead_0[16],
    &MdXX_RspOutComm_B.ModeRspOut_mm, &MdXX_RspOutComm_B.MdSrcTpOut_c,
    &MdXX_RspOutComm_DW.sf_MdRsp17);

  /* Chart: '<S3>/MdRsp18' incorporates:
   *  Constant: '<S3>/Constant17'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S86>/Constant4'
   *  Constant: '<S87>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S86>/Relational Operator'
   *  RelationalOperator: '<S87>/Relational Operator'
   *  S-Function (sfix_bitop): '<S86>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S87>/Bitwise Operator'
   *  Selector: '<S45>/Selector'
   *  Selector: '<S45>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_bb)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[17], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_ax) > 0U, tmpRead_0[17],
    &MdXX_RspOutComm_B.ModeRspOut_cq, &MdXX_RspOutComm_B.MdSrcTpOut_mu,
    &MdXX_RspOutComm_DW.sf_MdRsp18);

  /* Chart: '<S3>/MdRsp19' incorporates:
   *  Constant: '<S3>/Constant18'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S88>/Constant4'
   *  Constant: '<S89>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S88>/Relational Operator'
   *  RelationalOperator: '<S89>/Relational Operator'
   *  S-Function (sfix_bitop): '<S88>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S89>/Bitwise Operator'
   *  Selector: '<S46>/Selector'
   *  Selector: '<S46>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_l0)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[18], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_cl) > 0U, tmpRead_0[18],
    &MdXX_RspOutComm_B.ModeRspOut_jy, &MdXX_RspOutComm_B.MdSrcTpOut_j3,
    &MdXX_RspOutComm_DW.sf_MdRsp19);

  /* Chart: '<S3>/MdRsp2' incorporates:
   *  Constant: '<S3>/Constant1'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S90>/Constant4'
   *  Constant: '<S91>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S90>/Relational Operator'
   *  RelationalOperator: '<S91>/Relational Operator'
   *  S-Function (sfix_bitop): '<S90>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S91>/Bitwise Operator'
   *  Selector: '<S47>/Selector'
   *  Selector: '<S47>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_ap)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[1], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_n) > 0U, tmpRead_0[1],
    &MdXX_RspOutComm_B.ModeRspOut_gq, &MdXX_RspOutComm_B.MdSrcTpOut_ew,
    &MdXX_RspOutComm_DW.sf_MdRsp2);

  /* Chart: '<S3>/MdRsp20' incorporates:
   *  Constant: '<S3>/Constant19'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S92>/Constant4'
   *  Constant: '<S93>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S92>/Relational Operator'
   *  RelationalOperator: '<S93>/Relational Operator'
   *  S-Function (sfix_bitop): '<S92>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S93>/Bitwise Operator'
   *  Selector: '<S48>/Selector'
   *  Selector: '<S48>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_ns)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[19], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_ip) > 0U, tmpRead_0[19],
    &MdXX_RspOutComm_B.ModeRspOut_er, &MdXX_RspOutComm_B.MdSrcTpOut_lk,
    &MdXX_RspOutComm_DW.sf_MdRsp20);

  /* Chart: '<S3>/MdRsp21' incorporates:
   *  Constant: '<S3>/Constant20'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S94>/Constant4'
   *  Constant: '<S95>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S94>/Relational Operator'
   *  RelationalOperator: '<S95>/Relational Operator'
   *  S-Function (sfix_bitop): '<S94>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S95>/Bitwise Operator'
   *  Selector: '<S49>/Selector'
   *  Selector: '<S49>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_mi)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[20], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_d) > 0U, tmpRead_0[20],
    &MdXX_RspOutComm_B.ModeRspOut_hc, &MdXX_RspOutComm_B.MdSrcTpOut_d,
    &MdXX_RspOutComm_DW.sf_MdRsp21);

  /* Chart: '<S3>/MdRsp22' incorporates:
   *  Constant: '<S3>/Constant21'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S96>/Constant4'
   *  Constant: '<S97>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S96>/Relational Operator'
   *  RelationalOperator: '<S97>/Relational Operator'
   *  S-Function (sfix_bitop): '<S96>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S97>/Bitwise Operator'
   *  Selector: '<S50>/Selector'
   *  Selector: '<S50>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_k) >
    0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[21], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_o) > 0U, tmpRead_0[21],
    &MdXX_RspOutComm_B.ModeRspOut_k, &MdXX_RspOutComm_B.MdSrcTpOut_jp,
    &MdXX_RspOutComm_DW.sf_MdRsp22);

  /* Chart: '<S3>/MdRsp23' incorporates:
   *  Constant: '<S3>/Constant22'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Constant: '<S98>/Constant4'
   *  Constant: '<S99>/Constant4'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S98>/Relational Operator'
   *  RelationalOperator: '<S99>/Relational Operator'
   *  S-Function (sfix_bitop): '<S98>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S99>/Bitwise Operator'
   *  Selector: '<S51>/Selector'
   *  Selector: '<S51>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_gx)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[22], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_k3) > 0U, tmpRead_0[22],
    &MdXX_RspOutComm_B.ModeRspOut_hd, &MdXX_RspOutComm_B.MdSrcTpOut_m,
    &MdXX_RspOutComm_DW.sf_MdRsp23);

  /* Chart: '<S3>/MdRsp24' incorporates:
   *  Constant: '<S100>/Constant4'
   *  Constant: '<S101>/Constant4'
   *  Constant: '<S3>/Constant23'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S100>/Relational Operator'
   *  RelationalOperator: '<S101>/Relational Operator'
   *  S-Function (sfix_bitop): '<S100>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S101>/Bitwise Operator'
   *  Selector: '<S52>/Selector'
   *  Selector: '<S52>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_ms)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[23], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_ar) > 0U, tmpRead_0[23],
    &MdXX_RspOutComm_B.ModeRspOut_b, &MdXX_RspOutComm_B.MdSrcTpOut_fe,
    &MdXX_RspOutComm_DW.sf_MdRsp24);

  /* Chart: '<S3>/MdRsp25' incorporates:
   *  Constant: '<S102>/Constant4'
   *  Constant: '<S103>/Constant4'
   *  Constant: '<S3>/Constant24'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S102>/Relational Operator'
   *  RelationalOperator: '<S103>/Relational Operator'
   *  S-Function (sfix_bitop): '<S102>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S103>/Bitwise Operator'
   *  Selector: '<S53>/Selector'
   *  Selector: '<S53>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_ld)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[24], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_j) > 0U, tmpRead_0[24],
    &MdXX_RspOutComm_B.ModeRspOut_g, &MdXX_RspOutComm_B.MdSrcTpOut_e,
    &MdXX_RspOutComm_DW.sf_MdRsp25);

  /* Chart: '<S3>/MdRsp26' incorporates:
   *  Constant: '<S104>/Constant4'
   *  Constant: '<S105>/Constant4'
   *  Constant: '<S3>/Constant25'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S104>/Relational Operator'
   *  RelationalOperator: '<S105>/Relational Operator'
   *  S-Function (sfix_bitop): '<S104>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S105>/Bitwise Operator'
   *  Selector: '<S54>/Selector'
   *  Selector: '<S54>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_jg)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[25], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_eo) > 0U, tmpRead_0[25],
    &MdXX_RspOutComm_B.ModeRspOut_h, &MdXX_RspOutComm_B.MdSrcTpOut_gg,
    &MdXX_RspOutComm_DW.sf_MdRsp26);

  /* Chart: '<S3>/MdRsp27' incorporates:
   *  Constant: '<S106>/Constant4'
   *  Constant: '<S107>/Constant4'
   *  Constant: '<S3>/Constant26'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S106>/Relational Operator'
   *  RelationalOperator: '<S107>/Relational Operator'
   *  S-Function (sfix_bitop): '<S106>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S107>/Bitwise Operator'
   *  Selector: '<S55>/Selector'
   *  Selector: '<S55>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_bd)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[26], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_jn) > 0U, tmpRead_0[26],
    &MdXX_RspOutComm_B.ModeRspOut_cr, &MdXX_RspOutComm_B.MdSrcTpOut_js,
    &MdXX_RspOutComm_DW.sf_MdRsp27);

  /* Chart: '<S3>/MdRsp28' incorporates:
   *  Constant: '<S108>/Constant4'
   *  Constant: '<S109>/Constant4'
   *  Constant: '<S3>/Constant27'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S108>/Relational Operator'
   *  RelationalOperator: '<S109>/Relational Operator'
   *  S-Function (sfix_bitop): '<S108>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S109>/Bitwise Operator'
   *  Selector: '<S56>/Selector'
   *  Selector: '<S56>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_g3)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[27], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_at) > 0U, tmpRead_0[27],
    &MdXX_RspOutComm_B.ModeRspOut_l, &MdXX_RspOutComm_B.MdSrcTpOut_p,
    &MdXX_RspOutComm_DW.sf_MdRsp28);

  /* Chart: '<S3>/MdRsp29' incorporates:
   *  Constant: '<S110>/Constant4'
   *  Constant: '<S111>/Constant4'
   *  Constant: '<S3>/Constant28'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S110>/Relational Operator'
   *  RelationalOperator: '<S111>/Relational Operator'
   *  S-Function (sfix_bitop): '<S110>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S111>/Bitwise Operator'
   *  Selector: '<S57>/Selector'
   *  Selector: '<S57>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_na)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[28], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_ie) > 0U, tmpRead_0[28],
    &MdXX_RspOutComm_B.ModeRspOut_pu, &MdXX_RspOutComm_B.MdSrcTpOut_gr,
    &MdXX_RspOutComm_DW.sf_MdRsp29);

  /* Chart: '<S3>/MdRsp3' incorporates:
   *  Constant: '<S112>/Constant4'
   *  Constant: '<S113>/Constant4'
   *  Constant: '<S3>/Constant2'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S112>/Relational Operator'
   *  RelationalOperator: '<S113>/Relational Operator'
   *  S-Function (sfix_bitop): '<S112>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S113>/Bitwise Operator'
   *  Selector: '<S58>/Selector'
   *  Selector: '<S58>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_l2)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[2], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_a0) > 0U, tmpRead_0[2],
    &MdXX_RspOutComm_B.ModeRspOut_pj, &MdXX_RspOutComm_B.MdSrcTpOut_g,
    &MdXX_RspOutComm_DW.sf_MdRsp3);

  /* Chart: '<S3>/MdRsp30' incorporates:
   *  Constant: '<S114>/Constant4'
   *  Constant: '<S115>/Constant4'
   *  Constant: '<S3>/Constant29'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S114>/Relational Operator'
   *  RelationalOperator: '<S115>/Relational Operator'
   *  S-Function (sfix_bitop): '<S114>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S115>/Bitwise Operator'
   *  Selector: '<S59>/Selector'
   *  Selector: '<S59>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_bu)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[29], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_jp) > 0U, tmpRead_0[29],
    &MdXX_RspOutComm_B.ModeRspOut_du, &MdXX_RspOutComm_B.MdSrcTpOut_bg,
    &MdXX_RspOutComm_DW.sf_MdRsp30);

  /* Chart: '<S3>/MdRsp31' incorporates:
   *  Constant: '<S116>/Constant4'
   *  Constant: '<S117>/Constant4'
   *  Constant: '<S3>/Constant30'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S116>/Relational Operator'
   *  RelationalOperator: '<S117>/Relational Operator'
   *  S-Function (sfix_bitop): '<S116>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S117>/Bitwise Operator'
   *  Selector: '<S60>/Selector'
   *  Selector: '<S60>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_ex)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[30], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_et) > 0U, tmpRead_0[30],
    &MdXX_RspOutComm_B.ModeRspOut_c, &MdXX_RspOutComm_B.MdSrcTpOut_jn,
    &MdXX_RspOutComm_DW.sf_MdRsp31);

  /* Chart: '<S3>/MdRsp32' incorporates:
   *  Constant: '<S118>/Constant4'
   *  Constant: '<S119>/Constant4'
   *  Constant: '<S3>/Constant31'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S118>/Relational Operator'
   *  RelationalOperator: '<S119>/Relational Operator'
   *  S-Function (sfix_bitop): '<S118>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S119>/Bitwise Operator'
   *  Selector: '<S61>/Selector'
   *  Selector: '<S61>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_h) >
    0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[31], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_fs) > 0U, tmpRead_0[31],
    &MdXX_RspOutComm_B.ModeRspOut_e, &MdXX_RspOutComm_B.MdSrcTpOut_b,
    &MdXX_RspOutComm_DW.sf_MdRsp32);

  /* Chart: '<S3>/MdRsp4' incorporates:
   *  Constant: '<S120>/Constant4'
   *  Constant: '<S121>/Constant4'
   *  Constant: '<S3>/Constant3'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S120>/Relational Operator'
   *  RelationalOperator: '<S121>/Relational Operator'
   *  S-Function (sfix_bitop): '<S120>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S121>/Bitwise Operator'
   *  Selector: '<S62>/Selector'
   *  Selector: '<S62>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_h1)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[3], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_kq) > 0U, tmpRead_0[3],
    &MdXX_RspOutComm_B.ModeRspOut_d, &MdXX_RspOutComm_B.MdSrcTpOut_j,
    &MdXX_RspOutComm_DW.sf_MdRsp4);

  /* Chart: '<S3>/MdRsp5' incorporates:
   *  Constant: '<S122>/Constant4'
   *  Constant: '<S123>/Constant4'
   *  Constant: '<S3>/Constant4'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S122>/Relational Operator'
   *  RelationalOperator: '<S123>/Relational Operator'
   *  S-Function (sfix_bitop): '<S122>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S123>/Bitwise Operator'
   *  Selector: '<S63>/Selector'
   *  Selector: '<S63>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_cq)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[4], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_mf) > 0U, tmpRead_0[4],
    &MdXX_RspOutComm_B.ModeRspOut_a, &MdXX_RspOutComm_B.MdSrcTpOut_l,
    &MdXX_RspOutComm_DW.sf_MdRsp5);

  /* Chart: '<S3>/MdRsp6' incorporates:
   *  Constant: '<S124>/Constant4'
   *  Constant: '<S125>/Constant4'
   *  Constant: '<S3>/Constant5'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S124>/Relational Operator'
   *  RelationalOperator: '<S125>/Relational Operator'
   *  S-Function (sfix_bitop): '<S124>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S125>/Bitwise Operator'
   *  Selector: '<S64>/Selector'
   *  Selector: '<S64>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_p) >
    0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[5], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_kb) > 0U, tmpRead_0[5],
    &MdXX_RspOutComm_B.ModeRspOut_m, &MdXX_RspOutComm_B.MdSrcTpOut_a,
    &MdXX_RspOutComm_DW.sf_MdRsp6);

  /* Chart: '<S3>/MdRsp7' incorporates:
   *  Constant: '<S126>/Constant4'
   *  Constant: '<S127>/Constant4'
   *  Constant: '<S3>/Constant6'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S126>/Relational Operator'
   *  RelationalOperator: '<S127>/Relational Operator'
   *  S-Function (sfix_bitop): '<S126>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S127>/Bitwise Operator'
   *  Selector: '<S65>/Selector'
   *  Selector: '<S65>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_bp)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[6], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_dv) > 0U, tmpRead_0[6],
    &MdXX_RspOutComm_B.ModeRspOut_p, &MdXX_RspOutComm_B.MdSrcTpOut_f,
    &MdXX_RspOutComm_DW.sf_MdRsp7);

  /* Chart: '<S3>/MdRsp8' incorporates:
   *  Constant: '<S128>/Constant4'
   *  Constant: '<S129>/Constant4'
   *  Constant: '<S3>/Constant7'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S128>/Relational Operator'
   *  RelationalOperator: '<S129>/Relational Operator'
   *  S-Function (sfix_bitop): '<S128>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S129>/Bitwise Operator'
   *  Selector: '<S66>/Selector'
   *  Selector: '<S66>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_mo)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[7], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_dh) > 0U, tmpRead_0[7],
    &MdXX_RspOutComm_B.ModeRspOut_j, &MdXX_RspOutComm_B.MdSrcTpOut_n,
    &MdXX_RspOutComm_DW.sf_MdRsp8);

  /* Chart: '<S3>/MdRsp9' incorporates:
   *  Constant: '<S130>/Constant4'
   *  Constant: '<S131>/Constant4'
   *  Constant: '<S3>/Constant8'
   *  Constant: '<S3>/PA_KeSMSuRspStatHldTm_Val'
   *  Inport: '<Root>/MdXX_QuitArray_Val'
   *  Inport: '<Root>/MdXX_SrcReqTpArray_Val'
   *  RelationalOperator: '<S130>/Relational Operator'
   *  RelationalOperator: '<S131>/Relational Operator'
   *  S-Function (sfix_bitop): '<S130>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S131>/Bitwise Operator'
   *  Selector: '<S67>/Selector'
   *  Selector: '<S67>/Selector1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXXIsTargetPosAlready_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_QuitArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTpArray_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  MdXX_RspOutComm_MdRsp1((tmpRead_2 & MdXX_RspOutComm_ConstB.ShiftArithmetic_ej)
    > 0U, Rte_Prm_KeSMSuRspStatHldTm_Val(), tmpRead[8], (tmpRead_1 &
    MdXX_RspOutComm_ConstB.ShiftArithmetic_ft) > 0U, tmpRead_0[8],
    &MdXX_RspOutComm_B.ModeRspOut, &MdXX_RspOutComm_B.MdSrcTpOut,
    &MdXX_RspOutComm_DW.sf_MdRsp9);

  /* Outport: '<Root>/MdXX_RspOutComm_Md1_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md1_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md1_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_cv);

  /* Outport: '<Root>/MdXX_RspOutComm_Md10_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md10_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md10_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_kk);

  /* Outport: '<Root>/MdXX_RspOutComm_Md11_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md11_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md11_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_m2);

  /* Outport: '<Root>/MdXX_RspOutComm_Md12_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md12_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md12_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_dp);

  /* Outport: '<Root>/MdXX_RspOutComm_Md13_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md13_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md13_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_gx);

  /* Outport: '<Root>/MdXX_RspOutComm_Md14_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md14_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md14_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_kt);

  /* Outport: '<Root>/MdXX_RspOutComm_Md15_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md15_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md15_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_o);

  /* Outport: '<Root>/MdXX_RspOutComm_Md16_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md16_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md16_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_n);

  /* Outport: '<Root>/MdXX_RspOutComm_Md17_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md17_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md17_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_mm);

  /* Outport: '<Root>/MdXX_RspOutComm_Md18_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md18_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md18_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_cq);

  /* Outport: '<Root>/MdXX_RspOutComm_Md19_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md19_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md19_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_jy);

  /* Outport: '<Root>/MdXX_RspOutComm_Md2_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md2_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md2_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_gq);

  /* Outport: '<Root>/MdXX_RspOutComm_Md20_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md20_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md20_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_er);

  /* Outport: '<Root>/MdXX_RspOutComm_Md21_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md21_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md21_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_hc);

  /* Outport: '<Root>/MdXX_RspOutComm_Md22_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md22_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md22_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_k);

  /* Outport: '<Root>/MdXX_RspOutComm_Md23_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md23_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md23_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_hd);

  /* Outport: '<Root>/MdXX_RspOutComm_Md24_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md24_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md24_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_b);

  /* Outport: '<Root>/MdXX_RspOutComm_Md25_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md25_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md25_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_g);

  /* Outport: '<Root>/MdXX_RspOutComm_Md26_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md26_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md26_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_h);

  /* Outport: '<Root>/MdXX_RspOutComm_Md27_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md27_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md27_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_cr);

  /* Outport: '<Root>/MdXX_RspOutComm_Md28_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md28_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md28_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_l);

  /* Outport: '<Root>/MdXX_RspOutComm_Md29_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md29_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md29_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_pu);

  /* Outport: '<Root>/MdXX_RspOutComm_Md3_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md3_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md3_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_pj);

  /* Outport: '<Root>/MdXX_RspOutComm_Md30_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md30_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md30_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_du);

  /* Outport: '<Root>/MdXX_RspOutComm_Md31_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md31_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md31_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_c);

  /* Outport: '<Root>/MdXX_RspOutComm_Md32_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md32_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md32_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_e);

  /* Outport: '<Root>/MdXX_RspOutComm_Md4_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md4_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md4_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_d);

  /* Outport: '<Root>/MdXX_RspOutComm_Md5_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md5_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md5_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_a);

  /* Outport: '<Root>/MdXX_RspOutComm_Md6_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md6_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md6_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_m);

  /* Outport: '<Root>/MdXX_RspOutComm_Md7_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md7_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md7_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_p);

  /* Outport: '<Root>/MdXX_RspOutComm_Md8_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md8_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md8_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_j);

  /* Outport: '<Root>/MdXX_RspOutComm_Md9_RspOutComm' incorporates:
   *  Outport: '<S1>/MdXX_RspOutComm_Md9_RspOutComm_write'
   */
  (void) Rte_Write_MdXX_RspOutComm_Md9_RspOutComm(MdXX_RspOutComm_B.ModeRspOut);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md1_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md1_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md1_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_j2);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md10_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md10_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md10_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_ao);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md11_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md11_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md11_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_o);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md12_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md12_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md12_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_bj);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md13_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md13_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md13_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_cn);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md14_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md14_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md14_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_i);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md15_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md15_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md15_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_fu);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md16_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md16_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md16_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_k);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md17_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md17_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md17_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_c);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md18_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md18_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md18_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_mu);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md19_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md19_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md19_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_j3);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md2_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md2_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md2_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_ew);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md20_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md20_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md20_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_lk);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md21_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md21_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md21_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_d);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md22_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md22_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md22_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_jp);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md23_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md23_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md23_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_m);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md24_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md24_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md24_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_fe);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md25_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md25_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md25_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_e);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md26_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md26_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md26_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_gg);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md27_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md27_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md27_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_js);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md28_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md28_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md28_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_p);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md29_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md29_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md29_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_gr);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md3_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md3_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md3_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_g);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md30_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md30_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md30_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_bg);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md31_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md31_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md31_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_jn);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md32_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md32_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md32_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_b);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md4_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md4_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md4_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_j);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md5_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md5_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md5_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_l);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md6_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md6_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md6_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_a);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md7_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md7_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md7_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_f);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md8_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md8_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md8_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_n);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md9_SrcTp' incorporates:
   *  Outport: '<S1>/MdXX_SrcReqTpOutComm_Md9_SrcTp_write'
   */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md9_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut);

  /* End of Outputs for SubSystem: '<Root>/MdXX_RspOutCommCalc_Cal_sys' */

  /* Outport: '<Root>/MdXX_RspOutComm_Md1_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md1_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_cv);

  /* Outport: '<Root>/MdXX_RspOutComm_Md10_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md10_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_kk);

  /* Outport: '<Root>/MdXX_RspOutComm_Md11_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md11_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_m2);

  /* Outport: '<Root>/MdXX_RspOutComm_Md12_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md12_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_dp);

  /* Outport: '<Root>/MdXX_RspOutComm_Md13_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md13_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_gx);

  /* Outport: '<Root>/MdXX_RspOutComm_Md14_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md14_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_kt);

  /* Outport: '<Root>/MdXX_RspOutComm_Md15_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md15_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_o);

  /* Outport: '<Root>/MdXX_RspOutComm_Md16_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md16_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_n);

  /* Outport: '<Root>/MdXX_RspOutComm_Md17_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md17_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_mm);

  /* Outport: '<Root>/MdXX_RspOutComm_Md18_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md18_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_cq);

  /* Outport: '<Root>/MdXX_RspOutComm_Md19_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md19_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_jy);

  /* Outport: '<Root>/MdXX_RspOutComm_Md2_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md2_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_gq);

  /* Outport: '<Root>/MdXX_RspOutComm_Md20_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md20_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_er);

  /* Outport: '<Root>/MdXX_RspOutComm_Md21_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md21_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_hc);

  /* Outport: '<Root>/MdXX_RspOutComm_Md22_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md22_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_k);

  /* Outport: '<Root>/MdXX_RspOutComm_Md23_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md23_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_hd);

  /* Outport: '<Root>/MdXX_RspOutComm_Md24_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md24_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_b);

  /* Outport: '<Root>/MdXX_RspOutComm_Md25_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md25_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_g);

  /* Outport: '<Root>/MdXX_RspOutComm_Md26_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md26_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_h);

  /* Outport: '<Root>/MdXX_RspOutComm_Md27_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md27_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_cr);

  /* Outport: '<Root>/MdXX_RspOutComm_Md28_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md28_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_l);

  /* Outport: '<Root>/MdXX_RspOutComm_Md29_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md29_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_pu);

  /* Outport: '<Root>/MdXX_RspOutComm_Md3_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md3_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_pj);

  /* Outport: '<Root>/MdXX_RspOutComm_Md30_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md30_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_du);

  /* Outport: '<Root>/MdXX_RspOutComm_Md31_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md31_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_c);

  /* Outport: '<Root>/MdXX_RspOutComm_Md32_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md32_RspOutComm
    (MdXX_RspOutComm_B.ModeRspOut_e);

  /* Outport: '<Root>/MdXX_RspOutComm_Md4_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md4_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_d);

  /* Outport: '<Root>/MdXX_RspOutComm_Md5_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md5_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_a);

  /* Outport: '<Root>/MdXX_RspOutComm_Md6_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md6_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_m);

  /* Outport: '<Root>/MdXX_RspOutComm_Md7_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md7_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_p);

  /* Outport: '<Root>/MdXX_RspOutComm_Md8_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md8_RspOutComm(MdXX_RspOutComm_B.ModeRspOut_j);

  /* Outport: '<Root>/MdXX_RspOutComm_Md9_RspOutComm' */
  (void) Rte_Write_MdXX_RspOutComm_Md9_RspOutComm(MdXX_RspOutComm_B.ModeRspOut);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md1_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md1_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_j2);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md10_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md10_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_ao);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md11_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md11_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_o);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md12_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md12_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_bj);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md13_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md13_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_cn);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md14_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md14_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_i);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md15_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md15_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_fu);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md16_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md16_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_k);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md17_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md17_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_c);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md18_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md18_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_mu);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md19_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md19_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_j3);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md2_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md2_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_ew);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md20_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md20_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_lk);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md21_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md21_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_d);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md22_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md22_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_jp);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md23_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md23_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_m);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md24_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md24_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_fe);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md25_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md25_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_e);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md26_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md26_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_gg);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md27_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md27_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_js);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md28_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md28_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_p);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md29_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md29_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_gr);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md3_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md3_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_g);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md30_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md30_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_bg);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md31_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md31_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_jn);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md32_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md32_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_b);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md4_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md4_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_j);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md5_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md5_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_l);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md6_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md6_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_a);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md7_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md7_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_f);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md8_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md8_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_n);

  /* Outport: '<Root>/MdXX_SrcReqTpOutComm_Md9_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md9_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut);
}

/* Model initialize function */
void MdXX_RspOutComm_Init(void)
{
  /* SystemInitialize for S-Function (sfun_private_function_caller): '<Root>/sfcn_inserted_server' incorporates:
   *  SubSystem: '<Root>/MdXX_RspOutCommCalc_Cal_sys'
   */

  /* SystemInitialize for Chart: '<S3>/MdRsp1' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_cv,
    &MdXX_RspOutComm_B.MdSrcTpOut_j2);

  /* SystemInitialize for Chart: '<S3>/MdRsp10' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_kk,
    &MdXX_RspOutComm_B.MdSrcTpOut_ao);

  /* SystemInitialize for Chart: '<S3>/MdRsp11' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_m2,
    &MdXX_RspOutComm_B.MdSrcTpOut_o);

  /* SystemInitialize for Chart: '<S3>/MdRsp12' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_dp,
    &MdXX_RspOutComm_B.MdSrcTpOut_bj);

  /* SystemInitialize for Chart: '<S3>/MdRsp13' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_gx,
    &MdXX_RspOutComm_B.MdSrcTpOut_cn);

  /* SystemInitialize for Chart: '<S3>/MdRsp14' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_kt,
    &MdXX_RspOutComm_B.MdSrcTpOut_i);

  /* SystemInitialize for Chart: '<S3>/MdRsp15' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_o,
    &MdXX_RspOutComm_B.MdSrcTpOut_fu);

  /* SystemInitialize for Chart: '<S3>/MdRsp16' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_n,
    &MdXX_RspOutComm_B.MdSrcTpOut_k);

  /* SystemInitialize for Chart: '<S3>/MdRsp17' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_mm,
    &MdXX_RspOutComm_B.MdSrcTpOut_c);

  /* SystemInitialize for Chart: '<S3>/MdRsp18' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_cq,
    &MdXX_RspOutComm_B.MdSrcTpOut_mu);

  /* SystemInitialize for Chart: '<S3>/MdRsp19' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_jy,
    &MdXX_RspOutComm_B.MdSrcTpOut_j3);

  /* SystemInitialize for Chart: '<S3>/MdRsp2' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_gq,
    &MdXX_RspOutComm_B.MdSrcTpOut_ew);

  /* SystemInitialize for Chart: '<S3>/MdRsp20' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_er,
    &MdXX_RspOutComm_B.MdSrcTpOut_lk);

  /* SystemInitialize for Chart: '<S3>/MdRsp21' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_hc,
    &MdXX_RspOutComm_B.MdSrcTpOut_d);

  /* SystemInitialize for Chart: '<S3>/MdRsp22' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_k,
    &MdXX_RspOutComm_B.MdSrcTpOut_jp);

  /* SystemInitialize for Chart: '<S3>/MdRsp23' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_hd,
    &MdXX_RspOutComm_B.MdSrcTpOut_m);

  /* SystemInitialize for Chart: '<S3>/MdRsp24' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_b,
    &MdXX_RspOutComm_B.MdSrcTpOut_fe);

  /* SystemInitialize for Chart: '<S3>/MdRsp25' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_g,
    &MdXX_RspOutComm_B.MdSrcTpOut_e);

  /* SystemInitialize for Chart: '<S3>/MdRsp26' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_h,
    &MdXX_RspOutComm_B.MdSrcTpOut_gg);

  /* SystemInitialize for Chart: '<S3>/MdRsp27' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_cr,
    &MdXX_RspOutComm_B.MdSrcTpOut_js);

  /* SystemInitialize for Chart: '<S3>/MdRsp28' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_l,
    &MdXX_RspOutComm_B.MdSrcTpOut_p);

  /* SystemInitialize for Chart: '<S3>/MdRsp29' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_pu,
    &MdXX_RspOutComm_B.MdSrcTpOut_gr);

  /* SystemInitialize for Chart: '<S3>/MdRsp3' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_pj,
    &MdXX_RspOutComm_B.MdSrcTpOut_g);

  /* SystemInitialize for Chart: '<S3>/MdRsp30' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_du,
    &MdXX_RspOutComm_B.MdSrcTpOut_bg);

  /* SystemInitialize for Chart: '<S3>/MdRsp31' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_c,
    &MdXX_RspOutComm_B.MdSrcTpOut_jn);

  /* SystemInitialize for Chart: '<S3>/MdRsp32' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_e,
    &MdXX_RspOutComm_B.MdSrcTpOut_b);

  /* SystemInitialize for Chart: '<S3>/MdRsp4' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_d,
    &MdXX_RspOutComm_B.MdSrcTpOut_j);

  /* SystemInitialize for Chart: '<S3>/MdRsp5' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_a,
    &MdXX_RspOutComm_B.MdSrcTpOut_l);

  /* SystemInitialize for Chart: '<S3>/MdRsp6' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_m,
    &MdXX_RspOutComm_B.MdSrcTpOut_a);

  /* SystemInitialize for Chart: '<S3>/MdRsp7' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_p,
    &MdXX_RspOutComm_B.MdSrcTpOut_f);

  /* SystemInitialize for Chart: '<S3>/MdRsp8' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut_j,
    &MdXX_RspOutComm_B.MdSrcTpOut_n);

  /* SystemInitialize for Chart: '<S3>/MdRsp9' */
  MdXX_RspOutComm_MdRsp1_Init(&MdXX_RspOutComm_B.ModeRspOut,
    &MdXX_RspOutComm_B.MdSrcTpOut);

  /* End of SystemInitialize for S-Function (sfun_private_function_caller): '<Root>/sfcn_inserted_server' */

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md1_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md1_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_j2);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md10_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md10_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_ao);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md11_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md11_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_o);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md12_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md12_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_bj);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md13_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md13_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_cn);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md14_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md14_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_i);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md15_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md15_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_fu);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md16_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md16_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_k);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md17_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md17_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_c);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md18_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md18_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_mu);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md19_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md19_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_j3);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md2_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md2_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_ew);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md20_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md20_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_lk);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md21_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md21_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_d);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md22_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md22_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_jp);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md23_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md23_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_m);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md24_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md24_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_fe);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md25_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md25_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_e);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md26_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md26_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_gg);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md27_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md27_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_js);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md28_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md28_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_p);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md29_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md29_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_gr);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md3_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md3_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_g);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md30_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md30_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_bg);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md31_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md31_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_jn);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md32_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md32_SrcTp
    (MdXX_RspOutComm_B.MdSrcTpOut_b);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md4_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md4_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_j);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md5_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md5_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_l);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md6_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md6_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_a);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md7_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md7_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_f);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md8_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md8_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut_n);

  /* SystemInitialize for Outport: '<Root>/MdXX_SrcReqTpOutComm_Md9_SrcTp' */
  (void) Rte_Write_MdXX_SrcReqTpOutComm_Md9_SrcTp(MdXX_RspOutComm_B.MdSrcTpOut);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
