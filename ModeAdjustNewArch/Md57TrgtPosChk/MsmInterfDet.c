/*
 * MsmInterfDet.c
 *
 *  Created on: 
 *      Author: szwsv4
 */

#include "MsmInterfDet.h"
#include "qmath.h"
#include "wisenjoy.h"

#define UPD_ALL

static qm_u8 gInitd=FALSE;
static qm_u8 gSeat=(qm_u8)MSMINTERFDET_S7L;
static qm_u8 gR3fld=FALSE;
static qm_float d1l,d1s,d2,d3,d3f;
static qm_float ans_r2m0,ans_r2mb,ans_r2mf,ans_r2ml,ans_r2me=0.0F;
static qm_float req_r2m0,req_r2mb,req_r2mf,req_r2ml,req_r2me;
static qm_float req_r1mh,req_r1mb,req_r1mf,req_r3mf,req_r3mb;
static qm_u8 ans_get;
static qm_u16 ans_calc;

////////////////////////////
//  Row1
static ptTyp p1_bkAxis={3250.8216F,0.0F,863.8473F};//ROW1&ROW2 INTF 1, [DES]
static ptTyp p1_bkSdUp={3418.7381F,0.0F,1483.2565F};//ROW1&ROW2 INTF 2, [DES]
static ptTyp p1_bkSdMd={3453.8908F,0.0F,1330.4458F};//ROW1&ROW2 INTF 3, [DES]
static ptTyp p1_bkSdDwn={3321.9565F,0.0F,956.5874F};//ROW1&ROW2 INTF 4, [DES]
static ptTyp p1_bkUp={3495.1424F,0.0F,1500.8326F};//ROW1&ROW2 INTF 11, [DES]
static ptTyp p1_bkMd={3534.8163F,0.0F,1328.3684F};//ROW1&ROW2 INTF 12, [DES]
static ptTyp p1_bkDwn={3291.0213F,0.0F,754.8889F};//ROW1&ROW2 INTF 13, [DES], modified @ReqV4.6
static const ptTyp p1_bkAxis_0={3083.9187F,0.0F,833.6201F};//ROW1&ROW2 INTF 1, [0%]
static const ptTyp p1_bkAxis_100={3308.2119F,0.0F,892.029F};//ROW1&ROW2 INTF 1, [100%]
static const ptTyp p1_bkSdUp_0={3030.1468F,0.0F,1473.1297F};//ROW1&ROW2 INTF 2, [0%]
static const ptTyp p1_bkSdMd_0={3115.3845F,0.0F,1341.5191F};//ROW1&ROW2 INTF 3, [0%]
static const ptTyp p1_bkSdDwn_0={3119.0948F,0.0F,945.0812F};//ROW1&ROW2 INTF 4, [0%]
static const ptTyp p1_bkSdUp_100={3860.49F,0.0F,1218.9125F};//ROW1&ROW2 INTF 2, [100%]
static const ptTyp p1_bkSdMd_100={3779.1299F,0.0F,1084.8701F};//ROW1&ROW2 INTF 3, [100%]
static const ptTyp p1_bkSdDwn_100={3423.8680F,0.0F,908.8993F};//ROW1&ROW2 INTF 4, [100%]
static const ptTyp p1_bkUp_0={3095.9513F,0.0F,1515.7480F};//ROW1&ROW2 INTF 11, [0%]
static const ptTyp p1_bkMd_0={3192.1518F,0.0F,1367.2105F};//ROW1&ROW2 INTF 12, [0%]
static const ptTyp p1_bkDwn_0={3158.9397F,0.0F,744.8468F};//ROW1&ROW2 INTF 13, [0%], modified @ReqV4.6
static const ptTyp p1_bkUp_100={3927.5104F,0.0F,1178.2329F};//ROW1&ROW2 INTF 11, [100%]
static const ptTyp p1_bkMd_100={3835.6862F,0.0F,1026.9509F};//ROW1&ROW2 INTF 12, [100%]
static const ptTyp p1_bkDwn_100={3261.9329F,0.0F,784.2296F};//ROW1&ROW2 INTF 13, [100%], modified @ReqV4.6
static ptTyp GT1={2847.6301F,0.0F,800.3558F};//ROW1&ROW2 INTF GT1/A, [DES]
static ptTyp GT2={2945.0959F,0.0F,802.7356F};//ROW1&ROW2 INTF GT2/B, [DES]
static ptTyp GT3={3223.5533F,0.0F,774.4772F};//ROW1&ROW2 INTF GT3/C, [DES]
static ptTyp GT4={2858.5303F,0.0F,743.3653F};//ROW1&ROW2 INTF GT4/D, [DES]
static ptTyp GT5={3131.4461F,0.0F,730.7026F};//ROW1&ROW2 INTF GT5/E, [DES]
static ptTyp GT6={3145.9934F,0.0F,699.9597F};//ROW1&ROW2 INTF GT6/F, [DES]
static const ptTyp GT1_0={2678.3150F,0.0F,788.0193F};//ROW1&ROW2 INTF GT1, [0%]
static const ptTyp GT2_0={2775.7968F,0.0F,786.0415F};//ROW1&ROW2 INTF GT2, [0%]
static const ptTyp GT3_0={3052.8180F,0.0F,745.4054F};//ROW1&ROW2 INTF GT3, [0%]
static const ptTyp GT4_0={2678.5577F,0.0F,746.5067F};//ROW1&ROW2 INTF GT4, [0%]
static const ptTyp GT5_0={2951.4735F,0.0F,733.8440F};//ROW1&ROW2 INTF GT5, [0%]
static const ptTyp GT6_0={2955.3233F,0.0F,700.0519F};//ROW1&ROW2 INTF GT6, [0%]
static const ptTyp GT1_100={2906.5401F,0.0F,819.5478F};//ROW1&ROW2 INTF GT1, [100%]
static const ptTyp GT2_100={3003.9375F,0.0F,824.059F};//ROW1&ROW2 INTF GT2, [100%]
static const ptTyp GT3_100={3283.0483F,0.0F,801.9408F};//ROW1&ROW2 INTF GT3, [100%]
static const ptTyp GT4_100={2938.5181F,0.0F,741.9691F};//ROW1&ROW2 INTF GT4, [100%]
static const ptTyp GT5_100={3211.4339F,0.0F,729.3064F};//ROW1&ROW2 INTF GT5, [100%]
static const ptTyp GT6_100={3235.6489F,0.0F,705.4242F};//ROW1&ROW2 INTF GT6, [100%]
static qm_float C_GT1_GT5_MIN;
static qm_float C_GT1_GT5_MAX_REL;
static const qm_float C_R1BK_MAX=68.0F*PI/180.0F;//ROW1&ROW2 INTF 1/68, [CONV]
static ptTyp GT4_RELGT5,GT3_RELGT5,GT6_RELGT5,R1BKAXIS_RELGT3,GT3_RELGT2,GT1_RELGT2,R1FWBK_MAX;
static qm_float DIST_GT24,DIST_GT23;
static ptTyp P1_BKSDUP_RELAXIS,P1_BKSDMD_RELAXIS,P1_BKSDDWN_RELAXIS;
static ptTyp P1_BKUP_RELAXIS,P1_BKMD_RELAXIS,P1_BKDWN_RELAXIS;
static ptTyp P1P_BKSDUP_RELAXIS,P1P_BKSDMD_RELAXIS,P1P_BKSDDWN_RELAXIS;
static ptTyp P1P_BKUP_RELAXIS,P1P_BKMD_RELAXIS,P1P_BKDWN_RELAXIS;
//ROW1&ROW2 INTF 4.2.1-SelfCalc
static const ptTyp p1p_bkAxis_0={3090.8460F,0.0F,866.6400F};//ROW1&ROW2 INTF 1, [0%]
static const ptTyp p1p_bkSdUp_0={2461.2324F,0.0F,990.9396F};//ROW1&ROW2 INTF 2, [0%]
static const ptTyp p1p_bkSdMd_0={2611.2187F,0.0F,1036.6663F};//ROW1&ROW2 INTF 3, [0%]
static const ptTyp p1p_bkSdDwn_0={2993.3697F,0.0F,931.1324F};//ROW1&ROW2 INTF 4, [0%]
static const ptTyp p1p_bkUp_0={2438.3694F,0.0F,1065.9317F};//ROW1&ROW2 INTF 11, [0%]
static const ptTyp p1p_bkMd_0={2607.6460F,0.0F,1117.5395F};//ROW1&ROW2 INTF 12, [0%]
static const ptTyp p1p_bkDwn_0={3196.7348F,0.0F,914.3423F};//ROW1&ROW2 INTF 13, [0%]
//ROW1&ROW2 INTF 4.2.2
static const ptTyp p1p_bkAxis_100={3310.8026F,0.0F,862.7991F};//ROW1&ROW2 INTF 1, [100%]
static const ptTyp p1p_bkSdUp_100={3870.2907F,0.0F,1177.1823F};//ROW1&ROW2 INTF 2, [100%]
static const ptTyp p1p_bkSdMd_100={3785.9373F,0.0F,1045.0031F};//ROW1&ROW2 INTF 3, [100%]
static const ptTyp p1p_bkSdDwn_100={3426.8086F,0.0F,877.0645F};//ROW1&ROW2 INTF 4, [100%]
static const ptTyp p1p_bkUp_100={3936.3793F,0.0F,1135.0061F};//ROW1&ROW2 INTF 11, [100%]
static const ptTyp p1p_bkMd_100={3841.1770F,0.0F,985.8269F};//ROW1&ROW2 INTF 12, [100%]
static const ptTyp p1p_bkDwn_100={3261.2643F,0.0F,757.7567F};//ROW1&ROW2 INTF 13, [100%]
static const qm_float C_R1PBK_MAX=139.5F*PI/180.0F;//ROW1&ROW2 INTF 1/139.5, [CONV]
static ptTyp R1PFWBK_MAX;
//////////////////////////////
//  Row2
static ptTyp LY1;//={4053.4796F,0.0F,753.9915F};//ROW1&ROW2 INTF LY1/A, [DES]
static ptTyp LY2;//={3806.4493F,0.0F,756.6023F};//ROW1&ROW2 INTF LY2/B, [DES]
static ptTyp LY3;//={3715.6042F,0.0F,765.4030F};//ROW1&ROW2 INTF LY3/C, [DES]
static ptTyp LY4;//={3826.2162F,0.0F,811.9418F};//ROW1&ROW2 INTF LY4/D, [DES]
static const ptTyp LY1_0={4013.5391F,0.0F,751.8094F};//ROW1&ROW2 INTF LY1/A, [0%]
static const ptTyp LY2_0={3766.5088F,0.0F,754.4203F};//ROW1&ROW2 INTF LY2/B, [0%]
static const ptTyp LY3_0={3675.6638F,0.0F,763.2210F};//ROW1&ROW2 INTF LY3/C, [0%]
static const ptTyp LY4_0={3786.2759F,0.0F,809.7597F};//ROW1&ROW2 INTF LY4/D, [0%]
static const ptTyp LY1_100={4353.0329F,0.0F,770.3569F};//ROW1&ROW2 INTF LY1/A, [100%]
static const ptTyp LY2_100={4106.0026F,0.0F,772.9677F};//ROW1&ROW2 INTF LY2/B, [100%]
static const ptTyp LY3_100={4039.3464F,0.0F,835.3154F};//ROW1&ROW2 INTF LY3/C, [100%]
static const ptTyp LY4_100={4148.5119F,0.0F,885.1527F};//ROW1&ROW2 INTF LY4/D, [100%]
static ptTyp p2_Scrn;//={3647.8362F,0.0F,1120.6561F};//ROW1&ROW2 INTF 5, [DES]
static const ptTyp p2_Scrn_0={3607.8959F,0.0F,1118.4741F};//ROW1&ROW2 INTF 5, [0%]
static const ptTyp p2_Scrn_100={3947.3896F,0.0F,1137.0216F};//ROW1&ROW2 INTF 5, [100%]
static ptTyp p2_LgRstAxis;//={3635.1656F,0.0F,907.2379F};//ROW1&ROW2 INTF 6, [DES]
static ptTyp p2_LgRstA;//={3660.2377F,0.0F,935.9480F};//ROW1&ROW2 INTF 7, [DES]
static ptTyp p2_LgRstB;//={3577.8102F,0.0F,871.6343F};//ROW1&ROW2 INTF 8, [DES]
static ptTyp p2_LgRstC;//={3579.4989F,0.0F,586.6393F};//ROW1&ROW2 INTF 9, [DES]
static ptTyp p2_LgRstD;//={3639.4989F,0.0F,586.6393F};//ROW1&ROW2 INTF 10, [DES]
static const ptTyp p2_LgRstAxis_f0g0={3595.2251F,0.0F,905.0559F};//ROW1&ROW2 INTF 6, [0%]
static const ptTyp p2_LgRstAxis_f1g0={3934.7188F,0.0F,923.6033F};//ROW1&ROW2 INTF 6, [100%]@G0
static const ptTyp p2_LgRstAxis_f1g1={3988.6367F,0.0F,1026.6492F};//ROW1&ROW2 INTF 6, [100%]@G1
static const ptTyp p2_LgRstA_f0g0={3620.2973F,0.0F,933.766F};//ROW1&ROW2 INTF 7, [0%]
static const ptTyp p2_LgRstA_f1g0={3959.791F,0.0F,952.3134F};//ROW1&ROW2 INTF 7, [100%]@G0
static const ptTyp p2_LgRstA_f1g1={4020.2853F,0.0F,1047.8919F};//ROW1&ROW2 INTF 7, [100%]@G1
static const ptTyp p2_LgRstB_f0r0e0g0={3537.8699F,0.0F,869.4523F};//ROW1&ROW2 INTF 8, [0%]
//static const ptTyp p2_LgRstB_f1r1e1g0={3678.5828F,0.0F,928.7441F};//ROW1&ROW2 INTF 8, [100%]@G0R1E1
//static const ptTyp p2_LgRstB_f1r1e1g1={3742.5588F,0.0F,1097.9077F};//ROW1&ROW2 INTF 8, [100%]@G1R1E1
static const ptTyp p2_LgRstC_f0r0e0g0={3539.5585F,0.0F,584.4573F};//ROW1&ROW2 INTF 9, [0%]
//static const ptTyp p2_LgRstC_f1r1e1g0={3398.1763F,0.0F,877.7814F};//ROW1&ROW2 INTF 9, [100%]@G0R1E1
//static const ptTyp p2_LgRstC_f1r1e1g1={3458.5168F,0.0F,1121.2561F};//ROW1&ROW2 INTF 9, [100%]@G1R1E1
static const ptTyp p2_LgRstD_f0r0e0g0={3599.5585F,0.0F,584.4573F};//ROW1&ROW2 INTF 10, [0%]
//static const ptTyp p2_LgRstD_f1r1e1g0={3408.5553F,0.0F,818.6859F};//ROW1&ROW2 INTF 10, [100%]@G0R1E1
//static const ptTyp p2_LgRstD_f1r1e1g1={3453.2472F,0.0F,1061.4897F};//ROW1&ROW2 INTF 10, [100%]@G1R1E1
static ptTyp p2_LgRst_A,p2_LgRst_B,p2_LgRst_C,p2_LgRst_D,p2_LgRst_F,p2_LgRst_G,p2_LgRst_H,p2_LgRst_I,p2_LgRst_J;
static const ptTyp p2_LgRst_A0=/*{3756.146F,0.0F,704.2995F};*/{3716.2055F,0.0F,702.1175F};
static const ptTyp p2_LgRst_B0=/*{3666.418F,0.0F,786.7395F};*/{3626.4775F,0.0F,784.5575F};
static const ptTyp p2_LgRst_C0=/*{3678.534F,0.0F,734.4554F};*/{3638.5935F,0.0F,732.2734F};
static const ptTyp p2_LgRst_D0=/*{3678.715F,0.0F,738.6065F};*/{3638.7745F,0.0F,736.4245F};
static const ptTyp p2_LgRst_F0=/*{3647.638F,0.0F,644.0936F};*/{3607.6975F,0.0F,641.9116F};
static const ptTyp p2_LgRst_G0=/*{3646.458F,0.0F,687.5528F};*/{3606.5175F,0.0F,685.3708F};
static const ptTyp p2_LgRst_H0=/*{3648.63F,0.0F,617.4376F};*/{3608.6895F,0.0F,615.2556F};
static const ptTyp p2_LgRst_I0=/*{3634.728F,0.0F,716.8862F};*/{3594.7875F,0.0F,714.7042F};
static const ptTyp p2_LgRst_J0=/*{3637.549F,0.0F,784.8731F};*/{3597.6085F,0.0F,782.6911F};
static ptTyp p2_bkUp;//={4490.5617F,0.0F,1358.5187F};
static ptTyp p2_bkDwn;//={4313.3221F,0.0F,1027.9419F};
static ptTyp p2_bkAxis;//={4179.0054F,0.0F,861.8101F};
static const ptTyp p2_bkUp_0={4201.24591F,0.0F,1443.0824F};
static const ptTyp p2_bkDwn_0={4186.8594F,0.0F,1068.2653F};
static const ptTyp p2_bkAxis_0={4139.064961F,0.0F,859.628048F};//{4138.065F,0.0F,859.628F};
static const ptTyp p2_bkUp_100_z15={5073.267F,0.0F,709.1434F};
static const ptTyp p2_bkDwn_100_z15={4702.997F,0.0F,769.1015F};
static const ptTyp p2_bkAxis_100_z15={4502.187F,0.0F,842.0132F};
static const ptTyp pg_a={3318.556F,0.0F,554.144F};//ROW1&ROW2 INTF 14, [DES]/[0%]/[100%]
static const ptTyp pg_b={4037.4839F,0.0F,593.42F};//ROW1&ROW2 INTF 15, [DES]/[0%]/[100%]
static const qm_float C_R2BK_MAX=82.0F*PI/180.0F/*,C_R2BK_AMAX*/;
static const qm_float C_R2LGRST_ADTRIP=64.5037F;
static const qm_float C_R2LGEXT_MAX=108.0F;
//static ptTyp p2_LgRstB_f1r1e0g0;
//static ptTyp p2_LgRstC_f1r1e0g0;
//static ptTyp p2_LgRstD_f1r1e0g0;
//static ptTyp p2_LgRstB_f0r0e0g0s;
//static ptTyp p2_LgRstC_f0r0e0g0s;
//static ptTyp p2_LgRstD_f0r0e0g0s;
//static ptTyp p2_LgRstC_f0r0e1g0;
//static ptTyp p2_LgRstD_f0r0e1g0;
//static ptTyp p2_bkAxis_100_z0;
//static ptTyp p2_bkUp_100_z0;
//static ptTyp p2_bkDwn_100_z0;
static qm_float C_R2ZG_MAX;
//static qm_float /*C_R2_ZG2LG_ROT_MAX,*/C_R2_LGROT_MAX;
static ptTyp LY1_RELLY1,LY2_RELLY1,LY3_RELLY2,P2BKAXIS_RELLY1,R2FWBK_MAX,R2SCRN_MAX/*,C_R2BKAXIS_MAXZ0,C_R2BKAXIS_MAXZ15*/,C0_LY4_RELLY1;
static ptTyp P2_BKUP_RELAXIS,P2_BKDWN_RELAXIS;
static qm_float DIST_LY34,DIST_LY14;
static ptTyp /*P2_LGRSTAXIS_MAXZ0,P2_LGRSTAXIS_MAXZ15,*/P2_LGRSTA_MAXZ0,P2_LGRSTA_MAXZ15,P2_LGRSTA_RELLY4,P2_LGRSTB_RELJ0,P2_LGRSTC_RELJ0,P2_LGRSTD_RELJ0;
//static ptTyp P2_LGRSTB_RELAXIS,P2_LGRSTC_RELAXIS,P2_LGRSTD_RELAXIS;
//static ptTyp P2_LGRSTBS_RELAXIS,P2_LGRSTCS_RELAXIS,P2_LGRSTDS_RELAXIS,P2_LGRSTCE_RELAXIS,P2_LGRSTDE_RELAXIS;
//static ptTyp P2_LGRSTB_MAX,P2_LGRSTC_MAX,p2_LgRstC0;
static ptTyp P2_LGRSTAXIS_RELLY4;
static ptTyp P2_LGRST_A_RELLY4,P2_LGRST_B_RELLY4,P2_LGRST_C_RELLY4,P2_LGRST_JI;
static qm_float P2_LGRST_DBD,P2_LGRST_DAD,P2_LGRST_DBG,P2_LGRST_DFG,P2_LGRST_DCF,P2_LGRST_DGJ,P2_LGRST_DGH,P2_LGRST_DIH,P2_LGRST_DIJ;
static qm_float P2_LGRST_AGBD,P2_LGRST_AFGJ,P2_LGRST_ABGH;

//////////////////////////////
//  Row3
static ptTyp p3_seat={4565.6458F,0.0F,978.1299F};
static ptTyp p3_seatAxis={5003.4164F,0.0F,980.9009F};//OTF
static ptTyp p3_pillowF={5284.6670F,0.0F,1641.1502F};//OTF
static ptTyp p3_pillowB={5392.0096F,0.0F,1633.5834F};//OTF
static ptTyp p3_bkUp={5423.50F,0.0F,1630.50F};
static ptTyp p3_bkDwn={5283.27F,0.0F,1245.21F};
static ptTyp p3_bkAxis={5102.3F,0.0F,905.73F};
static ptTyp p3_seat_0;
static ptTyp p3_seat_100;
static ptTyp p3_seatAxis_0;
static ptTyp p3_seatAxis_100;
static ptTyp p3_pillowF_0;
static ptTyp p3_pillowB_0;
static ptTyp p3_bkUp_0;
static ptTyp p3_bkDwn_0;
static ptTyp p3_bkAxis_0;
static ptTyp p3_bkUp_100;
static ptTyp p3_bkDwn_100;
static ptTyp p3_bkAxis_100;
static const ptTyp s6_p3_seat_0={4462.1043F,0.0F,989.4298F};
static const ptTyp s6_p3_seat_100={4792.1043F,0.0F,989.4298F};
static const ptTyp s6_p3_bkUp_0={4900.2F,0.0F,1723.11F};
static const ptTyp s6_p3_bkDwn_0={5109.58F,0.0F,1412.38F};
static const ptTyp s6_p3_bkAxis_0={5011.46F,0.0F,919.75F};
static const ptTyp s6_p3_bkUp_100={5945.25F,0.0F,1461.23F};
static const ptTyp s6_p3_bkDwn_100={5804.74F,0.0F,1113.89F};
static const ptTyp s6_p3_bkAxis_100={5341.46F,0.0F,919.45F};
static const ptTyp s7_p3_seat_0={4485.6458F,0.0F,978.1299F};
static const ptTyp s7_p3_seat_100={4815.6458F,0.0F,978.1299F};
static const ptTyp s7_p3_seatAxis_0={4923.4164F,0.0F,980.9009F};//OTF
static const ptTyp s7_p3_seatAxis_100={5253.4164F,0.0F,980.9009F};//OTF
static const ptTyp s7_p3_pillowF_0={4042.3140F,0.0F,854.6288F};//with OTF
static const ptTyp s7_p3_pillowB_0={4020.0008F,0.0F,959.8990F};//with OTF
static const ptTyp s7_p3_bkUp_0={5131.29F,0.0F,1690.95F};
static const ptTyp s7_p3_bkDwn_0={5102.69F,0.0F,1281.95F};
static const ptTyp s7_p3_bkAxis_0={5022.3F,0.0F,905.73F};
static const ptTyp s7_p3_bkUp_100={5976.16F,0.0F,1394.86F};
static const ptTyp s7_p3_bkDwn_100={5671.47F,0.0F,1120.52F};
static const ptTyp s7_p3_bkAxis_100={5352.3F,0.0F,905.73F};
static qm_float C_R3BK_MAX;
static ptTyp P3FWBW_MAX,P3_BKUP_RELAXIS,P3_BKDWN_RELAXIS;

//////////////////////////////
//  PLG
static const ptTyp p4={5765.1F,0.0F,1350.88F};


static void MsmInterfDet_Init(void) {
    GT4_RELGT5=ptMinusY(GT4_0,GT5_0);
    GT3_RELGT5=ptMinusY(GT3_0,GT5_0);
    GT6_RELGT5=ptMinusY(GT6_0,GT5_0);
    GT1_RELGT2=ptMinusY(GT1_0,GT2_0);
	GT3_RELGT2=ptMinusY(GT3_0,GT2_0);
    R1BKAXIS_RELGT3=ptMinusY(p1_bkAxis_0,GT3_0);
    DIST_GT24=ptDY(GT2_0,GT4_0);
    DIST_GT23=ptDY(GT2_0,GT3_0);
    R1FWBK_MAX=ptMinusY(GT5_100,GT5_0);
    R1PFWBK_MAX=ptMinusY(p1p_bkAxis_100,p1p_bkAxis_0);
    P1_BKSDUP_RELAXIS=ptMinusY(p1_bkSdUp_0,p1_bkAxis_0);
	P1_BKSDMD_RELAXIS=ptMinusY(p1_bkSdMd_0,p1_bkAxis_0);
	P1_BKSDDWN_RELAXIS=ptMinusY(p1_bkSdDwn_0,p1_bkAxis_0);
	P1_BKUP_RELAXIS=ptMinusY(p1_bkUp_0,p1_bkAxis_0);
	P1_BKMD_RELAXIS=ptMinusY(p1_bkMd_0,p1_bkAxis_0);
	P1_BKDWN_RELAXIS=ptMinusY(p1_bkDwn_0,p1_bkAxis_0);
    P1P_BKSDUP_RELAXIS=ptMinusY(p1p_bkSdUp_0,p1p_bkAxis_0);
	P1P_BKSDMD_RELAXIS=ptMinusY(p1p_bkSdMd_0,p1p_bkAxis_0);
	P1P_BKSDDWN_RELAXIS=ptMinusY(p1p_bkSdDwn_0,p1p_bkAxis_0);
	P1P_BKUP_RELAXIS=ptMinusY(p1p_bkUp_0,p1p_bkAxis_0);
	P1P_BKMD_RELAXIS=ptMinusY(p1p_bkMd_0,p1p_bkAxis_0);
	P1P_BKDWN_RELAXIS=ptMinusY(p1p_bkDwn_0,p1p_bkAxis_0);

    //C_R2_ZG2LG_ROT_MAX=ptAngleIncY(ptMinusY(p2_LgRstB_f1r1e1g1,p2_LgRstC_f1r1e1g1),ptMinusY(p2_LgRstB_f1r1e1g0,p2_LgRstC_f1r1e1g0));
    //C_R2_LGROT_MAX=DUALPI-ptAngleIncY(ptMinusY(p2_LgRstC_f1r1e1g0,p2_LgRstB_f1r1e1g0),ptMinusY(p2_LgRstC_f0r0e0g0,p2_LgRstB_f0r0e0g0));
    //p2_LgRstB_f1r1e0g0=ptAddY(p2_LgRstB_f1r1e1g0,ptMulY(ptUnitY(p2_LgRstC_f1r1e1g0,p2_LgRstB_f1r1e1g0),108.0F));
    //p2_LgRstC_f1r1e0g0=ptAddY(p2_LgRstC_f1r1e1g0,ptMulY(ptUnitY(p2_LgRstC_f1r1e1g0,p2_LgRstB_f1r1e1g0),108.0F));
    //p2_LgRstD_f1r1e0g0=ptAddY(p2_LgRstD_f1r1e1g0,ptMulY(ptUnitY(p2_LgRstC_f1r1e1g0,p2_LgRstB_f1r1e1g0),108.0F));
    //p2_LgRstB_f0r0e0g0s=ptAddY(p2_LgRstAxis_f0g0,ptRotY(ptMinusY(p2_LgRstB_f1r1e0g0,p2_LgRstAxis_f1g0),C_R2_LGROT_MAX));
    //p2_LgRstC_f0r0e0g0s=ptAddY(p2_LgRstAxis_f0g0,ptRotY(ptMinusY(p2_LgRstC_f1r1e0g0,p2_LgRstAxis_f1g0),C_R2_LGROT_MAX));
    //p2_LgRstD_f0r0e0g0s=ptAddY(p2_LgRstAxis_f0g0,ptRotY(ptMinusY(p2_LgRstD_f1r1e0g0,p2_LgRstAxis_f1g0),C_R2_LGROT_MAX));
    //p2_LgRstC_f0r0e1g0=ptAddY(p2_LgRstAxis_f0g0,ptRotY(ptMinusY(p2_LgRstC_f1r1e1g0,p2_LgRstAxis_f1g0),C_R2_LGROT_MAX));
    //p2_LgRstD_f0r0e1g0=ptAddY(p2_LgRstAxis_f0g0,ptRotY(ptMinusY(p2_LgRstD_f1r1e1g0,p2_LgRstAxis_f1g0),C_R2_LGROT_MAX));
    //p2_bkAxis_100_z0=ptAddY(p2_bkAxis_0,ptMinusY(LY1_100,LY1_0));
    //p2_bkUp_100_z0=ptAddY(p2_bkAxis_100_z0,ptRotY(ptMinusY(p2_bkUp_0,p2_bkAxis_0),C_R2BK_MAX));
    //p2_bkDwn_100_z0=ptAddY(p2_bkAxis_100_z0,ptRotY(ptMinusY(p2_bkDwn_0,p2_bkAxis_0),C_R2BK_MAX));
    //C_R2BK_AMAX=ptAngleIncY(ptMinusY(p2_bkUp_100_z0,p2_bkDwn_100_z0),ptMinusY(p2_bkUp_100_z15,p2_bkDwn_100_z15));
    C_GT1_GT5_MIN=ptDY(GT1_0,GT6_0);
    C_GT1_GT5_MAX_REL=ptDY(GT1_100,GT6_100)-C_GT1_GT5_MIN;
    C_R2ZG_MAX=ptAngleIncY(ptMinusY(LY2_100,LY1_100),ptMinusY(LY3_100,LY2_100))-ptAngleIncY(ptMinusY(LY2_0,LY1_0),ptMinusY(LY3_0,LY2_0));

    LY1_RELLY1=ptMinusY(LY1_0,LY1_0);
    LY2_RELLY1=ptMinusY(LY2_0,LY1_0);
    LY3_RELLY2=ptMinusY(LY3_0,LY2_0);
    C0_LY4_RELLY1=ptMinusY(LY4_0,LY1_0);
    P2BKAXIS_RELLY1=ptMinusY(p2_bkAxis_0,LY1_0);
    DIST_LY34=ptDY(LY3_0,LY4_0);
    DIST_LY14=ptDY(LY1_0,LY4_0);
    R2FWBK_MAX=ptMinusY(LY1_100,LY1_0);
    R2SCRN_MAX=ptMinusY(p2_Scrn_100,p2_Scrn_0);
    //C_R2BKAXIS_MAXZ0=ptMinusY(p2_bkAxis_100_z0,p2_bkAxis_0);
    //C_R2BKAXIS_MAXZ15=ptMinusY(p2_bkAxis_100_z15,p2_bkAxis_100_z0);
    P2_BKUP_RELAXIS=ptMinusY(p2_bkUp_0,p2_bkAxis_0);
    P2_BKDWN_RELAXIS=ptMinusY(p2_bkDwn_0,p2_bkAxis_0);
    //P2_LGRSTAXIS_MAXZ0=ptMinusY(p2_LgRstAxis_f1g0,p2_LgRstAxis_f0g0);
    //P2_LGRSTAXIS_MAXZ15=ptMinusY(p2_LgRstAxis_f1g1,p2_LgRstAxis_f1g0);
    P2_LGRSTA_MAXZ0=ptMinusY(p2_LgRstA_f1g0,p2_LgRstA_f0g0);
    P2_LGRSTA_MAXZ15=ptMinusY(p2_LgRstA_f1g1,p2_LgRstA_f1g0);
    P2_LGRSTA_RELLY4=ptMinusY(p2_LgRstA_f0g0,LY4_0);
    P2_LGRSTB_RELJ0=ptMinusY(p2_LgRstB_f0r0e0g0,p2_LgRst_J0);
    P2_LGRSTC_RELJ0=ptMinusY(p2_LgRstC_f0r0e0g0,p2_LgRst_J0);
    P2_LGRSTD_RELJ0=ptMinusY(p2_LgRstD_f0r0e0g0,p2_LgRst_J0);
    //P2_LGRSTB_RELAXIS=ptMinusY(p2_LgRstB_f0r0e0g0,p2_LgRstAxis_f0g0);
    //P2_LGRSTC_RELAXIS=ptMinusY(p2_LgRstC_f0r0e0g0,p2_LgRstAxis_f0g0);
    //P2_LGRSTD_RELAXIS=ptMinusY(p2_LgRstD_f0r0e0g0,p2_LgRstAxis_f0g0);
    //P2_LGRSTBS_RELAXIS=ptMinusY(p2_LgRstB_f0r0e0g0s,p2_LgRstAxis_f0g0);
    //P2_LGRSTCS_RELAXIS=ptMinusY(p2_LgRstC_f0r0e0g0s,p2_LgRstAxis_f0g0);
    //P2_LGRSTDS_RELAXIS=ptMinusY(p2_LgRstD_f0r0e0g0s,p2_LgRstAxis_f0g0);
    //P2_LGRSTCE_RELAXIS=ptMinusY(p2_LgRstC_f0r0e1g0,p2_LgRstC_f0r0e0g0s);
    //P2_LGRSTDE_RELAXIS=ptMinusY(p2_LgRstD_f0r0e1g0,p2_LgRstD_f0r0e0g0s);
    //P2_LGRSTB_MAX=ptMinusY(P2_LGRSTBS_RELAXIS,P2_LGRSTB_RELAXIS);
    //P2_LGRSTC_MAX=ptMinusY(P2_LGRSTCS_RELAXIS,P2_LGRSTC_RELAXIS);

    P2_LGRSTAXIS_RELLY4=ptMinusY(p2_LgRstAxis_f0g0,LY4_0);
    P2_LGRST_A_RELLY4=ptMinusY(p2_LgRst_A0,LY4_0);
    P2_LGRST_B_RELLY4=ptMinusY(p2_LgRst_B0,LY4_0);
    P2_LGRST_C_RELLY4=ptMinusY(p2_LgRst_C0,LY4_0);
    P2_LGRST_DBD=ptDY(p2_LgRst_B0,p2_LgRst_D0);
    P2_LGRST_DAD=ptDY(p2_LgRst_A0,p2_LgRst_D0);
    P2_LGRST_DBG=ptDY(p2_LgRst_B0,p2_LgRst_G0);
    P2_LGRST_DFG=ptDY(p2_LgRst_F0,p2_LgRst_G0);
    P2_LGRST_DCF=ptDY(p2_LgRst_C0,p2_LgRst_F0);
    P2_LGRST_DGJ=ptDY(p2_LgRst_G0,p2_LgRst_J0);
    P2_LGRST_DGH=ptDY(p2_LgRst_G0,p2_LgRst_H0);
    P2_LGRST_DIH=ptDY(p2_LgRst_I0,p2_LgRst_H0);
    P2_LGRST_DIJ=ptDY(p2_LgRst_I0,p2_LgRst_J0);
    P2_LGRST_AGBD=ptAngleIncY(ptMinusY(p2_LgRst_G0,p2_LgRst_B0),ptMinusY(p2_LgRst_D0,p2_LgRst_B0));
    P2_LGRST_AFGJ=DUALPI-ptAngleIncY(ptMinusY(p2_LgRst_G0,p2_LgRst_F0),ptMinusY(p2_LgRst_J0,p2_LgRst_G0));
    P2_LGRST_ABGH=DUALPI-ptAngleIncY(ptMinusY(p2_LgRst_G0,p2_LgRst_B0),ptMinusY(p2_LgRst_H0,p2_LgRst_G0));
    P2_LGRST_JI=ptMinusY(p2_LgRst_I0,p2_LgRst_J0);
}
static void MsmInterfDet_Init6s(void) {
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
static void MsmInterfDet_Init7s(void) {
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
//driver seat
static qm_float MsmInterfDet_r1mh2r(qm_float x) {
    qm_float y=qsat(x,0.0F,1.0F);
#ifdef UPD_ALL
    req_r1mh=y;
#endif
    y=C_GT1_GT5_MIN+(C_GT1_GT5_MAX_REL*y);
    return (y*y*(5.1652e-5F))-(0.0445F*y)+8.5647F;
}
static ptTyp MsmInterfDet_r1mf2m(qm_float x) {
    qm_float y=qsat(x,0.0F,1.0F);
#ifdef UPD_ALL
    req_r1mf=y;
#endif
    return ptAddY(GT5_0,ptMulY(R1FWBK_MAX,y));
}
static qm_float MsmInterfDet_r1mb2r(qm_float x) {
    qm_float y=qsat(x,0.0F,1.0F);
#ifdef UPD_ALL
    req_r1mb=y;
#endif
    return y*C_R1BK_MAX;
}
//co-passenger seat
static ptTyp MsmInterfDet_r1pmf2m(qm_float x) {
    qm_float y=qsat(x,0.0F,1.0F);
#ifdef UPD_ALL
    req_r1mf=y;
#endif
    return ptAddY(p1p_bkAxis_0,ptMulY(R1PFWBK_MAX,y));
}
static qm_float MsmInterfDet_r1pmb2r(qm_float x) {
    qm_float y=qsat(x,0.0F,1.0F);
#ifdef UPD_ALL
    req_r1mb=y;
#endif
    return y*C_R1PBK_MAX;
}
static void MsmInterfDet_UpdRow1p(qm_float r1mb,qm_float r1mf) {
    qm_float br;
    p1_bkAxis=MsmInterfDet_r1pmf2m(r1mf);
    //calc back due to r1mb(back rotation)
    br=MsmInterfDet_r1pmb2r(r1mb);
    if(br<0.0F) {
        br+=DUALPI;
    }
    p1_bkSdUp=ptAddY(ptRotY(P1P_BKSDUP_RELAXIS,br),p1_bkAxis);
    p1_bkSdMd=ptAddY(ptRotY(P1P_BKSDMD_RELAXIS,br),p1_bkAxis);
    p1_bkSdDwn=ptAddY(ptRotY(P1P_BKSDDWN_RELAXIS,br),p1_bkAxis);
    p1_bkUp=ptAddY(ptRotY(P1P_BKUP_RELAXIS,br),p1_bkAxis);
    p1_bkMd=ptAddY(ptRotY(P1P_BKMD_RELAXIS,br),p1_bkAxis);
    p1_bkDwn=ptAddY(ptRotY(P1P_BKDWN_RELAXIS,br),p1_bkAxis);
}

static void MsmInterfDet_UpdRow1(qm_float r1mh,qm_float r1mb,qm_float r1mf) {
    qm_float r,hr,br;
    ptTyp fm;

    //calc seat frame due to r1mh(back hight adjust)
#ifdef UPD_ALL
    GT5=ptSetY(PTZERO);
#endif
    GT4=ptSetY(GT4_RELGT5);
    r=MsmInterfDet_r1mh2r(r1mh);
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
    fm=MsmInterfDet_r1mf2m(r1mf);
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
    br=MsmInterfDet_r1mb2r(r1mb)-hr;
    if(br<0.0F) {
        br+=DUALPI;
    }
    p1_bkSdUp=ptAddY(ptRotY(P1_BKSDUP_RELAXIS,br),p1_bkAxis);
    p1_bkSdMd=ptAddY(ptRotY(P1_BKSDMD_RELAXIS,br),p1_bkAxis);
    p1_bkSdDwn=ptAddY(ptRotY(P1_BKSDDWN_RELAXIS,br),p1_bkAxis);
    p1_bkUp=ptAddY(ptRotY(P1_BKUP_RELAXIS,br),p1_bkAxis);
    p1_bkMd=ptAddY(ptRotY(P1_BKMD_RELAXIS,br),p1_bkAxis);
    p1_bkDwn=ptAddY(ptRotY(P1_BKDWN_RELAXIS,br),p1_bkAxis);
}

static void MsmInterfDet_UpdRow2(qm_float r2m0_i,qm_float r2mb_i,qm_float r2mf_i,qm_float r2ml_i,qm_float r2me_i) {
    qm_float gr,lr,p2_bk_r;
    ptTyp fm,p2_LgRstCs,p2_LgRstDs;
    qm_float r2m0=qsat(r2m0_i,0.0F,1.0F);
    qm_float r2mf=qsat(r2mf_i,0.0F,1.0F);
    qm_float r2mb=qsat(r2mb_i,0.0F,1.0F);
    qm_float r2ml=qsat(r2ml_i,0.0F,1.0F);
    qm_float r2me=qsat(r2me_i,0.0F,1.0F);
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
    gr=r2m0*C_R2ZG_MAX;
    LY3=ptAddY(ptRotY(LY3,gr),LY2);
	LY4=ptSolveLinkMidY(LY3,LY1,DIST_LY34,DIST_LY14);
    gr=ptAngleIncY(ptMinusY(LY4,LY1),C0_LY4_RELLY1);

	//qm_float angBAD=ptAngleIncY(ptMinusY(LY4,LY1),ptMinusY(LY2,LY1));
	//qm_float angCBJ=ptAngleIncY(ptMinusY(LY3,LY2),ptMinusY(LY2,LY1));
	//printf("%f,%f,%f\n",angCBJ,angBAD,gr);

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
    p2_bkAxis=ptAddY(LY1,ptRotY(ptSetY(P2BKAXIS_RELLY1),gr));

    p2_bk_r=gr+(C_R2BK_MAX*r2mb);
    p2_bkUp=ptAddY(p2_bkAxis,ptRotY(P2_BKUP_RELAXIS,p2_bk_r));
    p2_bkDwn=ptAddY(p2_bkAxis,ptRotY(P2_BKDWN_RELAXIS,p2_bk_r));
        
    //calc leg rest due to r2m0 and r2mf
    p2_LgRstAxis=ptAddY(ptRotY(P2_LGRSTAXIS_RELLY4,gr),LY4);

    p2_LgRst_A=ptRotY(P2_LGRST_A_RELLY4,gr);
    p2_LgRst_B=ptRotY(P2_LGRST_B_RELLY4,gr);
    p2_LgRst_C=ptRotY(P2_LGRST_C_RELLY4,gr);
    p2_LgRst_D=ptSolveLinkMidY(p2_LgRst_A,p2_LgRst_B,C_R2LGRST_ADTRIP*r2ml+P2_LGRST_DAD,P2_LGRST_DBD);
    p2_LgRst_G=ptAddY(p2_LgRst_B,ptRotY(ptMulY(ptUnitY(p2_LgRst_B,p2_LgRst_D),P2_LGRST_DBG),P2_LGRST_AGBD));
    p2_LgRst_F=ptSolveLinkMidY(p2_LgRst_C,p2_LgRst_G,P2_LGRST_DCF,P2_LGRST_DFG);
    p2_LgRst_J=ptAddY(p2_LgRst_G,ptRotY(ptMulY(ptUnitY(p2_LgRst_F,p2_LgRst_G),P2_LGRST_DGJ),P2_LGRST_AFGJ));
    p2_LgRst_H=ptAddY(p2_LgRst_G,ptRotY(ptMulY(ptUnitY(p2_LgRst_B,p2_LgRst_G),P2_LGRST_DGH),P2_LGRST_ABGH));
    p2_LgRst_I=ptSolveLinkMidY(p2_LgRst_H,p2_LgRst_J,P2_LGRST_DIH,P2_LGRST_DIJ);
    p2_LgRst_A=ptAddY(LY4,p2_LgRst_A);
    p2_LgRst_B=ptAddY(LY4,p2_LgRst_B);
    p2_LgRst_C=ptAddY(LY4,p2_LgRst_C);
    p2_LgRst_D=ptAddY(LY4,p2_LgRst_D);
    p2_LgRst_G=ptAddY(LY4,p2_LgRst_G);
    p2_LgRst_F=ptAddY(LY4,p2_LgRst_F);
    p2_LgRst_J=ptAddY(LY4,p2_LgRst_J);
    p2_LgRst_H=ptAddY(LY4,p2_LgRst_H);
    p2_LgRst_I=ptAddY(LY4,p2_LgRst_I);
    lr=ptAngleIncY(ptMinusY(p2_LgRst_I,p2_LgRst_J),P2_LGRST_JI);

    //p2_LgRstA=ptAddY(p2_LgRstA_f0g0,
    //    ptAddY(ptMulY(P2_LGRSTA_MAXZ0,r2mf),ptMulY(P2_LGRSTA_MAXZ15,r2m0)));

    //block rotate based on p2_LgRst_J
    p2_LgRstA=ptAddY(LY4,ptRotY(P2_LGRSTA_RELLY4,gr));
    p2_LgRstB=ptAddY(p2_LgRst_J,ptRotY(P2_LGRSTB_RELJ0,lr));
    p2_LgRstC=ptAddY(p2_LgRst_J,ptRotY(P2_LGRSTC_RELJ0,lr));
    p2_LgRstD=ptAddY(p2_LgRst_J,ptRotY(P2_LGRSTD_RELJ0,lr));
    p2_LgRstD=ptMinusY(p2_LgRstD,p2_LgRstC);
    p2_LgRstC=ptAddY(p2_LgRstC,ptMulY(ptUnitY(p2_LgRstB,p2_LgRstC),C_R2LGEXT_MAX*r2me));
    p2_LgRstD=ptAddY(p2_LgRstC,p2_LgRstD);

#if 0
    p2_LgRstCs=ptAddY(P2_LGRSTCS_RELAXIS,ptMulY(P2_LGRSTCE_RELAXIS,r2me));
    p2_LgRstDs=ptAddY(P2_LGRSTDS_RELAXIS,ptMulY(P2_LGRSTDE_RELAXIS,r2me));
#ifdef UPD_ALL
    p2_LgRstC0=ptAddY(P2_LGRSTC_RELAXIS,ptMulY(P2_LGRSTC_MAX,r2ml));
#endif
    p2_LgRstB=ptAddY(P2_LGRSTB_RELAXIS,ptMulY(P2_LGRSTB_MAX,r2ml));
    p2_LgRstC=ptAddY(P2_LGRSTC_RELAXIS,ptMulY(ptMinusY(p2_LgRstCs,P2_LGRSTC_RELAXIS),r2ml));
    p2_LgRstD=ptAddY(P2_LGRSTD_RELAXIS,ptMulY(ptMinusY(p2_LgRstDs,P2_LGRSTD_RELAXIS),r2ml));
    //lr=(C_R2_ZG2LG_ROT_MAX*r2m0)+(C_R2_LGROT_MAX*r2ml);
    p2_LgRstB=ptAddY(ptRotY(p2_LgRstB,lr),p2_LgRstAxis);
    p2_LgRstC=ptAddY(ptRotY(p2_LgRstC,lr),p2_LgRstAxis);
    p2_LgRstD=ptAddY(ptRotY(p2_LgRstD,lr),p2_LgRstAxis);
#ifdef UPD_ALL
    p2_LgRstC0=ptAddY(ptRotY(p2_LgRstC0,lr),p2_LgRstAxis);
#endif
#endif
}

static ptTyp MsmInterfDet_r3mf2m(qm_float x) {
    qm_float y=qsat(x,0.0F,1.0F);
#ifdef UPD_ALL
    req_r3mf=y;
#endif
    return ptMulY(P3FWBW_MAX,y);
}
static qm_float MsmInterfDet_r3mb2r(qm_float x) {
    qm_float y=qsat(x,0.0F,1.0F);
#ifdef UPD_ALL
    req_r3mb=y;
#endif
    return C_R3BK_MAX*y;
}
static void MsmInterfDet_UpdRow3(qm_u8 seat,qm_float r3mf,qm_float r3mb) {
    ptTyp fm;
    qm_float br;
    
    fm=MsmInterfDet_r3mf2m(r3mf);
    p3_seat=ptAddY(p3_seat_0,fm);
    p3_bkAxis=ptAddY(p3_bkAxis_0,fm);
    if(MSMINTERFDET_S7L==(MsmSeatTyp)seat || MSMINTERFDET_S7R==(MsmSeatTyp)seat) {
        p3_seatAxis=ptAddY(p3_seatAxis_0,fm);
        p3_pillowF=ptAddY(p3_pillowF_0,fm);
        p3_pillowB=ptAddY(p3_pillowB_0,fm);
    }
    br=MsmInterfDet_r3mb2r(r3mb);
    p3_bkUp=ptAddY(ptRotY(P3_BKUP_RELAXIS,br),p3_bkAxis);
    p3_bkDwn=ptAddY(ptRotY(P3_BKDWN_RELAXIS,br),p3_bkAxis);
}

static void MsmInterfDet_DistCalc(qm_u8 seat, qm_u8 r3fld) {
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
    if((MSMINTERFDET_S7L==(MsmSeatTyp)seat || MSMINTERFDET_S7R==(MsmSeatTyp)seat) && (r3fld>0)) {
        d2=ptDist2SegY(p3_pillowF,p2_bkDwn,p2_bkUp,TRUE);
        d2=qmin(d2,ptDist2SegY(p3_pillowB,p2_bkDwn,p2_bkUp,TRUE));
        d3=9999.0F;
    }
    else {
        d2=ptDist2SegY(p3_seat,p2_bkDwn,p2_bkUp,TRUE);
        d3=ptDist2SegY(p4,p3_bkDwn,p3_bkUp,FALSE);
    }
    
    if(MSMINTERFDET_S7L==(MsmSeatTyp)seat || MSMINTERFDET_S7R==(MsmSeatTyp)seat) {
        d3f=ptDist2SegY(p3_seatAxis,p2_bkDwn,p2_bkUp,TRUE);
    }
    else {
        d3f=9999.0F;
    }
}

void MsmInterfDet_Upd(qm_u8 seat,qm_float r1mh,qm_float r1mb,qm_float r1mf,qm_float r2m0,qm_float r2mb,qm_float r2mf,qm_float r2ml,qm_float r2me,qm_float r3mf,qm_float r3mb,qm_u8 r3fld) {
    if(FALSE==gInitd) {
        MsmInterfDet_Init();
        if(MSMINTERFDET_S6L==(MsmSeatTyp)seat
        || MSMINTERFDET_S6R==(MsmSeatTyp)seat) {
            MsmInterfDet_Init6s();
        }
        else if(MSMINTERFDET_S7L==(MsmSeatTyp)seat
        || MSMINTERFDET_S7R==(MsmSeatTyp)seat) {
            MsmInterfDet_Init7s();
        }
        else {

        }
        gInitd=TRUE;
    }
    if(MSMINTERFDET_S6L==(MsmSeatTyp)seat
    || MSMINTERFDET_S7L==(MsmSeatTyp)seat) {
        MsmInterfDet_UpdRow1(r1mh,r1mb,r1mf);
    }
    else if(MSMINTERFDET_S6R==(MsmSeatTyp)seat
    || MSMINTERFDET_S7R==(MsmSeatTyp)seat) {
        MsmInterfDet_UpdRow1p(r1mb,r1mf);
    }
    MsmInterfDet_UpdRow2(r2m0,r2mb,r2mf,r2ml,r2me);
    MsmInterfDet_UpdRow3(seat,r3mf,r3mb);
    gSeat=seat;
    gR3fld=r3fld;
    MsmInterfDet_DistCalc(seat,r3fld);
}

/*0 gravity resolution 1.5 deg based from 0 deg*/
#define D1MAPRESOLUTION (15/1.5F/100)//1.5 deg
static const qm_float d1map[]={
/*0*/   298.42F,
/*1.5*/ 293.5F,
/*3*/   298.09F,
/*4.5*/ 293.65F,
/*6*/   287.61F,
/*7.5*/ 291.11F,
/*9*/   295.81F,
/*10.5*/285.6F,
/*12*/  284.63F,
/*13.5*/286.0F,
};
#define D1MAPLEN (sizeof(d1map)/sizeof(d1map[0]))
qm_float MsmInterfDet_GetD1(qm_float m0) {
    qm_float pos,ret;
    qm_int posid;
    pos=m0/D1MAPRESOLUTION;
    posid=(qm_u8)pos;
    if(posid<D1MAPLEN-1) {
        qm_float k=d1map[posid+1]-d1map[posid];
        qm_float b=d1map[posid]-k*posid;
        ret=m0*k/D1MAPRESOLUTION+b;
    }
    else {
        ret=d1map[D1MAPLEN-1];
    }
    return ret;
}

#define R2MFIDMAX (340/20)
#define R2M0IDMAX (1350/15)//13.5 degree as max
#define R2M0IDINT (45/15)//0.45 degree as interval
#define DISTOTHERS 30.0F

#define R2M0_S7R_NNUPPERTHR 22//0.212437
#define R2M0_S7R_NNLOWERTHR 25//0.243754
#define R2MF_S7R_NNUPPERTHR 0.07F//0.065999
#define R2MF_S7R_NNLOWERTHR 0.06F//0.052253

#define R2M0_S7L_NNUPPERTHR 26//0.256980
#define R2M0_S7L_NNLOWERTHR 30//0.298563
#define R2MF_S7L_NNUPPERTHR 0.08F//0.053410
#define R2MF_S7L_NNLOWERTHR 0.08F//0.050104

qm_u8 MsmInterfDet_WisdomEnjoySearch(qm_u8 seat,qm_float r1mh,qm_float r1mb,qm_float r1mf,qm_float r3mf
#ifdef MSMINTERFDET_TESTMODE
	,qm_u8 tm
#endif
) {
    qm_int r2m0id,r2mfid;
    qm_int r2m0id_guessMin,r2m0id_guessMax,r2mfid_guessMin,r2mfid_guessMax;

#ifdef MSMINTERFDET_TESTMODE
    if(1==tm)
#endif
    {
		//use NN to get a roughly position solution
		qm_float nn_in[4],nn_out[2];

		if(MSMINTERFDET_S6L==(MsmSeatTyp)seat
		|| MSMINTERFDET_S7L==(MsmSeatTyp)seat) {
			nn_in[0]=qsat(r1mh,0.0F,1.0F);
			nn_in[1]=qsat(r1mb,0.0F,1.0F);
			nn_in[2]=qsat(r1mf,0.0F,1.0F);
			nn_in[3]=qsat(r3mf,0.0F,1.0F);
			wisenjoy_s7l(nn_in,nn_out);
			r2m0id=(qm_int)((qm_float)(nn_out[0]*100.0F));
			r2m0id_guessMax=((qm_int)((r2m0id+R2M0_S7L_NNUPPERTHR)/R2M0IDINT)*R2M0IDINT)+R2M0IDINT;
			r2m0id_guessMin=(qm_int)((r2m0id-R2M0_S7L_NNLOWERTHR)/R2M0IDINT)*R2M0IDINT;
			r2mfid_guessMax=(qm_int)((qm_float)((nn_out[1]+R2MF_S7L_NNUPPERTHR)*(qm_float)((qm_u16)(R2MFIDMAX))))+1;
			r2mfid_guessMin=(qm_int)((qm_float)((nn_out[1]-R2MF_S7L_NNLOWERTHR)*(qm_float)((qm_u16)(R2MFIDMAX))));
		}
		else if(MSMINTERFDET_S6R==(MsmSeatTyp)seat
		|| MSMINTERFDET_S7R==(MsmSeatTyp)seat) {
			nn_in[0]=qsat(r1mb,0.0F,1.0F);
			nn_in[1]=qsat(r1mf,0.0F,1.0F);
			nn_in[2]=qsat(r3mf,0.0F,1.0F);
			wisenjoy_s7r(nn_in,nn_out);
			r2m0id=(qm_int)((qm_float)(nn_out[0]*100.0F));
			r2m0id_guessMax=((qm_int)((r2m0id+R2M0_S7R_NNUPPERTHR)/R2M0IDINT)*R2M0IDINT)+R2M0IDINT;
			r2m0id_guessMin=(qm_int)((r2m0id-R2M0_S7R_NNLOWERTHR)/R2M0IDINT)*R2M0IDINT;
			r2mfid_guessMax=(qm_int)((qm_float)((nn_out[1]+R2MF_S7R_NNUPPERTHR)*(qm_float)((qm_u16)(R2MFIDMAX))))+1;
			r2mfid_guessMin=(qm_int)((qm_float)((nn_out[1]-R2MF_S7R_NNLOWERTHR)*(qm_float)((qm_u16)(R2MFIDMAX))));
		}

		if(r2m0id_guessMax>R2M0IDMAX) {
			r2m0id_guessMax=R2M0IDMAX;
		}
		if(r2m0id_guessMin<0) {
			r2m0id_guessMin=0;
		}
		if(r2mfid_guessMax>R2MFIDMAX) {
			r2mfid_guessMax=R2MFIDMAX;
		}
		if(r2mfid_guessMin<0) {
			r2mfid_guessMin=0;
		}
		r2m0id=r2m0id_guessMax;
		r2mfid=r2mfid_guessMax;
    }
#ifdef MSMINTERFDET_TESTMODE
    else {
        r2m0id_guessMax=R2M0IDMAX;
        r2m0id_guessMin=0;
        r2mfid_guessMax=R2MFIDMAX;
        r2mfid_guessMin=0;
    }
#endif

    ans_get=0;
    ans_calc=0;
    for(r2m0id=r2m0id_guessMax;r2m0id>=r2m0id_guessMin && ans_get==0;r2m0id-=R2M0IDINT) {
        qm_float r2m0=(qm_float)((qm_u16)(r2m0id))/100.0F;
        qm_float r2mb=(r2m0*0.122F)+0.4756F;
        qm_float r2ml=(r2m0*-0.1875F)+0.6F;
        qm_float d1l4r2m0=MsmInterfDet_GetD1(r2m0);
        for(r2mfid=r2mfid_guessMax;r2mfid>=r2mfid_guessMin && ans_get==0;r2mfid--) {
            qm_float r2mf=(qm_float)((qm_u16)(r2mfid))/(qm_float)((qm_u16)(R2MFIDMAX));
            MsmInterfDet_Upd(seat,
                r1mh,r1mb,r1mf,
                r2m0,r2mb,r2mf,r2ml,1.0F,
                r3mf,1.0F,
                FALSE);
            ans_calc++;
            if(d1l>=d1l4r2m0) {
                if((d1s>=DISTOTHERS) && (d2>=DISTOTHERS)) {
                    ans_r2m0=r2m0;
                    ans_r2mb=r2mb;
                    ans_r2mf=r2mf;
                    ans_r2ml=r2ml;
                    ans_r2me=1.0F;
                    ans_get++;
                    ///printf("%d:%lf,%lf,%lf,%lf,%lf; d1l:%3d,d1s:%3d,d2:%3d\n",ans_get,ans_r2m0,ans_r2mb,ans_r2mf,ans_r2ml,0,(qm_int)d1l,(qm_int)d1s,(qm_int)d2);
                }
            }
            else {
                //no need to calc due to the d1l is too short, if dec r2mf(move forward) and r2m0 with no changes, the d1l will be smaller than current case
                break;
            }
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
    r.ans_calc=ans_calc;
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
    r.p2_LgRst_A=p2_LgRst_A;
    r.p2_LgRst_B=p2_LgRst_B;
    r.p2_LgRst_C=p2_LgRst_C;
    r.p2_LgRst_D=p2_LgRst_D;
    r.p2_LgRst_F=p2_LgRst_F;
    r.p2_LgRst_G=p2_LgRst_G;
    r.p2_LgRst_H=p2_LgRst_H;
    r.p2_LgRst_I=p2_LgRst_I;
    r.p2_LgRst_J=p2_LgRst_J;

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

static void MsmInterfDet_FxxkPolyspace(void) {
    ptTyp fxxkPtTyp;
    qm_u8 fxxkU8;
    qm_float fxxkFloat;
    //fxxkPtTyp.y=p2_bkDwn_100_z0.y;
    //fxxkPtTyp.y=p2_LgRstC_f1r1e0g0.y;
    //fxxkPtTyp.y=p2_LgRstD_f1r1e0g0.y;
    //fxxkPtTyp.y=p2_LgRstB_f0r0e0g0s.y;
    //fxxkPtTyp.y=p2_LgRstD_f0r0e0g0s.y;
    //fxxkPtTyp.y=p2_LgRstC0.y;
    //fxxkPtTyp.y=p2_bkUp_100_z0.y;
    //fxxkPtTyp.y=p2_LgRstC_f0r0e1g0.y;
    //fxxkPtTyp.y=p2_LgRstC_f0r0e0g0s.y;
    //fxxkPtTyp.y=p2_bkAxis_100_z0.y;
    //fxxkPtTyp.y=p2_LgRstD_f0r0e1g0.y;
    fxxkPtTyp.y=p3_seatAxis_100.y;
    //fxxkPtTyp.y=P2_LGRSTBS_RELAXIS.y;
    //fxxkPtTyp.y=p2_LgRstB_f1r1e0g0.y;

    fxxkU8=gInitd;
    fxxkFloat=ans_r2me;
    if((fxxkU8>0)
    && (fxxkFloat>0.0F)
    && (qsin(0.0F)>0.0F)
    && (qcos(0.0F)>0.0F)
    && (qacos(0.0F)>0.0F)
    && (qinvsqrt(0.0F)>0.0F)
    && (qsqrt(0.0F)>0.0F)
    && (ptAbsY(fxxkPtTyp)>0.0F)
    && (ptPedalInSegY(fxxkPtTyp,fxxkPtTyp,fxxkPtTyp)>0)) {
    }
    return;
}
