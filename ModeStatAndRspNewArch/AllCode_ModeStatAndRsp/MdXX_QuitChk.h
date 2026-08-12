/*
 * File: MdXX_QuitChk.h
 *
 * Code generated for Simulink model 'MdXX_QuitChk'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Jul 10 15:35:38 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MdXX_QuitChk_h_
#define RTW_HEADER_MdXX_QuitChk_h_
#ifndef MdXX_QuitChk_COMMON_INCLUDES_
# define MdXX_QuitChk_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_MdXX_QuitChk.h"
#endif                                 /* MdXX_QuitChk_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct tag_B_MdXX_QuitChk_T {
  MdRspLocal2 dataarray[32];           /* '<S5>/Chart' */
} B_MdXX_QuitChk_T;

/* Block signals (default storage) */
extern B_MdXX_QuitChk_T MdXX_QuitChk_B;

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
 * '<Root>' : 'MdXX_QuitChk'
 * '<S1>'   : 'MdXX_QuitChk/MdXX_QuitChk_Cal_sys'
 * '<S2>'   : 'MdXX_QuitChk/MdXX_QuitChk_Init'
 * '<S3>'   : 'MdXX_QuitChk/MdXX_QuitChk_Cal_sys/Subsystem'
 * '<S4>'   : 'MdXX_QuitChk/MdXX_QuitChk_Cal_sys/Subsystem/Chart2'
 * '<S5>'   : 'MdXX_QuitChk/MdXX_QuitChk_Cal_sys/Subsystem/For Iterator Subsystem'
 * '<S6>'   : 'MdXX_QuitChk/MdXX_QuitChk_Cal_sys/Subsystem/For Iterator Subsystem/Chart'
 */
#endif                                 /* RTW_HEADER_MdXX_QuitChk_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
