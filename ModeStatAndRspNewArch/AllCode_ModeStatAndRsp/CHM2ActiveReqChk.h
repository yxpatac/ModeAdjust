/*
 * File: CHM2ActiveReqChk.h
 *
 * Code generated for Simulink model 'CHM2ActiveReqChk'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 14:26:52 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CHM2ActiveReqChk_h_
#define RTW_HEADER_CHM2ActiveReqChk_h_
#ifndef CHM2ActiveReqChk_COMMON_INCLUDES_
# define CHM2ActiveReqChk_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CHM2ActiveReqChk.h"
#endif                                 /* CHM2ActiveReqChk_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CHM2ActiveReqChk_T {
  uint8 UnitDelay_DSTATE;              /* '<S6>/Unit Delay' */
} DW_CHM2ActiveReqChk_T;

/* Block states (default storage) */
extern DW_CHM2ActiveReqChk_T CHM2ActiveReqChk_DW;

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
 * '<Root>' : 'CHM2ActiveReqChk'
 * '<S1>'   : 'CHM2ActiveReqChk/CHM2ActiveReqChk_Cal_sys'
 * '<S2>'   : 'CHM2ActiveReqChk/CHM2ActiveReqChk_Init'
 * '<S3>'   : 'CHM2ActiveReqChk/CHM2ActiveReqChk_Cal_sys/Subsystem'
 * '<S4>'   : 'CHM2ActiveReqChk/CHM2ActiveReqChk_Cal_sys/Subsystem/32BitSelector'
 * '<S5>'   : 'CHM2ActiveReqChk/CHM2ActiveReqChk_Cal_sys/Subsystem/32BitSelector1'
 * '<S6>'   : 'CHM2ActiveReqChk/CHM2ActiveReqChk_Cal_sys/Subsystem/3TickCheck'
 */
#endif                                 /* RTW_HEADER_CHM2ActiveReqChk_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
