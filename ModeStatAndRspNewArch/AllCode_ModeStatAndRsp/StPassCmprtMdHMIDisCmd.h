/*
 * File: StPassCmprtMdHMIDisCmd.h
 *
 * Code generated for Simulink model 'StPassCmprtMdHMIDisCmd'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 15:13:41 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_StPassCmprtMdHMIDisCmd_h_
#define RTW_HEADER_StPassCmprtMdHMIDisCmd_h_
#ifndef StPassCmprtMdHMIDisCmd_COMMON_INCLUDES_
# define StPassCmprtMdHMIDisCmd_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_StPassCmprtMdHMIDisCmd.h"
#endif                                 /* StPassCmprtMdHMIDisCmd_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_StPassCmprtMdHMIDisCmd_T {
  uint8 UnitDelay_DSTATE;              /* '<S4>/Unit Delay' */
} DW_StPassCmprtMdHMIDisCmd_T;

/* Block states (default storage) */
extern DW_StPassCmprtMdHMIDisCmd_T StPassCmprtMdHMIDisCmd_DW;

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
 * '<Root>' : 'StPassCmprtMdHMIDisCmd'
 * '<S1>'   : 'StPassCmprtMdHMIDisCmd/StPassCmprtMdHMIDisCmdCalc_Cal_sys'
 * '<S2>'   : 'StPassCmprtMdHMIDisCmd/StPassCmprtMdHMIDisCmd_Init'
 * '<S3>'   : 'StPassCmprtMdHMIDisCmd/StPassCmprtMdHMIDisCmdCalc_Cal_sys/Subsystem'
 * '<S4>'   : 'StPassCmprtMdHMIDisCmd/StPassCmprtMdHMIDisCmdCalc_Cal_sys/Subsystem/3TickCheck'
 */
#endif                                 /* RTW_HEADER_StPassCmprtMdHMIDisCmd_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
