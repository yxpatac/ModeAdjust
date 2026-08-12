/*
 * File: MdEnClear.h
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

#ifndef RTW_HEADER_MdEnClear_h_
#define RTW_HEADER_MdEnClear_h_
#ifndef MdEnClear_COMMON_INCLUDES_
# define MdEnClear_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_MdEnClear.h"
#endif                                 /* MdEnClear_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct tag_B_MdEnClear_T {
  uint32 ModeState32_Get_g;            /* '<S6>/ModeState32_Get' */
} B_MdEnClear_T;

/* Block signals (default storage) */
extern B_MdEnClear_T MdEnClear_B;

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
 * '<Root>' : 'MdEnClear'
 * '<S1>'   : 'MdEnClear/MdEnClear_Cal_sys'
 * '<S2>'   : 'MdEnClear/MdEnClear_Init'
 * '<S3>'   : 'MdEnClear/MdEnClear_Cal_sys/Subsystem'
 * '<S4>'   : 'MdEnClear/MdEnClear_Cal_sys/Subsystem/Chart'
 * '<S5>'   : 'MdEnClear/MdEnClear_Cal_sys/Subsystem/Chart/ModeState32Clear'
 * '<S6>'   : 'MdEnClear/MdEnClear_Cal_sys/Subsystem/Chart/ModeState32Get'
 */
#endif                                 /* RTW_HEADER_MdEnClear_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
