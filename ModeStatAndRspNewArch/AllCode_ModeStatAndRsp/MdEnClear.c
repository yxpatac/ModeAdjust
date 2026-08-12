/*
 * File: MdEnClear.c
 *
 * Code generated for Simulink model 'MdEnClear'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Jul  7 14:30:11 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MdEnClear.h"
#define MdEnClear_LugAllBit            (4U)
#define MdEnClear_LugLBit              (128U)
#define MdEnClear_LugRBit              (256U)
#define MdEnClear_VIPAllBit            (2U)
#define MdEnClear_VIPLBit              (512U)
#define MdEnClear_VIPRBit              (2048U)

/* Block signals (default storage) */
B_MdEnClear_T MdEnClear_B;

/* Model step function */
void MdEnClear_Cal()
{
  uint32 MdXXEn32Bit;
  uint32 ClearBit;

  /* Inport: '<Root>/MdXX_Quit32bit_Val' */
  Rte_Read_MdXX_Quit32bit_Val(&MdXXEn32Bit);

  /* Outputs for Function Call SubSystem: '<Root>/MdEnClear_Cal_sys' */
  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/ModeState32Get'
   */
  /* FunctionCaller: '<S6>/ModeState32_Get' */
  Rte_Call_ModeState32_Get(&MdEnClear_B.ModeState32_Get_g);

  /* SignalConversion: '<S1>/TmpLatchAtMdXX_Quit32bit_Val_readOutport1' */
  ClearBit = ~MdXXEn32Bit;
  if (((MdEnClear_B.ModeState32_Get_g & MdEnClear_VIPAllBit) != 0U) &&
      ((MdXXEn32Bit & MdEnClear_VIPAllBit) != 0U)) {
    ClearBit &= 4294964735U;
  }

  if (((MdEnClear_B.ModeState32_Get_g & MdEnClear_LugAllBit) != 0U) &&
      ((MdXXEn32Bit & MdEnClear_LugAllBit) != 0U)) {
    ClearBit &= 4294966911U;
  }

  /* End of SignalConversion: '<S1>/TmpLatchAtMdXX_Quit32bit_Val_readOutport1' */
  MdXXEn32Bit = MdEnClear_B.ModeState32_Get_g & ClearBit;
  if (((MdXXEn32Bit & MdEnClear_VIPLBit) == 0U) && ((MdXXEn32Bit &
        MdEnClear_VIPRBit) == 0U)) {
    ClearBit &= 4294967293U;
  }

  if (((MdXXEn32Bit & MdEnClear_LugLBit) == 0U) && ((MdXXEn32Bit &
        MdEnClear_LugRBit) == 0U)) {
    ClearBit &= 4294967291U;
  }

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/ModeState32Clear'
   */
  /* FunctionCaller: '<S5>/ModeState32_Clear' */
  Rte_Call_ModeState32_Clear(ClearBit);

  /* End of Outputs for SubSystem: '<Root>/MdEnClear_Cal_sys' */
}

/* Model initialize function */
void MdEnClear_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
