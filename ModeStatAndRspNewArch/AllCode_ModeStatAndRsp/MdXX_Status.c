/*
 * File: MdXX_Status.c
 *
 * Code generated for Simulink model 'MdXX_Status'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 14:57:35 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MdXX_Status.h"

/* Named constants for Chart: '<S68>/Chart' */
#define MdXX_Status_IN_idle            ((uint8)1U)
#define MdXX_Status_IN_ispos           ((uint8)2U)
#define MdXX_Status_IN_ongoing         ((uint8)3U)

/* Block signals (default storage) */
B_MdXX_Status_T MdXX_Status_B;

/* Block states (default storage) */
DW_MdXX_Status_T MdXX_Status_DW;
static void MdXX_Status_Chart_Init(uint8 *rty_stat);
static void MdXX_Status_Chart(uint8 rtu_rsp, boolean rtu_IsArrivedTrgtPos,
  boolean rtu_Exitflg, uint8 *rty_stat, DW_Chart_MdXX_Status_T *localDW);

/*
 * System initialize for atomic system:
 *    '<S68>/Chart'
 *    '<S69>/Chart'
 *    '<S70>/Chart'
 *    '<S71>/Chart'
 *    '<S72>/Chart'
 *    '<S73>/Chart'
 *    '<S74>/Chart'
 *    '<S75>/Chart'
 *    '<S76>/Chart'
 *    '<S77>/Chart'
 *    ...
 */
static void MdXX_Status_Chart_Init(uint8 *rty_stat)
{
  *rty_stat = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S68>/Chart'
 *    '<S69>/Chart'
 *    '<S70>/Chart'
 *    '<S71>/Chart'
 *    '<S72>/Chart'
 *    '<S73>/Chart'
 *    '<S74>/Chart'
 *    '<S75>/Chart'
 *    '<S76>/Chart'
 *    '<S77>/Chart'
 *    ...
 */
static void MdXX_Status_Chart(uint8 rtu_rsp, boolean rtu_IsArrivedTrgtPos,
  boolean rtu_Exitflg, uint8 *rty_stat, DW_Chart_MdXX_Status_T *localDW)
{
  /* Chart: '<S68>/Chart' */
  if (localDW->is_active_c4_RspLib == 0U) {
    localDW->is_active_c4_RspLib = 1U;
    localDW->is_c4_RspLib = MdXX_Status_IN_idle;
    *rty_stat = 0U;
  } else {
    switch (localDW->is_c4_RspLib) {
     case MdXX_Status_IN_idle:
      *rty_stat = 0U;
      switch (rtu_rsp) {
       case 4:
        localDW->is_c4_RspLib = MdXX_Status_IN_ongoing;
        *rty_stat = 2U;
        break;

       case 5:
        localDW->is_c4_RspLib = MdXX_Status_IN_ispos;
        *rty_stat = 1U;
        break;
      }
      break;

     case MdXX_Status_IN_ispos:
      *rty_stat = 1U;
      if ((!rtu_IsArrivedTrgtPos) || rtu_Exitflg) {
        localDW->is_c4_RspLib = MdXX_Status_IN_idle;
        *rty_stat = 0U;
      }
      break;

     default:
      *rty_stat = 2U;
      if (rtu_rsp == 1) {
        localDW->is_c4_RspLib = MdXX_Status_IN_ispos;
        *rty_stat = 1U;
      } else {
        if (rtu_rsp != 4) {
          localDW->is_c4_RspLib = MdXX_Status_IN_idle;
          *rty_stat = 0U;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S68>/Chart' */
}

/* Model step function */
void MdXX_Status_Cal()
{
  uint32 tmpRead;
  uint32 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  uint8 tmpRead_3;
  uint8 tmpRead_4;
  uint8 tmpRead_5;
  uint8 tmpRead_6;
  uint8 tmpRead_7;
  uint8 tmpRead_8;
  uint8 tmpRead_9;
  uint8 tmpRead_a;
  uint8 tmpRead_b;
  uint8 tmpRead_c;
  uint8 tmpRead_d;
  uint8 tmpRead_e;
  uint8 tmpRead_f;
  uint8 tmpRead_g;
  uint8 tmpRead_h;
  uint8 tmpRead_i;
  uint8 tmpRead_j;
  uint8 tmpRead_k;
  uint8 tmpRead_l;
  uint8 tmpRead_m;
  uint8 tmpRead_n;
  uint8 tmpRead_o;
  uint8 tmpRead_p;
  uint8 tmpRead_q;
  uint8 tmpRead_r;
  uint8 tmpRead_s;
  uint8 tmpRead_t;
  uint8 tmpRead_u;
  uint8 tmpRead_v;
  uint8 tmpRead_w;

  /* Inport: '<Root>/MdXX_RspOutComm_Md9_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md9_RspOutComm(&tmpRead_w);

  /* Inport: '<Root>/MdXX_RspOutComm_Md8_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md8_RspOutComm(&tmpRead_v);

  /* Inport: '<Root>/MdXX_RspOutComm_Md7_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md7_RspOutComm(&tmpRead_u);

  /* Inport: '<Root>/MdXX_RspOutComm_Md6_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md6_RspOutComm(&tmpRead_t);

  /* Inport: '<Root>/MdXX_RspOutComm_Md5_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md5_RspOutComm(&tmpRead_s);

  /* Inport: '<Root>/MdXX_RspOutComm_Md4_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md4_RspOutComm(&tmpRead_r);

  /* Inport: '<Root>/MdXX_RspOutComm_Md32_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md32_RspOutComm(&tmpRead_q);

  /* Inport: '<Root>/MdXX_RspOutComm_Md31_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md31_RspOutComm(&tmpRead_p);

  /* Inport: '<Root>/MdXX_RspOutComm_Md30_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md30_RspOutComm(&tmpRead_o);

  /* Inport: '<Root>/MdXX_RspOutComm_Md3_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md3_RspOutComm(&tmpRead_n);

  /* Inport: '<Root>/MdXX_RspOutComm_Md29_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md29_RspOutComm(&tmpRead_m);

  /* Inport: '<Root>/MdXX_RspOutComm_Md28_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md28_RspOutComm(&tmpRead_l);

  /* Inport: '<Root>/MdXX_RspOutComm_Md27_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md27_RspOutComm(&tmpRead_k);

  /* Inport: '<Root>/MdXX_RspOutComm_Md26_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md26_RspOutComm(&tmpRead_j);

  /* Inport: '<Root>/MdXX_RspOutComm_Md25_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md25_RspOutComm(&tmpRead_i);

  /* Inport: '<Root>/MdXX_RspOutComm_Md24_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md24_RspOutComm(&tmpRead_h);

  /* Inport: '<Root>/MdXX_RspOutComm_Md23_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md23_RspOutComm(&tmpRead_g);

  /* Inport: '<Root>/MdXX_RspOutComm_Md22_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md22_RspOutComm(&tmpRead_f);

  /* Inport: '<Root>/MdXX_RspOutComm_Md21_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md21_RspOutComm(&tmpRead_e);

  /* Inport: '<Root>/MdXX_RspOutComm_Md20_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md20_RspOutComm(&tmpRead_d);

  /* Inport: '<Root>/MdXX_RspOutComm_Md2_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md2_RspOutComm(&tmpRead_c);

  /* Inport: '<Root>/MdXX_RspOutComm_Md19_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md19_RspOutComm(&tmpRead_b);

  /* Inport: '<Root>/MdXX_RspOutComm_Md18_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md18_RspOutComm(&tmpRead_a);

  /* Inport: '<Root>/MdXX_RspOutComm_Md17_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md17_RspOutComm(&tmpRead_9);

  /* Inport: '<Root>/MdXX_RspOutComm_Md16_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md16_RspOutComm(&tmpRead_8);

  /* Inport: '<Root>/MdXX_RspOutComm_Md15_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md15_RspOutComm(&tmpRead_7);

  /* Inport: '<Root>/MdXX_RspOutComm_Md14_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md14_RspOutComm(&tmpRead_6);

  /* Inport: '<Root>/MdXX_RspOutComm_Md13_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md13_RspOutComm(&tmpRead_5);

  /* Inport: '<Root>/MdXX_RspOutComm_Md12_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md12_RspOutComm(&tmpRead_4);

  /* Inport: '<Root>/MdXX_RspOutComm_Md11_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md11_RspOutComm(&tmpRead_3);

  /* Inport: '<Root>/MdXX_RspOutComm_Md10_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md10_RspOutComm(&tmpRead_2);

  /* Inport: '<Root>/MdXX_RspOutComm_Md1_RspOutComm' */
  Rte_Read_MdXX_RspOutComm_Md1_RspOutComm(&tmpRead_1);

  /* Inport: '<Root>/IsTargetPos32Bit_Val' */
  Rte_Read_MdXXIsTargetPosZone_Val(&tmpRead_0);

  /* Inport: '<Root>/IsStBsy32Bit_Val' */
  Rte_Read_IsStBsy32Bit_Val(&tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/MdXX_Status_Cal_sys' */
  /* Chart: '<S68>/Chart' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S15>/Constant'
   *  RelationalOperator: '<S14>/Relational Operator'
   *  RelationalOperator: '<S15>/Relational Operator'
   *  S-Function (sfix_bitop): '<S14>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S15>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md10_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_2, (tmpRead_0 & 512U) > 0U, (tmpRead & 512U) > 0U,
                    &MdXX_Status_B.stat_ej, &MdXX_Status_DW.sf_Chart);

  /* Chart: '<S69>/Chart' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S18>/Constant'
   *  RelationalOperator: '<S17>/Relational Operator'
   *  RelationalOperator: '<S18>/Relational Operator'
   *  S-Function (sfix_bitop): '<S17>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S18>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md11_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_3, (tmpRead_0 & 1024U) > 0U, (tmpRead & 1024U) > 0U,
                    &MdXX_Status_B.stat_d4, &MdXX_Status_DW.sf_Chart_d);

  /* Chart: '<S70>/Chart' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S20>/Constant'
   *  RelationalOperator: '<S19>/Relational Operator'
   *  RelationalOperator: '<S20>/Relational Operator'
   *  S-Function (sfix_bitop): '<S19>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S20>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md12_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_4, (tmpRead_0 & 2048U) > 0U, (tmpRead & 2048U) > 0U,
                    &MdXX_Status_B.stat_g3, &MdXX_Status_DW.sf_Chart_dx);

  /* Chart: '<S71>/Chart' incorporates:
   *  Constant: '<S21>/Constant'
   *  Constant: '<S22>/Constant'
   *  RelationalOperator: '<S21>/Relational Operator'
   *  RelationalOperator: '<S22>/Relational Operator'
   *  S-Function (sfix_bitop): '<S21>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S22>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md13_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_5, (tmpRead_0 & 4096U) > 0U, (tmpRead & 4096U) > 0U,
                    &MdXX_Status_B.stat_m0, &MdXX_Status_DW.sf_Chart_f);

  /* Chart: '<S72>/Chart' incorporates:
   *  Constant: '<S23>/Constant'
   *  Constant: '<S24>/Constant'
   *  RelationalOperator: '<S23>/Relational Operator'
   *  RelationalOperator: '<S24>/Relational Operator'
   *  S-Function (sfix_bitop): '<S23>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S24>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md14_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_6, (tmpRead_0 & 8192U) > 0U, (tmpRead & 8192U) > 0U,
                    &MdXX_Status_B.stat_e, &MdXX_Status_DW.sf_Chart_g);

  /* Chart: '<S73>/Chart' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S26>/Constant'
   *  RelationalOperator: '<S25>/Relational Operator'
   *  RelationalOperator: '<S26>/Relational Operator'
   *  S-Function (sfix_bitop): '<S25>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S26>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md15_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_7, (tmpRead_0 & 16384U) > 0U, (tmpRead & 16384U) >
                    0U, &MdXX_Status_B.stat_j, &MdXX_Status_DW.sf_Chart_a);

  /* Chart: '<S74>/Chart' incorporates:
   *  Constant: '<S28>/Constant'
   *  Constant: '<S29>/Constant'
   *  RelationalOperator: '<S28>/Relational Operator'
   *  RelationalOperator: '<S29>/Relational Operator'
   *  S-Function (sfix_bitop): '<S28>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S29>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md16_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_8, (tmpRead_0 & 32768U) > 0U, (tmpRead & 32768U) >
                    0U, &MdXX_Status_B.stat_lon, &MdXX_Status_DW.sf_Chart_fj);

  /* Chart: '<S75>/Chart' incorporates:
   *  Constant: '<S30>/Constant'
   *  Constant: '<S31>/Constant'
   *  RelationalOperator: '<S30>/Relational Operator'
   *  RelationalOperator: '<S31>/Relational Operator'
   *  S-Function (sfix_bitop): '<S30>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S31>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md17_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_9, (tmpRead_0 & 65536U) > 0U, (tmpRead & 65536U) >
                    0U, &MdXX_Status_B.stat_k5, &MdXX_Status_DW.sf_Chart_o);

  /* Chart: '<S76>/Chart' incorporates:
   *  Constant: '<S32>/Constant'
   *  Constant: '<S33>/Constant'
   *  RelationalOperator: '<S32>/Relational Operator'
   *  RelationalOperator: '<S33>/Relational Operator'
   *  S-Function (sfix_bitop): '<S32>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S33>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md18_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_a, (tmpRead_0 & 131072U) > 0U, (tmpRead & 131072U) >
                    0U, &MdXX_Status_B.stat_lo, &MdXX_Status_DW.sf_Chart_dp);

  /* Chart: '<S77>/Chart' incorporates:
   *  Constant: '<S34>/Constant'
   *  Constant: '<S35>/Constant'
   *  RelationalOperator: '<S34>/Relational Operator'
   *  RelationalOperator: '<S35>/Relational Operator'
   *  S-Function (sfix_bitop): '<S34>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S35>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md19_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_b, (tmpRead_0 & 262144U) > 0U, (tmpRead & 262144U) >
                    0U, &MdXX_Status_B.stat_mk, &MdXX_Status_DW.sf_Chart_au);

  /* Chart: '<S78>/Chart' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  RelationalOperator: '<S4>/Relational Operator'
   *  RelationalOperator: '<S5>/Relational Operator'
   *  S-Function (sfix_bitop): '<S4>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S5>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md1_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_1, (tmpRead_0 & 1U) > 0U, (tmpRead & 1U) > 0U,
                    &MdXX_Status_B.stat_lj, &MdXX_Status_DW.sf_Chart_a4);

  /* Chart: '<S79>/Chart' incorporates:
   *  Constant: '<S36>/Constant'
   *  Constant: '<S37>/Constant'
   *  RelationalOperator: '<S36>/Relational Operator'
   *  RelationalOperator: '<S37>/Relational Operator'
   *  S-Function (sfix_bitop): '<S36>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S37>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md20_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_d, (tmpRead_0 & 524288U) > 0U, (tmpRead & 524288U) >
                    0U, &MdXX_Status_B.stat_at, &MdXX_Status_DW.sf_Chart_h);

  /* Chart: '<S80>/Chart' incorporates:
   *  Constant: '<S39>/Constant'
   *  Constant: '<S40>/Constant'
   *  RelationalOperator: '<S39>/Relational Operator'
   *  RelationalOperator: '<S40>/Relational Operator'
   *  S-Function (sfix_bitop): '<S39>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S40>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md21_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_e, (tmpRead_0 & 1048576U) > 0U, (tmpRead & 1048576U)
                    > 0U, &MdXX_Status_B.stat_no, &MdXX_Status_DW.sf_Chart_hj);

  /* Chart: '<S81>/Chart' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S59>/Constant'
   *  RelationalOperator: '<S58>/Relational Operator'
   *  RelationalOperator: '<S59>/Relational Operator'
   *  S-Function (sfix_bitop): '<S58>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S59>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md30_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_o, (tmpRead_0 & 536870912U) > 0U, (tmpRead &
    536870912U) > 0U, &MdXX_Status_B.stat_m, &MdXX_Status_DW.sf_Chart_e);

  /* Chart: '<S82>/Chart' incorporates:
   *  Constant: '<S61>/Constant'
   *  Constant: '<S62>/Constant'
   *  RelationalOperator: '<S61>/Relational Operator'
   *  RelationalOperator: '<S62>/Relational Operator'
   *  S-Function (sfix_bitop): '<S61>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S62>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md31_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_p, (tmpRead_0 & 1073741824U) > 0U, (tmpRead &
    1073741824U) > 0U, &MdXX_Status_B.stat_p, &MdXX_Status_DW.sf_Chart_l);

  /* Chart: '<S83>/Chart' incorporates:
   *  Constant: '<S63>/Constant'
   *  Constant: '<S64>/Constant'
   *  RelationalOperator: '<S63>/Relational Operator'
   *  RelationalOperator: '<S64>/Relational Operator'
   *  S-Function (sfix_bitop): '<S63>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S64>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md32_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_q, (tmpRead_0 & 2147483648U) > 0U, (tmpRead &
    2147483648U) > 0U, &MdXX_Status_B.stat_hd, &MdXX_Status_DW.sf_Chart_lr);

  /* Chart: '<S84>/Chart' incorporates:
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  RelationalOperator: '<S41>/Relational Operator'
   *  RelationalOperator: '<S42>/Relational Operator'
   *  S-Function (sfix_bitop): '<S41>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S42>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md22_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_f, (tmpRead_0 & 2097152U) > 0U, (tmpRead & 2097152U)
                    > 0U, &MdXX_Status_B.stat_k, &MdXX_Status_DW.sf_Chart_p);

  /* Chart: '<S85>/Chart' incorporates:
   *  Constant: '<S43>/Constant'
   *  Constant: '<S44>/Constant'
   *  RelationalOperator: '<S43>/Relational Operator'
   *  RelationalOperator: '<S44>/Relational Operator'
   *  S-Function (sfix_bitop): '<S43>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S44>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md23_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_g, (tmpRead_0 & 4194304U) > 0U, (tmpRead & 4194304U)
                    > 0U, &MdXX_Status_B.stat_ab, &MdXX_Status_DW.sf_Chart_ae);

  /* Chart: '<S86>/Chart' incorporates:
   *  Constant: '<S45>/Constant'
   *  Constant: '<S46>/Constant'
   *  RelationalOperator: '<S45>/Relational Operator'
   *  RelationalOperator: '<S46>/Relational Operator'
   *  S-Function (sfix_bitop): '<S45>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S46>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md24_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_h, (tmpRead_0 & 8388608U) > 0U, (tmpRead & 8388608U)
                    > 0U, &MdXX_Status_B.stat_cs, &MdXX_Status_DW.sf_Chart_n);

  /* Chart: '<S87>/Chart' incorporates:
   *  Constant: '<S47>/Constant'
   *  Constant: '<S48>/Constant'
   *  RelationalOperator: '<S47>/Relational Operator'
   *  RelationalOperator: '<S48>/Relational Operator'
   *  S-Function (sfix_bitop): '<S47>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S48>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md25_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_i, (tmpRead_0 & 16777216U) > 0U, (tmpRead &
    16777216U) > 0U, &MdXX_Status_B.stat_gu, &MdXX_Status_DW.sf_Chart_fp);

  /* Chart: '<S88>/Chart' incorporates:
   *  Constant: '<S50>/Constant'
   *  Constant: '<S51>/Constant'
   *  RelationalOperator: '<S50>/Relational Operator'
   *  RelationalOperator: '<S51>/Relational Operator'
   *  S-Function (sfix_bitop): '<S50>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S51>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md26_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_j, (tmpRead_0 & 33554432U) > 0U, (tmpRead &
    33554432U) > 0U, &MdXX_Status_B.stat_d, &MdXX_Status_DW.sf_Chart_le);

  /* Chart: '<S89>/Chart' incorporates:
   *  Constant: '<S52>/Constant'
   *  Constant: '<S53>/Constant'
   *  RelationalOperator: '<S52>/Relational Operator'
   *  RelationalOperator: '<S53>/Relational Operator'
   *  S-Function (sfix_bitop): '<S52>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S53>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md27_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_k, (tmpRead_0 & 67108864U) > 0U, (tmpRead &
    67108864U) > 0U, &MdXX_Status_B.stat_ao, &MdXX_Status_DW.sf_Chart_nv);

  /* Chart: '<S90>/Chart' incorporates:
   *  Constant: '<S54>/Constant'
   *  Constant: '<S55>/Constant'
   *  RelationalOperator: '<S54>/Relational Operator'
   *  RelationalOperator: '<S55>/Relational Operator'
   *  S-Function (sfix_bitop): '<S54>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S55>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md28_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_l, (tmpRead_0 & 134217728U) > 0U, (tmpRead &
    134217728U) > 0U, &MdXX_Status_B.stat_l, &MdXX_Status_DW.sf_Chart_m);

  /* Chart: '<S91>/Chart' incorporates:
   *  Constant: '<S56>/Constant'
   *  Constant: '<S57>/Constant'
   *  RelationalOperator: '<S56>/Relational Operator'
   *  RelationalOperator: '<S57>/Relational Operator'
   *  S-Function (sfix_bitop): '<S56>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S57>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md29_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_m, (tmpRead_0 & 268435456U) > 0U, (tmpRead &
    268435456U) > 0U, &MdXX_Status_B.stat_n3, &MdXX_Status_DW.sf_Chart_h2);

  /* Chart: '<S92>/Chart' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S27>/Constant'
   *  RelationalOperator: '<S16>/Relational Operator'
   *  RelationalOperator: '<S27>/Relational Operator'
   *  S-Function (sfix_bitop): '<S16>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S27>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md2_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_c, (tmpRead_0 & 2U) > 0U, (tmpRead & 2U) > 0U,
                    &MdXX_Status_B.stat_h, &MdXX_Status_DW.sf_Chart_ax);

  /* Chart: '<S93>/Chart' incorporates:
   *  Constant: '<S38>/Constant'
   *  Constant: '<S49>/Constant'
   *  RelationalOperator: '<S38>/Relational Operator'
   *  RelationalOperator: '<S49>/Relational Operator'
   *  S-Function (sfix_bitop): '<S38>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S49>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md3_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_n, (tmpRead_0 & 4U) > 0U, (tmpRead & 4U) > 0U,
                    &MdXX_Status_B.stat_g2, &MdXX_Status_DW.sf_Chart_my);

  /* Chart: '<S94>/Chart' incorporates:
   *  Constant: '<S60>/Constant'
   *  Constant: '<S65>/Constant'
   *  RelationalOperator: '<S60>/Relational Operator'
   *  RelationalOperator: '<S65>/Relational Operator'
   *  S-Function (sfix_bitop): '<S60>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S65>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md4_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_r, (tmpRead_0 & 8U) > 0U, (tmpRead & 8U) > 0U,
                    &MdXX_Status_B.stat_a, &MdXX_Status_DW.sf_Chart_c);

  /* Chart: '<S95>/Chart' incorporates:
   *  Constant: '<S66>/Constant'
   *  Constant: '<S67>/Constant'
   *  RelationalOperator: '<S66>/Relational Operator'
   *  RelationalOperator: '<S67>/Relational Operator'
   *  S-Function (sfix_bitop): '<S66>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S67>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md5_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_s, (tmpRead_0 & 16U) > 0U, (tmpRead & 16U) > 0U,
                    &MdXX_Status_B.stat_c, &MdXX_Status_DW.sf_Chart_i);

  /* Chart: '<S96>/Chart' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  RelationalOperator: '<S7>/Relational Operator'
   *  S-Function (sfix_bitop): '<S6>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S7>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md6_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_t, (tmpRead_0 & 32U) > 0U, (tmpRead & 32U) > 0U,
                    &MdXX_Status_B.stat_g, &MdXX_Status_DW.sf_Chart_j);

  /* Chart: '<S97>/Chart' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S9>/Constant'
   *  RelationalOperator: '<S8>/Relational Operator'
   *  RelationalOperator: '<S9>/Relational Operator'
   *  S-Function (sfix_bitop): '<S8>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S9>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md7_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_u, (tmpRead_0 & 64U) > 0U, (tmpRead & 64U) > 0U,
                    &MdXX_Status_B.stat_o, &MdXX_Status_DW.sf_Chart_nf);

  /* Chart: '<S98>/Chart' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  RelationalOperator: '<S10>/Relational Operator'
   *  RelationalOperator: '<S11>/Relational Operator'
   *  S-Function (sfix_bitop): '<S10>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S11>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md8_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_v, (tmpRead_0 & 128U) > 0U, (tmpRead & 128U) > 0U,
                    &MdXX_Status_B.stat_n, &MdXX_Status_DW.sf_Chart_nm);

  /* Chart: '<S99>/Chart' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  RelationalOperator: '<S12>/Relational Operator'
   *  RelationalOperator: '<S13>/Relational Operator'
   *  S-Function (sfix_bitop): '<S12>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S13>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtIsStBsy32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIsTargetPos32Bit_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_RspOutComm_Md9_RspOutComm_readOutport1'
   */
  MdXX_Status_Chart(tmpRead_w, (tmpRead_0 & 256U) > 0U, (tmpRead & 256U) > 0U,
                    &MdXX_Status_B.stat, &MdXX_Status_DW.sf_Chart_b);

  /* Outport: '<Root>/MdXX_Stat_Md1_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md1_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md1_Stat(MdXX_Status_B.stat_lj);

  /* Outport: '<Root>/MdXX_Stat_Md10_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md10_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md10_Stat(MdXX_Status_B.stat_ej);

  /* Outport: '<Root>/MdXX_Stat_Md11_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md11_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md11_Stat(MdXX_Status_B.stat_d4);

  /* Outport: '<Root>/MdXX_Stat_Md12_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md12_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md12_Stat(MdXX_Status_B.stat_g3);

  /* Outport: '<Root>/MdXX_Stat_Md13_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md13_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md13_Stat(MdXX_Status_B.stat_m0);

  /* Outport: '<Root>/MdXX_Stat_Md14_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md14_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md14_Stat(MdXX_Status_B.stat_e);

  /* Outport: '<Root>/MdXX_Stat_Md15_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md15_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md15_Stat(MdXX_Status_B.stat_j);

  /* Outport: '<Root>/MdXX_Stat_Md16_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md16_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md16_Stat(MdXX_Status_B.stat_lon);

  /* Outport: '<Root>/MdXX_Stat_Md17_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md17_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md17_Stat(MdXX_Status_B.stat_k5);

  /* Outport: '<Root>/MdXX_Stat_Md18_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md18_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md18_Stat(MdXX_Status_B.stat_lo);

  /* Outport: '<Root>/MdXX_Stat_Md19_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md19_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md19_Stat(MdXX_Status_B.stat_mk);

  /* Outport: '<Root>/MdXX_Stat_Md2_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md2_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md2_Stat(MdXX_Status_B.stat_h);

  /* Outport: '<Root>/MdXX_Stat_Md20_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md20_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md20_Stat(MdXX_Status_B.stat_at);

  /* Outport: '<Root>/MdXX_Stat_Md21_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md21_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md21_Stat(MdXX_Status_B.stat_no);

  /* Outport: '<Root>/MdXX_Stat_Md22_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md22_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md22_Stat(MdXX_Status_B.stat_k);

  /* Outport: '<Root>/MdXX_Stat_Md23_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md23_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md23_Stat(MdXX_Status_B.stat_ab);

  /* Outport: '<Root>/MdXX_Stat_Md24_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md24_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md24_Stat(MdXX_Status_B.stat_cs);

  /* Outport: '<Root>/MdXX_Stat_Md25_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md25_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md25_Stat(MdXX_Status_B.stat_gu);

  /* Outport: '<Root>/MdXX_Stat_Md26_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md26_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md26_Stat(MdXX_Status_B.stat_d);

  /* Outport: '<Root>/MdXX_Stat_Md27_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md27_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md27_Stat(MdXX_Status_B.stat_ao);

  /* Outport: '<Root>/MdXX_Stat_Md28_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md28_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md28_Stat(MdXX_Status_B.stat_l);

  /* Outport: '<Root>/MdXX_Stat_Md29_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md29_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md29_Stat(MdXX_Status_B.stat_n3);

  /* Outport: '<Root>/MdXX_Stat_Md3_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md3_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md3_Stat(MdXX_Status_B.stat_g2);

  /* Outport: '<Root>/MdXX_Stat_Md30_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md30_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md30_Stat(MdXX_Status_B.stat_m);

  /* Outport: '<Root>/MdXX_Stat_Md31_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md31_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md31_Stat(MdXX_Status_B.stat_p);

  /* Outport: '<Root>/MdXX_Stat_Md32_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md32_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md32_Stat(MdXX_Status_B.stat_hd);

  /* Outport: '<Root>/MdXX_Stat_Md4_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md4_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md4_Stat(MdXX_Status_B.stat_a);

  /* Outport: '<Root>/MdXX_Stat_Md5_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md5_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md5_Stat(MdXX_Status_B.stat_c);

  /* Outport: '<Root>/MdXX_Stat_Md6_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md6_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md6_Stat(MdXX_Status_B.stat_g);

  /* Outport: '<Root>/MdXX_Stat_Md7_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md7_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md7_Stat(MdXX_Status_B.stat_o);

  /* Outport: '<Root>/MdXX_Stat_Md8_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md8_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md8_Stat(MdXX_Status_B.stat_n);

  /* Outport: '<Root>/MdXX_Stat_Md9_Stat' incorporates:
   *  Outport: '<S1>/MdXX_Stat_Md9_Stat_write'
   */
  (void) Rte_Write_MdXX_Stat_Md9_Stat(MdXX_Status_B.stat);

  /* End of Outputs for SubSystem: '<Root>/MdXX_Status_Cal_sys' */

  /* Outport: '<Root>/MdXX_Stat_Md1_Stat' */
  (void) Rte_Write_MdXX_Stat_Md1_Stat(MdXX_Status_B.stat_lj);

  /* Outport: '<Root>/MdXX_Stat_Md10_Stat' */
  (void) Rte_Write_MdXX_Stat_Md10_Stat(MdXX_Status_B.stat_ej);

  /* Outport: '<Root>/MdXX_Stat_Md11_Stat' */
  (void) Rte_Write_MdXX_Stat_Md11_Stat(MdXX_Status_B.stat_d4);

  /* Outport: '<Root>/MdXX_Stat_Md12_Stat' */
  (void) Rte_Write_MdXX_Stat_Md12_Stat(MdXX_Status_B.stat_g3);

  /* Outport: '<Root>/MdXX_Stat_Md13_Stat' */
  (void) Rte_Write_MdXX_Stat_Md13_Stat(MdXX_Status_B.stat_m0);

  /* Outport: '<Root>/MdXX_Stat_Md14_Stat' */
  (void) Rte_Write_MdXX_Stat_Md14_Stat(MdXX_Status_B.stat_e);

  /* Outport: '<Root>/MdXX_Stat_Md15_Stat' */
  (void) Rte_Write_MdXX_Stat_Md15_Stat(MdXX_Status_B.stat_j);

  /* Outport: '<Root>/MdXX_Stat_Md16_Stat' */
  (void) Rte_Write_MdXX_Stat_Md16_Stat(MdXX_Status_B.stat_lon);

  /* Outport: '<Root>/MdXX_Stat_Md17_Stat' */
  (void) Rte_Write_MdXX_Stat_Md17_Stat(MdXX_Status_B.stat_k5);

  /* Outport: '<Root>/MdXX_Stat_Md18_Stat' */
  (void) Rte_Write_MdXX_Stat_Md18_Stat(MdXX_Status_B.stat_lo);

  /* Outport: '<Root>/MdXX_Stat_Md19_Stat' */
  (void) Rte_Write_MdXX_Stat_Md19_Stat(MdXX_Status_B.stat_mk);

  /* Outport: '<Root>/MdXX_Stat_Md2_Stat' */
  (void) Rte_Write_MdXX_Stat_Md2_Stat(MdXX_Status_B.stat_h);

  /* Outport: '<Root>/MdXX_Stat_Md20_Stat' */
  (void) Rte_Write_MdXX_Stat_Md20_Stat(MdXX_Status_B.stat_at);

  /* Outport: '<Root>/MdXX_Stat_Md21_Stat' */
  (void) Rte_Write_MdXX_Stat_Md21_Stat(MdXX_Status_B.stat_no);

  /* Outport: '<Root>/MdXX_Stat_Md22_Stat' */
  (void) Rte_Write_MdXX_Stat_Md22_Stat(MdXX_Status_B.stat_k);

  /* Outport: '<Root>/MdXX_Stat_Md23_Stat' */
  (void) Rte_Write_MdXX_Stat_Md23_Stat(MdXX_Status_B.stat_ab);

  /* Outport: '<Root>/MdXX_Stat_Md24_Stat' */
  (void) Rte_Write_MdXX_Stat_Md24_Stat(MdXX_Status_B.stat_cs);

  /* Outport: '<Root>/MdXX_Stat_Md25_Stat' */
  (void) Rte_Write_MdXX_Stat_Md25_Stat(MdXX_Status_B.stat_gu);

  /* Outport: '<Root>/MdXX_Stat_Md26_Stat' */
  (void) Rte_Write_MdXX_Stat_Md26_Stat(MdXX_Status_B.stat_d);

  /* Outport: '<Root>/MdXX_Stat_Md27_Stat' */
  (void) Rte_Write_MdXX_Stat_Md27_Stat(MdXX_Status_B.stat_ao);

  /* Outport: '<Root>/MdXX_Stat_Md28_Stat' */
  (void) Rte_Write_MdXX_Stat_Md28_Stat(MdXX_Status_B.stat_l);

  /* Outport: '<Root>/MdXX_Stat_Md29_Stat' */
  (void) Rte_Write_MdXX_Stat_Md29_Stat(MdXX_Status_B.stat_n3);

  /* Outport: '<Root>/MdXX_Stat_Md3_Stat' */
  (void) Rte_Write_MdXX_Stat_Md3_Stat(MdXX_Status_B.stat_g2);

  /* Outport: '<Root>/MdXX_Stat_Md30_Stat' */
  (void) Rte_Write_MdXX_Stat_Md30_Stat(MdXX_Status_B.stat_m);

  /* Outport: '<Root>/MdXX_Stat_Md31_Stat' */
  (void) Rte_Write_MdXX_Stat_Md31_Stat(MdXX_Status_B.stat_p);

  /* Outport: '<Root>/MdXX_Stat_Md32_Stat' */
  (void) Rte_Write_MdXX_Stat_Md32_Stat(MdXX_Status_B.stat_hd);

  /* Outport: '<Root>/MdXX_Stat_Md4_Stat' */
  (void) Rte_Write_MdXX_Stat_Md4_Stat(MdXX_Status_B.stat_a);

  /* Outport: '<Root>/MdXX_Stat_Md5_Stat' */
  (void) Rte_Write_MdXX_Stat_Md5_Stat(MdXX_Status_B.stat_c);

  /* Outport: '<Root>/MdXX_Stat_Md6_Stat' */
  (void) Rte_Write_MdXX_Stat_Md6_Stat(MdXX_Status_B.stat_g);

  /* Outport: '<Root>/MdXX_Stat_Md7_Stat' */
  (void) Rte_Write_MdXX_Stat_Md7_Stat(MdXX_Status_B.stat_o);

  /* Outport: '<Root>/MdXX_Stat_Md8_Stat' */
  (void) Rte_Write_MdXX_Stat_Md8_Stat(MdXX_Status_B.stat_n);

  /* Outport: '<Root>/MdXX_Stat_Md9_Stat' */
  (void) Rte_Write_MdXX_Stat_Md9_Stat(MdXX_Status_B.stat);
}

/* Model initialize function */
void MdXX_Status_Init(void)
{
  /* SystemInitialize for S-Function (sfun_private_function_caller): '<Root>/sfcn_inserted_server' incorporates:
   *  SubSystem: '<Root>/MdXX_Status_Cal_sys'
   */

  /* SystemInitialize for Chart: '<S68>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_ej);

  /* SystemInitialize for Chart: '<S69>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_d4);

  /* SystemInitialize for Chart: '<S70>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_g3);

  /* SystemInitialize for Chart: '<S71>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_m0);

  /* SystemInitialize for Chart: '<S72>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_e);

  /* SystemInitialize for Chart: '<S73>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_j);

  /* SystemInitialize for Chart: '<S74>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_lon);

  /* SystemInitialize for Chart: '<S75>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_k5);

  /* SystemInitialize for Chart: '<S76>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_lo);

  /* SystemInitialize for Chart: '<S77>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_mk);

  /* SystemInitialize for Chart: '<S78>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_lj);

  /* SystemInitialize for Chart: '<S79>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_at);

  /* SystemInitialize for Chart: '<S80>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_no);

  /* SystemInitialize for Chart: '<S81>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_m);

  /* SystemInitialize for Chart: '<S82>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_p);

  /* SystemInitialize for Chart: '<S83>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_hd);

  /* SystemInitialize for Chart: '<S84>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_k);

  /* SystemInitialize for Chart: '<S85>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_ab);

  /* SystemInitialize for Chart: '<S86>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_cs);

  /* SystemInitialize for Chart: '<S87>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_gu);

  /* SystemInitialize for Chart: '<S88>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_d);

  /* SystemInitialize for Chart: '<S89>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_ao);

  /* SystemInitialize for Chart: '<S90>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_l);

  /* SystemInitialize for Chart: '<S91>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_n3);

  /* SystemInitialize for Chart: '<S92>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_h);

  /* SystemInitialize for Chart: '<S93>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_g2);

  /* SystemInitialize for Chart: '<S94>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_a);

  /* SystemInitialize for Chart: '<S95>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_c);

  /* SystemInitialize for Chart: '<S96>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_g);

  /* SystemInitialize for Chart: '<S97>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_o);

  /* SystemInitialize for Chart: '<S98>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat_n);

  /* SystemInitialize for Chart: '<S99>/Chart' */
  MdXX_Status_Chart_Init(&MdXX_Status_B.stat);

  /* End of SystemInitialize for S-Function (sfun_private_function_caller): '<Root>/sfcn_inserted_server' */

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md1_Stat' */
  (void) Rte_Write_MdXX_Stat_Md1_Stat(MdXX_Status_B.stat_lj);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md10_Stat' */
  (void) Rte_Write_MdXX_Stat_Md10_Stat(MdXX_Status_B.stat_ej);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md11_Stat' */
  (void) Rte_Write_MdXX_Stat_Md11_Stat(MdXX_Status_B.stat_d4);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md12_Stat' */
  (void) Rte_Write_MdXX_Stat_Md12_Stat(MdXX_Status_B.stat_g3);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md13_Stat' */
  (void) Rte_Write_MdXX_Stat_Md13_Stat(MdXX_Status_B.stat_m0);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md14_Stat' */
  (void) Rte_Write_MdXX_Stat_Md14_Stat(MdXX_Status_B.stat_e);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md15_Stat' */
  (void) Rte_Write_MdXX_Stat_Md15_Stat(MdXX_Status_B.stat_j);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md16_Stat' */
  (void) Rte_Write_MdXX_Stat_Md16_Stat(MdXX_Status_B.stat_lon);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md17_Stat' */
  (void) Rte_Write_MdXX_Stat_Md17_Stat(MdXX_Status_B.stat_k5);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md18_Stat' */
  (void) Rte_Write_MdXX_Stat_Md18_Stat(MdXX_Status_B.stat_lo);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md19_Stat' */
  (void) Rte_Write_MdXX_Stat_Md19_Stat(MdXX_Status_B.stat_mk);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md2_Stat' */
  (void) Rte_Write_MdXX_Stat_Md2_Stat(MdXX_Status_B.stat_h);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md20_Stat' */
  (void) Rte_Write_MdXX_Stat_Md20_Stat(MdXX_Status_B.stat_at);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md21_Stat' */
  (void) Rte_Write_MdXX_Stat_Md21_Stat(MdXX_Status_B.stat_no);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md22_Stat' */
  (void) Rte_Write_MdXX_Stat_Md22_Stat(MdXX_Status_B.stat_k);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md23_Stat' */
  (void) Rte_Write_MdXX_Stat_Md23_Stat(MdXX_Status_B.stat_ab);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md24_Stat' */
  (void) Rte_Write_MdXX_Stat_Md24_Stat(MdXX_Status_B.stat_cs);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md25_Stat' */
  (void) Rte_Write_MdXX_Stat_Md25_Stat(MdXX_Status_B.stat_gu);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md26_Stat' */
  (void) Rte_Write_MdXX_Stat_Md26_Stat(MdXX_Status_B.stat_d);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md27_Stat' */
  (void) Rte_Write_MdXX_Stat_Md27_Stat(MdXX_Status_B.stat_ao);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md28_Stat' */
  (void) Rte_Write_MdXX_Stat_Md28_Stat(MdXX_Status_B.stat_l);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md29_Stat' */
  (void) Rte_Write_MdXX_Stat_Md29_Stat(MdXX_Status_B.stat_n3);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md3_Stat' */
  (void) Rte_Write_MdXX_Stat_Md3_Stat(MdXX_Status_B.stat_g2);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md30_Stat' */
  (void) Rte_Write_MdXX_Stat_Md30_Stat(MdXX_Status_B.stat_m);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md31_Stat' */
  (void) Rte_Write_MdXX_Stat_Md31_Stat(MdXX_Status_B.stat_p);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md32_Stat' */
  (void) Rte_Write_MdXX_Stat_Md32_Stat(MdXX_Status_B.stat_hd);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md4_Stat' */
  (void) Rte_Write_MdXX_Stat_Md4_Stat(MdXX_Status_B.stat_a);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md5_Stat' */
  (void) Rte_Write_MdXX_Stat_Md5_Stat(MdXX_Status_B.stat_c);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md6_Stat' */
  (void) Rte_Write_MdXX_Stat_Md6_Stat(MdXX_Status_B.stat_g);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md7_Stat' */
  (void) Rte_Write_MdXX_Stat_Md7_Stat(MdXX_Status_B.stat_o);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md8_Stat' */
  (void) Rte_Write_MdXX_Stat_Md8_Stat(MdXX_Status_B.stat_n);

  /* SystemInitialize for Outport: '<Root>/MdXX_Stat_Md9_Stat' */
  (void) Rte_Write_MdXX_Stat_Md9_Stat(MdXX_Status_B.stat);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
