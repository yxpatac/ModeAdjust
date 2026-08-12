#ifndef RTE_TYPE_H
#define RTE_TYPE_H

typedef enum{
   EnergyMgLdShdRq_NoLdShd,
   EnergyMgLdShdRq_LdShdLv1,
   EnergyMgLdShdRq_LdShdLv2,
   EnergyMgLdShdRq_LdShdLv3,
   EnergyMgLdShdRq_LdShdLv4
}EnergyMgLdShdRq1;

typedef enum{
    EventSts_NoAct,
    EventSts_Act,
    EventSts_CancleChime
}EventSts1;

typedef enum{
    LugSelectSw_NoAction,
    LugSelectSw_Left,
    LugSelectSw_Right,
    LugSelectSw_All
}LugSelectSw1;

typedef enum{
    ModeAdjustTp_None,
    ModeAdjustTp_AcsMdEntry,
    ModeAdjustTp_AcsMdExt,
    ModeAdjustTp_Lf3RSeatLug,
    ModeAdjustTp_Rt3RSeatLug,
    ModeAdjustTp_All3RSeatLug,
    ModeAdjustTp_LfVip,
    ModeAdjustTp_RtVip,
    ModeAdjustTp_FamilyMd,
    ModeAdjustTp_RestMd,
    ModeAdjustTp_ExtendMd,
    ModeAdjustTp_LfRecoveryMd,
    ModeAdjustTp_RtRecoveryMd,
    ModeAdjustTp_AllRecoveryMd,
    ModeAdjustTp_AllVip
}ModeAdjustTp1;


typedef enum{
    PosRclRspStat_None,
    PosRclRspStat_RecallSuccessfully,
    PosRclRspStat_RecallUnsuccessfully,
    PosRclRspStat_RecallOngoing
}PosRclRspStat1;

typedef enum{
    PowerMode_Off,
    PowerMode_Acc,
    PowerMode_Run,
    PowerMode_Crank,
    PowerMode_Invalid
}PowerMode1;

typedef enum {
    SeatOccupiedSts_Unknown,
    SeatOccupiedSts_Empty,
    SeatOccupiedSts_Occupied,
    SeatOccupiedSts_DataNotAvailable
}SeatOccupiedSts1;

typedef enum {
    CeSMS_SysVoltNormal,
    CeSMS_SysVoltLow,
    CeSMS_SysVoltHigh,
    CeSMS_SysVoltLow1,
    CeSMS_SysVoltLow2,
    CeSMS_SysVoltHigh1,
    CeSMS_SysVoltHigh2
}SeatSysVoltSt;


typedef enum {
    VehMvSts_Parked,
    VehMvSts_Neutral,
    VehMvSts_Forward,
    VehMvSts_Reverse,
    VehMvSts_Invalid

}VehMovState1;
   
typedef enum {
    MdReqTp_NoAction,
    MdReqTp_Start,
    MdReqTp_Stop,
    MdReqTp_Cancel
}MdReqTp1;
  
 
  

  
typedef enum {
    SRSIndicatorStat_NoIndicator,
    SRSIndicatorStat_Mode1On,
    SRSIndicatorStat_Mode2On,
    SRSIndicatorStat_Mode3On,
    SRSIndicatorStat_Mode4On,
    SRSIndicatorStat_Mode5On,
    SRSIndicatorStat_Mode6On,
    SRSIndicatorStat_Mode7On,
    SRSIndicatorStat_Mode8On,
    SRSIndicatorStat_Mode9On,
    SRSIndicatorStat_Mode10On,
    Reserved1,
    Reserved2,
    Reserved3,
    Reserved4,
    Reserved5
}SRSIndicatorStat;

typedef enum {
	VCURclRspStat_None,
    VCURclRspStat_StoredSucc,
    VCURclRspStat_StoredUnSucc,
    VCURclRspStat_VCURclSucc,
    VCURclRspStat_VCURclUnSuccLocalInterrupt,
    VCURclRspStat_VCURclUnSuccError,
    VCURclRspStat_RfRclSucc,
    VCURclRspStat_RfRclUnSuccLocakInterrupt,
    VCURclRspStat_RfRclUnSuccError
}VCURclRspStat1;


typedef enum {
	HMIRsp_None,
    HMIRsp_RecallSuccessfully,
    HMIRsp_RecallUnsuccessfully_LocalInterrupt,
    HMIRsp_RecallUnsuccessfully_Error,
    HMIRsp_RecallOngoing,
    HMIRsp_StoreSuccessfully,
    HMIRsp_StoreUnsuccessfully
}HMIRsp1;

typedef enum {
	PassRsp_None,
    PassRsp_StoredSuccessfully,
    PassRsp_StoredUnSuccessfully,
    PassRsp_RecallSuccessfully,
    PassRsp_RecallUnSuccessfully,
    PassRsp_Ongoing,
    PassRsp_Halt
}PassRsp1;

typedef enum{
      MdTp_None,
      MdTp_EzeEntry,
      MdTp_EzeExt,
      MdTp_Vip,
      MdTp_Lug,
      MdTp_Recovery,
      MdTp_Intimacy,
      MdTp_Family,
      MdTp_Lying,
      MdTp_LgrstOpenLt,
      MdTp_LgrstCloseLt,
      MdTp_LgrstOpenRt,
      MdTp_LgrstCloseRt
}MdTp1;

typedef enum{
    SrcReqTp_None,
    SrcReqTp_Local,
    SrcReqTp_HMI2L,
    SrcReqTp_HMI2R,
    SrcReqTp_HMI,
    SrcReqTp_Remote,
    SrcReqTp_SRS
}SrcReqTp1;

typedef enum{
CmprtMdHMIReqExtTp_NoAction,
CmprtMdHMIReqExtTp_Mode15,
CmprtMdHMIReqExtTp_Mode16,
CmprtMdHMIReqExtTp_Mode17,
CmprtMdHMIReqExtTp_Mode18,
CmprtMdHMIReqExtTp_Mode19,
CmprtMdHMIReqExtTp_Mode20,
CmprtMdHMIReqExtTp_Mode21,
CmprtMdHMIReqExtTp_Mode22,
CmprtMdHMIReqExtTp_Mode23,
CmprtMdHMIReqExtTp_Mode24,
CmprtMdHMIReqExtTp_Mode25,
CmprtMdHMIReqExtTp_Mode26,
CmprtMdHMIReqExtTp_Mode27,
CmprtMdHMIReqExtTp_Mode28,
CmprtMdHMIReqExtTp_Mode29,
CmprtMdHMIReqExtTp_Mode30,
CmprtMdHMIReqExtTp_Mode31,
CmprtMdHMIReqExtTp_Mode32
}CmprtMdHMIReqExtTp1;

typedef enum{
CmprtMdHMIReqTp_NoAction,
CmprtMdHMIReqTp_Mode1,
CmprtMdHMIReqTp_Mode2,
CmprtMdHMIReqTp_Mode3,
CmprtMdHMIReqTp_Mode4,
CmprtMdHMIReqTp_Mode5,
CmprtMdHMIReqTp_Mode6,
CmprtMdHMIReqTp_Mode7,
CmprtMdHMIReqTp_Mode8,
CmprtMdHMIReqTp_Mode9,
CmprtMdHMIReqTp_Mode10,
CmprtMdHMIReqTp_Mode11,
CmprtMdHMIReqTp_Mode12,
CmprtMdHMIReqTp_Mode13,
CmprtMdHMIReqTp_Mode14,
CmprtMdHMIReqTp_Stop
}CmprtMdHMIReqTp1;

typedef enum{
NoModeOn,
Mode1On,
Mode2On,
Mode3On,
Mode4On,
Mode5On,
Mode6On,
Mode7On,
Mode8On,
Mode9On,
Mode10On,
Mode11On,
Mode12On,
Mode13On,
Mode14On,
Mode15On
}CmprtMdRfCtrlSwSlctStat1;

typedef enum{
NoModeOn1,
Mode16On,
Mode17On,
Mode18On,
Mode19On,
Mode20On,
Mode21On,
Mode22On,
Mode23On,
Mode24On,
Mode25On,
Mode26On,
Mode27On,
Mode28On,
Mode29On,
Mode30On,
Mode31On,
Mode32On
}CmprtMdRfCtrlSwSlctStat2;

typedef enum{
NoAction,
Mode1,
Mode2,
Mode3,
Mode4,
Mode5,
Mode6,
Mode7,
Mode8,
Mode9,
Mode10,
Mode11,
Mode12,
Mode13,
Mode14,
Mode15,
Mode16,
Mode17,
Mode18,
Mode19,
Mode20,
Mode21,
Mode22,
Mode23,
Mode24,
Mode25,
Mode26,
Mode27,
Mode28,
Mode29,
Mode30,
Mode31,
Mode32,
NoMode
}RfCtrlPosReq;

typedef enum{
NoModeSet,
Mode1Set,
Mode2Set,
Mode3Set,
Mode4Set,
Mode5Set,
Mode6Set,
Mode7Set,
Mode8Set,
Mode9Set,
Mode10Set,
Mode11Set,
Mode12Set,
Mode13Set,
Mode14Set,
Mode15Set,
Mode16Set,
Mode17Set,
Mode18Set,
Mode19Set,
Mode20Set,
Mode21Set,
Mode22Set,
Mode23Set,
Mode24Set,
Mode25Set,
Mode26Set,
Mode27Set,
Mode28Set,
Mode29Set,
Mode30Set,
Mode31Set,
Mode32Set
}RfCtrlPosStat;

typedef enum{
SRSMode_None,
SRSMode_EZEEntry,
SRSMode_EzeExt,
SRSMode_LfVip,
SRSMode_RtVip,
SRSMode_AllVip,
SRSMode_LfLug,
SRSMode_RtLug,
SRSMode_AllLug,
SRSMode_IntimacyL,
SRSMode_FamilyR,
SRSMode_FamilyL,
SRSMode_RcvyL,
SRSMode_RcvyR,
SRSMode_LyingL,
SRSMode_LyingR,
SRSMode_LgrstOpenLt,
SRSMode_LgrstCloseLt,
SRSMode_LgrstOpenRt,
SRSMode_LgrstCloseRt,
SRSMode_IntimacyR
}SRSCurMode1;

typedef enum{
    SeatNum4Config,
    SeatNum6Config,
    SeatNum7Config,
    SeatNum4PConfig
}SeatNumConfig;

typedef enum{
    IndicationOff,
    FlashRate1,
    FlashRate2,
    Continuous
}SRSSlctSwIndTyp;


typedef enum{
   SRSSlctSwStat_None,
   SRSSlctSwStat_EzeEntry,
   SRSSlctSwStat_EzeExt,
   SRSSlctSwStat_LfVip,
   SRSSlctSwStat_RtVip,
   SRSSlctSwStat_AllVip,
   SRSSlctSwStat_LfLug,
   SRSSlctSwStat_RtLug,
   SRSSlctSwStat_AllLug,
   SRSSlctSwStat_IntimacyL,
   SRSSlctSwStat_FamilyR,
   SRSSlctSwStat_FamilyL,
   SRSSlctSwStat_RcvyL,
   SRSSlctSwStat_RcvyR,
   SRSSlctSwStat_LyingL,
   SRSSlctSwStat_LyingR,
   SRSSlctSwStat_LgrstOpenLt,
   SRSSlctSwStat_LgrstCloseLt,
   SRSSlctSwStat_LgrstOpenRt,
   SRSSlctSwStat_LgrstCloseRt,
   SRSSlctSwStat_IntimacyR
}SRSMode1;

typedef enum{
   NoSwitchSelected,
   Switch1Mode,
   Switch2Mode,
   Switch3Mode,
   Switch4Mode,
   Switch5Mode,
   Switch6Mode,
   Switch7Mode,
   Switch8Mode,
   Switch9Mode,
   Switch10Mode,
   Reserved,
}SRSSlctSwStat1;

#endif
