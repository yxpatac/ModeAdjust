/*
 * File: CHM2ActiveSubStateCtrl.h
 *
 * Code generated for Simulink model 'CHM2ActiveSubStateCtrl'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 14:36:00 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CHM2ActiveSubStateCtrl_h_
#define RTW_HEADER_CHM2ActiveSubStateCtrl_h_
#ifndef CHM2ActiveSubStateCtrl_COMMON_INCLUDES_
# define CHM2ActiveSubStateCtrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CHM2ActiveSubStateCtrl.h"
#endif                                 /* CHM2ActiveSubStateCtrl_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct tag_B_CHM2ActiveSubStateCtrl_T {
  EventSts1 oChime;                    /* '<S3>/Chart' */
} B_CHM2ActiveSubStateCtrl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CHM2ActiveSubStateCtrl_T {
  uint32 temporalCounter_i1;           /* '<S3>/Chart' */
  uint16 iChmMgrStat_prev;             /* '<S3>/Chart' */
  uint16 iChmMgrStat_start;            /* '<S3>/Chart' */
  uint8 is_active_c1_CHM2ActiveSubState;/* '<S3>/Chart' */
  uint8 is_c1_CHM2ActiveSubStateCtrl;  /* '<S3>/Chart' */
  uint8 is_CHM2ActiveSubStateOn;       /* '<S3>/Chart' */
  uint8 retrycnt;                      /* '<S3>/Chart' */
} DW_CHM2ActiveSubStateCtrl_T;

/* Block signals (default storage) */
extern B_CHM2ActiveSubStateCtrl_T CHM2ActiveSubStateCtrl_B;

/* Block states (default storage) */
extern DW_CHM2ActiveSubStateCtrl_T CHM2ActiveSubStateCtrl_DW;

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
 * '<Root>' : 'CHM2ActiveSubStateCtrl'
 * '<S1>'   : 'CHM2ActiveSubStateCtrl/CHM2ActiveSubStateCtrl_Cal_sys'
 * '<S2>'   : 'CHM2ActiveSubStateCtrl/CHM2ActiveSubStateCtrl_Init'
 * '<S3>'   : 'CHM2ActiveSubStateCtrl/CHM2ActiveSubStateCtrl_Cal_sys/Subsystem'
 * '<S4>'   : 'CHM2ActiveSubStateCtrl/CHM2ActiveSubStateCtrl_Cal_sys/Subsystem/Chart'
 */
#endif                                 /* RTW_HEADER_CHM2ActiveSubStateCtrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
