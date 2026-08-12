/*
 * File: MdSWReqChk.h
 *
 * Code generated for Simulink model 'MdSWReqChk'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 25 10:45:46 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MdSWReqChk_h_
#define RTW_HEADER_MdSWReqChk_h_
#include <string.h>
#ifndef MdSWReqChk_COMMON_INCLUDES_
# define MdSWReqChk_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_MdSWReqChk.h"
#endif                                 /* MdSWReqChk_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<S19>/Chart' */
typedef struct {
  uint8 is_active_c8_MdSWReqChk;       /* '<S19>/Chart' */
  uint8 is_c8_MdSWReqChk;              /* '<S19>/Chart' */
  uint8 forbidcnt;                     /* '<S19>/Chart' */
} DW_Chart_MdSWReqChk_T;

/* Block signals (default storage) */
typedef struct tag_B_MdSWReqChk_T {
  boolean Notforbid;                   /* '<S25>/Chart' */
  boolean Notforbid_e;                 /* '<S24>/Chart' */
  boolean Notforbid_l;                 /* '<S23>/Chart' */
  boolean Notforbid_c;                 /* '<S22>/Chart' */
  boolean Notforbid_i;                 /* '<S21>/Chart' */
  boolean Notforbid_k;                 /* '<S20>/Chart' */
  boolean Notforbid_j;                 /* '<S19>/Chart' */
} B_MdSWReqChk_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_MdSWReqChk_T {
  DW_Chart_MdSWReqChk_T sf_Chart_nk;   /* '<S25>/Chart' */
  DW_Chart_MdSWReqChk_T sf_Chart_k;    /* '<S24>/Chart' */
  DW_Chart_MdSWReqChk_T sf_Chart_i;    /* '<S23>/Chart' */
  DW_Chart_MdSWReqChk_T sf_Chart_p;    /* '<S22>/Chart' */
  DW_Chart_MdSWReqChk_T sf_Chart_c;    /* '<S21>/Chart' */
  DW_Chart_MdSWReqChk_T sf_Chart_n;    /* '<S20>/Chart' */
  DW_Chart_MdSWReqChk_T sf_Chart;      /* '<S19>/Chart' */
} DW_MdSWReqChk_T;

/* Block signals (default storage) */
extern B_MdSWReqChk_T MdSWReqChk_B;

/* Block states (default storage) */
extern DW_MdSWReqChk_T MdSWReqChk_DW;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/PA_KeSMSAutoEZEFwdBkwdPosEna_Val' : Unused code path elimination
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
 * '<Root>' : 'MdSWReqChk'
 * '<S1>'   : 'MdSWReqChk/MdSWReqChk_Cal_sys'
 * '<S2>'   : 'MdSWReqChk/MdSWReqChk_Init'
 * '<S3>'   : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem'
 * '<S4>'   : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem'
 * '<S5>'   : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector'
 * '<S6>'   : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector1'
 * '<S7>'   : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector10'
 * '<S8>'   : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector11'
 * '<S9>'   : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector12'
 * '<S10>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector13'
 * '<S11>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector2'
 * '<S12>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector3'
 * '<S13>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector4'
 * '<S14>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector5'
 * '<S15>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector6'
 * '<S16>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector7'
 * '<S17>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector8'
 * '<S18>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/32BitSelector9'
 * '<S19>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem1'
 * '<S20>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem2'
 * '<S21>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem3'
 * '<S22>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem4'
 * '<S23>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem5'
 * '<S24>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem6'
 * '<S25>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem7'
 * '<S26>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem1/Chart'
 * '<S27>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem2/Chart'
 * '<S28>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem3/Chart'
 * '<S29>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem4/Chart'
 * '<S30>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem5/Chart'
 * '<S31>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem6/Chart'
 * '<S32>'  : 'MdSWReqChk/MdSWReqChk_Cal_sys/Subsystem/Subsystem/Subsystem7/Chart'
 */
#endif                                 /* RTW_HEADER_MdSWReqChk_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
