/*
 * File: ModeStateCtrlCaller.c
 *
 * Code generated for Simulink model 'ModeStateCtrlCaller'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jul 12 09:36:48 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ModeStateCtrlCaller.h"

/* Block signals (default storage) */
B_ModeStateCtrlCaller_T ModeStateCtrlCaller_B;

/* Block states (default storage) */
DW_ModeStateCtrlCaller_T ModeStateCtrlCaller_DW;

/* Model step function */
void ModeStateCtrl_Cal()
{
  /* Outputs for Function Call SubSystem: '<S1>/ModeStateCtrl_Cal_sys' */
  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/stateonoffchk_Cal'
   */
  /* FunctionCaller: '<S9>/stateonoffchk_Cal' */
  Rte_Call_stateonoffchk_Cal(ModeStateCtrlCaller_DW.modestate32,
    &ModeStateCtrlCaller_B.stateonoffchk_Cal_c);
  if (ModeStateCtrlCaller_B.stateonoffchk_Cal_c) {
    /* Outputs for Function Call SubSystem: '<S4>/MdXXArray_Cal' */
    /* FunctionCaller: '<S7>/MdXXArray_Cal' */
    Rte_Call_MdXXArray_Cal();

    /* End of Outputs for SubSystem: '<S4>/MdXXArray_Cal' */

    /* Outputs for Function Call SubSystem: '<S4>/MdXX_QuitChk_Cal' */
    /* FunctionCaller: '<S8>/MdXX_QuitChk_Cal' */
    Rte_Call_MdXX_QuitChk_Cal();

    /* End of Outputs for SubSystem: '<S4>/MdXX_QuitChk_Cal' */

    /* Outputs for Function Call SubSystem: '<S4>/MdSWReqChk_Cal' */
    /* FunctionCaller: '<S6>/MdSWReqChk_Cal' */
    Rte_Call_MdSWReqChk_Cal(ModeStateCtrlCaller_DW.modestate32);

    /* End of Outputs for SubSystem: '<S4>/MdSWReqChk_Cal' */

    /* Outputs for Function Call SubSystem: '<S4>/MdEnAndBsyChk_Cal' */
    /* FunctionCaller: '<S5>/MdEnAndBsyChk_Cal' */
    Rte_Call_MdEnAndBsyChk_Cal(&ModeStateCtrlCaller_B.MdEnAndBsyChk_Cal_o);

    /* End of Outputs for SubSystem: '<S4>/MdEnAndBsyChk_Cal' */
    ModeStateCtrlCaller_DW.modestate32 =
      ModeStateCtrlCaller_B.MdEnAndBsyChk_Cal_o;
  } else {
    ModeStateCtrlCaller_DW.modestate32 = 0U;
  }

  /* End of Outputs for SubSystem: '<S1>/ModeStateCtrl_Cal_sys' */
}

/* Model initialize function */
void ModeStateCtrlCaller_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
