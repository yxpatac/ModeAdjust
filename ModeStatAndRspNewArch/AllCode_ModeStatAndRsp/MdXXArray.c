/*
 * File: MdXXArray.c
 *
 * Code generated for Simulink model 'MdXXArray'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 25 10:34:57 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MdXXArray.h"

/* Model step function */
void MdXXArray_Cal()
{
  SrcReqTp1 tmpRead;
  SrcReqTp1 tmpRead_0;
  SrcReqTp1 tmpRead_1;
  SrcReqTp1 tmpRead_2;
  boolean tmpRead_3;
  boolean tmpRead_4;
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
  IntEnable tmpRead_p;
  IntEnable tmpRead_q;
  IntEnable tmpRead_r;
  IntEnable tmpRead_s;
  IntEnable tmpRead_t;
  IntEnable tmpRead_u;
  IntEnable tmpRead_v;
  IntEnable tmpRead_w;
  IntEnable tmpRead_x;
  IntEnable tmpRead_y;
  IntEnable tmpRead_z;
  IntEnable tmpRead_10;
  IntEnable tmpRead_11;
  IntEnable tmpRead_12;
  IntEnable tmpRead_13;
  IntEnable tmpRead_14;
  IntEnable tmpRead_15;
  IntEnable tmpRead_16;
  IntEnable tmpRead_17;
  IntEnable tmpRead_18;
  IntEnable tmpRead_19;
  IntEnable tmpRead_1a;
  IntEnable tmpRead_1b;
  IntEnable tmpRead_1c;
  IntEnable tmpRead_1d;
  IntEnable tmpRead_1e;
  IntEnable tmpRead_1f;
  IntEnable tmpRead_1g;
  IntEnable tmpRead_1h;
  IntEnable tmpRead_1i;
  IntEnable tmpRead_1j;
  IntEnable tmpRead_1k;
  IntEnable tmpRead_1l;
  IntEnable tmpRead_1m;
  IntEnable tmpRead_1n;
  IntEnable tmpRead_1o;
  IntEnable tmpRead_1p;
  IntEnable tmpRead_1q;
  IntEnable tmpRead_1r;
  IntEnable tmpRead_1s;
  IntEnable tmpRead_1t;
  IntEnable tmpRead_1u;
  IntEnable tmpRead_1v;
  IntEnable tmpRead_1w;
  IntEnable tmpRead_1x;
  IntEnable tmpRead_1y;
  IntEnable tmpRead_1z;
  IntEnable tmpRead_20;
  IntEnable tmpRead_21;
  IntEnable tmpRead_22;
  IntEnable tmpRead_23;
  IntEnable tmpRead_24;
  SrcReqTp1 tmpRead_25;
  SrcReqTp1 tmpRead_26;
  SrcReqTp1 tmpRead_27[32];
  IntEnable tmpRead_28[32];

  /* Inport: '<Root>/WelcomeFwdMdSrcTp_Val' */
  Rte_Read_WelcomeFwdMdSrcTp_Val(&tmpRead_26);

  /* Inport: '<Root>/WelcomeBkwdMdSrcTp_Val' */
  Rte_Read_WelcomeBkwdMdSrcTp_Val(&tmpRead_25);

  /* Inport: '<Root>/SwIntWelcomeFwd_Val' */
  Rte_Read_SwIntWelcomeFwd_Val(&tmpRead_24);

  /* Inport: '<Root>/SwIntWelcomeBkwd_Val' */
  Rte_Read_SwIntWelcomeBkwd_Val(&tmpRead_23);

  /* Inport: '<Root>/SwIntRtVip_Val' */
  Rte_Read_SwIntRtVip_Val(&tmpRead_22);

  /* Inport: '<Root>/SwIntRtRcvy_Val' */
  Rte_Read_SwIntRtRcvy_Val(&tmpRead_21);

  /* Inport: '<Root>/SwIntRtLy_Val' */
  Rte_Read_SwIntRtLy_Val(&tmpRead_20);

  /* Inport: '<Root>/SwIntRtLug_Val' */
  Rte_Read_SwIntRtLug_Val(&tmpRead_1z);

  /* Inport: '<Root>/SwIntRtFamly_Val' */
  Rte_Read_SwIntRtFamly_Val(&tmpRead_1y);

  /* Inport: '<Root>/SwIntLgrstOpenRt_Val' */
  Rte_Read_SwIntLgrstOpenRt_Val(&tmpRead_1x);

  /* Inport: '<Root>/SwIntLgrstOpenLt_Val' */
  Rte_Read_SwIntLgrstOpenLt_Val(&tmpRead_1w);

  /* Inport: '<Root>/SwIntLgrstCloseRt_Val' */
  Rte_Read_SwIntLgrstCloseRt_Val(&tmpRead_1v);

  /* Inport: '<Root>/SwIntLgrstCloseLt_Val' */
  Rte_Read_SwIntLgrstCloseLt_Val(&tmpRead_1u);

  /* Inport: '<Root>/SwIntLfVip_Val' */
  Rte_Read_SwIntLfVip_Val(&tmpRead_1t);

  /* Inport: '<Root>/SwIntLfRcvy_Val' */
  Rte_Read_SwIntLfRcvy_Val(&tmpRead_1s);

  /* Inport: '<Root>/SwIntLfLy_Val' */
  Rte_Read_SwIntLfLy_Val(&tmpRead_1r);

  /* Inport: '<Root>/SwIntLfLug_Val' */
  Rte_Read_SwIntLfLug_Val(&tmpRead_1q);

  /* Inport: '<Root>/SwIntLfFamly_Val' */
  Rte_Read_SwIntLfFamly_Val(&tmpRead_1p);

  /* Inport: '<Root>/SwIntINTM_Val' */
  Rte_Read_SwIntINTM_Val(&tmpRead_1o);

  /* Inport: '<Root>/SwIntIntimacyRt_Val' */
  Rte_Read_SwIntIntimacyRt_Val(&tmpRead_1n);

  /* Inport: '<Root>/SwIntEZQ4sR_Val' */
  Rte_Read_SwIntEZQ4sR_Val(&tmpRead_1m);

  /* Inport: '<Root>/SwIntEZQ4sL_Val' */
  Rte_Read_SwIntEZQ4sL_Val(&tmpRead_1l);

  /* Inport: '<Root>/SwIntEZE4sR_Val' */
  Rte_Read_SwIntEZE4sR_Val(&tmpRead_1k);

  /* Inport: '<Root>/SwIntEZE4sL_Val' */
  Rte_Read_SwIntEZE4sL_Val(&tmpRead_1j);

  /* Inport: '<Root>/SwIntAllVip_Val' */
  Rte_Read_SwIntAllVip_Val(&tmpRead_1i);

  /* Inport: '<Root>/SwIntAllLug_Val' */
  Rte_Read_SwIntAllLug_Val(&tmpRead_1h);

  /* Inport: '<Root>/SwIntAcsExt_Val' */
  Rte_Read_SwIntAcsExt_Val(&tmpRead_1g);

  /* Inport: '<Root>/SwIntAcsEnty_Val' */
  Rte_Read_SwIntAcsEnty_Val(&tmpRead_1f);

  /* Inport: '<Root>/SoftIntWelcomeFwd_Val' */
  Rte_Read_SoftIntWelcomeFwd_Val(&tmpRead_1e);

  /* Inport: '<Root>/SoftIntWelcomeBkwd_Val' */
  Rte_Read_SoftIntWelcomeBkwd_Val(&tmpRead_1d);

  /* Inport: '<Root>/SoftIntRtVip_Val' */
  Rte_Read_SoftIntRtVip_Val(&tmpRead_1c);

  /* Inport: '<Root>/SoftIntRtRcvy_Val' */
  Rte_Read_SoftIntRtRcvy_Val(&tmpRead_1b);

  /* Inport: '<Root>/SoftIntRtLy_Val' */
  Rte_Read_SoftIntRtLy_Val(&tmpRead_1a);

  /* Inport: '<Root>/SoftIntRtLug_Val' */
  Rte_Read_SoftIntRtLug_Val(&tmpRead_19);

  /* Inport: '<Root>/SoftIntRtFamly_Val' */
  Rte_Read_SoftIntRtFamly_Val(&tmpRead_18);

  /* Inport: '<Root>/SoftIntLgrstOpenRt_Val' */
  Rte_Read_SoftIntLgrstOpenRt_Val(&tmpRead_17);

  /* Inport: '<Root>/SoftIntLgrstOpenLt_Val' */
  Rte_Read_SoftIntLgrstOpenLt_Val(&tmpRead_16);

  /* Inport: '<Root>/SoftIntLgrstCloseRt_Val' */
  Rte_Read_SoftIntLgrstCloseRt_Val(&tmpRead_15);

  /* Inport: '<Root>/SoftIntLgrstCloseLt_Val' */
  Rte_Read_SoftIntLgrstCloseLt_Val(&tmpRead_14);

  /* Inport: '<Root>/SoftIntLfVip_Val' */
  Rte_Read_SoftIntLfVip_Val(&tmpRead_13);

  /* Inport: '<Root>/SoftIntLfRcvy_Val' */
  Rte_Read_SoftIntLfRcvy_Val(&tmpRead_12);

  /* Inport: '<Root>/SoftIntLfLy_Val' */
  Rte_Read_SoftIntLfLy_Val(&tmpRead_11);

  /* Inport: '<Root>/SoftIntLfLug_Val' */
  Rte_Read_SoftIntLfLug_Val(&tmpRead_10);

  /* Inport: '<Root>/SoftIntLfFamly_Val' */
  Rte_Read_SoftIntLfFamly_Val(&tmpRead_z);

  /* Inport: '<Root>/SoftIntINTM_Val' */
  Rte_Read_SoftIntINTM_Val(&tmpRead_y);

  /* Inport: '<Root>/SoftIntIntimacyRt_Val' */
  Rte_Read_SoftIntIntimacyRt_Val(&tmpRead_x);

  /* Inport: '<Root>/SoftIntEZQ4sR_Val' */
  Rte_Read_SoftIntEZQ4sR_Val(&tmpRead_w);

  /* Inport: '<Root>/SoftIntEZQ4sL_Val' */
  Rte_Read_SoftIntEZQ4sL_Val(&tmpRead_v);

  /* Inport: '<Root>/SoftIntEZE4sR_Val' */
  Rte_Read_SoftIntEZE4sR_Val(&tmpRead_u);

  /* Inport: '<Root>/SoftIntEZE4sL_Val' */
  Rte_Read_SoftIntEZE4sL_Val(&tmpRead_t);

  /* Inport: '<Root>/SoftIntAllVip_Val' */
  Rte_Read_SoftIntAllVip_Val(&tmpRead_s);

  /* Inport: '<Root>/SoftIntAllLug_Val' */
  Rte_Read_SoftIntAllLug_Val(&tmpRead_r);

  /* Inport: '<Root>/SoftIntAcsExt_Val' */
  Rte_Read_SoftIntAcsExt_Val(&tmpRead_q);

  /* Inport: '<Root>/SoftIntAcsEnty_Val' */
  Rte_Read_SoftIntAcsEnty_Val(&tmpRead_p);

  /* Inport: '<Root>/RtVipSrcReqTp_Val' */
  Rte_Read_RtVipSrcReqTp_Val(&tmpRead_o);

  /* Inport: '<Root>/RtRcvySrcReqTp_Val' */
  Rte_Read_RtRcvySrcReqTp_Val(&tmpRead_n);

  /* Inport: '<Root>/RtLySrcReqTp_Val' */
  Rte_Read_RtLySrcReqTp_Val(&tmpRead_m);

  /* Inport: '<Root>/RtLugSrcReqTp_Val' */
  Rte_Read_RtLugSrcReqTp_Val(&tmpRead_l);

  /* Inport: '<Root>/RtFamlySrcReqTp_Val' */
  Rte_Read_RtFamlySrcReqTp_Val(&tmpRead_k);

  /* Inport: '<Root>/LtVipSrcReqTp_Val' */
  Rte_Read_LtVipSrcReqTp_Val(&tmpRead_j);

  /* Inport: '<Root>/LtRcvySrcReqTp_Val' */
  Rte_Read_LtRcvySrcReqTp_Val(&tmpRead_i);

  /* Inport: '<Root>/LtLugSrcReqTp_Val' */
  Rte_Read_LtLugSrcReqTp_Val(&tmpRead_h);

  /* Inport: '<Root>/LgrstOpenRtSrcReqTp_Val' */
  Rte_Read_LgrstOpenRtSrcReqTp_Val(&tmpRead_g);

  /* Inport: '<Root>/LgrstOpenLtSrcReqTp_Val' */
  Rte_Read_LgrstOpenLtSrcReqTp_Val(&tmpRead_f);

  /* Inport: '<Root>/LgrstCloseRtSrcReqTp_Val' */
  Rte_Read_LgrstCloseRtSrcReqTp_Val(&tmpRead_e);

  /* Inport: '<Root>/LgrstCloseLtSrcReqTp_Val' */
  Rte_Read_LgrstCloseLtSrcReqTp_Val(&tmpRead_d);

  /* Inport: '<Root>/LfLySrcReqTp_Val' */
  Rte_Read_LfLySrcReqTp_Val(&tmpRead_c);

  /* Inport: '<Root>/LfFamlySrcReqTp_Val' */
  Rte_Read_LfFamlySrcReqTp_Val(&tmpRead_b);

  /* Inport: '<Root>/INTMSrcReqTp_Val' */
  Rte_Read_INTMSrcReqTp_Val(&tmpRead_a);

  /* Inport: '<Root>/IntimacyRtMdSrcTp_Val' */
  Rte_Read_IntimacyRtMdSrcTp_Val(&tmpRead_9);

  /* Inport: '<Root>/EZQ4sRMdSrcTp_Val' */
  Rte_Read_EZQ4sRMdSrcTp_Val(&tmpRead_8);

  /* Inport: '<Root>/EZQ4sLMdSrcTp_Val' */
  Rte_Read_EZQ4sLMdSrcTp_Val(&tmpRead_7);

  /* Inport: '<Root>/EZE4sRMdSrcTp_Val' */
  Rte_Read_EZE4sRMdSrcTp_Val(&tmpRead_6);

  /* Inport: '<Root>/EZE4sLMdSrcTp_Val' */
  Rte_Read_EZE4sLMdSrcTp_Val(&tmpRead_5);

  /* Inport: '<Root>/CommExitCondwithSpeed_Val' */
  Rte_Read_CommExitCondwithSpeed_Val(&tmpRead_4);

  /* Inport: '<Root>/CommExitCond_Val' */
  Rte_Read_CommExitCond_Val(&tmpRead_3);

  /* Inport: '<Root>/AllVipSrcReqTp_Val' */
  Rte_Read_AllVipSrcReqTp_Val(&tmpRead_2);

  /* Inport: '<Root>/AllLugSrcReqTp_Val' */
  Rte_Read_AllLugSrcReqTp_Val(&tmpRead_1);

  /* Inport: '<Root>/acsExtMdSrcTp_Val' */
  Rte_Read_acsExtMdSrcTp_Val(&tmpRead_0);

  /* Inport: '<Root>/acsEntyMdSrcTp_Val' */
  Rte_Read_acsEntyMdSrcTp_Val(&tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/MdXXArray_Cal_sys' */
  /* SignalConversion: '<S1>/OutportBufferForMdXX_SWIntArray_Val_write' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtSwIntAcsEnty_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntAcsExt_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntAllLug_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntAllVip_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntEZE4sL_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntEZE4sR_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntEZQ4sL_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntEZQ4sR_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntINTM_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntIntimacyRt_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntLfFamly_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntLfLug_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntLfLy_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntLfRcvy_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntLfVip_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntLgrstCloseLt_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntLgrstCloseRt_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntLgrstOpenLt_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntLgrstOpenRt_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntRtFamly_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntRtLug_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntRtLy_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntRtRcvy_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntRtVip_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntWelcomeBkwd_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSwIntWelcomeFwd_Val_readOutport1'
   */
  tmpRead_28[0] = tmpRead_1f;
  tmpRead_28[1] = tmpRead_1i;
  tmpRead_28[2] = tmpRead_1h;
  tmpRead_28[3] = tmpRead_1g;
  tmpRead_28[4] = tmpRead_1o;
  tmpRead_28[5] = tmpRead_1y;
  tmpRead_28[6] = tmpRead_1p;
  tmpRead_28[7] = tmpRead_1q;
  tmpRead_28[8] = tmpRead_1z;
  tmpRead_28[9] = tmpRead_1t;
  tmpRead_28[10] = tmpRead_1s;
  tmpRead_28[11] = tmpRead_22;
  tmpRead_28[12] = tmpRead_21;
  tmpRead_28[13] = tmpRead_1r;
  tmpRead_28[14] = tmpRead_20;
  tmpRead_28[15] = tmpRead_1w;
  tmpRead_28[16] = tmpRead_1u;
  tmpRead_28[17] = tmpRead_1x;
  tmpRead_28[18] = tmpRead_1v;
  tmpRead_28[19] = tmpRead_1n;
  tmpRead_28[20] = tmpRead_1j;
  tmpRead_28[21] = tmpRead_1l;
  tmpRead_28[22] = tmpRead_1k;
  tmpRead_28[23] = tmpRead_1m;
  tmpRead_28[24] = tmpRead_23;
  tmpRead_28[25] = tmpRead_24;
  tmpRead_28[26] = false;
  tmpRead_28[27] = false;
  tmpRead_28[28] = false;
  tmpRead_28[29] = false;
  tmpRead_28[30] = false;
  tmpRead_28[31] = false;

  /* Outport: '<Root>/MdXX_SWIntArray_Val' incorporates:
   *  SignalConversion: '<S1>/OutportBufferForMdXX_SWIntArray_Val_write'
   */
  (void) Rte_Write_MdXX_SWIntArray_Val(tmpRead_28);

  /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtCommExitCond_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtCommExitCondwithSpeed_Val_readOutport1'
   */
  tmpRead_28[0] = tmpRead_4;
  tmpRead_28[1] = false;
  tmpRead_28[2] = false;
  tmpRead_28[3] = tmpRead_4;
  tmpRead_28[4] = tmpRead_3;
  tmpRead_28[5] = tmpRead_3;
  tmpRead_28[6] = tmpRead_3;
  tmpRead_28[7] = tmpRead_4;
  tmpRead_28[8] = tmpRead_4;
  tmpRead_28[9] = tmpRead_3;
  tmpRead_28[10] = tmpRead_3;
  tmpRead_28[11] = tmpRead_3;
  tmpRead_28[12] = tmpRead_3;
  tmpRead_28[13] = tmpRead_3;
  tmpRead_28[14] = tmpRead_3;
  tmpRead_28[15] = tmpRead_3;
  tmpRead_28[16] = tmpRead_3;
  tmpRead_28[17] = tmpRead_3;
  tmpRead_28[18] = tmpRead_3;
  tmpRead_28[19] = tmpRead_3;
  tmpRead_28[20] = tmpRead_3;
  tmpRead_28[21] = tmpRead_3;
  tmpRead_28[22] = tmpRead_3;
  tmpRead_28[23] = tmpRead_3;
  tmpRead_28[24] = tmpRead_3;
  tmpRead_28[25] = tmpRead_4;
  tmpRead_28[26] = false;
  tmpRead_28[27] = false;
  tmpRead_28[28] = false;
  tmpRead_28[29] = false;
  tmpRead_28[30] = false;
  tmpRead_28[31] = false;

  /* Outport: '<Root>/MdXX_CommExitArray_Val' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   */
  (void) Rte_Write_MdXX_CommExitArray_Val(tmpRead_28);

  /* DataTypeConversion: '<S3>/Data Type Conversion2' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntAcsEnty_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntAcsExt_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntAllLug_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntAllVip_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntEZE4sL_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntEZE4sR_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntEZQ4sL_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntEZQ4sR_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntINTM_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntIntimacyRt_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntLfFamly_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntLfLug_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntLfLy_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntLfRcvy_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntLfVip_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntLgrstCloseLt_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntLgrstCloseRt_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntLgrstOpenLt_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntLgrstOpenRt_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntRtFamly_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntRtLug_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntRtLy_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntRtRcvy_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntRtVip_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntWelcomeBkwd_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtSoftIntWelcomeFwd_Val_readOutport1'
   */
  tmpRead_28[0] = tmpRead_p;
  tmpRead_28[1] = tmpRead_s;
  tmpRead_28[2] = tmpRead_r;
  tmpRead_28[3] = tmpRead_q;
  tmpRead_28[4] = tmpRead_y;
  tmpRead_28[5] = tmpRead_18;
  tmpRead_28[6] = tmpRead_z;
  tmpRead_28[7] = tmpRead_10;
  tmpRead_28[8] = tmpRead_19;
  tmpRead_28[9] = tmpRead_13;
  tmpRead_28[10] = tmpRead_12;
  tmpRead_28[11] = tmpRead_1c;
  tmpRead_28[12] = tmpRead_1b;
  tmpRead_28[13] = tmpRead_11;
  tmpRead_28[14] = tmpRead_1a;
  tmpRead_28[15] = tmpRead_16;
  tmpRead_28[16] = tmpRead_14;
  tmpRead_28[17] = tmpRead_17;
  tmpRead_28[18] = tmpRead_15;
  tmpRead_28[19] = tmpRead_x;
  tmpRead_28[20] = tmpRead_t;
  tmpRead_28[21] = tmpRead_v;
  tmpRead_28[22] = tmpRead_u;
  tmpRead_28[23] = tmpRead_w;
  tmpRead_28[24] = tmpRead_1d;
  tmpRead_28[25] = tmpRead_1e;
  tmpRead_28[26] = false;
  tmpRead_28[27] = false;
  tmpRead_28[28] = false;
  tmpRead_28[29] = false;
  tmpRead_28[30] = false;
  tmpRead_28[31] = false;

  /* Outport: '<Root>/MdXX_SoftIntArray_Val' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion2'
   */
  (void) Rte_Write_MdXX_SoftIntArray_Val(tmpRead_28);

  /* DataTypeConversion: '<S3>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/AllLugSrcReqTp_Val'
   *  Inport: '<Root>/AllVipSrcReqTp_Val'
   *  Inport: '<Root>/EZE4sLMdSrcTp_Val'
   *  Inport: '<Root>/EZE4sRMdSrcTp_Val'
   *  Inport: '<Root>/EZQ4sLMdSrcTp_Val'
   *  Inport: '<Root>/EZQ4sRMdSrcTp_Val'
   *  Inport: '<Root>/INTMSrcReqTp_Val'
   *  Inport: '<Root>/IntimacyRtMdSrcTp_Val'
   *  Inport: '<Root>/LfFamlySrcReqTp_Val'
   *  Inport: '<Root>/LfLySrcReqTp_Val'
   *  Inport: '<Root>/LgrstCloseLtSrcReqTp_Val'
   *  Inport: '<Root>/LgrstCloseRtSrcReqTp_Val'
   *  Inport: '<Root>/LgrstOpenLtSrcReqTp_Val'
   *  Inport: '<Root>/LgrstOpenRtSrcReqTp_Val'
   *  Inport: '<Root>/LtLugSrcReqTp_Val'
   *  Inport: '<Root>/LtRcvySrcReqTp_Val'
   *  Inport: '<Root>/LtVipSrcReqTp_Val'
   *  Inport: '<Root>/RtFamlySrcReqTp_Val'
   *  Inport: '<Root>/RtLugSrcReqTp_Val'
   *  Inport: '<Root>/RtLySrcReqTp_Val'
   *  Inport: '<Root>/RtRcvySrcReqTp_Val'
   *  Inport: '<Root>/RtVipSrcReqTp_Val'
   *  Inport: '<Root>/WelcomeBkwdMdSrcTp_Val'
   *  Inport: '<Root>/WelcomeFwdMdSrcTp_Val'
   *  Inport: '<Root>/acsEntyMdSrcTp_Val'
   *  Inport: '<Root>/acsExtMdSrcTp_Val'
   *  SignalConversion: '<S1>/TmpLatchAtAllLugSrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtAllVipSrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtEZE4sLMdSrcTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtEZE4sRMdSrcTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtEZQ4sLMdSrcTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtEZQ4sRMdSrcTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtINTMSrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtIntimacyRtMdSrcTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLfFamlySrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLfLySrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLgrstCloseLtSrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLgrstCloseRtSrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLgrstOpenLtSrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLgrstOpenRtSrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLtLugSrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLtRcvySrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtLtVipSrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtRtFamlySrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtRtLugSrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtRtLySrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtRtRcvySrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtRtVipSrcReqTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtWelcomeBkwdMdSrcTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtWelcomeFwdMdSrcTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtacsEntyMdSrcTp_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtacsExtMdSrcTp_Val_readOutport1'
   */
  tmpRead_27[0] = tmpRead;
  tmpRead_27[1] = tmpRead_2;
  tmpRead_27[2] = tmpRead_1;
  tmpRead_27[3] = tmpRead_0;
  tmpRead_27[4] = tmpRead_a;
  tmpRead_27[5] = tmpRead_k;
  tmpRead_27[6] = tmpRead_b;
  tmpRead_27[7] = tmpRead_h;
  tmpRead_27[8] = tmpRead_l;
  tmpRead_27[9] = tmpRead_j;
  tmpRead_27[10] = tmpRead_i;
  tmpRead_27[11] = tmpRead_o;
  tmpRead_27[12] = tmpRead_n;
  tmpRead_27[13] = tmpRead_c;
  tmpRead_27[14] = tmpRead_m;
  tmpRead_27[15] = tmpRead_f;
  tmpRead_27[16] = tmpRead_d;
  tmpRead_27[17] = tmpRead_g;
  tmpRead_27[18] = tmpRead_e;
  tmpRead_27[19] = tmpRead_9;
  tmpRead_27[20] = tmpRead_5;
  tmpRead_27[21] = tmpRead_7;
  tmpRead_27[22] = tmpRead_6;
  tmpRead_27[23] = tmpRead_8;
  tmpRead_27[24] = tmpRead_25;
  tmpRead_27[25] = tmpRead_26;
  tmpRead_27[26] = SrcReqTp_None;
  tmpRead_27[27] = SrcReqTp_None;
  tmpRead_27[28] = SrcReqTp_None;
  tmpRead_27[29] = SrcReqTp_None;
  tmpRead_27[30] = SrcReqTp_None;
  tmpRead_27[31] = SrcReqTp_None;

  /* Outport: '<Root>/MdXX_SrcReqTpArray_Val' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion3'
   */
  (void) Rte_Write_MdXX_SrcReqTpArray_Val(tmpRead_27);

  /* End of Outputs for SubSystem: '<Root>/MdXXArray_Cal_sys' */
}

/* Model initialize function */
void MdXXArray_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
