/*
 * File: MdXX_StatusToNetWork.h
 *
 * Code generated for Simulink model 'MdXX_StatusToNetWork'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jul 12 09:08:04 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MdXX_StatusToNetWork_h_
#define RTW_HEADER_MdXX_StatusToNetWork_h_
#ifndef MdXX_StatusToNetWork_COMMON_INCLUDES_
# define MdXX_StatusToNetWork_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_MdXX_StatusToNetWork.h"
#endif                                 /* MdXX_StatusToNetWork_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct tag_B_MdXX_StatusToNetWork_T {
  uint8 TmpLatchAtMdXX_Stat_Md1_Stat_re;
  uint8 TmpLatchAtMdXX_Stat_Md2_Stat_re;
  uint8 TmpLatchAtMdXX_Stat_Md3_Stat_re;
  uint8 TmpLatchAtMdXX_Stat_Md4_Stat_re;
  uint8 TmpLatchAtMdXX_Stat_Md5_Stat_re;
  uint8 ModeStatSRSswArray[10];        /* '<S3>/Chart' */
} B_MdXX_StatusToNetWork_T;

/* Block signals (default storage) */
extern B_MdXX_StatusToNetWork_T MdXX_StatusToNetWork_B;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion11' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion12' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion13' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion16' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion19' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion20' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion21' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion22' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion23' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion24' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion25' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion26' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion27' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion28' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion29' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion30' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion31' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion32' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion33' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion34' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion35' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion36' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion37' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion38' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion39' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion40' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion41' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion42' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion43' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion7' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion8' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion9' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion10' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion11' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion12' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion13' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion16' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion19' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion20' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion21' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion22' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion23' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion24' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion25' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion26' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion27' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion28' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion29' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion30' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion31' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion7' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion8' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion9' : Eliminate redundant data type conversion
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
 * '<Root>' : 'MdXX_StatusToNetWork'
 * '<S1>'   : 'MdXX_StatusToNetWork/MdXX_StatusToNetWork_Cal_sys'
 * '<S2>'   : 'MdXX_StatusToNetWork/MdXX_StatusToNetWork_Init'
 * '<S3>'   : 'MdXX_StatusToNetWork/MdXX_StatusToNetWork_Cal_sys/Subsystem'
 * '<S4>'   : 'MdXX_StatusToNetWork/MdXX_StatusToNetWork_Cal_sys/Subsystem/Chart'
 */
#endif                                 /* RTW_HEADER_MdXX_StatusToNetWork_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
