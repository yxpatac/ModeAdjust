/*
 * File: MdXX_StatusToNetWork.c
 *
 * Code generated for Simulink model 'MdXX_StatusToNetWork'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jul 12 09:08:04 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MdXX_StatusToNetWork.h"

/* Block signals (default storage) */
B_MdXX_StatusToNetWork_T MdXX_StatusToNetWork_B;

/* Model step function */
void MdXX_StatusToNetWork_Cal()
{
  uint8 i;
  uint8 tmpRead;
  uint8 tmpRead_0;
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
  uint8 tmpRead_q[11];
  uint8 rtb_TmpSignalConversionAtSFunct[32];
  sint32 tmp;

  /* Inport: '<Root>/PosArray_Val' */
  Rte_Read_PosArray_Val(tmpRead_q);

  /* Inport: '<Root>/MdXX_Stat_Md9_Stat' */
  Rte_Read_MdXX_Stat_Md9_Stat(&tmpRead_p);

  /* Inport: '<Root>/MdXX_Stat_Md8_Stat' */
  Rte_Read_MdXX_Stat_Md8_Stat(&tmpRead_o);

  /* Inport: '<Root>/MdXX_Stat_Md7_Stat' */
  Rte_Read_MdXX_Stat_Md7_Stat(&tmpRead_n);

  /* Inport: '<Root>/MdXX_Stat_Md6_Stat' */
  Rte_Read_MdXX_Stat_Md6_Stat(&tmpRead_m);

  /* Outputs for Function Call SubSystem: '<Root>/MdXX_StatusToNetWork_Cal_sys' */
  /* SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md5_Stat_readOutport1' incorporates:
   *  Inport: '<Root>/MdXX_Stat_Md5_Stat'
   */
  Rte_Read_MdXX_Stat_Md5_Stat
    (&MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md5_Stat_re);

  /* SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md4_Stat_readOutport1' incorporates:
   *  Inport: '<Root>/MdXX_Stat_Md4_Stat'
   */
  Rte_Read_MdXX_Stat_Md4_Stat
    (&MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md4_Stat_re);

  /* End of Outputs for SubSystem: '<Root>/MdXX_StatusToNetWork_Cal_sys' */

  /* Inport: '<Root>/MdXX_Stat_Md32_Stat' */
  Rte_Read_MdXX_Stat_Md32_Stat(&tmpRead_l);

  /* Inport: '<Root>/MdXX_Stat_Md31_Stat' */
  Rte_Read_MdXX_Stat_Md31_Stat(&tmpRead_k);

  /* Inport: '<Root>/MdXX_Stat_Md30_Stat' */
  Rte_Read_MdXX_Stat_Md30_Stat(&tmpRead_j);

  /* Outputs for Function Call SubSystem: '<Root>/MdXX_StatusToNetWork_Cal_sys' */
  /* SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md3_Stat_readOutport1' incorporates:
   *  Inport: '<Root>/MdXX_Stat_Md3_Stat'
   */
  Rte_Read_MdXX_Stat_Md3_Stat
    (&MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md3_Stat_re);

  /* End of Outputs for SubSystem: '<Root>/MdXX_StatusToNetWork_Cal_sys' */

  /* Inport: '<Root>/MdXX_Stat_Md29_Stat' */
  Rte_Read_MdXX_Stat_Md29_Stat(&tmpRead_i);

  /* Inport: '<Root>/MdXX_Stat_Md28_Stat' */
  Rte_Read_MdXX_Stat_Md28_Stat(&tmpRead_h);

  /* Inport: '<Root>/MdXX_Stat_Md27_Stat' */
  Rte_Read_MdXX_Stat_Md27_Stat(&tmpRead_g);

  /* Inport: '<Root>/MdXX_Stat_Md26_Stat' */
  Rte_Read_MdXX_Stat_Md26_Stat(&tmpRead_f);

  /* Inport: '<Root>/MdXX_Stat_Md25_Stat' */
  Rte_Read_MdXX_Stat_Md25_Stat(&tmpRead_e);

  /* Inport: '<Root>/MdXX_Stat_Md24_Stat' */
  Rte_Read_MdXX_Stat_Md24_Stat(&tmpRead_d);

  /* Inport: '<Root>/MdXX_Stat_Md23_Stat' */
  Rte_Read_MdXX_Stat_Md23_Stat(&tmpRead_c);

  /* Inport: '<Root>/MdXX_Stat_Md22_Stat' */
  Rte_Read_MdXX_Stat_Md22_Stat(&tmpRead_b);

  /* Inport: '<Root>/MdXX_Stat_Md21_Stat' */
  Rte_Read_MdXX_Stat_Md21_Stat(&tmpRead_a);

  /* Inport: '<Root>/MdXX_Stat_Md20_Stat' */
  Rte_Read_MdXX_Stat_Md20_Stat(&tmpRead_9);

  /* Outputs for Function Call SubSystem: '<Root>/MdXX_StatusToNetWork_Cal_sys' */
  /* SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md2_Stat_readOutport1' incorporates:
   *  Inport: '<Root>/MdXX_Stat_Md2_Stat'
   */
  Rte_Read_MdXX_Stat_Md2_Stat
    (&MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md2_Stat_re);

  /* End of Outputs for SubSystem: '<Root>/MdXX_StatusToNetWork_Cal_sys' */

  /* Inport: '<Root>/MdXX_Stat_Md19_Stat' */
  Rte_Read_MdXX_Stat_Md19_Stat(&tmpRead_8);

  /* Inport: '<Root>/MdXX_Stat_Md18_Stat' */
  Rte_Read_MdXX_Stat_Md18_Stat(&tmpRead_7);

  /* Inport: '<Root>/MdXX_Stat_Md17_Stat' */
  Rte_Read_MdXX_Stat_Md17_Stat(&tmpRead_6);

  /* Inport: '<Root>/MdXX_Stat_Md16_Stat' */
  Rte_Read_MdXX_Stat_Md16_Stat(&tmpRead_5);

  /* Inport: '<Root>/MdXX_Stat_Md15_Stat' */
  Rte_Read_MdXX_Stat_Md15_Stat(&tmpRead_4);

  /* Inport: '<Root>/MdXX_Stat_Md14_Stat' */
  Rte_Read_MdXX_Stat_Md14_Stat(&tmpRead_3);

  /* Inport: '<Root>/MdXX_Stat_Md13_Stat' */
  Rte_Read_MdXX_Stat_Md13_Stat(&tmpRead_2);

  /* Inport: '<Root>/MdXX_Stat_Md12_Stat' */
  Rte_Read_MdXX_Stat_Md12_Stat(&tmpRead_1);

  /* Inport: '<Root>/MdXX_Stat_Md11_Stat' */
  Rte_Read_MdXX_Stat_Md11_Stat(&tmpRead_0);

  /* Inport: '<Root>/MdXX_Stat_Md10_Stat' */
  Rte_Read_MdXX_Stat_Md10_Stat(&tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/MdXX_StatusToNetWork_Cal_sys' */
  /* SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md1_Stat_readOutport1' incorporates:
   *  Inport: '<Root>/MdXX_Stat_Md1_Stat'
   */
  Rte_Read_MdXX_Stat_Md1_Stat
    (&MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md1_Stat_re);

  /* SignalConversion: '<S4>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Chart: '<S3>/Chart'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md10_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md11_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md12_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md13_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md14_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md15_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md16_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md17_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md18_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md19_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md20_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md21_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md22_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md23_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md24_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md25_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md26_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md27_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md28_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md29_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md30_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md31_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md32_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md6_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md7_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md8_Stat_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md9_Stat_readOutport1'
   */
  rtb_TmpSignalConversionAtSFunct[0] =
    MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md1_Stat_re;
  rtb_TmpSignalConversionAtSFunct[1] =
    MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md2_Stat_re;
  rtb_TmpSignalConversionAtSFunct[2] =
    MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md3_Stat_re;
  rtb_TmpSignalConversionAtSFunct[3] =
    MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md4_Stat_re;
  rtb_TmpSignalConversionAtSFunct[4] =
    MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md5_Stat_re;
  rtb_TmpSignalConversionAtSFunct[5] = tmpRead_m;
  rtb_TmpSignalConversionAtSFunct[6] = tmpRead_n;
  rtb_TmpSignalConversionAtSFunct[7] = tmpRead_o;
  rtb_TmpSignalConversionAtSFunct[8] = tmpRead_p;
  rtb_TmpSignalConversionAtSFunct[9] = tmpRead;
  rtb_TmpSignalConversionAtSFunct[10] = tmpRead_0;
  rtb_TmpSignalConversionAtSFunct[11] = tmpRead_1;
  rtb_TmpSignalConversionAtSFunct[12] = tmpRead_2;
  rtb_TmpSignalConversionAtSFunct[13] = tmpRead_3;
  rtb_TmpSignalConversionAtSFunct[14] = tmpRead_4;
  rtb_TmpSignalConversionAtSFunct[15] = tmpRead_5;
  rtb_TmpSignalConversionAtSFunct[16] = tmpRead_6;
  rtb_TmpSignalConversionAtSFunct[17] = tmpRead_7;
  rtb_TmpSignalConversionAtSFunct[18] = tmpRead_8;
  rtb_TmpSignalConversionAtSFunct[19] = tmpRead_9;
  rtb_TmpSignalConversionAtSFunct[20] = tmpRead_a;
  rtb_TmpSignalConversionAtSFunct[21] = tmpRead_b;
  rtb_TmpSignalConversionAtSFunct[22] = tmpRead_c;
  rtb_TmpSignalConversionAtSFunct[23] = tmpRead_d;
  rtb_TmpSignalConversionAtSFunct[24] = tmpRead_e;
  rtb_TmpSignalConversionAtSFunct[25] = tmpRead_f;
  rtb_TmpSignalConversionAtSFunct[26] = tmpRead_g;
  rtb_TmpSignalConversionAtSFunct[27] = tmpRead_h;
  rtb_TmpSignalConversionAtSFunct[28] = tmpRead_i;
  rtb_TmpSignalConversionAtSFunct[29] = tmpRead_j;
  rtb_TmpSignalConversionAtSFunct[30] = tmpRead_k;
  rtb_TmpSignalConversionAtSFunct[31] = tmpRead_l;

  /* Chart: '<S3>/Chart' */
  i = 0U;

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md10_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md10_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md10_CrtStat_Val(tmpRead);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md11_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md11_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md11_CrtStat_Val(tmpRead_0);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md12_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md12_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md12_CrtStat_Val(tmpRead_1);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md13_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md13_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md13_CrtStat_Val(tmpRead_2);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md14_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md14_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md14_CrtStat_Val(tmpRead_3);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md15_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md15_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md15_CrtStat_Val(tmpRead_4);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md16_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md16_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md16_CrtStat_Val(tmpRead_5);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md17_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md17_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md17_CrtStat_Val(tmpRead_6);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md18_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md18_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md18_CrtStat_Val(tmpRead_7);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md19_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md19_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md19_CrtStat_Val(tmpRead_8);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md20_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md20_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md20_CrtStat_Val(tmpRead_9);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md21_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md21_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md21_CrtStat_Val(tmpRead_a);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md22_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md22_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md22_CrtStat_Val(tmpRead_b);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md23_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md23_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md23_CrtStat_Val(tmpRead_c);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md24_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md24_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md24_CrtStat_Val(tmpRead_d);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md25_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md25_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md25_CrtStat_Val(tmpRead_e);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md26_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md26_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md26_CrtStat_Val(tmpRead_f);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md27_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md27_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md27_CrtStat_Val(tmpRead_g);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md28_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md28_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md28_CrtStat_Val(tmpRead_h);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md29_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md29_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md29_CrtStat_Val(tmpRead_i);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md30_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md30_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md30_CrtStat_Val(tmpRead_j);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md31_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md31_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md31_CrtStat_Val(tmpRead_k);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md32_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md32_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md32_CrtStat_Val(tmpRead_l);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md6_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md6_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md6_CrtStat_Val(tmpRead_m);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md7_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md7_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md7_CrtStat_Val(tmpRead_n);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md8_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md8_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md8_CrtStat_Val(tmpRead_o);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md9_CrtStat_Val' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtMdXX_Stat_Md9_Stat_readOutport1'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md9_CrtStat_Val(tmpRead_p);

  /* Chart: '<S3>/Chart' incorporates:
   *  Constant: '<S3>/PA_KeSMSbSRSPosNumConfig_Val'
   *  SignalConversion: '<S1>/TmpLatchAtPosArray_Val_readOutport1'
   */
  while (i < Rte_Prm_KeSMSbSRSPosNumConfig_Val()) {
    tmp = i + 1;
    if (tmpRead_q[tmp] < 1) {
      MdXX_StatusToNetWork_B.ModeStatSRSswArray[i] = 0U;
    } else {
      MdXX_StatusToNetWork_B.ModeStatSRSswArray[i] =
        rtb_TmpSignalConversionAtSFunct[tmpRead_q[tmp] - 1];
    }

    i = (uint8)tmp;
  }

  while (i < 10) {
    MdXX_StatusToNetWork_B.ModeStatSRSswArray[i] = 0U;
    i++;
  }

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant10'
   *  Constant: '<S3>/Constant13'
   *  Constant: '<S3>/Constant14'
   *  Constant: '<S3>/Constant16'
   *  Constant: '<S3>/Constant18'
   *  Constant: '<S3>/Constant2'
   *  Constant: '<S3>/Constant20'
   *  Constant: '<S3>/Constant4'
   *  Constant: '<S3>/Constant6'
   *  Constant: '<S3>/Constant8'
   *  RelationalOperator: '<S3>/Relational Operator'
   *  RelationalOperator: '<S3>/Relational Operator1'
   *  RelationalOperator: '<S3>/Relational Operator2'
   *  RelationalOperator: '<S3>/Relational Operator3'
   *  RelationalOperator: '<S3>/Relational Operator4'
   *  RelationalOperator: '<S3>/Relational Operator5'
   *  RelationalOperator: '<S3>/Relational Operator6'
   *  RelationalOperator: '<S3>/Relational Operator7'
   *  RelationalOperator: '<S3>/Relational Operator8'
   *  RelationalOperator: '<S3>/Relational Operator9'
   *  Switch: '<S3>/Switch1'
   *  Switch: '<S3>/Switch2'
   *  Switch: '<S3>/Switch3'
   *  Switch: '<S3>/Switch4'
   *  Switch: '<S3>/Switch5'
   *  Switch: '<S3>/Switch6'
   *  Switch: '<S3>/Switch7'
   *  Switch: '<S3>/Switch8'
   *  Switch: '<S3>/Switch9'
   */
  if (2 == MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md1_Stat_re) {
    /* Outport: '<Root>/IfVeSMSuStPassCmprtMdCrtMdStat_Val' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    (void) Rte_Write_IfVeSMSuStPassCmprtMdCrtMdStat_Val(11U);
  } else {
    if (2 == MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md2_Stat_re) {
      /* Switch: '<S3>/Switch1' incorporates:
       *  Constant: '<S3>/Constant3'
       */
      tmpRead_p = 12U;
    } else if (2 == MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md3_Stat_re) {
      /* Switch: '<S3>/Switch2' incorporates:
       *  Constant: '<S3>/Constant5'
       *  Switch: '<S3>/Switch1'
       */
      tmpRead_p = 13U;
    } else if (2 == MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md4_Stat_re) {
      /* Switch: '<S3>/Switch3' incorporates:
       *  Constant: '<S3>/Constant7'
       *  Switch: '<S3>/Switch1'
       *  Switch: '<S3>/Switch2'
       */
      tmpRead_p = 14U;
    } else if (2 == MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md5_Stat_re) {
      /* Switch: '<S3>/Switch4' incorporates:
       *  Constant: '<S3>/Constant9'
       *  Switch: '<S3>/Switch1'
       *  Switch: '<S3>/Switch2'
       *  Switch: '<S3>/Switch3'
       */
      tmpRead_p = 15U;
    } else if (1 == MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md1_Stat_re) {
      /* Switch: '<S3>/Switch5' incorporates:
       *  Constant: '<S3>/Constant12'
       *  Switch: '<S3>/Switch1'
       *  Switch: '<S3>/Switch2'
       *  Switch: '<S3>/Switch3'
       *  Switch: '<S3>/Switch4'
       */
      tmpRead_p = 1U;
    } else if (1 == MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md2_Stat_re) {
      /* Switch: '<S3>/Switch6' incorporates:
       *  Constant: '<S3>/Constant15'
       *  Switch: '<S3>/Switch1'
       *  Switch: '<S3>/Switch2'
       *  Switch: '<S3>/Switch3'
       *  Switch: '<S3>/Switch4'
       *  Switch: '<S3>/Switch5'
       */
      tmpRead_p = 2U;
    } else if (1 == MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md3_Stat_re) {
      /* Switch: '<S3>/Switch7' incorporates:
       *  Constant: '<S3>/Constant17'
       *  Switch: '<S3>/Switch1'
       *  Switch: '<S3>/Switch2'
       *  Switch: '<S3>/Switch3'
       *  Switch: '<S3>/Switch4'
       *  Switch: '<S3>/Switch5'
       *  Switch: '<S3>/Switch6'
       */
      tmpRead_p = 3U;
    } else if (1 == MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md4_Stat_re) {
      /* Switch: '<S3>/Switch8' incorporates:
       *  Constant: '<S3>/Constant19'
       *  Switch: '<S3>/Switch1'
       *  Switch: '<S3>/Switch2'
       *  Switch: '<S3>/Switch3'
       *  Switch: '<S3>/Switch4'
       *  Switch: '<S3>/Switch5'
       *  Switch: '<S3>/Switch6'
       *  Switch: '<S3>/Switch7'
       */
      tmpRead_p = 4U;
    } else if (1 == MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md5_Stat_re) {
      /* Switch: '<S3>/Switch9' incorporates:
       *  Constant: '<S3>/Constant21'
       *  Switch: '<S3>/Switch1'
       *  Switch: '<S3>/Switch2'
       *  Switch: '<S3>/Switch3'
       *  Switch: '<S3>/Switch4'
       *  Switch: '<S3>/Switch5'
       *  Switch: '<S3>/Switch6'
       *  Switch: '<S3>/Switch7'
       *  Switch: '<S3>/Switch8'
       */
      tmpRead_p = 5U;
    } else {
      /* Switch: '<S3>/Switch1' incorporates:
       *  Constant: '<S3>/Constant11'
       *  Switch: '<S3>/Switch2'
       *  Switch: '<S3>/Switch3'
       *  Switch: '<S3>/Switch4'
       *  Switch: '<S3>/Switch5'
       *  Switch: '<S3>/Switch6'
       *  Switch: '<S3>/Switch7'
       *  Switch: '<S3>/Switch8'
       *  Switch: '<S3>/Switch9'
       */
      tmpRead_p = 0U;
    }

    /* Outport: '<Root>/IfVeSMSuStPassCmprtMdCrtMdStat_Val' incorporates:
     *  Constant: '<S3>/Constant13'
     *  Constant: '<S3>/Constant14'
     *  Constant: '<S3>/Constant16'
     *  Constant: '<S3>/Constant18'
     *  Constant: '<S3>/Constant20'
     *  Constant: '<S3>/Constant4'
     *  Constant: '<S3>/Constant6'
     *  Constant: '<S3>/Constant8'
     *  RelationalOperator: '<S3>/Relational Operator2'
     *  RelationalOperator: '<S3>/Relational Operator3'
     *  RelationalOperator: '<S3>/Relational Operator4'
     *  RelationalOperator: '<S3>/Relational Operator5'
     *  RelationalOperator: '<S3>/Relational Operator6'
     *  RelationalOperator: '<S3>/Relational Operator7'
     *  RelationalOperator: '<S3>/Relational Operator8'
     *  RelationalOperator: '<S3>/Relational Operator9'
     *  Switch: '<S3>/Switch1'
     *  Switch: '<S3>/Switch2'
     *  Switch: '<S3>/Switch3'
     *  Switch: '<S3>/Switch4'
     *  Switch: '<S3>/Switch5'
     *  Switch: '<S3>/Switch6'
     *  Switch: '<S3>/Switch7'
     *  Switch: '<S3>/Switch8'
     *  Switch: '<S3>/Switch9'
     */
    (void) Rte_Write_IfVeSMSuStPassCmprtMdCrtMdStat_Val(tmpRead_p);
  }

  /* End of Switch: '<S3>/Switch' */

  /* Outport: '<Root>/IfVeSMSuSRSCrtMdIndTyp_67_2_Val' incorporates:
   *  Constant: '<S3>/Constant'
   *  DataTypeConversion: '<S1>/Data Type Conversion10'
   */
  (void) Rte_Write_IfVeSMSuSRSCrtMdIndTyp_67_2_Val(3U);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw1_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw1_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw1_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[0]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw2_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw1_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw2_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[1]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw3_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw1_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw3_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[2]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw4_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw1_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw4_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[3]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw5_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw1_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw5_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[4]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw6_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw1_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw6_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[5]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw7_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw1_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw7_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[6]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw8_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw1_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw8_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[7]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw9_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw1_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw9_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[8]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw10_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw1_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw10_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[9]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw1_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw10_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw1_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[0]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw2_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw10_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw2_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[1]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw3_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw10_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw3_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[2]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw4_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw10_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw4_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[3]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw5_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw10_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw5_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[4]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw6_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw10_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw6_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[5]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw7_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw10_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw7_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[6]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw8_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw10_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw8_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[7]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw9_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw10_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw9_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[8]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw10_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw10_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw10_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[9]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw1_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw2_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw1_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[0]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw2_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw2_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw2_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[1]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw3_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw2_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw3_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[2]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw4_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw2_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw4_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[3]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw5_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw2_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw5_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[4]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw6_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw2_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw6_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[5]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw7_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw2_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw7_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[6]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw8_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw2_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw8_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[7]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw9_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw2_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw9_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[8]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw10_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw2_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw10_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[9]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw1_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw3_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw1_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[0]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw2_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw3_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw2_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[1]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw3_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw3_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw3_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[2]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw4_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw3_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw4_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[3]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw5_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw3_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw5_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[4]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw6_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw3_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw6_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[5]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw7_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw3_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw7_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[6]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw8_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw3_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw8_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[7]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw9_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw3_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw9_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[8]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw10_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw3_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw10_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[9]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw1_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw4_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw1_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[0]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw2_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw4_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw2_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[1]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw3_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw4_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw3_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[2]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw4_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw4_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw4_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[3]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw5_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw4_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw5_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[4]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw6_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw4_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw6_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[5]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw7_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw4_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw7_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[6]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw8_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw4_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw8_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[7]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw9_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw4_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw9_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[8]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw10_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw4_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw10_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[9]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw1_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw5_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw1_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[0]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw2_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw5_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw2_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[1]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw3_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw5_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw3_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[2]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw4_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw5_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw4_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[3]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw5_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw5_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw5_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[4]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw6_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw5_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw6_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[5]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw7_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw5_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw7_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[6]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw8_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw5_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw8_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[7]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw9_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw5_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw9_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[8]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw10_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw5_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw10_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[9]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw1_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw6_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw1_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[0]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw2_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw6_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw2_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[1]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw3_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw6_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw3_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[2]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw4_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw6_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw4_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[3]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw5_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw6_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw5_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[4]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw6_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw6_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw6_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[5]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw7_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw6_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw7_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[6]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw8_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw6_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw8_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[7]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw9_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw6_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw9_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[8]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw10_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw6_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw10_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[9]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw1_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw7_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw1_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[0]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw2_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw7_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw2_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[1]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw3_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw7_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw3_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[2]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw4_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw7_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw4_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[3]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw5_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw7_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw5_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[4]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw6_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw7_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw6_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[5]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw7_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw7_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw7_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[6]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw8_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw7_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw8_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[7]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw9_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw7_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw9_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[8]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw10_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw7_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw10_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[9]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw1_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw8_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw1_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[0]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw2_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw8_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw2_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[1]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw3_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw8_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw3_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[2]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw4_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw8_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw4_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[3]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw5_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw8_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw5_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[4]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw6_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw8_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw6_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[5]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw7_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw8_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw7_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[6]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw8_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw8_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw8_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[7]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw9_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw8_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw9_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[8]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw10_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw8_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw10_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[9]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw1_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw9_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw1_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[0]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw2_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw9_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw2_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[1]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw3_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw9_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw3_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[2]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw4_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw9_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw4_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[3]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw5_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw9_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw5_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[4]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw6_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw9_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw6_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[5]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw7_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw9_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw7_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[6]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw8_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw9_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw8_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[7]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw9_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw9_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw9_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[8]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw10_Stat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuSRSCrt_MdSw9_Stat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw10_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[9]);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md1_CrtStat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuStPassCmprtMd_Md1_CrtStat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md1_CrtStat_Val
    (MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md1_Stat_re);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md2_CrtStat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuStPassCmprtMd_Md2_CrtStat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md2_CrtStat_Val
    (MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md2_Stat_re);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md3_CrtStat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuStPassCmprtMd_Md3_CrtStat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md3_CrtStat_Val
    (MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md3_Stat_re);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md4_CrtStat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuStPassCmprtMd_Md4_CrtStat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md4_CrtStat_Val
    (MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md4_Stat_re);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md5_CrtStat_Val' incorporates:
   *  Outport: '<S1>/IfVeSMSuStPassCmprtMd_Md5_CrtStat_Val_write'
   */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md5_CrtStat_Val
    (MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md5_Stat_re);

  /* End of Outputs for SubSystem: '<Root>/MdXX_StatusToNetWork_Cal_sys' */

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw1_Stat_Val' */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw1_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[0]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw10_Stat_Val' */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw10_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[9]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw2_Stat_Val' */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw2_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[1]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw3_Stat_Val' */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw3_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[2]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw4_Stat_Val' */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw4_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[3]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw5_Stat_Val' */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw5_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[4]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw6_Stat_Val' */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw6_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[5]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw7_Stat_Val' */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw7_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[6]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw8_Stat_Val' */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw8_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[7]);

  /* Outport: '<Root>/IfVeSMSuSRSCrt_MdSw9_Stat_Val' */
  (void) Rte_Write_IfVeSMSuSRSCrt_MdSw9_Stat_Val
    (MdXX_StatusToNetWork_B.ModeStatSRSswArray[8]);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md1_CrtStat_Val' */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md1_CrtStat_Val
    (MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md1_Stat_re);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md2_CrtStat_Val' */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md2_CrtStat_Val
    (MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md2_Stat_re);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md3_CrtStat_Val' */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md3_CrtStat_Val
    (MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md3_Stat_re);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md4_CrtStat_Val' */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md4_CrtStat_Val
    (MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md4_Stat_re);

  /* Outport: '<Root>/IfVeSMSuStPassCmprtMd_Md5_CrtStat_Val' */
  (void) Rte_Write_IfVeSMSuStPassCmprtMd_Md5_CrtStat_Val
    (MdXX_StatusToNetWork_B.TmpLatchAtMdXX_Stat_Md5_Stat_re);
}

/* Model initialize function */
void MdXX_StatusToNetWork_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
