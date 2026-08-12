#ifndef RTE_TYPE_H
#define RTE_TYPE_H



typedef enum{
MdRsp_None,
MdRsp_RecallSuccessfully,
MdRsp_RecallUnsuccessfully_LocalInterrupt,
MdRsp_RecallUnsuccessfully_NonEnghSpace,
MdRsp_RecallOngoing,
MdRsp_TargetPositionAlready,
MdRsp_LowPower,
MdRsp_CrashStat,
MdRsp_ThdRwOccupt,
MdRsp_PosNotLrn,
MdRsp_NotParkStat,
MdRsp_SpdNotCorrt
}MdRspLocal2;



#endif