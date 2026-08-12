/*
 * File: MdXX_Status.h
 *
 * Code generated for Simulink model 'MdXX_Status'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jul 11 14:57:35 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MdXX_Status_h_
#define RTW_HEADER_MdXX_Status_h_
#ifndef MdXX_Status_COMMON_INCLUDES_
# define MdXX_Status_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_MdXX_Status.h"
#endif                                 /* MdXX_Status_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<S68>/Chart' */
typedef struct {
  uint8 is_active_c4_RspLib;           /* '<S68>/Chart' */
  uint8 is_c4_RspLib;                  /* '<S68>/Chart' */
} DW_Chart_MdXX_Status_T;

/* Block signals (default storage) */
typedef struct tag_B_MdXX_Status_T {
  uint8 stat;                          /* '<S99>/Chart' */
  uint8 stat_n;                        /* '<S98>/Chart' */
  uint8 stat_o;                        /* '<S97>/Chart' */
  uint8 stat_g;                        /* '<S96>/Chart' */
  uint8 stat_c;                        /* '<S95>/Chart' */
  uint8 stat_a;                        /* '<S94>/Chart' */
  uint8 stat_g2;                       /* '<S93>/Chart' */
  uint8 stat_h;                        /* '<S92>/Chart' */
  uint8 stat_n3;                       /* '<S91>/Chart' */
  uint8 stat_l;                        /* '<S90>/Chart' */
  uint8 stat_ao;                       /* '<S89>/Chart' */
  uint8 stat_d;                        /* '<S88>/Chart' */
  uint8 stat_gu;                       /* '<S87>/Chart' */
  uint8 stat_cs;                       /* '<S86>/Chart' */
  uint8 stat_ab;                       /* '<S85>/Chart' */
  uint8 stat_k;                        /* '<S84>/Chart' */
  uint8 stat_hd;                       /* '<S83>/Chart' */
  uint8 stat_p;                        /* '<S82>/Chart' */
  uint8 stat_m;                        /* '<S81>/Chart' */
  uint8 stat_no;                       /* '<S80>/Chart' */
  uint8 stat_at;                       /* '<S79>/Chart' */
  uint8 stat_lj;                       /* '<S78>/Chart' */
  uint8 stat_mk;                       /* '<S77>/Chart' */
  uint8 stat_lo;                       /* '<S76>/Chart' */
  uint8 stat_k5;                       /* '<S75>/Chart' */
  uint8 stat_lon;                      /* '<S74>/Chart' */
  uint8 stat_j;                        /* '<S73>/Chart' */
  uint8 stat_e;                        /* '<S72>/Chart' */
  uint8 stat_m0;                       /* '<S71>/Chart' */
  uint8 stat_g3;                       /* '<S70>/Chart' */
  uint8 stat_d4;                       /* '<S69>/Chart' */
  uint8 stat_ej;                       /* '<S68>/Chart' */
} B_MdXX_Status_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_MdXX_Status_T {
  DW_Chart_MdXX_Status_T sf_Chart_b;   /* '<S99>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_nm;  /* '<S98>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_nf;  /* '<S97>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_j;   /* '<S96>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_i;   /* '<S95>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_c;   /* '<S94>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_my;  /* '<S93>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_ax;  /* '<S92>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_h2;  /* '<S91>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_m;   /* '<S90>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_nv;  /* '<S89>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_le;  /* '<S88>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_fp;  /* '<S87>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_n;   /* '<S86>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_ae;  /* '<S85>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_p;   /* '<S84>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_lr;  /* '<S83>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_l;   /* '<S82>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_e;   /* '<S81>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_hj;  /* '<S80>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_h;   /* '<S79>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_a4;  /* '<S78>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_au;  /* '<S77>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_dp;  /* '<S76>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_o;   /* '<S75>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_fj;  /* '<S74>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_a;   /* '<S73>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_g;   /* '<S72>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_f;   /* '<S71>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_dx;  /* '<S70>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart_d;   /* '<S69>/Chart' */
  DW_Chart_MdXX_Status_T sf_Chart;     /* '<S68>/Chart' */
} DW_MdXX_Status_T;

/* Block signals (default storage) */
extern B_MdXX_Status_T MdXX_Status_B;

/* Block states (default storage) */
extern DW_MdXX_Status_T MdXX_Status_DW;

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
 * '<Root>' : 'MdXX_Status'
 * '<S1>'   : 'MdXX_Status/MdXX_Status_Cal_sys'
 * '<S2>'   : 'MdXX_Status/MdXX_Status_Init'
 * '<S3>'   : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem'
 * '<S4>'   : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector'
 * '<S5>'   : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector1'
 * '<S6>'   : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector10'
 * '<S7>'   : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector11'
 * '<S8>'   : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector12'
 * '<S9>'   : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector13'
 * '<S10>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector14'
 * '<S11>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector15'
 * '<S12>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector16'
 * '<S13>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector17'
 * '<S14>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector18'
 * '<S15>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector19'
 * '<S16>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector2'
 * '<S17>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector20'
 * '<S18>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector21'
 * '<S19>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector22'
 * '<S20>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector23'
 * '<S21>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector24'
 * '<S22>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector25'
 * '<S23>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector26'
 * '<S24>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector27'
 * '<S25>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector28'
 * '<S26>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector29'
 * '<S27>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector3'
 * '<S28>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector30'
 * '<S29>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector31'
 * '<S30>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector32'
 * '<S31>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector33'
 * '<S32>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector34'
 * '<S33>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector35'
 * '<S34>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector36'
 * '<S35>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector37'
 * '<S36>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector38'
 * '<S37>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector39'
 * '<S38>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector4'
 * '<S39>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector40'
 * '<S40>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector41'
 * '<S41>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector42'
 * '<S42>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector43'
 * '<S43>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector44'
 * '<S44>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector45'
 * '<S45>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector46'
 * '<S46>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector47'
 * '<S47>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector48'
 * '<S48>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector49'
 * '<S49>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector5'
 * '<S50>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector50'
 * '<S51>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector51'
 * '<S52>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector52'
 * '<S53>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector53'
 * '<S54>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector54'
 * '<S55>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector55'
 * '<S56>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector56'
 * '<S57>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector57'
 * '<S58>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector58'
 * '<S59>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector59'
 * '<S60>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector6'
 * '<S61>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector60'
 * '<S62>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector61'
 * '<S63>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector62'
 * '<S64>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector63'
 * '<S65>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector7'
 * '<S66>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector8'
 * '<S67>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/32BitSelector9'
 * '<S68>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md10StatChknew'
 * '<S69>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md11StatChknew'
 * '<S70>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md12StatChknew'
 * '<S71>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md13StatChknew'
 * '<S72>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md14StatChknew'
 * '<S73>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md15StatChknew'
 * '<S74>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md16StatChknew'
 * '<S75>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md17StatChknew'
 * '<S76>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md18StatChknew'
 * '<S77>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md19StatChknew'
 * '<S78>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md1StatChknew'
 * '<S79>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew'
 * '<S80>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew1'
 * '<S81>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew10'
 * '<S82>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew11'
 * '<S83>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew12'
 * '<S84>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew2'
 * '<S85>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew3'
 * '<S86>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew4'
 * '<S87>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew5'
 * '<S88>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew6'
 * '<S89>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew7'
 * '<S90>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew8'
 * '<S91>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew9'
 * '<S92>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md2StatChknew'
 * '<S93>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md3StatChknew'
 * '<S94>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md4StatChknew'
 * '<S95>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md5StatChknew'
 * '<S96>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md6StatChknew'
 * '<S97>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md7StatChknew'
 * '<S98>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md8StatChknew'
 * '<S99>'  : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md9StatChknew'
 * '<S100>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md10StatChknew/Chart'
 * '<S101>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md11StatChknew/Chart'
 * '<S102>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md12StatChknew/Chart'
 * '<S103>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md13StatChknew/Chart'
 * '<S104>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md14StatChknew/Chart'
 * '<S105>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md15StatChknew/Chart'
 * '<S106>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md16StatChknew/Chart'
 * '<S107>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md17StatChknew/Chart'
 * '<S108>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md18StatChknew/Chart'
 * '<S109>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md19StatChknew/Chart'
 * '<S110>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md1StatChknew/Chart'
 * '<S111>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew/Chart'
 * '<S112>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew1/Chart'
 * '<S113>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew10/Chart'
 * '<S114>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew11/Chart'
 * '<S115>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew12/Chart'
 * '<S116>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew2/Chart'
 * '<S117>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew3/Chart'
 * '<S118>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew4/Chart'
 * '<S119>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew5/Chart'
 * '<S120>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew6/Chart'
 * '<S121>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew7/Chart'
 * '<S122>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew8/Chart'
 * '<S123>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md20StatChknew9/Chart'
 * '<S124>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md2StatChknew/Chart'
 * '<S125>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md3StatChknew/Chart'
 * '<S126>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md4StatChknew/Chart'
 * '<S127>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md5StatChknew/Chart'
 * '<S128>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md6StatChknew/Chart'
 * '<S129>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md7StatChknew/Chart'
 * '<S130>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md8StatChknew/Chart'
 * '<S131>' : 'MdXX_Status/MdXX_Status_Cal_sys/Subsystem/Md9StatChknew/Chart'
 */
#endif                                 /* RTW_HEADER_MdXX_Status_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
