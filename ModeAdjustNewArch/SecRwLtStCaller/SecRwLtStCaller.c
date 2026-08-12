/*
 * File: SecRwLtStCaller.c
 *
 * Code generated for Simulink model 'SecRwLtStCaller'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 18 13:13:28 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SecRwLtStCaller.h"

/* Model step function */
void SecRwLtSt_Cal()
{
  /* Outputs for Function Call SubSystem: '<S1>/SecRwLtSt_Cal_sys' */
  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStMovConfigConvert_Cal'
   */
  /* FunctionCaller: '<S44>/SecRwLtStMovConfigConvert_Cal' */
  Rte_Call_SecRwLtStMovConfigConvert_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStChldLckChk_Cal'
   */
  /* FunctionCaller: '<S13>/SecRwLtStChldLckChk_Cal' */
  Rte_Call_SecRwLtStChldLckChk_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStHeightChk_Cal'
   */
  /* FunctionCaller: '<S31>/SecRwLtStHeightChk_Cal' */
  Rte_Call_SecRwLtStHeightChk_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStOccupyChk_Cal'
   */
  /* FunctionCaller: '<S45>/SecRwLtStOccupyChk_Cal' */
  Rte_Call_SecRwLtStOccupyChk_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStArmScrnTrgtPosSelc_1_Cal'
   */
  /* FunctionCaller: '<S8>/SecRwLtStArmScrnTrgtPosSelc_1_Cal' */
  Rte_Call_SecRwLtStArmScrnTrgtPosSelc_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStArmScrnIsPosChk_1_Cal'
   */
  /* FunctionCaller: '<S7>/SecRwLtStArmScrnIsPosChk_1_Cal' */
  Rte_Call_SecRwLtStArmScrnIsPosChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStArmScrnHolderChk_1_Cal'
   */
  /* FunctionCaller: '<S6>/SecRwLtStArmScrnHolderChk_1_Cal' */
  Rte_Call_SecRwLtStArmScrnHolderChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStArmScrnCtrl_1_Cal'
   */
  /* FunctionCaller: '<S5>/SecRwLtStArmScrnCtrl_1_Cal' */
  Rte_Call_SecRwLtStArmScrnCtrl_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStBkReclnTrgtPosSelc_1_Cal'
   */
  /* FunctionCaller: '<S12>/SecRwLtStBkReclnTrgtPosSelc_1_Cal' */
  Rte_Call_SecRwLtStBkReclnTrgtPosSelc_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStBkReclnIsPosChk_1_Cal'
   */
  /* FunctionCaller: '<S11>/SecRwLtStBkReclnIsPosChk_1_Cal' */
  Rte_Call_SecRwLtStBkReclnIsPosChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStBkReclnHolderChk_1_Cal'
   */
  /* FunctionCaller: '<S10>/SecRwLtStBkReclnHolderChk_1_Cal' */
  Rte_Call_SecRwLtStBkReclnHolderChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStBkReclnCtrl_1_Cal'
   */
  /* FunctionCaller: '<S9>/SecRwLtStBkReclnCtrl_1_Cal' */
  Rte_Call_SecRwLtStBkReclnCtrl_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStFtrstTrgtPosSelc_1_Cal'
   */
  /* FunctionCaller: '<S17>/SecRwLtStFtrstTrgtPosSelc_1_Cal' */
  Rte_Call_SecRwLtStFtrstTrgtPosSelc_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStFtrstHolderChk_1_Cal'
   */
  /* FunctionCaller: '<S15>/SecRwLtStFtrstHolderChk_1_Cal' */
  Rte_Call_SecRwLtStFtrstHolderChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStFtrstIsPosChk_1_Cal'
   */
  /* FunctionCaller: '<S16>/SecRwLtStFtrstIsPosChk_1_Cal' */
  Rte_Call_SecRwLtStFtrstIsPosChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStFtrstCtrl_1_Cal'
   */
  /* FunctionCaller: '<S14>/SecRwLtStFtrstCtrl_1_Cal' */
  Rte_Call_SecRwLtStFtrstCtrl_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStFwdBkwdTrgtPosSelc_1_Cal'
   */
  /* FunctionCaller: '<S22>/SecRwLtStFwdBkwdTrgtPosSelc_1_Cal' */
  Rte_Call_SecRwLtStFwdBkwdTrgtPosSelc_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStFwdBkwdIsPosChk_1_Cal'
   */
  /* FunctionCaller: '<S20>/SecRwLtStFwdBkwdIsPosChk_1_Cal' */
  Rte_Call_SecRwLtStFwdBkwdIsPosChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStFwdBkwdHolderChk_1_Cal'
   */
  /* FunctionCaller: '<S19>/SecRwLtStFwdBkwdHolderChk_1_Cal' */
  Rte_Call_SecRwLtStFwdBkwdHolderChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStFwdBkwdCtrl_1_Cal'
   */
  /* FunctionCaller: '<S18>/SecRwLtStFwdBkwdCtrl_1_Cal' */
  Rte_Call_SecRwLtStFwdBkwdCtrl_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStFwdBkwdSpdCtrl_1_Cal'
   */
  /* FunctionCaller: '<S21>/SecRwLtStFwdBkwdSpdCtrl_1_Cal' */
  Rte_Call_SecRwLtStFwdBkwdSpdCtrl_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStHdrstFwdBkwdTrgtPosSelc_1_Cal'
   */
  /* FunctionCaller: '<S26>/SecRwLtStHdrstFwdBkwdTrgtPosSelc_1_Cal' */
  Rte_Call_SecRwLtStHdrstFwdBkwdTrgtPosSelc_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStHdrstFwdBkwdIsPosChk_1_Cal'
   */
  /* FunctionCaller: '<S25>/SecRwLtStHdrstFwdBkwdIsPosChk_1_Cal' */
  Rte_Call_SecRwLtStHdrstFwdBkwdIsPosChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStHdrstFwdBkwdHolderChk_1_Cal'
   */
  /* FunctionCaller: '<S24>/SecRwLtStHdrstFwdBkwdHolderChk_1_Cal' */
  Rte_Call_SecRwLtStHdrstFwdBkwdHolderChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStHdrstFwdBkwdCtrl_1_Cal'
   */
  /* FunctionCaller: '<S23>/SecRwLtStHdrstFwdBkwdCtrl_1_Cal' */
  Rte_Call_SecRwLtStHdrstFwdBkwdCtrl_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStHdrstUpwdDnwdTrgtPosSelc_1_Cal'
   */
  /* FunctionCaller: '<S30>/SecRwLtStHdrstUpwdDnwdTrgtPosSelc_1_Cal' */
  Rte_Call_SecRwLtStHdrstUpwdDnwdTrgtPosSelc_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStHdrstUpwdDnwdIsPosChk_1_Cal'
   */
  /* FunctionCaller: '<S29>/SecRwLtStHdrstUpwdDnwdIsPosChk_1_Cal' */
  Rte_Call_SecRwLtStHdrstUpwdDnwdIsPosChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStHdrstUpwdDnwdHolderChk_1_Cal'
   */
  /* FunctionCaller: '<S28>/SecRwLtStHdrstUpwdDnwdHolderChk_1_Cal' */
  Rte_Call_SecRwLtStHdrstUpwdDnwdHolderChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStHdrstUpwdDnwdCtrl_1_Cal'
   */
  /* FunctionCaller: '<S27>/SecRwLtStHdrstUpwdDnwdCtrl_1_Cal' */
  Rte_Call_SecRwLtStHdrstUpwdDnwdCtrl_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStLgrstInwdOtwdTrgtPosSelc_1_Cal'
   */
  /* FunctionCaller: '<S35>/SecRwLtStLgrstInwdOtwdTrgtPosSelc_1_Cal' */
  Rte_Call_SecRwLtStLgrstInwdOtwdTrgtPosSelc_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStLgrstInwdOtwdIsPosChk_1_Cal'
   */
  /* FunctionCaller: '<S34>/SecRwLtStLgrstInwdOtwdIsPosChk_1_Cal' */
  Rte_Call_SecRwLtStLgrstInwdOtwdIsPosChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStLgrstInwdOtwdHolderChk_1_Cal'
   */
  /* FunctionCaller: '<S33>/SecRwLtStLgrstInwdOtwdHolderChk_1_Cal' */
  Rte_Call_SecRwLtStLgrstInwdOtwdHolderChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStLgrstInwdOtwdCtrl_1_Cal'
   */
  /* FunctionCaller: '<S32>/SecRwLtStLgrstInwdOtwdCtrl_1_Cal' */
  Rte_Call_SecRwLtStLgrstInwdOtwdCtrl_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStLgrstUpwdDnwdTrgtPosSelc_1_Cal'
   */
  /* FunctionCaller: '<S39>/SecRwLtStLgrstUpwdDnwdTrgtPosSelc_1_Cal' */
  Rte_Call_SecRwLtStLgrstUpwdDnwdTrgtPosSelc_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStLgrstUpwdDnwdIsPosChk_1_Cal'
   */
  /* FunctionCaller: '<S38>/SecRwLtStLgrstUpwdDnwdIsPosChk_1_Cal' */
  Rte_Call_SecRwLtStLgrstUpwdDnwdIsPosChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStLgrstUpwdDnwdHolderChk_1_Cal'
   */
  /* FunctionCaller: '<S37>/SecRwLtStLgrstUpwdDnwdHolderChk_1_Cal' */
  Rte_Call_SecRwLtStLgrstUpwdDnwdHolderChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStLgrstUpwdDnwdCtrl_1_Cal'
   */
  /* FunctionCaller: '<S36>/SecRwLtStLgrstUpwdDnwdCtrl_1_Cal' */
  Rte_Call_SecRwLtStLgrstUpwdDnwdCtrl_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStLtwdRtwdTrgtPosSelc_1_Cal'
   */
  /* FunctionCaller: '<S43>/SecRwLtStLtwdRtwdTrgtPosSelc_1_Cal' */
  Rte_Call_SecRwLtStLtwdRtwdTrgtPosSelc_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStLtwdRtwdIsPosChk_1_Cal'
   */
  /* FunctionCaller: '<S42>/SecRwLtStLtwdRtwdIsPosChk_1_Cal' */
  Rte_Call_SecRwLtStLtwdRtwdIsPosChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStLtwdRtwdCtrl_1_Cal'
   */
  /* FunctionCaller: '<S40>/SecRwLtStLtwdRtwdCtrl_1_Cal' */
  Rte_Call_SecRwLtStLtwdRtwdCtrl_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStLtwdRtwdHolderChk_1_Cal'
   */
  /* FunctionCaller: '<S41>/SecRwLtStLtwdRtwdHolderChk_1_Cal' */
  Rte_Call_SecRwLtStLtwdRtwdHolderChk_1_Cal();

  /* Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S4>/SecRwLtStRclCmdSrvCal_1_Cal'
   */
  /* FunctionCaller: '<S46>/SecRwLtStRclCmdSrvCal_1_Cal' */
  Rte_Call_SecRwLtStRclCmdSrvCal_1_Cal();

  /* End of Outputs for SubSystem: '<S1>/SecRwLtSt_Cal_sys' */
}

/* Model initialize function */
void SecRwLtStCaller_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
