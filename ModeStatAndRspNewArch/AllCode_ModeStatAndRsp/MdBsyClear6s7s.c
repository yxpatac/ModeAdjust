/*
 * File: MdBsyClear6s7s.c
 *
 * Code generated for Simulink model 'MdBsyClear6s7s'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Jul  7 14:23:17 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MdBsyClear6s7s.h"

/* Model step function */
void MdBsyClear6s7s_Cal()
{
  uint32 ClearBit;
  boolean tmpRead;
  boolean tmpRead_0;
  uint32 rtb_ModeState32_Get;
  uint32 tmp;
  uint32 tmp_0;

  /* Inport: '<Root>/StNumFlg_Is7s' */
  Rte_Read_StNumFlg_Is7s(&tmpRead_0);

  /* Inport: '<Root>/StNumFlg_Is6s' */
  Rte_Read_StNumFlg_Is6s(&tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/MdBsyClear6s7s_Cal_sys' */
  /* FunctionCaller: '<S3>/ModeState32_Get' */
  Rte_Call_ModeState32_Get(&rtb_ModeState32_Get);
  ClearBit = MAX_uint32_T;
  if ((rtb_ModeState32_Get & 524415U) == 0U) {
    tmp = rtb_ModeState32_Get & 1664U;
    tmp_0 = rtb_ModeState32_Get & 6400U;
    if ((tmp == 0U) && (tmp_0 == 0U)) {
      ClearBit = 4294434816U;
    } else {
      if (tmpRead && (tmp == 0U)) {
        ClearBit = 4294965631U;
      } else {
        if (tmpRead_0 && ((rtb_ModeState32_Get & 1920U) == 0U)) {
          ClearBit = 4294965759U;
        }

        /* SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is7s_readOutport1' */
        if (tmpRead_0 && ((rtb_ModeState32_Get & 7808U) == 0U)) {
          ClearBit &= 4294967167U;
        }
      }

      /* SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is6s_readOutport1' incorporates:
       *  SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is7s_readOutport1'
       */
      if (tmpRead && (tmp_0 == 0U)) {
        ClearBit &= 4294960895U;
      } else {
        if (tmpRead_0 && ((rtb_ModeState32_Get & 6528U) == 0U)) {
          ClearBit &= 4294961151U;
        }

        if (tmpRead_0 && ((rtb_ModeState32_Get & 7936U) == 0U)) {
          ClearBit &= 4294967039U;
        }
      }
    }
  }

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/IsStBsyClear'
   */
  /* FunctionCaller: '<S5>/IsStBsy32_Clear' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is6s_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is7s_readOutport1'
   */
  Rte_Call_IsStBsy32_Clear(ClearBit);

  /* End of Outputs for SubSystem: '<Root>/MdBsyClear6s7s_Cal_sys' */
}

/* Model initialize function */
void MdBsyClear6s7s_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
