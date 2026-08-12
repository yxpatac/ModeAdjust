#ifndef RTE_TYPE_H
#define RTE_TYPE_H

#ifdef Valid
#undef Valid
#endif                          
#define Valid     0

#ifdef InValid
#undef InValid
#endif                          
#define InValid     1

typedef enum _DtAuthenSource1 {
	CeSMS_BossNoAction=0,
	CeSMS_BossFrwd=1,
	CeSMS_BossBkwd=2,
	CeSMS_BossBkRclnFrwd=3,
	CeSMS_BossBkRclnBkwd=4,
	CeSMS_BossFault=255
} SeatBossSwtchType;

typedef enum _DtVeVSMeSystemPowerMode1 {
	CeVSM_e_PowerModeOff=0,
	CeVSM_e_PowerModeAcc=1,
	CeVSM_e_PowerModeRun=2,
	CeVSM_e_PowerModeCrank=3
} DtVeVSMeSystemPowerMode1;

typedef enum _TeSMS_e_DrvStMemSwAct {
	CeSMS_e_Inactive=0,
	CeSMS_e_Btn1SwtStorActv=1,
	CeSMS_e_Btn1SwtRecallActv=2,
	CeSMS_e_Btn2SwtStorActv=3,
    CeSMS_e_Btn2SwtRecallActv=4,
    CeSMS_e_BtnExitSwtStorActv=5,
    CeSMS_e_BtnExitSwtRecallActv=6
} TeSMS_e_DrvStMemSwAct;

typedef enum _TeSMS_e_DrvStMemSwActV {
	CeSMS_e_Valid=0,
	CeSMS_e_Invalid=1
} TeSMS_e_DrvStMemSwActV;

typedef enum _TeSMS_e_SecLTSeatMemHMIReq {
	CeSMS_e_NoAction=0,
	CeSMS_e_Btn1StroReq=1,
	CeSMS_e_Btn2StroReq=2,
	Reserved=3,
    CeSMS_e_Btn1RecallReq=4,
    CeSMS_e_Btn2RecallReq=5,
    CeSMS_e_BtnExitSwtRecallReq=6
} TeSMS_e_SecLTSeatMemHMIReq;

#endif
























