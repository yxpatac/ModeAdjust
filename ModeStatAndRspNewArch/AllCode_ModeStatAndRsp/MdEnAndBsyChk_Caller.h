/*
 * File: MdEnAndBsyChk_Caller.h
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

#ifndef RTW_HEADER_MdEnAndBsyChk_Caller_h_
#define RTW_HEADER_MdEnAndBsyChk_Caller_h_
#ifndef MdEnAndBsyChk_Caller_COMMON_INCLUDES_
# define MdEnAndBsyChk_Caller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_MdEnAndBsyChk_Caller.h"
#endif                                 /* MdEnAndBsyChk_Caller_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct tag_B_MdEnAndBsyChk_Caller_T {
  uint32 modestate32_e;                /* '<S3>/Chart' */
  uint32 ModeState32_Get_f;            /* '<S10>/ModeState32_Get' */
  uint32 IsStBsy32_Get_n;              /* '<S5>/IsStBsy32_Get' */
} B_MdEnAndBsyChk_Caller_T;

/* Block signals (default storage) */
extern B_MdEnAndBsyChk_Caller_T MdEnAndBsyChk_Caller_B;

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
 * '<Root>' : 'MdEnAndBsyChk_Caller'
 * '<S1>'   : 'MdEnAndBsyChk_Caller/MdEnAndBsyChk_Cal_sys'
 * '<S2>'   : 'MdEnAndBsyChk_Caller/MdEnAndBsyChk_Caller_Init'
 * '<S3>'   : 'MdEnAndBsyChk_Caller/MdEnAndBsyChk_Cal_sys/Subsystem'
 * '<S4>'   : 'MdEnAndBsyChk_Caller/MdEnAndBsyChk_Cal_sys/Subsystem/Chart'
 * '<S5>'   : 'MdEnAndBsyChk_Caller/MdEnAndBsyChk_Cal_sys/Subsystem/Chart/IsStBsy32_Get'
 * '<S6>'   : 'MdEnAndBsyChk_Caller/MdEnAndBsyChk_Cal_sys/Subsystem/Chart/MdBsyClear4s'
 * '<S7>'   : 'MdEnAndBsyChk_Caller/MdEnAndBsyChk_Cal_sys/Subsystem/Chart/MdBsyClear6s7s'
 * '<S8>'   : 'MdEnAndBsyChk_Caller/MdEnAndBsyChk_Cal_sys/Subsystem/Chart/MdEnChk_Cal'
 * '<S9>'   : 'MdEnAndBsyChk_Caller/MdEnAndBsyChk_Cal_sys/Subsystem/Chart/MdEnClear'
 * '<S10>'  : 'MdEnAndBsyChk_Caller/MdEnAndBsyChk_Cal_sys/Subsystem/Chart/ModeState32_Get'
 */
#endif                                 /* RTW_HEADER_MdEnAndBsyChk_Caller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
