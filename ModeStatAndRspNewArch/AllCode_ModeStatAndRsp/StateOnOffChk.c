/*
 * File: StateOnOffChk.c
 *
 * Code generated for Simulink model 'StateOnOffChk'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Jul 10 09:34:55 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "StateOnOffChk.h"
#define StateOnOffChk_IN_MdStateOff    ((uint8)1U)
#define StateOnOffChk_IN_MdStateOn     ((uint8)2U)

/* Block signals (default storage) */
B_StateOnOffChk_T StateOnOffChk_B;

/* Block states (default storage) */
DW_StateOnOffChk_T StateOnOffChk_DW;

/* Model step function */
void stateonoffchk_Cal()
{
  boolean tmpRead;
  uint32 tmpRead_0;

  /* Inport: '<Root>/modestate32_Val' */
  Rte_Read_modestate32_Val(&tmpRead_0);

  /* Inport: '<Root>/CommCond_Val' */
  Rte_Read_CommCond_Val(&tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/stateonoffchk_Cal_sys' */
  /* Chart: '<S2>/Chart' incorporates:
   *  SignalConversion: '<S1>/TmpLatchAtCommCond_Val_readOutport1'
   *  SignalConversion: '<S1>/TmpLatchAtmodestate32_Val_readOutport1'
   */
  if (StateOnOffChk_DW.is_active_c1_StateOnOffChk == 0U) {
    StateOnOffChk_DW.is_active_c1_StateOnOffChk = 1U;
    StateOnOffChk_DW.is_c1_StateOnOffChk = StateOnOffChk_IN_MdStateOff;
    StateOnOffChk_B.ModeStateOn = false;
  } else if (StateOnOffChk_DW.is_c1_StateOnOffChk == StateOnOffChk_IN_MdStateOff)
  {
    if (tmpRead) {
      StateOnOffChk_DW.is_c1_StateOnOffChk = StateOnOffChk_IN_MdStateOn;
      StateOnOffChk_B.ModeStateOn = true;
    }
  } else {
    if ((!tmpRead) && (tmpRead_0 == 0U)) {
      StateOnOffChk_DW.is_c1_StateOnOffChk = StateOnOffChk_IN_MdStateOff;
      StateOnOffChk_B.ModeStateOn = false;
    }
  }

  /* End of Chart: '<S2>/Chart' */

  /* Outport: '<Root>/ModeStateOn_Val' incorporates:
   *  Outport: '<S1>/ModeStateOn_Val_write'
   */
  (void) Rte_Write_ModeStateOn_Val(StateOnOffChk_B.ModeStateOn);

  /* End of Outputs for SubSystem: '<Root>/stateonoffchk_Cal_sys' */
  (void) Rte_Write_ModeStateOn_Val(StateOnOffChk_B.ModeStateOn);
}

/* Model initialize function */
void StateOnOffChk_Init(void)
{
  /* SystemInitialize for Outport: '<Root>/ModeStateOn_Val' */
  (void) Rte_Write_ModeStateOn_Val(StateOnOffChk_B.ModeStateOn);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
