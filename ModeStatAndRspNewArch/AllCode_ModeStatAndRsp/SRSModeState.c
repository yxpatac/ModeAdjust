/*
 * File: SRSModeState.c
 *
 * Code generated for Simulink model 'SRSModeState'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jul 12 09:00:52 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SRSModeState.h"

/* Model step function */
void SRSModeState_Cal()
{
  uint8 i;
  SrcReqTp1 tmpRead;
  SrcReqTp1 tmpRead_0;
  SrcReqTp1 tmpRead_1;
  SrcReqTp1 tmpRead_2;
  SrcReqTp1 tmpRead_3;
  SrcReqTp1 tmpRead_4;
  SrcReqTp1 tmpRead_5;
  SrcReqTp1 tmpRead_6;
  SrcReqTp1 tmpRead_7;
  SrcReqTp1 tmpRead_8;
  SrcReqTp1 tmpRead_9;
  SrcReqTp1 tmpRead_a;
  SrcReqTp1 tmpRead_b;
  SrcReqTp1 tmpRead_c;
  SrcReqTp1 tmpRead_d;
  SrcReqTp1 tmpRead_e;
  SrcReqTp1 tmpRead_f;
  SrcReqTp1 tmpRead_g;
  SrcReqTp1 tmpRead_h;
  SrcReqTp1 tmpRead_i;
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
  uint32 tmpRead_v;
  boolean rtb_RelationalOperator;
  boolean rtb_RelationalOperator_dm;
  boolean rtb_RelationalOperator_ow;
  boolean rtb_RelationalOperator_cb;
  boolean rtb_TmpSignalConversionAtSFunct[32];
  SrcReqTp1 rtb_TmpSignalConversionAtSFun_j[32];
  MdTp1 tmpRead_w;
  sint32 exitg1;

  /* Inport: '<Root>/modestate32_Val' */
  Rte_Read_modestate32_Val(&tmpRead_v);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md9_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md9_SrcTp(&tmpRead_u);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md8_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md8_SrcTp(&tmpRead_t);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md7_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md7_SrcTp(&tmpRead_s);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md6_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md6_SrcTp(&tmpRead_r);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md5_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md5_SrcTp(&tmpRead_q);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md4_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md4_SrcTp(&tmpRead_p);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md32_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md32_SrcTp(&tmpRead_o);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md31_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md31_SrcTp(&tmpRead_n);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md30_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md30_SrcTp(&tmpRead_m);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md3_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md3_SrcTp(&tmpRead_l);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md29_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md29_SrcTp(&tmpRead_k);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md28_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md28_SrcTp(&tmpRead_j);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md27_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md27_SrcTp(&tmpRead_i);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md26_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md26_SrcTp(&tmpRead_h);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md25_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md25_SrcTp(&tmpRead_g);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md24_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md24_SrcTp(&tmpRead_f);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md23_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md23_SrcTp(&tmpRead_e);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md22_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md22_SrcTp(&tmpRead_d);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md21_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md21_SrcTp(&tmpRead_c);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md20_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md20_SrcTp(&tmpRead_b);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md2_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md2_SrcTp(&tmpRead_a);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md19_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md19_SrcTp(&tmpRead_9);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md18_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md18_SrcTp(&tmpRead_8);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md17_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md17_SrcTp(&tmpRead_7);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md16_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md16_SrcTp(&tmpRead_6);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md15_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md15_SrcTp(&tmpRead_5);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md14_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md14_SrcTp(&tmpRead_4);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md13_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md13_SrcTp(&tmpRead_3);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md12_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md12_SrcTp(&tmpRead_2);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md11_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md11_SrcTp(&tmpRead_1);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md10_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md10_SrcTp(&tmpRead_0);

  /* Inport: '<Root>/MdXX_SrcReqTp_Md1_SrcTp' */
  Rte_Read_MdXX_SrcReqTp_Md1_SrcTp(&tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/SRSModeState_Cal_sys' */
  /* RelationalOperator: '<S4>/Relational Operator' incorporates:
   *  Constant: '<S4>/Constant'
   *  S-Function (sfix_bitop): '<S4>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  rtb_RelationalOperator = ((tmpRead_v & 1U) > 0U);

  /* RelationalOperator: '<S15>/Relational Operator' incorporates:
   *  Constant: '<S15>/Constant'
   *  S-Function (sfix_bitop): '<S15>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  rtb_RelationalOperator_dm = ((tmpRead_v & 2U) > 0U);

  /* RelationalOperator: '<S26>/Relational Operator' incorporates:
   *  Constant: '<S26>/Constant'
   *  S-Function (sfix_bitop): '<S26>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  rtb_RelationalOperator_ow = ((tmpRead_v & 4U) > 0U);

  /* RelationalOperator: '<S30>/Relational Operator' incorporates:
   *  Constant: '<S30>/Constant'
   *  S-Function (sfix_bitop): '<S30>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  rtb_RelationalOperator_cb = ((tmpRead_v & 8U) > 0U);

  /* SignalConversion: '<S36>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Chart: '<S3>/Chart'
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S14>/Constant'
   *  Constant: '<S16>/Constant'
   *  Constant: '<S17>/Constant'
   *  Constant: '<S18>/Constant'
   *  Constant: '<S19>/Constant'
   *  Constant: '<S20>/Constant'
   *  Constant: '<S21>/Constant'
   *  Constant: '<S22>/Constant'
   *  Constant: '<S23>/Constant'
   *  Constant: '<S24>/Constant'
   *  Constant: '<S25>/Constant'
   *  Constant: '<S27>/Constant'
   *  Constant: '<S28>/Constant'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S31>/Constant'
   *  Constant: '<S32>/Constant'
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  Constant: '<S35>/Constant'
   *  Constant: '<S5>/Constant'
   *  Constant: '<S6>/Constant'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  Constant: '<S9>/Constant'
   *  RelationalOperator: '<S10>/Relational Operator'
   *  RelationalOperator: '<S11>/Relational Operator'
   *  RelationalOperator: '<S12>/Relational Operator'
   *  RelationalOperator: '<S13>/Relational Operator'
   *  RelationalOperator: '<S14>/Relational Operator'
   *  RelationalOperator: '<S16>/Relational Operator'
   *  RelationalOperator: '<S17>/Relational Operator'
   *  RelationalOperator: '<S18>/Relational Operator'
   *  RelationalOperator: '<S19>/Relational Operator'
   *  RelationalOperator: '<S20>/Relational Operator'
   *  RelationalOperator: '<S21>/Relational Operator'
   *  RelationalOperator: '<S22>/Relational Operator'
   *  RelationalOperator: '<S23>/Relational Operator'
   *  RelationalOperator: '<S24>/Relational Operator'
   *  RelationalOperator: '<S25>/Relational Operator'
   *  RelationalOperator: '<S27>/Relational Operator'
   *  RelationalOperator: '<S28>/Relational Operator'
   *  RelationalOperator: '<S29>/Relational Operator'
   *  RelationalOperator: '<S31>/Relational Operator'
   *  RelationalOperator: '<S32>/Relational Operator'
   *  RelationalOperator: '<S33>/Relational Operator'
   *  RelationalOperator: '<S34>/Relational Operator'
   *  RelationalOperator: '<S35>/Relational Operator'
   *  RelationalOperator: '<S5>/Relational Operator'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  RelationalOperator: '<S7>/Relational Operator'
   *  RelationalOperator: '<S8>/Relational Operator'
   *  RelationalOperator: '<S9>/Relational Operator'
   *  S-Function (sfix_bitop): '<S10>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S11>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S12>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S13>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S14>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S16>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S17>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S18>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S19>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S20>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S21>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S22>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S23>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S24>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S25>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S27>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S28>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S29>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S31>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S32>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S33>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S34>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S35>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S5>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S6>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S7>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S8>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S9>/Bitwise Operator'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  rtb_TmpSignalConversionAtSFunct[0] = rtb_RelationalOperator;
  rtb_TmpSignalConversionAtSFunct[1] = rtb_RelationalOperator_dm;
  rtb_TmpSignalConversionAtSFunct[2] = rtb_RelationalOperator_ow;
  rtb_TmpSignalConversionAtSFunct[3] = rtb_RelationalOperator_cb;
  rtb_TmpSignalConversionAtSFunct[4] = ((tmpRead_v & 16U) > 0U);
  rtb_TmpSignalConversionAtSFunct[5] = ((tmpRead_v & 32U) > 0U);
  rtb_TmpSignalConversionAtSFunct[6] = ((tmpRead_v & 64U) > 0U);
  rtb_TmpSignalConversionAtSFunct[7] = ((tmpRead_v & 128U) > 0U);
  rtb_TmpSignalConversionAtSFunct[8] = ((tmpRead_v & 256U) > 0U);
  rtb_TmpSignalConversionAtSFunct[9] = ((tmpRead_v & 512U) > 0U);
  rtb_TmpSignalConversionAtSFunct[10] = ((tmpRead_v & 1024U) > 0U);
  rtb_TmpSignalConversionAtSFunct[11] = ((tmpRead_v & 2048U) > 0U);
  rtb_TmpSignalConversionAtSFunct[12] = ((tmpRead_v & 4096U) > 0U);
  rtb_TmpSignalConversionAtSFunct[13] = ((tmpRead_v & 8192U) > 0U);
  rtb_TmpSignalConversionAtSFunct[14] = ((tmpRead_v & 16384U) > 0U);
  rtb_TmpSignalConversionAtSFunct[15] = ((tmpRead_v & 32768U) > 0U);
  rtb_TmpSignalConversionAtSFunct[16] = ((tmpRead_v & 65536U) > 0U);
  rtb_TmpSignalConversionAtSFunct[17] = ((tmpRead_v & 131072U) > 0U);
  rtb_TmpSignalConversionAtSFunct[18] = ((tmpRead_v & 262144U) > 0U);
  rtb_TmpSignalConversionAtSFunct[19] = ((tmpRead_v & 524288U) > 0U);
  rtb_TmpSignalConversionAtSFunct[20] = ((tmpRead_v & 1048576U) > 0U);
  rtb_TmpSignalConversionAtSFunct[21] = ((tmpRead_v & 2097152U) > 0U);
  rtb_TmpSignalConversionAtSFunct[22] = ((tmpRead_v & 4194304U) > 0U);
  rtb_TmpSignalConversionAtSFunct[23] = ((tmpRead_v & 8388608U) > 0U);
  rtb_TmpSignalConversionAtSFunct[24] = ((tmpRead_v & 16777216U) > 0U);
  rtb_TmpSignalConversionAtSFunct[25] = ((tmpRead_v & 33554432U) > 0U);
  rtb_TmpSignalConversionAtSFunct[26] = ((tmpRead_v & 67108864U) > 0U);
  rtb_TmpSignalConversionAtSFunct[27] = ((tmpRead_v & 134217728U) > 0U);
  rtb_TmpSignalConversionAtSFunct[28] = ((tmpRead_v & 268435456U) > 0U);
  rtb_TmpSignalConversionAtSFunct[29] = ((tmpRead_v & 536870912U) > 0U);
  rtb_TmpSignalConversionAtSFunct[30] = ((tmpRead_v & 1073741824U) > 0U);
  rtb_TmpSignalConversionAtSFunct[31] = ((tmpRead_v & 2147483648U) > 0U);

  /* SignalConversion: '<S36>/TmpSignal ConversionAt SFunction Inport2' incorporates:
   *  Chart: '<S3>/Chart'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md10_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md11_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md12_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md13_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md14_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md15_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md16_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md17_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md18_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md19_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md1_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md20_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md21_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md22_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md23_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md24_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md25_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md26_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md27_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md28_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md29_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md2_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md30_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md31_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md32_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md4_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md5_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md6_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md7_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md8_SrcTp'
   *  Inport: '<Root>/MdXX_SrcReqTp_Md9_SrcTp'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md10_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md11_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md12_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md13_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md14_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md15_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md16_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md17_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md18_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md19_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md1_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md20_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md21_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md22_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md23_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md24_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md25_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md26_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md27_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md28_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md29_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md2_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md30_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md31_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md32_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md4_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md5_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md6_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md7_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md8_SrcTp_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md9_SrcTp_readOutport1'
   */
  rtb_TmpSignalConversionAtSFun_j[0] = tmpRead;
  rtb_TmpSignalConversionAtSFun_j[1] = tmpRead_a;
  rtb_TmpSignalConversionAtSFun_j[2] = tmpRead_l;
  rtb_TmpSignalConversionAtSFun_j[3] = tmpRead_p;
  rtb_TmpSignalConversionAtSFun_j[4] = tmpRead_q;
  rtb_TmpSignalConversionAtSFun_j[5] = tmpRead_r;
  rtb_TmpSignalConversionAtSFun_j[6] = tmpRead_s;
  rtb_TmpSignalConversionAtSFun_j[7] = tmpRead_t;
  rtb_TmpSignalConversionAtSFun_j[8] = tmpRead_u;
  rtb_TmpSignalConversionAtSFun_j[9] = tmpRead_0;
  rtb_TmpSignalConversionAtSFun_j[10] = tmpRead_1;
  rtb_TmpSignalConversionAtSFun_j[11] = tmpRead_2;
  rtb_TmpSignalConversionAtSFun_j[12] = tmpRead_3;
  rtb_TmpSignalConversionAtSFun_j[13] = tmpRead_4;
  rtb_TmpSignalConversionAtSFun_j[14] = tmpRead_5;
  rtb_TmpSignalConversionAtSFun_j[15] = tmpRead_6;
  rtb_TmpSignalConversionAtSFun_j[16] = tmpRead_7;
  rtb_TmpSignalConversionAtSFun_j[17] = tmpRead_8;
  rtb_TmpSignalConversionAtSFun_j[18] = tmpRead_9;
  rtb_TmpSignalConversionAtSFun_j[19] = tmpRead_b;
  rtb_TmpSignalConversionAtSFun_j[20] = tmpRead_c;
  rtb_TmpSignalConversionAtSFun_j[21] = tmpRead_d;
  rtb_TmpSignalConversionAtSFun_j[22] = tmpRead_e;
  rtb_TmpSignalConversionAtSFun_j[23] = tmpRead_f;
  rtb_TmpSignalConversionAtSFun_j[24] = tmpRead_g;
  rtb_TmpSignalConversionAtSFun_j[25] = tmpRead_h;
  rtb_TmpSignalConversionAtSFun_j[26] = tmpRead_i;
  rtb_TmpSignalConversionAtSFun_j[27] = tmpRead_j;
  rtb_TmpSignalConversionAtSFun_j[28] = tmpRead_k;
  rtb_TmpSignalConversionAtSFun_j[29] = tmpRead_m;
  rtb_TmpSignalConversionAtSFun_j[30] = tmpRead_n;
  rtb_TmpSignalConversionAtSFun_j[31] = tmpRead_o;

  /* Chart: '<S3>/Chart' */
  i = 0U;
  do {
    exitg1 = 0;
    if (i < Rte_Prm_KeSMSuMdNums_Val()) {
      if (rtb_TmpSignalConversionAtSFunct[i] &&
          (rtb_TmpSignalConversionAtSFun_j[i] == SrcReqTp_SRS)) {
        i++;
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      i = 0U;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  /* Outport: '<Root>/SRSMode_Val' incorporates:
   *  Constant: '<S3>/PA_SRSconvertArray_Val'
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  MultiPortSwitch: '<S3>/Index Vector'
   */
  (void) Rte_Write_SRSMode_Val((Rte_Prm_SRSconvertArray_Val())[i]);

  /* Switch: '<S3>/Switch1' incorporates:
   *  Switch: '<S3>/Switch2'
   *  Switch: '<S3>/Switch3'
   *  Switch: '<S3>/Switch4'
   */
  if (rtb_RelationalOperator) {
    /* Outport: '<Root>/ModeSrcTpLt_Val' incorporates:
     *  Inport: '<Root>/MdXX_SrcReqTp_Md1_SrcTp'
     *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md1_SrcTp_readOutport1'
     */
    (void) Rte_Write_ModeSrcTpLt_Val(tmpRead);
  } else {
    if (rtb_RelationalOperator_cb) {
      /* Switch: '<S3>/Switch2' incorporates:
       *  Inport: '<Root>/MdXX_SrcReqTp_Md4_SrcTp'
       *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md4_SrcTp_readOutport1'
       */
      tmpRead_l = tmpRead_p;
    } else if (rtb_RelationalOperator_dm) {
      /* Switch: '<S3>/Switch3' incorporates:
       *  Inport: '<Root>/MdXX_SrcReqTp_Md2_SrcTp'
       *  SignalConversion: '<S1>/TmpLatchAtMdXX_SrcReqTp_Md2_SrcTp_readOutport1'
       *  Switch: '<S3>/Switch2'
       */
      tmpRead_l = tmpRead_a;
    } else {
      if (!rtb_RelationalOperator_ow) {
        /* Switch: '<S3>/Switch2' incorporates:
         *  Constant: '<S3>/Constant7'
         *  Switch: '<S3>/Switch3'
         *  Switch: '<S3>/Switch4'
         */
        tmpRead_l = SrcReqTp_None;
      }
    }

    /* Outport: '<Root>/ModeSrcTpLt_Val' incorporates:
     *  Switch: '<S3>/Switch2'
     *  Switch: '<S3>/Switch3'
     *  Switch: '<S3>/Switch4'
     */
    (void) Rte_Write_ModeSrcTpLt_Val(tmpRead_l);
  }

  /* End of Switch: '<S3>/Switch1' */

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant3'
   *  Constant: '<S3>/Constant5'
   *  Constant: '<S3>/Constant6'
   *  RelationalOperator: '<S3>/Relational Operator'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  if (tmpRead_v > 0U) {
    tmpRead_w = MdTp_EzeEntry;
  } else {
    tmpRead_w = MdTp_None;
  }

  /* Outport: '<Root>/oModeState_Val' incorporates:
   *  Switch: '<S3>/Switch'
   */
  (void) Rte_Write_oModeState_Val(tmpRead_w);

  /* End of Outputs for SubSystem: '<Root>/SRSModeState_Cal_sys' */
}

/* Model initialize function */
void SRSModeState_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
