/*
 * File: StateOnOffChk.h
 *
 * Code generated for Simulink model 'StateOnOffChk'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Jul 10 09:34:55 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_StateOnOffChk_h_
#define RTW_HEADER_StateOnOffChk_h_
#ifndef StateOnOffChk_COMMON_INCLUDES_
# define StateOnOffChk_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_StateOnOffChk.h"
#endif                                 /* StateOnOffChk_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct tag_B_StateOnOffChk_T {
  boolean ModeStateOn;                 /* '<S2>/Chart' */
} B_StateOnOffChk_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_StateOnOffChk_T {
  uint8 is_active_c1_StateOnOffChk;    /* '<S2>/Chart' */
  uint8 is_c1_StateOnOffChk;           /* '<S2>/Chart' */
} DW_StateOnOffChk_T;

/* Block signals (default storage) */
extern B_StateOnOffChk_T StateOnOffChk_B;

/* Block states (default storage) */
extern DW_StateOnOffChk_T StateOnOffChk_DW;

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
 * '<Root>' : 'StateOnOffChk'
 * '<S1>'   : 'StateOnOffChk/stateonoffchk_Cal_sys'
 * '<S2>'   : 'StateOnOffChk/stateonoffchk_Cal_sys/Subsystem'
 * '<S3>'   : 'StateOnOffChk/stateonoffchk_Cal_sys/Subsystem/Chart'
 */
#endif                                 /* RTW_HEADER_StateOnOffChk_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
