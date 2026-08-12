/*
 * File: MdBsyClear4s.c
 *
 * Code generated for Simulink model 'MdBsyClear4s'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Jul  7 14:24:45 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MdBsyClear4s.h"
#define MdBsyClear4s_LftMdBit4s        (2305305876U)
#define MdBsyClear4s_RghtMdBit4s       (571288854U)
#define MdBsyClear4s_WelcomeBkwdBit    (33554432U)
#define MdBsyClear4s_WelcomeFwdBit     (16777216U)

/* Model step function */
void MdBsyClear4s_Cal()
{
  uint32 ClearBit;
  uint32 rtb_ModeState32_Get;
  uint32 tmp;
  uint32 tmp_0;

  /* Outputs for Function Call SubSystem: '<S1>/MdBsyClear4s_Cal_sys' */
  /* FunctionCaller: '<S4>/ModeState32_Get' */
  Rte_Call_ModeState32_Get(&rtb_ModeState32_Get);
  ClearBit = MAX_uint32_T;
  if (rtb_ModeState32_Get == 0U) {
    ClearBit = 0U;
  } else {
    tmp = rtb_ModeState32_Get & MdBsyClear4s_WelcomeFwdBit;
    tmp_0 = rtb_ModeState32_Get & MdBsyClear4s_WelcomeBkwdBit;
    if (((rtb_ModeState32_Get & MdBsyClear4s_LftMdBit4s) == 0U) && (tmp == 0U) &&
        (tmp_0 == 0U)) {
      /* LftMdBit4s=VIPL(2^9)+RecvyL(2^10)+LyL(2^13)+LgrstClsL(2^16)+LgrstOpenL(2^15)+EZE4sL(2^20)+EZQ4sL(2^21)=1080342097172 */
      ClearBit = 1989661419U;
    }

    if (((rtb_ModeState32_Get & MdBsyClear4s_RghtMdBit4s) == 0U) && (tmp == 0U) &&
        (tmp_0 == 0U)) {
      /* RghtMdBit4s =VIPR(2^11)+RecvyR(2^12)+LyR(2^15)+LgrstClsR(2^18)+LgrstOpenR(2^17)+EZE4sR(2^22)+EZQ4sR(2^23)=4321308388630 */
      ClearBit &= 3723678441U;
    }
  }

  /* Chart: '<S4>/Chart' incorporates:
   *  SubSystem: '<S5>/IsStBsy32BitClear'
   */
  /* FunctionCaller: '<S6>/IsStBsy32_Clear' */
  Rte_Call_IsStBsy32_Clear(ClearBit);

  /* End of Outputs for SubSystem: '<S1>/MdBsyClear4s_Cal_sys' */
}

/* Model initialize function */
void MdBsyClear4s_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
