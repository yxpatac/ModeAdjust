#ifndef RTE_TYPE_H
#define RTE_TYPE_H

typedef enum{
    MdTp_None,
    MdTp_EzeEntry,
    MdTp_EzeExt,
    MdTp_Vip,
    MdTp_Lug,
    MdTp_Recovery
}MdTp1;
typedef enum {
    RclRspStat_None,
    RclRspStat_StoredSucc,
    RclRspStat_StoredUnSucc,
    RclRspStat_VCURclSucc,
    RclRspStat_VCURclUnSuccLocalInterrupt,
    RclRspStat_VCURclUnSuccError,
    RclRspStat_RFRRclSucc,
    RclRspStat_RFRRclUnSuccLocalInterrupt,
    RclRspStat_RFRRclUnSuccError
}RclRspStat1;

typedef enum {
    SrcReqTp_None,
    SrcReqTp_Local,
    SrcReqTp_HMI2L,
    SrcReqTp_HMI2R,
    SrcReqTp_HMI,
    SrcReqTp_Remote,
    SrcReqTp_SRS
}SrcReqTp1;



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
/*
typedef enum{
    MdRsp_None,
    MdRsp_RecallSuccessfully,
    MdRsp_RecallUnsuccessfully,
    MdRsp_RecallOngoing
}MdRsp1;
*/





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
    SRSSlctSwStat_None,
    SRSSlctSwStat_EzeEntry,
    SRSSlctSwStat_EzeExt,
    SRSSlctSwStat_LfVip,
    SRSSlctSwStat_RtVip,
    SRSSlctSwStat_LfLug,
    SRSSlctSwStat_RtLug,
    SRSSlctSwStat_AllLug
}SRSSlctSwStat1;
  
typedef enum {
    SRSIndicatorStat_NoIndicator,
    SRSIndicatorStat_EzeEntryOn,
    SRSIndicatorStat_EzeExtOn,
    SRSIndicatorStat_LfVipOn,
    SRSIndicatorStat_RtVipOn,
    SRSIndicatorStat_AllVipOn,
    SRSIndicatorStat_LfLugOn,
    SRSIndicatorStat_RtLugOn,
    SRSIndicatorStat_AllLugOn
}SRSIndicatorStat1;



typedef enum{
    SeatNum4Config,
    SeatNum6Config,
    SeatNum7Config
}SeatNumConfig;

#endif
