/*
 * File: Md53StEnCtrl.h
 *
 * Code generated for Simulink model 'Md53StEnCtrl'.
 *
 * Model version                  : V1.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Jun 24 14:16:55 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Md53StEnCtrl_h_
#define RTW_HEADER_Md53StEnCtrl_h_
#ifndef Md53StEnCtrl_COMMON_INCLUDES_
# define Md53StEnCtrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_Md53StEnCtrl.h"
#endif                                 /* Md53StEnCtrl_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct tag_B_Md53StEnCtrl_T {
  boolean RelationalOperator1;         /* '<S3>/Relational Operator1' */
  boolean SecRwRtStFirstStepMov;       /* '<S3>/Chart' */
} B_Md53StEnCtrl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_Md53StEnCtrl_T {
  boolean UnitDelay_DSTATE;            /* '<S3>/Unit Delay' */
  boolean UnitDelay1_DSTATE;           /* '<S3>/Unit Delay1' */
} DW_Md53StEnCtrl_T;

/* Block signals (default storage) */
extern B_Md53StEnCtrl_T Md53StEnCtrl_B;

/* Block states (default storage) */
extern DW_Md53StEnCtrl_T Md53StEnCtrl_DW;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/PA_KeSMSw4SSecRwLtStLgrstOtwdInwdClosePos1_Val' : Unused code path elimination
 * Block '<S2>/PA_KeSMSw4SSecRwLtStLgrstUpwdDnwdClosePos1_Val' : Unused code path elimination
 * Block '<S2>/PA_KeSMSw4SSecRwLtStLgrstUpwdDnwdClosePos2_Val' : Unused code path elimination
 */

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
 * '<Root>' : 'Md53StEnCtrl'
 * '<S1>'   : 'Md53StEnCtrl/Md53StEnCtrl_Cal_sys'
 * '<S2>'   : 'Md53StEnCtrl/Md53StEnCtrl_Init'
 * '<S3>'   : 'Md53StEnCtrl/Md53StEnCtrl_Cal_sys/Subsystem'
 * '<S4>'   : 'Md53StEnCtrl/Md53StEnCtrl_Cal_sys/Subsystem/32BitSelector'
 * '<S5>'   : 'Md53StEnCtrl/Md53StEnCtrl_Cal_sys/Subsystem/Chart'
 * '<S6>'   : 'Md53StEnCtrl/Md53StEnCtrl_Cal_sys/Subsystem/If Action Subsystem1'
 * '<S7>'   : 'Md53StEnCtrl/Md53StEnCtrl_Cal_sys/Subsystem/If Action Subsystem11'
 * '<S8>'   : 'Md53StEnCtrl/Md53StEnCtrl_Cal_sys/Subsystem/If Action Subsystem14'
 * '<S9>'   : 'Md53StEnCtrl/Md53StEnCtrl_Cal_sys/Subsystem/If Action Subsystem2'
 * '<S10>'  : 'Md53StEnCtrl/Md53StEnCtrl_Cal_sys/Subsystem/If Action Subsystem3'
 * '<S11>'  : 'Md53StEnCtrl/Md53StEnCtrl_Cal_sys/Subsystem/If Action Subsystem4'
 * '<S12>'  : 'Md53StEnCtrl/Md53StEnCtrl_Cal_sys/Subsystem/Subsystem'
 */
#endif                                 /* RTW_HEADER_Md53StEnCtrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
