/*
 * File: MdXX_RspOutComm.h
 *
 * Code generated for Simulink model 'MdXX_RspOutComm'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 14:11:12 2023
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

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<S3>/MdRsp1' */
typedef struct {
  uint8 is_active_c2_RspLib;           /* '<S3>/MdRsp1' */
  uint8 is_c2_RspLib;                  /* '<S3>/MdRsp1' */
  uint8 is_MidState;                   /* '<S3>/MdRsp1' */
  uint8 cntexit;                       /* '<S3>/MdRsp1' */
} DW_MdRsp1_MdXX_RspOutComm_T;

/* Block signals (default storage) */
typedef struct tag_B_MdXX_RspOutComm_T {
  uint8 ModeRspOut;                    /* '<S3>/MdRsp9' */
  uint8 ModeRspOut_j;                  /* '<S3>/MdRsp8' */
  uint8 ModeRspOut_p;                  /* '<S3>/MdRsp7' */
  uint8 ModeRspOut_m;                  /* '<S3>/MdRsp6' */
  uint8 ModeRspOut_a;                  /* '<S3>/MdRsp5' */
  uint8 ModeRspOut_d;                  /* '<S3>/MdRsp4' */
  uint8 ModeRspOut_e;                  /* '<S3>/MdRsp32' */
  uint8 ModeRspOut_c;                  /* '<S3>/MdRsp31' */
  uint8 ModeRspOut_du;                 /* '<S3>/MdRsp30' */
  uint8 ModeRspOut_pj;                 /* '<S3>/MdRsp3' */
  uint8 ModeRspOut_pu;                 /* '<S3>/MdRsp29' */
  uint8 ModeRspOut_l;                  /* '<S3>/MdRsp28' */
  uint8 ModeRspOut_cr;                 /* '<S3>/MdRsp27' */
  uint8 ModeRspOut_h;                  /* '<S3>/MdRsp26' */
  uint8 ModeRspOut_g;                  /* '<S3>/MdRsp25' */
  uint8 ModeRspOut_b;                  /* '<S3>/MdRsp24' */
  uint8 ModeRspOut_hd;                 /* '<S3>/MdRsp23' */
  uint8 ModeRspOut_k;                  /* '<S3>/MdRsp22' */
  uint8 ModeRspOut_hc;                 /* '<S3>/MdRsp21' */
  uint8 ModeRspOut_er;                 /* '<S3>/MdRsp20' */
  uint8 ModeRspOut_gq;                 /* '<S3>/MdRsp2' */
  uint8 ModeRspOut_jy;                 /* '<S3>/MdRsp19' */
  uint8 ModeRspOut_cq;                 /* '<S3>/MdRsp18' */
  uint8 ModeRspOut_mm;                 /* '<S3>/MdRsp17' */
  uint8 ModeRspOut_n;                  /* '<S3>/MdRsp16' */
  uint8 ModeRspOut_o;                  /* '<S3>/MdRsp15' */
  uint8 ModeRspOut_kt;                 /* '<S3>/MdRsp14' */
  uint8 ModeRspOut_gx;                 /* '<S3>/MdRsp13' */
  uint8 ModeRspOut_dp;                 /* '<S3>/MdRsp12' */
  uint8 ModeRspOut_m2;                 /* '<S3>/MdRsp11' */
  uint8 ModeRspOut_kk;                 /* '<S3>/MdRsp10' */
  uint8 ModeRspOut_cv;                 /* '<S3>/MdRsp1' */
  SrcReqTp1 MdSrcTpOut;                /* '<S3>/MdRsp9' */
  SrcReqTp1 MdSrcTpOut_n;              /* '<S3>/MdRsp8' */
  SrcReqTp1 MdSrcTpOut_f;              /* '<S3>/MdRsp7' */
  SrcReqTp1 MdSrcTpOut_a;              /* '<S3>/MdRsp6' */
  SrcReqTp1 MdSrcTpOut_l;              /* '<S3>/MdRsp5' */
  SrcReqTp1 MdSrcTpOut_j;              /* '<S3>/MdRsp4' */
  SrcReqTp1 MdSrcTpOut_b;              /* '<S3>/MdRsp32' */
  SrcReqTp1 MdSrcTpOut_jn;             /* '<S3>/MdRsp31' */
  SrcReqTp1 MdSrcTpOut_bg;             /* '<S3>/MdRsp30' */
  SrcReqTp1 MdSrcTpOut_g;              /* '<S3>/MdRsp3' */
  SrcReqTp1 MdSrcTpOut_gr;             /* '<S3>/MdRsp29' */
  SrcReqTp1 MdSrcTpOut_p;              /* '<S3>/MdRsp28' */
  SrcReqTp1 MdSrcTpOut_js;             /* '<S3>/MdRsp27' */
  SrcReqTp1 MdSrcTpOut_gg;             /* '<S3>/MdRsp26' */
  SrcReqTp1 MdSrcTpOut_e;              /* '<S3>/MdRsp25' */
  SrcReqTp1 MdSrcTpOut_fe;             /* '<S3>/MdRsp24' */
  SrcReqTp1 MdSrcTpOut_m;              /* '<S3>/MdRsp23' */
  SrcReqTp1 MdSrcTpOut_jp;             /* '<S3>/MdRsp22' */
  SrcReqTp1 MdSrcTpOut_d;              /* '<S3>/MdRsp21' */
  SrcReqTp1 MdSrcTpOut_lk;             /* '<S3>/MdRsp20' */
  SrcReqTp1 MdSrcTpOut_ew;             /* '<S3>/MdRsp2' */
  SrcReqTp1 MdSrcTpOut_j3;             /* '<S3>/MdRsp19' */
  SrcReqTp1 MdSrcTpOut_mu;             /* '<S3>/MdRsp18' */
  SrcReqTp1 MdSrcTpOut_c;              /* '<S3>/MdRsp17' */
  SrcReqTp1 MdSrcTpOut_k;              /* '<S3>/MdRsp16' */
  SrcReqTp1 MdSrcTpOut_fu;             /* '<S3>/MdRsp15' */
  SrcReqTp1 MdSrcTpOut_i;              /* '<S3>/MdRsp14' */
  SrcReqTp1 MdSrcTpOut_cn;             /* '<S3>/MdRsp13' */
  SrcReqTp1 MdSrcTpOut_bj;             /* '<S3>/MdRsp12' */
  SrcReqTp1 MdSrcTpOut_o;              /* '<S3>/MdRsp11' */
  SrcReqTp1 MdSrcTpOut_ao;             /* '<S3>/MdRsp10' */
  SrcReqTp1 MdSrcTpOut_j2;             /* '<S3>/MdRsp1' */
} B_MdXX_RspOutComm_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_MdXX_RspOutComm_T {
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp9;/* '<S3>/MdRsp9' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp8;/* '<S3>/MdRsp8' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp7;/* '<S3>/MdRsp7' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp6;/* '<S3>/MdRsp6' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp5;/* '<S3>/MdRsp5' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp4;/* '<S3>/MdRsp4' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp32;/* '<S3>/MdRsp32' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp31;/* '<S3>/MdRsp31' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp30;/* '<S3>/MdRsp30' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp3;/* '<S3>/MdRsp3' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp29;/* '<S3>/MdRsp29' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp28;/* '<S3>/MdRsp28' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp27;/* '<S3>/MdRsp27' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp26;/* '<S3>/MdRsp26' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp25;/* '<S3>/MdRsp25' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp24;/* '<S3>/MdRsp24' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp23;/* '<S3>/MdRsp23' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp22;/* '<S3>/MdRsp22' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp21;/* '<S3>/MdRsp21' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp20;/* '<S3>/MdRsp20' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp2;/* '<S3>/MdRsp2' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp19;/* '<S3>/MdRsp19' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp18;/* '<S3>/MdRsp18' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp17;/* '<S3>/MdRsp17' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp16;/* '<S3>/MdRsp16' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp15;/* '<S3>/MdRsp15' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp14;/* '<S3>/MdRsp14' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp13;/* '<S3>/MdRsp13' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp12;/* '<S3>/MdRsp12' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp11;/* '<S3>/MdRsp11' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp10;/* '<S3>/MdRsp10' */
  DW_MdRsp1_MdXX_RspOutComm_T sf_MdRsp1;/* '<S3>/MdRsp1' */
} DW_MdXX_RspOutComm_T;

/* Invariant block signals (default storage) */
typedef struct {
  const uint32 ShiftArithmetic;        /* '<S68>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_b;      /* '<S69>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_c;      /* '<S70>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_l;      /* '<S71>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_m;      /* '<S72>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_lg;     /* '<S73>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_i;      /* '<S74>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_ig;     /* '<S75>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_f;      /* '<S76>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_g;      /* '<S77>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_e;      /* '<S78>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_iv;     /* '<S79>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_f0;     /* '<S80>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_bg;     /* '<S81>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_a;      /* '<S82>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_g4;     /* '<S83>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_ay;     /* '<S84>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_igb;    /* '<S85>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_bb;     /* '<S86>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_ax;     /* '<S87>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_l0;     /* '<S88>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_cl;     /* '<S89>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_ap;     /* '<S90>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_n;      /* '<S91>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_ns;     /* '<S92>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_ip;     /* '<S93>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_mi;     /* '<S94>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_d;      /* '<S95>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_k;      /* '<S96>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_o;      /* '<S97>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_gx;     /* '<S98>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_k3;     /* '<S99>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_ms;     /* '<S100>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_ar;     /* '<S101>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_ld;     /* '<S102>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_j;      /* '<S103>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_jg;     /* '<S104>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_eo;     /* '<S105>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_bd;     /* '<S106>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_jn;     /* '<S107>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_g3;     /* '<S108>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_at;     /* '<S109>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_na;     /* '<S110>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_ie;     /* '<S111>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_l2;     /* '<S112>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_a0;     /* '<S113>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_bu;     /* '<S114>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_jp;     /* '<S115>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_ex;     /* '<S116>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_et;     /* '<S117>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_h;      /* '<S118>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_fs;     /* '<S119>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_h1;     /* '<S120>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_kq;     /* '<S121>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_cq;     /* '<S122>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_mf;     /* '<S123>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_p;      /* '<S124>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_kb;     /* '<S125>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_bp;     /* '<S126>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_dv;     /* '<S127>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_mo;     /* '<S128>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_dh;     /* '<S129>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_ej;     /* '<S130>/Shift Arithmetic' */
  const uint32 ShiftArithmetic_ft;     /* '<S131>/Shift Arithmetic' */
} ConstB_MdXX_RspOutComm_T;

/* Block signals (default storage) */
extern B_MdXX_RspOutComm_T MdXX_RspOutComm_B;

/* Block states (default storage) */
extern DW_MdXX_RspOutComm_T MdXX_RspOutComm_DW;
extern const ConstB_MdXX_RspOutComm_T MdXX_RspOutComm_ConstB;/* constant block i/o */

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
 * Block '<S3>/Data Type Conversion32' : Eliminate redundant data type conversion
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
 * '<S1>'   : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys'
 * '<S2>'   : 'MdXX_RspOutComm/MdXX_RspOutComm_Init'
 * '<S3>'   : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem'
 * '<S4>'   : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp1'
 * '<S5>'   : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp10'
 * '<S6>'   : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp11'
 * '<S7>'   : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp12'
 * '<S8>'   : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp13'
 * '<S9>'   : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp14'
 * '<S10>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp15'
 * '<S11>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp16'
 * '<S12>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp17'
 * '<S13>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp18'
 * '<S14>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp19'
 * '<S15>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp2'
 * '<S16>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp20'
 * '<S17>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp21'
 * '<S18>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp22'
 * '<S19>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp23'
 * '<S20>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp24'
 * '<S21>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp25'
 * '<S22>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp26'
 * '<S23>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp27'
 * '<S24>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp28'
 * '<S25>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp29'
 * '<S26>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp3'
 * '<S27>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp30'
 * '<S28>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp31'
 * '<S29>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp32'
 * '<S30>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp4'
 * '<S31>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp5'
 * '<S32>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp6'
 * '<S33>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp7'
 * '<S34>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp8'
 * '<S35>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRsp9'
 * '<S36>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc1'
 * '<S37>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc10'
 * '<S38>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc11'
 * '<S39>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc12'
 * '<S40>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc13'
 * '<S41>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc14'
 * '<S42>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc15'
 * '<S43>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc16'
 * '<S44>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc17'
 * '<S45>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc18'
 * '<S46>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc19'
 * '<S47>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc2'
 * '<S48>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc20'
 * '<S49>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc21'
 * '<S50>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc22'
 * '<S51>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc23'
 * '<S52>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc24'
 * '<S53>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc25'
 * '<S54>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc26'
 * '<S55>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc27'
 * '<S56>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc28'
 * '<S57>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc29'
 * '<S58>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc3'
 * '<S59>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc30'
 * '<S60>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc31'
 * '<S61>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc32'
 * '<S62>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc4'
 * '<S63>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc5'
 * '<S64>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc6'
 * '<S65>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc7'
 * '<S66>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc8'
 * '<S67>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc9'
 * '<S68>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc1/BitSelector'
 * '<S69>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc1/BitSelector1'
 * '<S70>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc10/BitSelector'
 * '<S71>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc10/BitSelector1'
 * '<S72>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc11/BitSelector'
 * '<S73>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc11/BitSelector1'
 * '<S74>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc12/BitSelector'
 * '<S75>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc12/BitSelector1'
 * '<S76>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc13/BitSelector'
 * '<S77>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc13/BitSelector1'
 * '<S78>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc14/BitSelector'
 * '<S79>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc14/BitSelector1'
 * '<S80>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc15/BitSelector'
 * '<S81>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc15/BitSelector1'
 * '<S82>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc16/BitSelector'
 * '<S83>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc16/BitSelector1'
 * '<S84>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc17/BitSelector'
 * '<S85>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc17/BitSelector1'
 * '<S86>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc18/BitSelector'
 * '<S87>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc18/BitSelector1'
 * '<S88>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc19/BitSelector'
 * '<S89>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc19/BitSelector1'
 * '<S90>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc2/BitSelector'
 * '<S91>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc2/BitSelector1'
 * '<S92>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc20/BitSelector'
 * '<S93>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc20/BitSelector1'
 * '<S94>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc21/BitSelector'
 * '<S95>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc21/BitSelector1'
 * '<S96>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc22/BitSelector'
 * '<S97>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc22/BitSelector1'
 * '<S98>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc23/BitSelector'
 * '<S99>'  : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc23/BitSelector1'
 * '<S100>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc24/BitSelector'
 * '<S101>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc24/BitSelector1'
 * '<S102>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc25/BitSelector'
 * '<S103>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc25/BitSelector1'
 * '<S104>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc26/BitSelector'
 * '<S105>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc26/BitSelector1'
 * '<S106>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc27/BitSelector'
 * '<S107>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc27/BitSelector1'
 * '<S108>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc28/BitSelector'
 * '<S109>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc28/BitSelector1'
 * '<S110>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc29/BitSelector'
 * '<S111>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc29/BitSelector1'
 * '<S112>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc3/BitSelector'
 * '<S113>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc3/BitSelector1'
 * '<S114>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc30/BitSelector'
 * '<S115>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc30/BitSelector1'
 * '<S116>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc31/BitSelector'
 * '<S117>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc31/BitSelector1'
 * '<S118>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc32/BitSelector'
 * '<S119>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc32/BitSelector1'
 * '<S120>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc4/BitSelector'
 * '<S121>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc4/BitSelector1'
 * '<S122>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc5/BitSelector'
 * '<S123>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc5/BitSelector1'
 * '<S124>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc6/BitSelector'
 * '<S125>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc6/BitSelector1'
 * '<S126>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc7/BitSelector'
 * '<S127>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc7/BitSelector1'
 * '<S128>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc8/BitSelector'
 * '<S129>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc8/BitSelector1'
 * '<S130>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc9/BitSelector'
 * '<S131>' : 'MdXX_RspOutComm/MdXX_RspOutCommCalc_Cal_sys/Subsystem/MdRspOutDataSelc9/BitSelector1'
 */
#endif                                 /* RTW_HEADER_MdXX_RspOutComm_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
