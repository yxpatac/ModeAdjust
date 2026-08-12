/*
 * File: MdXX_QuitChk.c
 *
 * Code generated for Simulink model 'MdXX_QuitChk'.
 *
 * Model version                  : V2.0.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Jul 10 15:35:38 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MdXX_QuitChk.h"

/* Block signals (default storage) */
B_MdXX_QuitChk_T MdXX_QuitChk_B;

/* Model step function */
void MdXX_QuitChk_Cal()
{
  uint8 i;
  boolean tmpRead[32];
  boolean tmpRead_0[32];
  boolean tmpRead_1[32];
  sint8 s5_iter;
  uint8 rtb_DataTypeConversion[32];
  uint32 rtb_Data32Bit;
  sint32 i_0;

  /* Inport: '<Root>/MdXX_SWIntArray_Val' */
  Rte_Read_MdXX_SWIntArray_Val(tmpRead_1);

  /* Inport: '<Root>/MdXX_SoftIntArray_Val' */
  Rte_Read_MdXX_SoftIntArray_Val(tmpRead_0);

  /* Inport: '<Root>/MdXX_MdDoneArray_Val' */
  Rte_Read_MdXX_MdDoneArray_Val(rtb_DataTypeConversion);

  /* Inport: '<Root>/MdXX_CommExitArray_Val' */
  Rte_Read_MdXX_CommExitArray_Val(tmpRead);

  /* Outputs for Function Call SubSystem: '<Root>/MdXX_QuitChk_Cal_sys' */
  /* Outputs for Iterator SubSystem: '<S3>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S5>/For Iterator'
   */
  /* Constant: '<S3>/PA_KeSMSuMdNums_Val' */
  for (s5_iter = 0; s5_iter < (sint8)Rte_Prm_KeSMSuMdNums_Val(); s5_iter++) {
    /* FunctionCaller: '<S5>/MdXX_QuitReason_Calc' incorporates:
     *  Chart: '<S5>/Chart'
     *  Selector: '<S5>/Selector'
     *  Selector: '<S5>/Selector1'
     *  Selector: '<S5>/Selector2'
     *  Selector: '<S5>/Selector3'
     *  SignalConversion: '<S1>/TmpLatchAtMdXX_CommExitArray_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtMdXX_MdDoneArray_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtMdXX_SWIntArray_Val_readOutport1'
     *  SignalConversion: '<S1>/TmpLatchAtMdXX_SoftIntArray_Val_readOutport1'
     */
    Rte_Call_MdXX_QuitReason_Calc(rtb_DataTypeConversion[s5_iter],
      tmpRead[s5_iter], tmpRead_1[s5_iter], tmpRead_0[s5_iter],
      &MdXX_QuitChk_B.dataarray[s5_iter]);
  }

  /* End of Constant: '<S3>/PA_KeSMSuMdNums_Val' */
  /* End of Outputs for SubSystem: '<S3>/For Iterator Subsystem' */

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  for (i_0 = 0; i_0 < 32; i_0++) {
    rtb_DataTypeConversion[i_0] = MdXX_QuitChk_B.dataarray[i_0];
  }

  /* End of DataTypeConversion: '<S3>/Data Type Conversion' */

  /* Outport: '<Root>/MdXX_QuitArray_Val' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   */
  (void) Rte_Write_MdXX_QuitArray_Val(MdXX_QuitChk_B.dataarray);

  /* Chart: '<S3>/Chart2' */
  rtb_Data32Bit = (uint32)0x00000000;
  for (i = 0U; i < 32; i++) {
    rtb_Data32Bit |= (uint32)(rtb_DataTypeConversion[i] != 0) << i;
  }

  /* End of Chart: '<S3>/Chart2' */

  /* Outport: '<Root>/MdXX_Quit32bit_Val' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion20'
   */
  (void) Rte_Write_MdXX_Quit32bit_Val(rtb_Data32Bit);

  /* End of Outputs for SubSystem: '<Root>/MdXX_QuitChk_Cal_sys' */
}

/* Model initialize function */
void MdXX_QuitChk_Init(void)
{
  {
    sint32 i;

    /* SystemInitialize for S-Function (sfun_private_function_caller): '<Root>/sfcn_inserted_server' incorporates:
     *  SubSystem: '<Root>/MdXX_QuitChk_Cal_sys'
     */
    /* SystemInitialize for Iterator SubSystem: '<S3>/For Iterator Subsystem' */
    /* SystemInitialize for Chart: '<S5>/Chart' */
    for (i = 0; i < 32; i++) {
      MdXX_QuitChk_B.dataarray[i] = MdRsp_None;
    }

    /* End of SystemInitialize for Chart: '<S5>/Chart' */
    /* End of SystemInitialize for SubSystem: '<S3>/For Iterator Subsystem' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller): '<Root>/sfcn_inserted_server' */
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
