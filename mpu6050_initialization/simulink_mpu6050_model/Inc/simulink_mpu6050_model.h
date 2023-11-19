/*
 * File: simulink_mpu6050_model.h
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

#ifndef RTW_HEADER_simulink_mpu6050_model_h_
#define RTW_HEADER_simulink_mpu6050_model_h_
#include "STM32_Config.h"
#include "simulink_mpu6050_model_External_Functions.h"
#include "simulink_mpu6050_model_TIM.h"
#ifndef simulink_mpu6050_model_COMMON_INCLUDES_
#define simulink_mpu6050_model_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                             /* simulink_mpu6050_model_COMMON_INCLUDES_ */

#include "simulink_mpu6050_model_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T acc_pitch;                    /* '<Root>/Data Store Memory' */
  real_T pitch;                        /* '<Root>/Data Store Memory1' */
  real_T Gyro_Y;                       /* '<Root>/Data Store Memory10' */
  real_T Accel_Z;                      /* '<Root>/Data Store Memory11' */
  real_T Gyro_Z;                       /* '<Root>/Data Store Memory12' */
  real_T acc_roll;                     /* '<Root>/Data Store Memory2' */
  real_T roll;                         /* '<Root>/Data Store Memory3' */
  real_T acc_yaw;                      /* '<Root>/Data Store Memory4' */
  real_T yaw;                          /* '<Root>/Data Store Memory5' */
  real_T Temputure;                    /* '<Root>/Data Store Memory6' */
  real_T Accel_X;                      /* '<Root>/Data Store Memory7' */
  real_T Gyro_X;                       /* '<Root>/Data Store Memory8' */
  real_T Accel_Y;                      /* '<Root>/Data Store Memory9' */
  real_T LED_flash;                    /* '<Root>/Data Store Memory14' */
} DW_simulink_mpu6050_model;

/* Real-time Model Data Structure */
struct tag_RTM_simulink_mpu6050_model {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_simulink_mpu6050_model simulink_mpu6050_model_DW;

/* Model entry point functions */
extern void simulink_mpu6050_model_initialize(void);
extern void simulink_mpu6050_model_step(void);

/* Real-time Model object */
extern RT_MODEL_simulink_mpu6050_model *const simulink_mpu6050_model_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Scope' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'simulink_mpu6050_model'
 * '<S1>'   : 'simulink_mpu6050_model/Function-Call Subsystem'
 * '<S2>'   : 'simulink_mpu6050_model/Function-Call Subsystem/Subsystem'
 * '<S3>'   : 'simulink_mpu6050_model/Function-Call Subsystem/Subsystem/If Action Subsystem'
 */
#endif                                /* RTW_HEADER_simulink_mpu6050_model_h_ */

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] simulink_mpu6050_model.h
 */
