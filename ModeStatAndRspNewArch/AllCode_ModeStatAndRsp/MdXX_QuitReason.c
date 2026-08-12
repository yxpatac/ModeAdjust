/*
 * File: MdXX_QuitReason.c
 *
 * Code generated for Simulink model 'MdXX_QuitReason'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Jul 10 12:59:01 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MdXX_QuitReason.h"

static void MdRspChk(uint8 rtu_MdDone, boolean rtu_ExitCond, boolean rtu_SWInt,
                     boolean rtu_SoftInt, MdRspLocal2 *rty_MdOutRsp);

/* Output and update for atomic system: '<S3>/MdOut' */
static void MdRspChk(uint8 rtu_MdDone, boolean rtu_ExitCond, boolean rtu_SWInt,
                     boolean rtu_SoftInt, MdRspLocal2 *rty_MdOutRsp)
{
  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S4>/Constant2'
   *  Logic: '<S4>/Logical Operator'
   *  Logic: '<S4>/Logical Operator1'
   *  RelationalOperator: '<S4>/Relational Operator'
   *  RelationalOperator: '<S4>/Relational Operator1'
   *  Switch: '<S4>/Switch1'
   *  Switch: '<S4>/Switch2'
   */
  if (1 == rtu_MdDone) {
    *rty_MdOutRsp = MdRsp_RecallSuccessfully;
  } else if (rtu_SWInt || rtu_SoftInt) {
    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant3'
     */
    *rty_MdOutRsp = MdRsp_RecallUnsuccessfully_LocalInterrupt;
  } else if (rtu_ExitCond || (2 == rtu_MdDone)) {
    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S4>/Constant4'
     *  Switch: '<S4>/Switch1'
     */
    *rty_MdOutRsp = MdRsp_RecallUnsuccessfully_NonEnghSpace;
  } else {
    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant1'
     *  Switch: '<S4>/Switch2'
     */
    *rty_MdOutRsp = MdRsp_None;
  }

  /* End of Switch: '<S4>/Switch' */
}

/* Model step function */
void MdXX_QuitReason_Calc(uint8 MdDone, boolean ExitCond, boolean SWInt, boolean
  SoftInt, MdRspLocal2 *MdQuitReason)
{
  /* Outputs for Function Call SubSystem: '<S1>/MdXX_QuitReason_Calc_sys' */
  /* Outputs for Atomic SubSystem: '<S3>/MdOut' */
  /* SignalConversion: '<S3>/TmpSignal ConversionAtMdQuitReasonInport1' incorporates:
   *  SignalConversion: '<S3>/TmpSignal ConversionAtExitCondOutport1'
   *  SignalConversion: '<S3>/TmpSignal ConversionAtMdDoneOutport1'
   *  SignalConversion: '<S3>/TmpSignal ConversionAtSWIntOutport1'
   *  SignalConversion: '<S3>/TmpSignal ConversionAtSoftIntOutport1'
   */
  MdRspChk(MdDone, ExitCond, SWInt, SoftInt, MdQuitReason);

  /* End of Outputs for SubSystem: '<S3>/MdOut' */
  /* End of Outputs for SubSystem: '<S1>/MdXX_QuitReason_Calc_sys' */
}

/* Model initialize function */
void MdXX_QuitReason_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
