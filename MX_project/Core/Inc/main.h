/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32wbxx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SENSE_RR_Pin GPIO_PIN_2
#define SENSE_RR_GPIO_Port GPIOA
#define R_REF_Pin GPIO_PIN_1
#define R_REF_GPIO_Port GPIOA
#define FAN_CTRL_Pin GPIO_PIN_0
#define FAN_CTRL_GPIO_Port GPIOA
#define BOOT_Pin GPIO_PIN_3
#define BOOT_GPIO_Port GPIOH
#define L_RESET_Pin GPIO_PIN_7
#define L_RESET_GPIO_Port GPIOB
#define IMU_INT1_Pin GPIO_PIN_5
#define IMU_INT1_GPIO_Port GPIOB
#define L_EN_Pin GPIO_PIN_4
#define L_EN_GPIO_Port GPIOB
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define CHARGE_Pin GPIO_PIN_11
#define CHARGE_GPIO_Port GPIOC
#define PWRON_Pin GPIO_PIN_12
#define PWRON_GPIO_Port GPIOC
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define L_REF_Pin GPIO_PIN_10
#define L_REF_GPIO_Port GPIOA
#define TURN_L_Pin GPIO_PIN_13
#define TURN_L_GPIO_Port GPIOB
#define I2C3_INT_Pin GPIO_PIN_6
#define I2C3_INT_GPIO_Port GPIOC
#define TURN_R_Pin GPIO_PIN_14
#define TURN_R_GPIO_Port GPIOB
#define I2C1_INT_Pin GPIO_PIN_15
#define I2C1_INT_GPIO_Port GPIOB
#define SPI2_GPIO2_Pin GPIO_PIN_6
#define SPI2_GPIO2_GPIO_Port GPIOB
#define R_EN_Pin GPIO_PIN_13
#define R_EN_GPIO_Port GPIOC
#define R_RESET_Pin GPIO_PIN_12
#define R_RESET_GPIO_Port GPIOB
#define R_PH_B_Pin GPIO_PIN_1
#define R_PH_B_GPIO_Port GPIOB
#define R_PH_A_Pin GPIO_PIN_0
#define R_PH_A_GPIO_Port GPIOB
#define R_PWM_B_Pin GPIO_PIN_11
#define R_PWM_B_GPIO_Port GPIOB
#define WS2812_LED_Pin GPIO_PIN_10
#define WS2812_LED_GPIO_Port GPIOB
#define R_PWM_A_Pin GPIO_PIN_2
#define R_PWM_A_GPIO_Port GPIOB
#define SENSE_LR_Pin GPIO_PIN_4
#define SENSE_LR_GPIO_Port GPIOC
#define SENSE_LF_Pin GPIO_PIN_8
#define SENSE_LF_GPIO_Port GPIOA
#define SENSE_RF_Pin GPIO_PIN_3
#define SENSE_RF_GPIO_Port GPIOA
#define IMU_INT1D14_Pin GPIO_PIN_14
#define IMU_INT1D14_GPIO_Port GPIOD
#define L_PWM_B_Pin GPIO_PIN_1
#define L_PWM_B_GPIO_Port GPIOE
#define L_PH_B_Pin GPIO_PIN_13
#define L_PH_B_GPIO_Port GPIOD
#define L_PH_A_Pin GPIO_PIN_12
#define L_PH_A_GPIO_Port GPIOD
#define L_PWM_A_Pin GPIO_PIN_0
#define L_PWM_A_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
