/*
 * MsmInterfDet.h
 *
 *  Created on:
 *      Author: szwsv4
 */

#ifndef MSMINTERFDET_H_
#define MSMINTERFDET_H_

#include "qmath.h"

typedef struct _MsmPosTyp {
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

    unsigned char seat;
    unsigned char r3fld;

    float req_r1mh;
    float req_r1mb;
    float req_r1mf;
    float req_r2m0;
    float req_r2mb;
    float req_r2mf;
    float req_r2ml;
    float req_r2me;
    float req_r3mf;
    float req_r3mb;
} MsmPosTyp;

typedef struct _MsmDistTyp {
    float d1l;
    float d1s;
    float d2;
    float d3;
    float d3f;
} MsmDistTyp;

typedef struct _MsmAnsTyp {
    float ans_r2m0;
    float ans_r2mb;
    float ans_r2mf;
    float ans_r2ml;
    float ans_r2me;
    unsigned char ans_get;
} MsmAnsTyp;

void MsmInterfDet_Upd(unsigned char seat,float r1mh,float r1mb,float r1mf,float r2m0,float r2mb,float r2mf,float r2ml,float r2me,float r3mf,float r3mb,unsigned char r3fld);
unsigned char MsmInterfDet_WisdomEnjoySearch(unsigned char seat,float r1mh,float r1mb,float r1mf,float r3mf);
MsmPosTyp MsmInterfDet_GetPos(void);
MsmDistTyp MsmInterfDet_GetInterf(void);
MsmAnsTyp MsmInterfDet_GetAns(void);

#endif /* MSMINTERFDET_H_ */
