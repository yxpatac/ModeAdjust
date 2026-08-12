/*
 * File: SRSSwIndCtrl.h
 *
 * Code generated for Simulink model 'SRSSwIndCtrl'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 15:20:43 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Renesas->RH850
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SRSSwIndCtrl_h_
#define RTW_HEADER_SRSSwIndCtrl_h_
#ifndef SRSSwIndCtrl_COMMON_INCLUDES_
# define SRSSwIndCtrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_SRSSwIndCtrl.h"
#endif                                 /* SRSSwIndCtrl_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct tag_B_SRSSwIndCtrl_T {
  SRSSlctSwIndTyp SRSMdSlctSwIndTypOut;/* '<S3>/Chart' */
  SRSIndicatorStat MdSlctSwStatOut;    /* '<S3>/Chart' */
} B_SRSSwIndCtrl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_SRSSwIndCtrl_T {
  uint16 TmpTmTick;                    /* '<S3>/Chart' */
  uint16 temporalCounter_i1;           /* '<S3>/Chart' */
  uint8 is_active_c2_SRSSwIndCtrl;     /* '<S3>/Chart' */
  uint8 is_c2_SRSSwIndCtrl;            /* '<S3>/Chart' */
  uint8 IfVeSMStPassCmprtMd_RfCtrl_Sw_R;/* '<S3>/Chart' */
  uint8 IfVeSMStPassCmprtMd_RfCtrl_Sw_j;/* '<S3>/Chart' */
  boolean chkflg;                      /* '<S3>/firstTimeChk' */
  SRSIndicatorStat MdSlctSwStat_prev;  /* '<S3>/Chart' */
  SRSIndicatorStat MdSlctSwStat_start; /* '<S3>/Chart' */
} DW_SRSSwIndCtrl_T;

/* Block signals (default storage) */
extern B_SRSSwIndCtrl_T SRSSwIndCtrl_B;

/* Block states (default storage) */
extern DW_SRSSwIndCtrl_T SRSSwIndCtrl_DW;

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
 * '<Root>' : 'SRSSwIndCtrl'
 * '<S1>'   : 'SRSSwIndCtrl/SRSSwIndCtrl_Cal_sys'
 * '<S2>'   : 'SRSSwIndCtrl/SRSSwIndCtrl_Init'
 * '<S3>'   : 'SRSSwIndCtrl/SRSSwIndCtrl_Cal_sys/Subsystem'
 * '<S4>'   : 'SRSSwIndCtrl/SRSSwIndCtrl_Cal_sys/Subsystem/Chart'
 * '<S5>'   : 'SRSSwIndCtrl/SRSSwIndCtrl_Cal_sys/Subsystem/Subsystem'
 * '<S6>'   : 'SRSSwIndCtrl/SRSSwIndCtrl_Cal_sys/Subsystem/firstTimeChk'
 */
#endif                                 /* RTW_HEADER_SRSSwIndCtrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
