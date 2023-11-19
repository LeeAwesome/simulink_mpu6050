/*
 * File: simulink_mpu6050_model_TIM.c
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
#include "simulink_mpu6050_model_TIM.h"

/* Number of configured TIMER. */
uint16_t G_TIM_Count = 0;

/* Array of TIMER information. */
TIM_ConfTypeDef* G_TIM_Conf[1];
TIM_HandleTypeDef* G_TIM_Handler[1];

/* TIM3 informations. */
TIM_ConfTypeDef TIM3_Conf;

/*******************************************************************************
 * Function Name  : TIM_PeriodElapsedCustomCallback
 * Description    : Timer callback for update event
 * Input          : TIM_HandleTypeDef*   TIM IC handle
 *******************************************************************************/
void TIM_PeriodElapsedCustomCallback(TIM_HandleTypeDef *htim)
{
  TIM_ConfTypeDef * pConf = G_TIM_Conf[0];
  TIM_HandleTypeDef* pHandler = G_TIM_Handler[0];
  if (pHandler == htim) {
    if (pConf->ItUpFcn != NULL) {
      /* Call update function for TIM3. */
      pConf->ItUpFcn();
    }
  }
}

/**
 * @brief  Period elapsed callback in non blocking mode
 * @param  htim TIM handle
 * @retval None
 */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  extern void TIM_PeriodElapsedCustomCallback(TIM_HandleTypeDef *htim);

  /* Handle this event from model side. */
  TIM_PeriodElapsedCustomCallback(htim);
}

/*******************************************************************************
 * Function Name  : TIM3_ItUpFcn
 * Description    : TIM3 update interrupt
 * Input          : None
 * TIM3_ItUpFcn is called from TIM_PeriodElapsedCustomCallback function
 * in simulink_mpu6050_model_TIM.c file.
 *******************************************************************************/
void TIM3_ItUpFcn()
{
  {
    /* Output and update for function-call system: '<Root>/Function-Call Subsystem' */
    if (simulink_mpu6050_model_DW.LED_flash + 1.0 > 200.0) {
      simulink_mpu6050_model_DW.LED_flash = 0.0;

      {
        HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
      }
    }
  }
}

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] simulink_mpu6050_model_TIM.c
 */
