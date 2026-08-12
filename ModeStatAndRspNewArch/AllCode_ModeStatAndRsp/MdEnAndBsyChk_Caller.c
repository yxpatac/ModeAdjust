/*
 * File: MdEnAndBsyChk_Caller.c
 *
 * Code generated for Simulink model 'MdEnAndBsyChk_Caller'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 10:47:58 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MdEnAndBsyChk_Caller.h"

/* Block signals (default storage) */
B_MdEnAndBsyChk_Caller_T MdEnAndBsyChk_Caller_B;
static void MdEnAndBsyChk_Calle_MdEnChk_Cal(void);

/* Output and update for function-call system: '<S4>/MdEnChk_Cal' */
static void MdEnAndBsyChk_Calle_MdEnChk_Cal(void)
{
  /* FunctionCaller: '<S8>/MdEnChk_Cal'
   *
   * Block description for '<S8>/MdEnChk_Cal':
   *  StNun:
   *  0 :4s
   *  1:6s
   *  2:7s
   *  3:4sp
   */
  Rte_Call_MdEnChk_Cal();
}

/* Model step function */
void MdEnAndBsyChk_Cal(uint32 *modestate32)
{
  boolean tmpRead;

  /* Inport: '<Root>/StNumFlg_Is4s' */
  Rte_Read_StNumFlg_Is4s(&tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/MdEnAndBsyChk_Cal_sys' */
  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/MdEnClear'
   */
  /* FunctionCaller: '<S9>/MdEnClear_Cal' */
  Rte_Call_MdEnClear_Cal();

  /* SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is4s_readOutport1' */
  if (tmpRead) {
    /* Outputs for Function Call SubSystem: '<S4>/MdBsyClear4s' */
    /* FunctionCaller: '<S6>/MdBsyClear4s_Cal' */
    Rte_Call_MdBsyClear4s_Cal();

    /* End of Outputs for SubSystem: '<S4>/MdBsyClear4s' */

    /* Outputs for Function Call SubSystem: '<S4>/MdEnChk_Cal' */
    MdEnAndBsyChk_Calle_MdEnChk_Cal();

    /* End of Outputs for SubSystem: '<S4>/MdEnChk_Cal' */
  } else {
    /* Outputs for Function Call SubSystem: '<S4>/MdBsyClear6s7s' */
    /* FunctionCaller: '<S7>/MdBsyClear6s7s_Cal' */
    Rte_Call_MdBsyClear6s7s_Cal();

    /* End of Outputs for SubSystem: '<S4>/MdBsyClear6s7s' */

    /* Outputs for Function Call SubSystem: '<S4>/MdEnChk_Cal' */
    MdEnAndBsyChk_Calle_MdEnChk_Cal();

    /* End of Outputs for SubSystem: '<S4>/MdEnChk_Cal' */
  }

  /* End of SignalConversion: '<S1>/TmpLatchAtStNumFlg_Is4s_readOutport1' */

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/IsStBsy32_Get'
   */
  /* FunctionCaller: '<S5>/IsStBsy32_Get' */
  Rte_Call_IsStBsy32_Get(&MdEnAndBsyChk_Caller_B.IsStBsy32_Get_n);

  /* Outport: '<Root>/IsStBsy32Bit_Val' */
  (void) Rte_Write_IsStBsy32Bit_Val(MdEnAndBsyChk_Caller_B.IsStBsy32_Get_n);

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/ModeState32_Get'
   */
  /* FunctionCaller: '<S10>/ModeState32_Get' */
  Rte_Call_ModeState32_Get(&MdEnAndBsyChk_Caller_B.ModeState32_Get_f);
  MdEnAndBsyChk_Caller_B.modestate32_e =
    MdEnAndBsyChk_Caller_B.ModeState32_Get_f;

  /* SignalConversion: '<S1>/TmpSignal ConversionAtmodestate32Inport1' */
  *modestate32 = MdEnAndBsyChk_Caller_B.modestate32_e;

  /* Outport: '<Root>/modestate32_Val' incorporates:
   *  Outport: '<S1>/modestate32_Val_write'
   */
  (void) Rte_Write_modestate32Bit_Val(MdEnAndBsyChk_Caller_B.modestate32_e);

  /* End of Outputs for SubSystem: '<Root>/MdEnAndBsyChk_Cal_sys' */
  (void) Rte_Write_modestate32Bit_Val(MdEnAndBsyChk_Caller_B.modestate32_e);
}

/* Model initialize function */
void MdEnAndBsyChk_Caller_Init(void)
{
  /* SystemInitialize for Outport: '<Root>/modestate32_Val' */
  (void) Rte_Write_modestate32Bit_Val(MdEnAndBsyChk_Caller_B.modestate32_e);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
