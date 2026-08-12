/*
 * File: ModeStateCtrlCaller.h
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

#ifndef RTW_HEADER_ModeStateCtrlCaller_h_
#define RTW_HEADER_ModeStateCtrlCaller_h_
#ifndef ModeStateCtrlCaller_COMMON_INCLUDES_
# define ModeStateCtrlCaller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ModeStateCtrlCaller.h"
#endif                                 /* ModeStateCtrlCaller_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct tag_B_ModeStateCtrlCaller_T {
  uint32 MdEnAndBsyChk_Cal_o;          /* '<S5>/MdEnAndBsyChk_Cal' */
  boolean stateonoffchk_Cal_c;         /* '<S9>/stateonoffchk_Cal' */
} B_ModeStateCtrlCaller_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_ModeStateCtrlCaller_T {
  uint32 modestate32;                  /* '<S3>/Chart' */
} DW_ModeStateCtrlCaller_T;

/* Block signals (default storage) */
extern B_ModeStateCtrlCaller_T ModeStateCtrlCaller_B;

/* Block states (default storage) */
extern DW_ModeStateCtrlCaller_T ModeStateCtrlCaller_DW;

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
 * '<Root>' : 'ModeStateCtrlCaller'
 * '<S1>'   : 'ModeStateCtrlCaller/ModeStateCtrl'
 * '<S2>'   : 'ModeStateCtrlCaller/ModeStateCtrlCaller_Init'
 * '<S3>'   : 'ModeStateCtrlCaller/ModeStateCtrl/ModeStateCtrl_Cal_sys'
 * '<S4>'   : 'ModeStateCtrlCaller/ModeStateCtrl/ModeStateCtrl_Cal_sys/Chart'
 * '<S5>'   : 'ModeStateCtrlCaller/ModeStateCtrl/ModeStateCtrl_Cal_sys/Chart/MdEnAndBsyChk_Cal'
 * '<S6>'   : 'ModeStateCtrlCaller/ModeStateCtrl/ModeStateCtrl_Cal_sys/Chart/MdSWReqChk_Cal'
 * '<S7>'   : 'ModeStateCtrlCaller/ModeStateCtrl/ModeStateCtrl_Cal_sys/Chart/MdXXArray_Cal'
 * '<S8>'   : 'ModeStateCtrlCaller/ModeStateCtrl/ModeStateCtrl_Cal_sys/Chart/MdXX_QuitChk_Cal'
 * '<S9>'   : 'ModeStateCtrlCaller/ModeStateCtrl/ModeStateCtrl_Cal_sys/Chart/stateonoffchk_Cal'
 */
#endif                                 /* RTW_HEADER_ModeStateCtrlCaller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
