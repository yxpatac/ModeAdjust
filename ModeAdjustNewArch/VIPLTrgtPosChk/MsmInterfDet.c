/*
 * MsmInterfDet.c
 *
 *  Created on: 
 *      Author: szwsv4
 */

#include "MsmInterfDet.h"
#include "qmath.h"

#define UPD_ALL

static unsigned char gInitd=FALSE;
static unsigned char gSeat=7;
static unsigned char gR3fld=FALSE;
static float d1l,d1s,d2,d3,d3f;
static float ans_r2m0,ans_r2mb,ans_r2mf,ans_r2ml,ans_r2me=0;
static float req_r2m0,req_r2mb,req_r2mf,req_r2ml,req_r2me;
static float req_r1mh,req_r1mb,req_r1mf,req_r3mf,req_r3mb;
static unsigned char ans_get;

////////////////////////////
//  Row1
ptTyp p1_bkAxis={3250.8216,0,863.8473};
ptTyp p1_bkSdUp={3418.7381,0,1483.2565};
ptTyp p1_bkSdMd={3453.8908,0,1330.4458};
ptTyp p1_bkSdDwn={3321.9565,0,956.5874};
ptTyp p1_bkUp={3495.1424,0,1500.8326};
ptTyp p1_bkMd={3534.8163,0,1328.3684};
ptTyp p1_bkDwn={3270.4034,0,706.3895};
const ptTyp p1_bkAxis_0={3083.9187,0,833.6201};
const ptTyp p1_bkAxis_100={3308.2119,0,892.029};
const ptTyp p1_bkSdUp_0={3030.1468,0,1473.1297};
const ptTyp p1_bkSdMd_0={3115.3845,0,1341.5191};
const ptTyp p1_bkSdDwn_0={3119.0948,0,945.0812};
const ptTyp p1_bkSdUp_100={3860.49,0,1218.9125};
const ptTyp p1_bkSdMd_100={3779.1299,0,1084.8701};
const ptTyp p1_bkSdDwn_100={3423.8680,0,908.8993};
const ptTyp p1_bkUp_0={3095.9513,0,1515.7480};
const ptTyp p1_bkMd_0={3192.1518,0,1367.2105};
const ptTyp p1_bkDwn_0={3156.1095,0,692.3232};
const ptTyp p1_bkUp_100={3927.5104,0,1178.2329};
const ptTyp p1_bkMd_100={3835.6862,0,1026.9509};
const ptTyp p1_bkDwn_100={3212.4507,0,765.5137};
ptTyp GT1={2847.6301,0,800.3558};
ptTyp GT2={2945.0959,0,802.7356};
ptTyp GT3={3223.5533,0,774.4772};
ptTyp GT4={2858.5303,0,743.3653};
ptTyp GT5={3131.4461,0,730.7026};
ptTyp GT6={3145.9934,0,699.9597};
const ptTyp GT1_0={2678.3150,0,788.0193};
const ptTyp GT2_0={2775.7968,0,786.0415};
const ptTyp GT3_0={3052.8180,0,745.4054};
const ptTyp GT4_0={2678.5577,0,746.5067};
const ptTyp GT5_0={2951.4735,0,733.8440};
const ptTyp GT6_0={2955.3233,0,700.0519};
const ptTyp GT1_100={2906.5401,0,819.5478};
const ptTyp GT2_100={3003.9375,0,824.059};
const ptTyp GT3_100={3283.0483,0,801.9408};
const ptTyp GT4_100={2938.5181,0,741.9691};
const ptTyp GT5_100={3211.4339,0,729.3064};
const ptTyp GT6_100={3235.6489,0,705.4242};
float C_GT1_GT5_MIN;
float C_GT1_GT5_MAX_REL;
const float C_R1BK_MAX=68*PI/180;
ptTyp GT4_RELGT5,GT3_RELGT5,GT6_RELGT5,R1BKAXIS_RELGT3,GT3_RELGT2,GT1_RELGT2,R1FWBK_MAX;
float DIST_GT24,DIST_GT23;
ptTyp P1_BKSDUP_RELAXIS,P1_BKSDMD_RELAXIS,P1_BKSDDWN_RELAXIS;
ptTyp P1_BKUP_RELAXIS,P1_BKMD_RELAXIS,P1_BKDWN_RELAXIS;

//////////////////////////////
//  Row2
ptTyp LY1={4053.4796,0,753.9915};
ptTyp LY2={3806.4493,0,756.6023};
ptTyp LY3={3715.6042,0,765.4030};
ptTyp LY4={3826.2162,0,811.9418};
const ptTyp LY1_0={4013.5391,0,751.8094};
const ptTyp LY2_0={3766.5088,0,754.4203};
const ptTyp LY3_0={3675.6638,0,763.2210};
const ptTyp LY4_0={3786.2759,0,809.7597};
const ptTyp LY1_100={4353.0329,0,770.3569};
const ptTyp LY2_100={4106.0026,0,772.9677};
const ptTyp LY3_100={4039.3464,0,835.3154};
const ptTyp LY4_100={4148.5119,0,885.1527};
ptTyp p2_Scrn={3647.8362,0,1120.6561};
const ptTyp p2_Scrn_0={3607.8959,0,1118.4741};
const ptTyp p2_Scrn_100={3947.3896,0,1137.0216};
ptTyp p2_LgRstAxis={3635.1656,0,907.2379};
ptTyp p2_LgRstA={3660.2377,0,935.9480};
ptTyp p2_LgRstB={3577.8102,0,871.6343};
ptTyp p2_LgRstC={3579.4989,0,586.6393};
ptTyp p2_LgRstD={3639.4989,0,586.6393};
const ptTyp p2_LgRstAxis_f0g0={3595.2251,0,905.0559};
const ptTyp p2_LgRstAxis_f1g0={3934.7188,0,923.6033};
const ptTyp p2_LgRstAxis_f1g1={3988.6367,0,1026.6492};
const ptTyp p2_LgRstA_f0g0={3620.2973,0,933.766};
const ptTyp p2_LgRstA_f1g0={3959.791,0,952.3134};
const ptTyp p2_LgRstA_f1g1={4020.2853,0,1047.8919};
const ptTyp p2_LgRstB_f0r0e0g0={3537.8699,0,869.4523};
const ptTyp p2_LgRstB_f1r1e1g0={3678.5828,0,928.7441};
const ptTyp p2_LgRstB_f1r1e1g1={3742.5588,0,1097.9077};
const ptTyp p2_LgRstC_f0r0e0g0={3539.5585,0,584.4573};
const ptTyp p2_LgRstC_f1r1e1g0={3398.1763,0,877.7814};
const ptTyp p2_LgRstC_f1r1e1g1={3458.5168,0,1121.2561};
const ptTyp p2_LgRstD_f0r0e0g0={3599.5585,0,584.4573};
const ptTyp p2_LgRstD_f1r1e1g0={3408.5553,0,818.6859};
const ptTyp p2_LgRstD_f1r1e1g1={3453.2472,0,1061.4897};
ptTyp p2_bkUp={4490.5617,0,1358.5187};
ptTyp p2_bkDwn={4313.3221,0,1027.9419};
ptTyp p2_bkAxis={4179.0054,0,861.8101};
const ptTyp p2_bkUp_0={4201.24591,0,1443.0824};
const ptTyp p2_bkDwn_0={4186.8594,0,1068.2653};
const ptTyp p2_bkAxis_0={4138.065,0,859.628};
const ptTyp p2_bkUp_100_z15={5073.267,0,709.1434};
const ptTyp p2_bkDwn_100_z15={4702.997,0,769.1015};
const ptTyp p2_bkAxis_100_z15={4502.187,0,842.0132};
const ptTyp pg_a={3318.556,0,554.144};
const ptTyp pg_b={4037.4839,0,593.42};
ptTyp p2_LgRstB_f1r1e0g0;
ptTyp p2_LgRstC_f1r1e0g0;
ptTyp p2_LgRstD_f1r1e0g0;
ptTyp p2_LgRstB_f0r0e0g0s;
ptTyp p2_LgRstC_f0r0e0g0s;
ptTyp p2_LgRstD_f0r0e0g0s;
ptTyp p2_LgRstC_f0r0e1g0;
ptTyp p2_LgRstD_f0r0e1g0;
ptTyp p2_bkAxis_100_z0;
ptTyp p2_bkUp_100_z0;
ptTyp p2_bkDwn_100_z0;
float C_R2ZG_MAX;
float C_R2_ZG2LG_ROT_MAX,C_R2_LGROT_MAX;
float C_R2BK_MAX=82*PI/180,C_R2BK_AMAX;
ptTyp LY1_RELLY1,LY2_RELLY1,LY3_RELLY2,P2BKAXIS_RELLY1,R2FWBK_MAX,R2SCRN_MAX,C_R2BKAXIS_MAXZ0,C_R2BKAXIS_MAXZ15;
ptTyp P2_BKUP_RELAXIS,P2_BKDWN_RELAXIS;
float DIST_LY34,DIST_LY14;
ptTyp P2_LGRSTAXIS_MAXZ0,P2_LGRSTAXIS_MAXZ15,P2_LGRSTA_MAXZ0,P2_LGRSTA_MAXZ15;
ptTyp P2_LGRSTB_RELAXIS,P2_LGRSTC_RELAXIS,P2_LGRSTD_RELAXIS;
ptTyp P2_LGRSTBS_RELAXIS,P2_LGRSTCS_RELAXIS,P2_LGRSTDS_RELAXIS,P2_LGRSTCE_RELAXIS,P2_LGRSTDE_RELAXIS;
ptTyp P2_LGRSTB_MAX,P2_LGRSTC_MAX,p2_LgRstC0;

//////////////////////////////
//  Row3
ptTyp p3_seat={4565.6458,0,978.1299};
ptTyp p3_seatAxis={5003.4164,0,980.9009};//OTF
ptTyp p3_pillowF={5284.6670,0,1641.1502};//OTF
ptTyp p3_pillowB={5392.0096,0,1633.5834};//OTF
ptTyp p3_bkUp={5423.50,0,1630.50};
ptTyp p3_bkDwn={5283.27,0,1245.21};
ptTyp p3_bkAxis={5102.3,0,905.73};
ptTyp p3_seat_0;
ptTyp p3_seat_100;
ptTyp p3_seatAxis_0;
ptTyp p3_seatAxis_100;
ptTyp p3_pillowF_0;
ptTyp p3_pillowB_0;
ptTyp p3_bkUp_0;
ptTyp p3_bkDwn_0;
ptTyp p3_bkAxis_0;
ptTyp p3_bkUp_100;
ptTyp p3_bkDwn_100;
ptTyp p3_bkAxis_100;
const ptTyp s6_p3_seat_0={4462.1043,0,989.4298};
const ptTyp s6_p3_seat_100={4792.1043,0,989.4298};
const ptTyp s6_p3_bkUp_0={4900.2,0,1723.11};
const ptTyp s6_p3_bkDwn_0={5109.58,0,1412.38};
const ptTyp s6_p3_bkAxis_0={5011.46,0,919.75};
const ptTyp s6_p3_bkUp_100={5945.25,0,1461.23};
const ptTyp s6_p3_bkDwn_100={5804.74,0,1113.89};
const ptTyp s6_p3_bkAxis_100={5341.46,0,919.45};
const ptTyp s7_p3_seat_0={4485.6458,0,978.1299};
const ptTyp s7_p3_seat_100={4815.6458,0,978.1299};
const ptTyp s7_p3_seatAxis_0={4923.4164,0,980.9009};//OTF
const ptTyp s7_p3_seatAxis_100={5253.4164,0,980.9009};//OTF
const ptTyp s7_p3_pillowF_0={4042.3140,0,854.6288};//with OTF
const ptTyp s7_p3_pillowB_0={4020.0008,0,959.8990};//with OTF
const ptTyp s7_p3_bkUp_0={5131.29,0,1690.95};
const ptTyp s7_p3_bkDwn_0={5102.69,0,1281.95};
const ptTyp s7_p3_bkAxis_0={5022.3,0,905.73};
const ptTyp s7_p3_bkUp_100={5976.16,0,1394.86};
const ptTyp s7_p3_bkDwn_100={5671.47,0,1120.52};
const ptTyp s7_p3_bkAxis_100={5352.3,0,905.73};
float C_R3BK_MAX;
ptTyp P3FWBW_MAX,P3_BKUP_RELAXIS,P3_BKDWN_RELAXIS;

//////////////////////////////
//  PLG
const ptTyp p4={5765.1,0,1350.88};


void MsmInterfDet_Init(void) {
    GT4_RELGT5=ptMinusY(GT4_0,GT5_0);
    GT3_RELGT5=ptMinusY(GT3_0,GT5_0);
    GT6_RELGT5=ptMinusY(GT6_0,GT5_0);
    GT1_RELGT2=ptMinusY(GT1_0,GT2_0);
	GT3_RELGT2=ptMinusY(GT3_0,GT2_0);
    R1BKAXIS_RELGT3=ptMinusY(p1_bkAxis_0,GT3_0);
    DIST_GT24=ptDistY(GT2_0,GT4_0);
    DIST_GT23=ptDistY(GT2_0,GT3_0);
    R1FWBK_MAX=ptMinusY(GT5_100,GT5_0);
    P1_BKSDUP_RELAXIS=ptMinusY(p1_bkSdUp_0,p1_bkAxis_0);
	P1_BKSDMD_RELAXIS=ptMinusY(p1_bkSdMd_0,p1_bkAxis_0);
	P1_BKSDDWN_RELAXIS=ptMinusY(p1_bkSdDwn_0,p1_bkAxis_0);
	P1_BKUP_RELAXIS=ptMinusY(p1_bkUp_0,p1_bkAxis_0);
	P1_BKMD_RELAXIS=ptMinusY(p1_bkMd_0,p1_bkAxis_0);
	P1_BKDWN_RELAXIS=ptMinusY(p1_bkDwn_0,p1_bkAxis_0);

    C_R2_ZG2LG_ROT_MAX=ptAngleIncY(ptMinusY(p2_LgRstB_f1r1e1g1,p2_LgRstC_f1r1e1g1),ptMinusY(p2_LgRstB_f1r1e1g0,p2_LgRstC_f1r1e1g0));
    C_R2_LGROT_MAX=ptAngleIncY(ptMinusY(p2_LgRstC_f1r1e1g0,p2_LgRstB_f1r1e1g0),ptMinusY(p2_LgRstC_f0r0e0g0,p2_LgRstB_f0r0e0g0));
    p2_LgRstB_f1r1e0g0=ptAddY(p2_LgRstB_f1r1e1g0,ptMulY(ptUnitY(p2_LgRstC_f1r1e1g0,p2_LgRstB_f1r1e1g0),108));
    p2_LgRstC_f1r1e0g0=ptAddY(p2_LgRstC_f1r1e1g0,ptMulY(ptUnitY(p2_LgRstC_f1r1e1g0,p2_LgRstB_f1r1e1g0),108));
    p2_LgRstD_f1r1e0g0=ptAddY(p2_LgRstD_f1r1e1g0,ptMulY(ptUnitY(p2_LgRstC_f1r1e1g0,p2_LgRstB_f1r1e1g0),108));
    p2_LgRstB_f0r0e0g0s=ptAddY(ptRotY(ptMinusY(p2_LgRstB_f1r1e0g0,p2_LgRstAxis_f1g0),DUALPI-C_R2_LGROT_MAX),p2_LgRstAxis_f0g0);
    p2_LgRstC_f0r0e0g0s=ptAddY(ptRotY(ptMinusY(p2_LgRstC_f1r1e0g0,p2_LgRstAxis_f1g0),DUALPI-C_R2_LGROT_MAX),p2_LgRstAxis_f0g0);
    p2_LgRstD_f0r0e0g0s=ptAddY(ptRotY(ptMinusY(p2_LgRstD_f1r1e0g0,p2_LgRstAxis_f1g0),DUALPI-C_R2_LGROT_MAX),p2_LgRstAxis_f0g0);
    p2_LgRstC_f0r0e1g0=ptAddY(ptRotY(ptMinusY(p2_LgRstC_f1r1e1g0,p2_LgRstAxis_f1g0),DUALPI-C_R2_LGROT_MAX),p2_LgRstAxis_f0g0);
    p2_LgRstD_f0r0e1g0=ptAddY(ptRotY(ptMinusY(p2_LgRstD_f1r1e1g0,p2_LgRstAxis_f1g0),DUALPI-C_R2_LGROT_MAX),p2_LgRstAxis_f0g0);
    p2_bkAxis_100_z0=ptAddY(p2_bkAxis_0,ptMinusY(LY1_100,LY1_0));
    p2_bkUp_100_z0=ptAddY(p2_bkAxis_100_z0,ptRotY(ptMinusY(p2_bkUp_0,p2_bkAxis_0),C_R2BK_MAX));
    p2_bkDwn_100_z0=ptAddY(p2_bkAxis_100_z0,ptRotY(ptMinusY(p2_bkDwn_0,p2_bkAxis_0),C_R2BK_MAX));
    C_R2BK_AMAX=ptAngleIncY(ptMinusY(p2_bkUp_100_z0,p2_bkDwn_100_z0),ptMinusY(p2_bkUp_100_z15,p2_bkDwn_100_z15));
    C_GT1_GT5_MIN=ptDistY(GT1_0,GT6_0);
    C_GT1_GT5_MAX_REL=ptDistY(GT1_100,GT6_100)-C_GT1_GT5_MIN;
    C_R2ZG_MAX=ptAngleIncY(ptMinusY(LY2_100,LY1_100),ptMinusY(LY3_100,LY2_100))-ptAngleIncY(ptMinusY(LY2_0,LY1_0),ptMinusY(LY3_0,LY2_0));

    LY1_RELLY1=ptMinusY(LY1_0,LY1_0);
    LY2_RELLY1=ptMinusY(LY2_0,LY1_0);
    LY3_RELLY2=ptMinusY(LY3_0,LY2_0);
    P2BKAXIS_RELLY1=ptMinusY(p2_bkAxis_0,LY1_0);
    DIST_LY34=ptDistY(LY3_0,LY4_0);
    DIST_LY14=ptDistY(LY1_0,LY4_0);
    R2FWBK_MAX=ptMinusY(LY1_100,LY1_0);
    R2SCRN_MAX=ptMinusY(p2_Scrn_100,p2_Scrn_0);
    C_R2BKAXIS_MAXZ0=ptMinusY(p2_bkAxis_100_z0,p2_bkAxis_0);
    C_R2BKAXIS_MAXZ15=ptMinusY(p2_bkAxis_100_z15,p2_bkAxis_100_z0);
    P2_BKUP_RELAXIS=ptMinusY(p2_bkUp_0,p2_bkAxis_0);
    P2_BKDWN_RELAXIS=ptMinusY(p2_bkDwn_0,p2_bkAxis_0);
    P2_LGRSTAXIS_MAXZ0=ptMinusY(p2_LgRstAxis_f1g0,p2_LgRstAxis_f0g0);
    P2_LGRSTAXIS_MAXZ15=ptMinusY(p2_LgRstAxis_f1g1,p2_LgRstAxis_f1g0);
    P2_LGRSTA_MAXZ0=ptMinusY(p2_LgRstA_f1g0,p2_LgRstA_f0g0);
    P2_LGRSTA_MAXZ15=ptMinusY(p2_LgRstA_f1g1,p2_LgRstA_f1g0);
    P2_LGRSTB_RELAXIS=ptMinusY(p2_LgRstB_f0r0e0g0,p2_LgRstAxis_f0g0);
    P2_LGRSTC_RELAXIS=ptMinusY(p2_LgRstC_f0r0e0g0,p2_LgRstAxis_f0g0);
    P2_LGRSTD_RELAXIS=ptMinusY(p2_LgRstD_f0r0e0g0,p2_LgRstAxis_f0g0);
    P2_LGRSTBS_RELAXIS=ptMinusY(p2_LgRstB_f0r0e0g0s,p2_LgRstAxis_f0g0);
    P2_LGRSTCS_RELAXIS=ptMinusY(p2_LgRstC_f0r0e0g0s,p2_LgRstAxis_f0g0);
    P2_LGRSTDS_RELAXIS=ptMinusY(p2_LgRstD_f0r0e0g0s,p2_LgRstAxis_f0g0);
    P2_LGRSTCE_RELAXIS=ptMinusY(p2_LgRstC_f0r0e1g0,p2_LgRstC_f0r0e0g0s);
    P2_LGRSTDE_RELAXIS=ptMinusY(p2_LgRstD_f0r0e1g0,p2_LgRstD_f0r0e0g0s);
    P2_LGRSTB_MAX=ptMinusY(P2_LGRSTBS_RELAXIS,P2_LGRSTB_RELAXIS);
    P2_LGRSTC_MAX=ptMinusY(P2_LGRSTCS_RELAXIS,P2_LGRSTC_RELAXIS);
}
void MsmInterfDet_Init6s(void) {
    p3_seat_0=ptSetY(s6_p3_seat_0);
    p3_seat_100=ptSetY(s6_p3_seat_100);
    p3_bkUp_0=ptSetY(s6_p3_bkUp_0);
    p3_bkDwn_0=ptSetY(s6_p3_bkDwn_0);
    p3_bkAxis_0=ptSetY(s6_p3_bkAxis_0);
    p3_bkUp_100=ptSetY(s6_p3_bkUp_100);
    p3_bkDwn_100=ptSetY(s6_p3_bkDwn_100);
    p3_bkAxis_100=ptSetY(s6_p3_bkAxis_100);
    C_R3BK_MAX=ptAngleIncY(ptMinusY(p3_bkUp_0,p3_bkDwn_0),ptMinusY(p3_bkUp_100,p3_bkDwn_100));
    P3_BKUP_RELAXIS=ptMinusY(p3_bkUp_0,p3_bkAxis_0);
    P3_BKDWN_RELAXIS=ptMinusY(p3_bkDwn_0,p3_bkAxis_0);
    P3FWBW_MAX=ptMinusY(p3_seat_100,p3_seat_0);
}
void MsmInterfDet_Init7s(void) {
    p3_seat_0=ptSetY(s7_p3_seat_0);
    p3_seat_100=ptSetY(s7_p3_seat_100);
    p3_seatAxis_0=ptSetY(s7_p3_seatAxis_0);
    p3_seatAxis_100=ptSetY(s7_p3_seatAxis_100);
    p3_pillowF_0=ptSetY(s7_p3_pillowF_0);
    p3_pillowB_0=ptSetY(s7_p3_pillowB_0);
    p3_bkUp_0=ptSetY(s7_p3_bkUp_0);
    p3_bkDwn_0=ptSetY(s7_p3_bkDwn_0);
    p3_bkAxis_0=ptSetY(s7_p3_bkAxis_0);
    p3_bkUp_100=ptSetY(s7_p3_bkUp_100);
    p3_bkDwn_100=ptSetY(s7_p3_bkDwn_100);
    p3_bkAxis_100=ptSetY(s7_p3_bkAxis_100);
    C_R3BK_MAX=ptAngleIncY(ptMinusY(p3_bkUp_0,p3_bkDwn_0),ptMinusY(p3_bkUp_100,p3_bkDwn_100));
    P3_BKUP_RELAXIS=ptMinusY(p3_bkUp_0,p3_bkAxis_0);
    P3_BKDWN_RELAXIS=ptMinusY(p3_bkDwn_0,p3_bkAxis_0);
    P3FWBW_MAX=ptMinusY(p3_seat_100,p3_seat_0);
}

float _MsmInterfDet_r1mh2r(float x) {
    x=qsat(x,0,1);
#ifdef UPD_ALL
    req_r1mh=x;
#endif
    x=C_GT1_GT5_MIN+C_GT1_GT5_MAX_REL*x;
    return x*x*(5.1652e-5)-0.0445*x+8.5647;
}
ptTyp _MsmInterfDet_r1mf2m(float x) {
    x=qsat(x,0,1);
#ifdef UPD_ALL
    req_r1mf=x;
#endif
    return ptAddY(GT5_0,ptMulY(R1FWBK_MAX,x));
}
float _MsmInterfDet_r1mb2r(float x) {
    x=qsat(x,0,1);
#ifdef UPD_ALL
    req_r1mb=x;
#endif
    return x*C_R1BK_MAX;
}
void MsmInterfDet_UpdRow1(float r1mh,float r1mb,float r1mf) {
    float r,hr,br;
    ptTyp fm;

    //calc seat frame due to r1mh(back hight adjust)
#ifdef UPD_ALL
    GT5=ptSetY(PTZERO);
#endif
    GT4=ptSetY(GT4_RELGT5);
    r=_MsmInterfDet_r1mh2r(r1mh);
    GT3=ptRotY(GT3_RELGT5,r+DUALPI);
#ifdef UPD_ALL
    GT6=ptRotY(GT6_RELGT5,r+DUALPI);
#endif
	GT2=ptSolveLinkMidY(GT4,GT3,DIST_GT24,DIST_GT23);
    hr=ptAngleIncY(ptMinusY(GT3,GT2),GT3_RELGT2);
    p1_bkAxis=ptAddY(ptRotY(R1BKAXIS_RELGT3,DUALPI-hr),GT3);
#ifdef UPD_ALL
    GT1=ptAddY(ptRotY(GT1_RELGT2,DUALPI-hr),GT2);
#endif

    //calc seat shift due to r1mf(forward backward adjust)
    fm=_MsmInterfDet_r1mf2m(r1mf);
    p1_bkAxis=ptAddY(p1_bkAxis,fm);
#ifdef UPD_ALL
    GT1=ptAddY(GT1,fm);
    GT2=ptAddY(GT2,fm);
    GT3=ptAddY(GT3,fm);
    GT4=ptAddY(GT4,fm);
    GT5=ptAddY(GT5,fm);
    GT6=ptAddY(GT6,fm);
#endif

    //calc back due to r1mb(back rotation)
    br=_MsmInterfDet_r1mb2r(r1mb)-hr;
    if(br<0) {
        br+=DUALPI;
    }
    p1_bkSdUp=ptAddY(ptRotY(P1_BKSDUP_RELAXIS,br),p1_bkAxis);
    p1_bkSdMd=ptAddY(ptRotY(P1_BKSDMD_RELAXIS,br),p1_bkAxis);
    p1_bkSdDwn=ptAddY(ptRotY(P1_BKSDDWN_RELAXIS,br),p1_bkAxis);
    p1_bkUp=ptAddY(ptRotY(P1_BKUP_RELAXIS,br),p1_bkAxis);
    p1_bkMd=ptAddY(ptRotY(P1_BKMD_RELAXIS,br),p1_bkAxis);
    p1_bkDwn=ptAddY(ptRotY(P1_BKDWN_RELAXIS,br),p1_bkAxis);
}

void MsmInterfDet_UpdRow2(float r2m0,float r2mb,float r2mf,float r2ml,float r2me) {
    float gr,lr,p2_bk_r;
    ptTyp fm,p2_LgRstCs,p2_LgRstDs;
    r2m0=qsat(r2m0,0,1);
    r2mf=qsat(r2mf,0,1);
    r2mb=qsat(r2mb,0,1);
    r2ml=qsat(r2ml,0,1);
    r2me=qsat(r2me,0,1);
#ifdef UPD_ALL
    req_r2m0=r2m0;
    req_r2mf=r2mf;
    req_r2mb=r2mb;
    req_r2ml=r2ml;
    req_r2me=r2me;
#endif

    //calc frame due to r2m0(0 gravity)
    LY1=ptSetY(LY1_RELLY1);
    LY2=ptSetY(LY2_RELLY1);
    LY3=ptSetY(LY3_RELLY2);
    p2_bkAxis=ptSetY(P2BKAXIS_RELLY1);
    gr=r2m0*C_R2ZG_MAX;
    LY3=ptAddY(ptRotY(LY3,gr),LY2);
	LY4=ptSolveLinkMidY(LY3,LY1,DIST_LY34,DIST_LY14);

    //calc frame due to r2mf(forward backward adjust)
    fm=ptAddY(LY1_0,ptMulY(R2FWBK_MAX,r2mf));
#ifdef UPD_ALL
    LY1=ptAddY(LY1,fm);
    LY2=ptAddY(LY2,fm);
    LY3=ptAddY(LY3,fm);
    LY4=ptAddY(LY4,fm);
#endif
    p2_Scrn=ptAddY(p2_Scrn_0,ptMulY(R2SCRN_MAX,r2mf));

    //calc back due to r2mf and r2m0 and r2mb
    p2_bkAxis=ptAddY(p2_bkAxis_0,
        ptAddY(ptMulY(C_R2BKAXIS_MAXZ0,r2mf),ptMulY(C_R2BKAXIS_MAXZ15,r2m0)));
    
    p2_bk_r=C_R2BK_AMAX*r2m0+C_R2BK_MAX*r2mb;
    p2_bkUp=ptAddY(p2_bkAxis,ptRotY(P2_BKUP_RELAXIS,p2_bk_r));
    p2_bkDwn=ptAddY(p2_bkAxis,ptRotY(P2_BKDWN_RELAXIS,p2_bk_r));
        
    //calc leg rest due to r2m0 and r2mf
    p2_LgRstAxis=ptAddY(p2_LgRstAxis_f0g0,
        ptAddY(ptMulY(P2_LGRSTAXIS_MAXZ0,r2mf),ptMulY(P2_LGRSTAXIS_MAXZ15,r2m0)));
    p2_LgRstA=ptAddY(p2_LgRstA_f0g0,
        ptAddY(ptMulY(P2_LGRSTA_MAXZ0,r2mf),ptMulY(P2_LGRSTA_MAXZ15,r2m0)));

    p2_LgRstCs=ptAddY(P2_LGRSTCS_RELAXIS,ptMulY(P2_LGRSTCE_RELAXIS,r2me));
    p2_LgRstDs=ptAddY(P2_LGRSTDS_RELAXIS,ptMulY(P2_LGRSTDE_RELAXIS,r2me));
#ifdef UPD_ALL
    p2_LgRstC0=ptAddY(P2_LGRSTC_RELAXIS,ptMulY(P2_LGRSTC_MAX,r2ml));
#endif
    p2_LgRstB=ptAddY(P2_LGRSTB_RELAXIS,ptMulY(P2_LGRSTB_MAX,r2ml));
    p2_LgRstC=ptAddY(P2_LGRSTC_RELAXIS,ptMulY(ptMinusY(p2_LgRstCs,P2_LGRSTC_RELAXIS),r2ml));
    p2_LgRstD=ptAddY(P2_LGRSTD_RELAXIS,ptMulY(ptMinusY(p2_LgRstDs,P2_LGRSTD_RELAXIS),r2ml));
    lr=C_R2_ZG2LG_ROT_MAX*r2m0+C_R2_LGROT_MAX*r2ml;
    p2_LgRstB=ptAddY(ptRotY(p2_LgRstB,lr),p2_LgRstAxis);
    p2_LgRstC=ptAddY(ptRotY(p2_LgRstC,lr),p2_LgRstAxis);
    p2_LgRstD=ptAddY(ptRotY(p2_LgRstD,lr),p2_LgRstAxis);
#ifdef UPD_ALL
    p2_LgRstC0=ptAddY(ptRotY(p2_LgRstC0,lr),p2_LgRstAxis);
#endif
}

ptTyp _MsmInterfDet_r3mf2m(float x) {
    x=qsat(x,0,1);
#ifdef UPD_ALL
    req_r3mf=x;
#endif
    return ptMulY(P3FWBW_MAX,x);
}
float _MsmInterfDet_r3mb2r(float x) {
    x=qsat(x,0,1);
#ifdef UPD_ALL
    req_r3mb=x;
#endif
    return C_R3BK_MAX*x;
}
void MsmInterfDet_UpdRow3(unsigned char seat,float r3mf,float r3mb) {
    ptTyp fm;
    float br;
    
    fm=_MsmInterfDet_r3mf2m(r3mf);
    p3_seat=ptAddY(p3_seat_0,fm);
    p3_bkAxis=ptAddY(p3_bkAxis_0,fm);
    if(7==seat) {
        p3_seatAxis=ptAddY(p3_seatAxis_0,fm);
        p3_pillowF=ptAddY(p3_pillowF_0,fm);
        p3_pillowB=ptAddY(p3_pillowB_0,fm);
    }
    br=_MsmInterfDet_r3mb2r(r3mb);
    p3_bkUp=ptAddY(ptRotY(P3_BKUP_RELAXIS,br),p3_bkAxis);
    p3_bkDwn=ptAddY(ptRotY(P3_BKDWN_RELAXIS,br),p3_bkAxis);
}

void MsmInterfDet_DistCalc(unsigned char seat, unsigned char r3fld) {
    //check row1 and row2
    d1s=ptDist2SegY(p2_Scrn,p1_bkSdMd,p1_bkSdUp,FALSE);
    d1s=qmin(d1s,ptDist2SegY(p2_Scrn,p1_bkSdDwn,p1_bkSdMd,FALSE));
    
    d1l=ptDist2SegY(p2_LgRstA,p1_bkDwn,p1_bkMd,FALSE);
    d1l=qmin(d1l,ptDist2SegY(p2_LgRstB,p1_bkDwn,p1_bkMd,FALSE));
    d1l=qmin(d1l,ptDist2SegY(p2_LgRstC,p1_bkDwn,p1_bkMd,FALSE));
    d1l=qmin(d1l,ptDist2SegY(p2_LgRstA,p1_bkMd,p1_bkUp,FALSE));
    d1l=qmin(d1l,ptDist2SegY(p2_LgRstB,p1_bkMd,p1_bkUp,FALSE));
    d1l=qmin(d1l,ptDist2SegY(p2_LgRstC,p1_bkMd,p1_bkUp,FALSE));
    
    //check row2 and row3
    if(7==seat && r3fld) {
        d2=ptDist2SegY(p3_pillowF,p2_bkDwn,p2_bkUp,TRUE);
        d2=qmin(d2,ptDist2SegY(p3_pillowB,p2_bkDwn,p2_bkUp,TRUE));
        d3=9999;
    }
    else {
        d2=ptDist2SegY(p3_seat,p2_bkDwn,p2_bkUp,TRUE);
        d3=ptDist2SegY(p4,p3_bkDwn,p3_bkUp,FALSE);
    }
    
    if(7==seat) {
        d3f=ptDist2SegY(p3_seatAxis,p2_bkDwn,p2_bkUp,TRUE);
    }
    else {
        d3f=9999;
    }
}

void MsmInterfDet_Upd(unsigned char seat,float r1mh,float r1mb,float r1mf,float r2m0,float r2mb,float r2mf,float r2ml,float r2me,float r3mf,float r3mb,unsigned char r3fld) {
    if(!gInitd) {
        MsmInterfDet_Init();
        if(6==seat) {
            MsmInterfDet_Init6s();
        }
        else if(7==seat) {
            MsmInterfDet_Init7s();
        }
        gInitd=TRUE;
    }
    MsmInterfDet_UpdRow1(r1mh,r1mb,r1mf);
    MsmInterfDet_UpdRow2(r2m0,r2mb,r2mf,r2ml,r2me);
    MsmInterfDet_UpdRow3(seat,r3mf,r3mb);
    gSeat=seat;
    gR3fld=r3fld;
    MsmInterfDet_DistCalc(seat,r3fld);
}

#define R2MFIDMAX (340/20)
#define R2M0IDMAX (1350/15)//13.5 degree as max
#define R2M0IDINT (45/15)//0.45 degree as interval
#define DISTLGMIN 260
#define DISTOTHERS 30
unsigned char MsmInterfDet_WisdomEnjoySearch(unsigned char seat,float r1mh,float r1mb,float r1mf,float r3mf) {
    int r2m0id=0;
    int r2mfid=R2MFIDMAX;
    ans_get=0;
    while(r2m0id<=R2M0IDMAX && r2mfid>=0) {
        float r2m0=(float)r2m0id/100;
        float r2mb=r2m0*0.122+0.4634;
        float r2ml=r2m0*0.125+0.575;
        float r2mf=(float)r2mfid/R2MFIDMAX;
        MsmInterfDet_Upd(seat,
            r1mh,r1mb,r1mf,
            r2m0,r2mb,r2mf,r2ml,0,
            r3mf,1,
            FALSE);
        if(d1l>=DISTLGMIN && d1s>=DISTOTHERS && d2>=DISTOTHERS) {
            ans_r2m0=r2m0;
            ans_r2mb=r2mb;
            ans_r2mf=r2mf;
            ans_r2ml=r2ml;
            ans_get++;
            r2m0id+=R2M0IDINT;

            //printf("%d:%lf,%lf,%lf,%lf,%lf; d1l:%3d,d1s:%3d,d2:%3d\n",ans_get,ans_r2m0,ans_r2mb,ans_r2mf,ans_r2ml,0,(int)d1l,(int)d1s,(int)d2);
        }
        else {
            r2mfid--;
        }
    }
    return ans_get;
}

MsmDistTyp MsmInterfDet_GetInterf(void) {
    MsmDistTyp r;
    r.d1l=d1l;
    r.d1s=d1s;
    r.d2=d2;
    r.d3=d3;
    r.d3f=d3f;
    return r;
}

MsmAnsTyp MsmInterfDet_GetAns(void) {
	MsmAnsTyp r;
    r.ans_r2m0=ans_r2m0;
    r.ans_r2mb=ans_r2mb;
    r.ans_r2mf=ans_r2mf;
    r.ans_r2ml=ans_r2ml;
    r.ans_r2me=ans_r2me;
    r.ans_get=ans_get;
    return r;
}

MsmPosTyp MsmInterfDet_GetPos(void) {
    MsmPosTyp r;
    r.GT1=GT1;
    r.GT2=GT2;
    r.GT3=GT3;
    r.GT4=GT4;
    r.GT5=GT5;
    r.GT6=GT6;
    r.p1_bkAxis=p1_bkAxis;
    r.p1_bkSdUp=p1_bkSdUp;
    r.p1_bkSdMd=p1_bkSdMd;
    r.p1_bkSdDwn=p1_bkSdDwn;
    r.p1_bkUp=p1_bkUp;
    r.p1_bkMd=p1_bkMd;
    r.p1_bkDwn=p1_bkDwn;

    r.LY1=LY1;
    r.LY2=LY2;
    r.LY3=LY3;
    r.LY4=LY4;
    r.p2_Scrn=p2_Scrn;
    r.p2_LgRstAxis=p2_LgRstAxis;
    r.p2_LgRstA=p2_LgRstA;
    r.p2_LgRstB=p2_LgRstB;
    r.p2_LgRstC=p2_LgRstC;
    r.p2_LgRstD=p2_LgRstD;
    r.p2_bkUp=p2_bkUp;
    r.p2_bkDwn=p2_bkDwn;
    r.p2_bkAxis=p2_bkAxis;

    r.p3_seat=p3_seat;
    r.p3_bkAxis=p3_bkAxis;
    r.p3_bkUp=p3_bkUp;
    r.p3_bkDwn=p3_bkDwn;
    r.p3_seatAxis=p3_seatAxis;
    r.p3_pillowF=p3_pillowF;
    r.p3_pillowB=p3_pillowB;

    r.p4=p4;
    r.pg_a=pg_a;
    r.pg_b=pg_b;

    r.seat=gSeat;
    r.r3fld=gR3fld;

    r.req_r1mh=req_r1mh;
    r.req_r1mb=req_r1mb;
    r.req_r1mf=req_r1mf;
    r.req_r2m0=req_r2m0;
    r.req_r2mb=req_r2mb;
    r.req_r2mf=req_r2mf;
    r.req_r2ml=req_r2ml;
    r.req_r2me=req_r2me;
    r.req_r3mf=req_r3mf;
    r.req_r3mb=req_r3mb;

    return r;
}
