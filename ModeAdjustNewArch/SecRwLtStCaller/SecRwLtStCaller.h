/*
 * File: SecRwLtStCaller.h
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

#ifndef RTW_HEADER_SecRwLtStCaller_h_
#define RTW_HEADER_SecRwLtStCaller_h_
#ifndef SecRwLtStCaller_COMMON_INCLUDES_
# define SecRwLtStCaller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_SecRwLtStCaller.h"
#endif                                 /* SecRwLtStCaller_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SecRwLtStCaller'
 * '<S1>'   : 'SecRwLtStCaller/SecRwLtSt'
 * '<S2>'   : 'SecRwLtStCaller/SecRwLtStCaller_Init'
 * '<S3>'   : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys'
 * '<S4>'   : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart'
 * '<S5>'   : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStArmScrnCtrl_1_Cal'
 * '<S6>'   : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStArmScrnHolderChk_1_Cal'
 * '<S7>'   : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStArmScrnIsPosChk_1_Cal'
 * '<S8>'   : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStArmScrnTrgtPosSelc_1_Cal'
 * '<S9>'   : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStBkReclnCtrl_1_Cal'
 * '<S10>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStBkReclnHolderChk_1_Cal'
 * '<S11>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStBkReclnIsPosChk_1_Cal'
 * '<S12>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStBkReclnTrgtPosSelc_1_Cal'
 * '<S13>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStChldLckChk_Cal'
 * '<S14>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStFtrstCtrl_1_Cal'
 * '<S15>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStFtrstHolderChk_1_Cal'
 * '<S16>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStFtrstIsPosChk_1_Cal'
 * '<S17>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStFtrstTrgtPosSelc_1_Cal'
 * '<S18>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStFwdBkwdCtrl_1_Cal'
 * '<S19>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStFwdBkwdHolderChk_1_Cal'
 * '<S20>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStFwdBkwdIsPosChk_1_Cal'
 * '<S21>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStFwdBkwdSpdCtrl_1_Cal'
 * '<S22>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStFwdBkwdTrgtPosSelc_1_Cal'
 * '<S23>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStHdrstFwdBkwdCtrl_1_Cal'
 * '<S24>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStHdrstFwdBkwdHolderChk_1_Cal'
 * '<S25>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStHdrstFwdBkwdIsPosChk_1_Cal'
 * '<S26>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStHdrstFwdBkwdTrgtPosSelc_1_Cal'
 * '<S27>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStHdrstUpwdDnwdCtrl_1_Cal'
 * '<S28>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStHdrstUpwdDnwdHolderChk_1_Cal'
 * '<S29>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStHdrstUpwdDnwdIsPosChk_1_Cal'
 * '<S30>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStHdrstUpwdDnwdTrgtPosSelc_1_Cal'
 * '<S31>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStHeightChk_Cal'
 * '<S32>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStLgrstInwdOtwdCtrl_1_Cal'
 * '<S33>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStLgrstInwdOtwdHolderChk_1_Cal'
 * '<S34>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStLgrstInwdOtwdIsPosChk_1_Cal'
 * '<S35>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStLgrstInwdOtwdTrgtPosSelc_1_Cal'
 * '<S36>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStLgrstUpwdDnwdCtrl_1_Cal'
 * '<S37>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStLgrstUpwdDnwdHolderChk_1_Cal'
 * '<S38>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStLgrstUpwdDnwdIsPosChk_1_Cal'
 * '<S39>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStLgrstUpwdDnwdTrgtPosSelc_1_Cal'
 * '<S40>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStLtwdRtwdCtrl_1_Cal'
 * '<S41>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStLtwdRtwdHolderChk_1_Cal'
 * '<S42>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStLtwdRtwdIsPosChk_1_Cal'
 * '<S43>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStLtwdRtwdTrgtPosSelc_1_Cal'
 * '<S44>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStMovConfigConvert_Cal'
 * '<S45>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStOccupyChk_Cal'
 * '<S46>'  : 'SecRwLtStCaller/SecRwLtSt/SecRwLtSt_Cal_sys/Chart/SecRwLtStRclCmdSrvCal_1_Cal'
 */
#endif                                 /* RTW_HEADER_SecRwLtStCaller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
