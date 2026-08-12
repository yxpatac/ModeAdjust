/*
 * File: MdEnChk.c
 *
 * Code generated for Simulink model 'MdEnChk'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 10:40:34 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MdEnChk.h"

/* Model step function */
void MdEnChk_Cal()
{
  uint32 tmpRead[32];
  boolean tmpRead_0[32];
  uint32 tmpRead_1[32];
  uint32 tmpRead_2[32];
  uint8 tmpRead_3;
  sint8 s4_iter;
  uint32 rtb_IsStBsy32_Get;

  /* Inport: '<Root>/VeSMSuMdNum_Val' */
  Rte_Read_VeSMSuMdNum_Val(&tmpRead_3);

  /* Inport: '<Root>/SetEnBitArray_Val' */
  Rte_Read_SetEnBitArray_Val(tmpRead_2);

  /* Inport: '<Root>/SetBsyBitArray_Val' */
  Rte_Read_SetBsyBitArray_Val(tmpRead_1);

  /* Inport: '<Root>/MdReqArray_Val' */
  Rte_Read_MdReqArray_Val(tmpRead_0);

  /* Inport: '<Root>/ChkBsyBitArray_Val' */
  Rte_Read_ChkBsyBitArray_Val(tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/MdEnChk_Cal_sys' */
  /* Outputs for Iterator SubSystem: '<S3>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S4>/For Iterator'
   */
  /* SignalConversion: '<S1>/TmpLatchAtVeSMSuMdNum_Val_readOutport1' */
  for (s4_iter = 0; s4_iter < (sint8)tmpRead_3; s4_iter++) {
    /* FunctionCaller: '<S4>/IsStBsy32_Get' */
    Rte_Call_IsStBsy32_Get(&rtb_IsStBsy32_Get);

    /* Chart: '<S4>/Chart' incorporates:
     *  Selector: '<S4>/Selector'
     *  Selector: '<S4>/Selector1'
     *  SignalConversion: '<S1>/TmpLatchAtChkBsyBitArray_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtMdReqArray_Val_readOutport1'
     */
    if (tmpRead_0[s4_iter] && ((rtb_IsStBsy32_Get & tmpRead[s4_iter]) == 0U)) {
      /* Outputs for Function Call SubSystem: '<S5>/ModeState32_Set' */
      /* FunctionCaller: '<S7>/ModeState32_Set' incorporates:
       *  Selector: '<S4>/Selector2'
       *  SignalConversion: '<S1>/TmpLatchAtSetEnBitArray_Val_readOutport1'
       */
      Rte_Call_ModeState32_Set(tmpRead_2[s4_iter]);

      /* End of Outputs for SubSystem: '<S5>/ModeState32_Set' */

      /* Outputs for Function Call SubSystem: '<S5>/IsStBsy32_Set' */
      /* FunctionCaller: '<S6>/IsStBsy32_Set' incorporates:
       *  Selector: '<S4>/Selector3'
       *  SignalConversion: '<S1>/TmpLatchAtSetBsyBitArray_Val_readOutport1'
       */
      Rte_Call_IsStBsy32_Set(tmpRead_1[s4_iter]);

      /* End of Outputs for SubSystem: '<S5>/IsStBsy32_Set' */
    }

    /* End of Chart: '<S4>/Chart' */
  }

  /* End of SignalConversion: '<S1>/TmpLatchAtVeSMSuMdNum_Val_readOutport1' */
  /* End of Outputs for SubSystem: '<S3>/For Iterator Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/MdEnChk_Cal_sys' */
}

/* Model initialize function */
void MdEnChk_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
