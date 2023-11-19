/*
 * File: simulink_mpu6050_model.c
 *
 * Code generated for Simulink model :simulink_mpu6050_model.
 *
 * Model version      : 1.0
 * Simulink Coder version    : 9.6 (R2021b) 14-May-2021
 * TLC version       : 9.6 (Aug 25 2021)
 * C/C++ source code generated on  : Sun Nov 19 18:27:09 2023
 *
 * Target selection: stm32.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 *
 *
 *
 * ******************************************************************************
 * * attention
 * *
 * * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
 * * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
 * * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
 * * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
 * * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
 * * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
 * *
 * ******************************************************************************
 */

#include "simulink_mpu6050_model.h"
#include "simulink_mpu6050_model_private.h"

/* Block states (default storage) */
DW_simulink_mpu6050_model simulink_mpu6050_model_DW;

/* Real-time model */
static RT_MODEL_simulink_mpu6050_model simulink_mpu6050_model_M_;
RT_MODEL_simulink_mpu6050_model *const simulink_mpu6050_model_M =
  &simulink_mpu6050_model_M_;

/* Model step function */
void simulink_mpu6050_model_step(void)
{
  {
  }
}

/* Model initialize function */
void simulink_mpu6050_model_initialize(void)
{
  {
    /* user code (Start function Header) */
    {
      /* TIM3 initialization. */
      /* Store TIM3 informations and its handler. */
      G_TIM_Conf[G_TIM_Count] = &TIM3_Conf;
      G_TIM_Handler[G_TIM_Count] = &htim3;

      /* Store TIM information. */
      TIM3_Conf.TIM_Prescaler = 7199;
      TIM3_Conf.TIM_APBClock = 72000000;
      TIM3_Conf.TIM_ARR = 49 - 1;
      TIM3_Conf.TIM_Clock = 10000.0;
      TIM3_Conf.TIM_Freq = 204.08;
      TIM3_Conf.CH1_duty = 0.0;
      TIM3_Conf.CH2_duty = 0.0;
      TIM3_Conf.CH3_duty = 0.0;
      TIM3_Conf.CH4_duty = 0.0;
      TIM3_Conf.CH1_type = UNKNOWN;
      TIM3_Conf.CH2_type = UNKNOWN;
      TIM3_Conf.CH3_type = UNKNOWN;
      TIM3_Conf.CH4_type = UNKNOWN;

      /* Interrupt handler default initialization. */
      TIM3_Conf.ItUpFcn = NULL;
      TIM3_Conf.ItTrgFcn = NULL;
      TIM3_Conf.ItComFcn = NULL;
      TIM3_Conf.ItBrkFcn = NULL;
      TIM3_Conf.ItCcFcn = NULL;

      /* Update interrupt function. */
      TIM3_Conf.ItUpFcn = TIM3_ItUpFcn;

      /* Auto-reload preload enable */
      /*****Bugzilla 63376 *****/
      /*SET_BIT((&htim3)->Instance->CR1,TIM_CR1_ARPE);*/

      /* Update register value with blockset value. */
      /* Prescaler. */
      __HAL_TIM_SET_PRESCALER(&htim3,TIM3_Conf.TIM_Prescaler);

      /* Autoreload: ARR. */
      __HAL_TIM_SET_AUTORELOAD(&htim3,49 - 1);

      /* Update registers before start operation to come. */
      HAL_TIM_GenerateEvent(&htim3,TIM_EVENTSOURCE_UPDATE);
    }

    /* user code (Start function Body) */
    {
      /* TIM3 Start. */
      /* Starts the TIM Base generation in interrupt mode. */
      HAL_TIM_Base_Start_IT(&htim3);

      /* Start interrupt for Update event*/
      HAL_TIM_Base_Start_IT(&htim3);
    }
  }
}

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] simulink_mpu6050_model.c
 */
