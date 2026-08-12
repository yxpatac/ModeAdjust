/*
 * File: MdXX_RspToNetWork.h
 *
 * Code generated for Simulink model 'MdXX_RspToNetWork'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jul 12 09:33:13 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MdXX_RspToNetWork_h_
#define RTW_HEADER_MdXX_RspToNetWork_h_
#include <string.h>
#ifndef MdXX_RspToNetWork_COMMON_INCLUDES_
# define MdXX_RspToNetWork_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_MdXX_RspToNetWork.h"
#endif                                 /* MdXX_RspToNetWork_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct tag_B_MdXX_RspToNetWork_T {
  uint8 RspArray[128];                 /* '<S3>/Chart' */
} B_MdXX_RspToNetWork_T;

/* Block signals (default storage) */
extern B_MdXX_RspToNetWork_T MdXX_RspToNetWork_B;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion10' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion100' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion101' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion102' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion103' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion104' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion105' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion106' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion107' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion108' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion109' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion11' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion110' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion111' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion112' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion113' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion114' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion115' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion116' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion117' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion118' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion119' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion12' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion120' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion121' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion122' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion123' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion124' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion125' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion126' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion127' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion128' : Eliminate redundant data type conversion
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
 * Block '<S1>/Data Type Conversion44' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion45' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion46' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion47' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion48' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion49' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion50' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion51' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion52' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion53' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion54' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion55' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion56' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion57' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion58' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion59' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion60' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion61' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion62' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion63' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion64' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion65' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion66' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion67' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion68' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion69' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion7' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion70' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion71' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion72' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion73' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion74' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion75' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion76' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion77' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion78' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion79' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion8' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion80' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion81' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion82' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion83' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion84' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion85' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion86' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion87' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion88' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion89' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion9' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion90' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion91' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion92' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion93' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion94' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion95' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion96' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion97' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion98' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion99' : Eliminate redundant data type conversion
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
 * '<Root>' : 'MdXX_RspToNetWork'
 * '<S1>'   : 'MdXX_RspToNetWork/MdXX_RspToNetWork_Cal_sys'
 * '<S2>'   : 'MdXX_RspToNetWork/MdXX_RspToNetWork_Init'
 * '<S3>'   : 'MdXX_RspToNetWork/MdXX_RspToNetWork_Cal_sys/Subsystem'
 * '<S4>'   : 'MdXX_RspToNetWork/MdXX_RspToNetWork_Cal_sys/Subsystem/Chart'
 */
#endif                                 /* RTW_HEADER_MdXX_RspToNetWork_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
