/*
 * File: MdXX_RspOutComm.h
 *
 * Code generated for Simulink model 'MdXX_RspOutComm'.
 *
 * Model version                  : 1.42
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Nov 21 11:58:54 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MdXX_RspOutComm_h_
#define RTW_HEADER_MdXX_RspOutComm_h_
#ifndef MdXX_RspOutComm_COMMON_INCLUDES_
# define MdXX_RspOutComm_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_MdXX_RspOutComm.h"
#endif                                 /* MdXX_RspOutComm_COMMON_INCLUDES_ */

#include "MdXX_RspOutComm_types.h"

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<S3>/Md10RspOutComm' */
typedef struct {
  uint8 is_active_c2_RspLib;           /* '<S3>/Md10RspOutComm' */
  uint8 is_c2_RspLib;                  /* '<S3>/Md10RspOutComm' */
  uint8 cntexit;                       /* '<S3>/Md10RspOutComm' */
} DW_Md10RspOutComm_MdXX_RspOut_T;

/* Block signals (default storage) */
typedef struct tag_B_MdXX_RspOutComm_T {
  SrcReqTp1 MdSrcTpOut;                /* '<S3>/Md9RspOutComm' */
  SrcReqTp1 MdSrcTpOut_b;              /* '<S3>/Md8RspOutComm' */
  SrcReqTp1 MdSrcTpOut_n;              /* '<S3>/Md7RspOutComm' */
  SrcReqTp1 MdSrcTpOut_o;              /* '<S3>/Md6RspOutComm' */
  SrcReqTp1 MdSrcTpOut_d;              /* '<S3>/Md5RspOutComm' */
  SrcReqTp1 MdSrcTpOut_nz;             /* '<S3>/Md4RspOutComm' */
  SrcReqTp1 MdSrcTpOut_m;              /* '<S3>/Md3RspOutComm' */
  SrcReqTp1 MdSrcTpOut_m4;             /* '<S3>/Md2RspOutComm' */
  SrcReqTp1 MdSrcTpOut_l;              /* '<S3>/Md20RspOutComm' */
  SrcReqTp1 MdSrcTpOut_a;              /* '<S3>/Md1RspOutComm' */
  SrcReqTp1 MdSrcTpOut_c;              /* '<S3>/Md19RspOutComm' */
  SrcReqTp1 MdSrcTpOut_ok;             /* '<S3>/Md18RspOutComm' */
  SrcReqTp1 MdSrcTpOut_g;              /* '<S3>/Md17RspOutComm' */
  SrcReqTp1 MdSrcTpOut_k;              /* '<S3>/Md16RspOutComm' */
  SrcReqTp1 MdSrcTpOut_i;              /* '<S3>/Md15RspOutComm' */
  SrcReqTp1 MdSrcTpOut_ld;             /* '<S3>/Md14RspOutComm' */
  SrcReqTp1 MdSrcTpOut_p;              /* '<S3>/Md13RspOutComm' */
  SrcReqTp1 MdSrcTpOut_pj;             /* '<S3>/Md12RspOutComm' */
  SrcReqTp1 MdSrcTpOut_c1;             /* '<S3>/Md11RspOutComm' */
  SrcReqTp1 MdSrcTpOut_kq;             /* '<S3>/Md10RspOutComm' */
  uint8 ModeRspOut;                    /* '<S3>/Md9RspOutComm' */
  uint8 ModeRspOut_c;                  /* '<S3>/Md8RspOutComm' */
  uint8 ModeRspOut_o;                  /* '<S3>/Md7RspOutComm' */
  uint8 ModeRspOut_cb;                 /* '<S3>/Md6RspOutComm' */
  uint8 ModeRspOut_p;                  /* '<S3>/Md5RspOutComm' */
  uint8 ModeRspOut_k;                  /* '<S3>/Md4RspOutComm' */
  uint8 ModeRspOut_e;                  /* '<S3>/Md3RspOutComm' */
  uint8 ModeRspOut_b;                  /* '<S3>/Md2RspOutComm' */
  uint8 ModeRspOut_km;                 /* '<S3>/Md20RspOutComm' */
  uint8 ModeRspOut_a;                  /* '<S3>/Md1RspOutComm' */
  uint8 ModeRspOut_g;                  /* '<S3>/Md19RspOutComm' */
  uint8 ModeRspOut_m;                  /* '<S3>/Md18RspOutComm' */
  uint8 ModeRspOut_pf;                 /* '<S3>/Md17RspOutComm' */
  uint8 ModeRspOut_m2;                 /* '<S3>/Md16RspOutComm' */
  uint8 ModeRspOut_ml;                 /* '<S3>/Md15RspOutComm' */
  uint8 ModeRspOut_oc;                 /* '<S3>/Md14RspOutComm' */
  uint8 ModeRspOut_l;                  /* '<S3>/Md13RspOutComm' */
  uint8 ModeRspOut_d;                  /* '<S3>/Md12RspOutComm' */
  uint8 ModeRspOut_ez;                 /* '<S3>/Md11RspOutComm' */
  uint8 ModeRspOut_or;                 /* '<S3>/Md10RspOutComm' */
} B_MdXX_RspOutComm_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_MdXX_RspOutComm_T {
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md9RspOutComm;/* '<S3>/Md9RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md8RspOutComm;/* '<S3>/Md8RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md7RspOutComm;/* '<S3>/Md7RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md6RspOutComm;/* '<S3>/Md6RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md5RspOutComm;/* '<S3>/Md5RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md4RspOutComm;/* '<S3>/Md4RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md3RspOutComm;/* '<S3>/Md3RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md2RspOutComm;/* '<S3>/Md2RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md20RspOutComm;/* '<S3>/Md20RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md1RspOutComm;/* '<S3>/Md1RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md19RspOutComm;/* '<S3>/Md19RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md18RspOutComm;/* '<S3>/Md18RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md17RspOutComm;/* '<S3>/Md17RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md16RspOutComm;/* '<S3>/Md16RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md15RspOutComm;/* '<S3>/Md15RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md14RspOutComm;/* '<S3>/Md14RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md13RspOutComm;/* '<S3>/Md13RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md12RspOutComm;/* '<S3>/Md12RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md11RspOutComm;/* '<S3>/Md11RspOutComm' */
  DW_Md10RspOutComm_MdXX_RspOut_T sf_Md10RspOutComm;/* '<S3>/Md10RspOutComm' */
} DW_MdXX_RspOutComm_T;

/* Block signals (default storage) */
extern B_MdXX_RspOutComm_T MdXX_RspOutComm_B;

/* Block states (default storage) */
extern DW_MdXX_RspOutComm_T MdXX_RspOutComm_DW;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
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
 * Block '<S3>/Data Type Conversion3' : Eliminate redundant data type conversion
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
 * '<Root>' : 'MdXX_RspOutComm'
 * '<S1>'   : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys'
 * '<S2>'   : 'MdXX_RspOutComm/MdXX_RspOutComm_Init'
 * '<S3>'   : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem'
 * '<S4>'   : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector'
 * '<S5>'   : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector1'
 * '<S6>'   : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector10'
 * '<S7>'   : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector11'
 * '<S8>'   : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector12'
 * '<S9>'   : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector13'
 * '<S10>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector14'
 * '<S11>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector15'
 * '<S12>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector16'
 * '<S13>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector17'
 * '<S14>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector18'
 * '<S15>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector19'
 * '<S16>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector2'
 * '<S17>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector20'
 * '<S18>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector21'
 * '<S19>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector22'
 * '<S20>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector23'
 * '<S21>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector24'
 * '<S22>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector25'
 * '<S23>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector26'
 * '<S24>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector27'
 * '<S25>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector28'
 * '<S26>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector29'
 * '<S27>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector3'
 * '<S28>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector30'
 * '<S29>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector31'
 * '<S30>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector32'
 * '<S31>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector33'
 * '<S32>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector34'
 * '<S33>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector35'
 * '<S34>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector36'
 * '<S35>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector37'
 * '<S36>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector38'
 * '<S37>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector39'
 * '<S38>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector4'
 * '<S39>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector5'
 * '<S40>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector6'
 * '<S41>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector7'
 * '<S42>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector8'
 * '<S43>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/32BitSelector9'
 * '<S44>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md10RspOutComm'
 * '<S45>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md11RspOutComm'
 * '<S46>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md12RspOutComm'
 * '<S47>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md13RspOutComm'
 * '<S48>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md14RspOutComm'
 * '<S49>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md15RspOutComm'
 * '<S50>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md16RspOutComm'
 * '<S51>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md17RspOutComm'
 * '<S52>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md18RspOutComm'
 * '<S53>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md19RspOutComm'
 * '<S54>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md1RspOutComm'
 * '<S55>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md20RspOutComm'
 * '<S56>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md2RspOutComm'
 * '<S57>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md3RspOutComm'
 * '<S58>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md4RspOutComm'
 * '<S59>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md5RspOutComm'
 * '<S60>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md6RspOutComm'
 * '<S61>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md7RspOutComm'
 * '<S62>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md8RspOutComm'
 * '<S63>'  : 'MdXX_RspOutComm/MdXX_RspOutCommRunnable_sys/Subsystem/Md9RspOutComm'
 */
#endif                                 /* RTW_HEADER_MdXX_RspOutComm_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
