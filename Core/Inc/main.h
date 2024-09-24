/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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
#define LED_GREEN_Pin GPIO_PIN_0
#define LED_GREEN_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_1
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_2
#define LED_RED_GPIO_Port GPIOA
#define OUTPUT3_Pin GPIO_PIN_3
#define OUTPUT3_GPIO_Port GPIOA
#define T12_Pin GPIO_PIN_4
#define T12_GPIO_Port GPIOA
#define T1_Pin GPIO_PIN_5
#define T1_GPIO_Port GPIOA
#define T2_Pin GPIO_PIN_6
#define T2_GPIO_Port GPIOA
#define T3_Pin GPIO_PIN_7
#define T3_GPIO_Port GPIOA
#define B0_Pin GPIO_PIN_0
#define B0_GPIO_Port GPIOB
#define B1_Pin GPIO_PIN_1
#define B1_GPIO_Port GPIOB
#define B2_Pin GPIO_PIN_2
#define B2_GPIO_Port GPIOB
#define T4_Pin GPIO_PIN_8
#define T4_GPIO_Port GPIOA
#define T5_Pin GPIO_PIN_9
#define T5_GPIO_Port GPIOA
#define T6_Pin GPIO_PIN_10
#define T6_GPIO_Port GPIOA
#define T7_Pin GPIO_PIN_11
#define T7_GPIO_Port GPIOA
#define T8_Pin GPIO_PIN_12
#define T8_GPIO_Port GPIOA
#define T9_Pin GPIO_PIN_13
#define T9_GPIO_Port GPIOA
#define T10_Pin GPIO_PIN_14
#define T10_GPIO_Port GPIOA
#define T11_Pin GPIO_PIN_15
#define T11_GPIO_Port GPIOA
#define B3_Pin GPIO_PIN_3
#define B3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
