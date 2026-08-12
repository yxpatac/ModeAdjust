/*
 * File: MdXX_RspOutComm_private.h
 *
 * Code generated for Simulink model 'MdXX_RspOutComm'.
 *
 * Model version                  : 1.42
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Nov 21 11:58:54 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MdXX_RspOutComm_private_h_
#define RTW_HEADER_MdXX_RspOutComm_private_h_
#include "rtwtypes.h"
#include "MdXX_RspOutComm.h"

extern void MdXX_RspOut_Md10RspOutComm_Init(uint8 *rty_ModeRspOut, SrcReqTp1
  *rty_MdSrcTpOut);
extern void MdXX_RspOutComm_Md10RspOutComm(boolean rtu_Mode_En, uint8
  rtu_k_exitTm, MdRspLocal2 rtu_ModeRsp, boolean rtu_isArrivedTrgtPos, SrcReqTp1
  rtu_MdSrcTpIn, uint8 *rty_ModeRspOut, SrcReqTp1 *rty_MdSrcTpOut,
  DW_Md10RspOutComm_MdXX_RspOut_T *localDW);

#endif                                 /* RTW_HEADER_MdXX_RspOutComm_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
