/*
 * MsmInterfDet.h
 *
 *  Created on:
 *      Author: szwsv4
 */

#ifndef MSMINTERFDET_H_
#define MSMINTERFDET_H_

#include "qmath.h"

//#define MSMINTERFDET_TESTMODE

typedef enum {
    MSMINTERFDET_S6L=0,
    MSMINTERFDET_S6R,
    MSMINTERFDET_S7L,
    MSMINTERFDET_S7R,
    MSMINTERFDET_MAX,
} MsmSeatTyp;

typedef struct {///_MsmPosTyp {
    ptTyp GT1;
    ptTyp GT2;
    ptTyp GT3;
    ptTyp GT4;
    ptTyp GT5;
    ptTyp GT6;
    ptTyp p1_bkAxis;
    ptTyp p1_bkSdUp;
    ptTyp p1_bkSdMd;
    ptTyp p1_bkSdDwn;
    ptTyp p1_bkUp;
    ptTyp p1_bkMd;
    ptTyp p1_bkDwn;

    ptTyp LY1;
    ptTyp LY2;
    ptTyp LY3;
    ptTyp LY4;
    ptTyp p2_Scrn;
    ptTyp p2_LgRstAxis;
    ptTyp p2_LgRstA;
    ptTyp p2_LgRstB;
    ptTyp p2_LgRstC;
    ptTyp p2_LgRstD;
    ptTyp p2_bkUp;
    ptTyp p2_bkDwn;
    ptTyp p2_bkAxis;
    ptTyp p2_LgRst_A;
    ptTyp p2_LgRst_B;
    ptTyp p2_LgRst_C;
    ptTyp p2_LgRst_D;
    ptTyp p2_LgRst_F;
    ptTyp p2_LgRst_G;
    ptTyp p2_LgRst_H;
    ptTyp p2_LgRst_I;
    ptTyp p2_LgRst_J;

    ptTyp p3_seat;
	ptTyp p3_bkAxis;
	ptTyp p3_bkUp;
	ptTyp p3_bkDwn;
    ptTyp p3_seatAxis;
    ptTyp p3_pillowF;
    ptTyp p3_pillowB;

    ptTyp p4;
    ptTyp pg_a;
    ptTyp pg_b;

    qm_u8 seat;
    qm_u8 r3fld;

    qm_float req_r1mh;
    qm_float req_r1mb;
    qm_float req_r1mf;
    qm_float req_r2m0;
    qm_float req_r2mb;
    qm_float req_r2mf;
    qm_float req_r2ml;
    qm_float req_r2me;
    qm_float req_r3mf;
    qm_float req_r3mb;
} MsmPosTyp;

typedef struct {///_MsmDistTyp {
    qm_float d1l;
    qm_float d1s;
    qm_float d2;
    qm_float d3;
    qm_float d3f;
} MsmDistTyp;

typedef struct {///_MsmAnsTyp {
    qm_float ans_r2m0;
    qm_float ans_r2mb;
    qm_float ans_r2mf;
    qm_float ans_r2ml;
    qm_float ans_r2me;
    qm_u8 ans_get;
    qm_u16 ans_calc;
} MsmAnsTyp;

extern void MsmInterfDet_Upd(qm_u8 seat,qm_float r1mh,qm_float r1mb,qm_float r1mf,qm_float r2m0,qm_float r2mb,qm_float r2mf,qm_float r2ml,qm_float r2me,qm_float r3mf,qm_float r3mb,qm_u8 r3fld);
extern qm_u8 MsmInterfDet_WisdomEnjoySearch(qm_u8 seat,qm_float r1mh,qm_float r1mb,qm_float r1mf,qm_float r3mf
#ifdef MSMINTERFDET_TESTMODE
	,qm_u8 tm
#endif
);
extern MsmPosTyp MsmInterfDet_GetPos(void);
extern MsmDistTyp MsmInterfDet_GetInterf(void);
extern MsmAnsTyp MsmInterfDet_GetAns(void);

#endif /* MSMINTERFDET_H_ */
