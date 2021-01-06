/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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
#include "stm32g0xx_hal.h"

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
#define DISPLAY_1_Pin GPIO_PIN_7
#define DISPLAY_1_GPIO_Port GPIOB
#define DISPLAY_2_Pin GPIO_PIN_14
#define DISPLAY_2_GPIO_Port GPIOC
#define DISPLAY_D_Pin GPIO_PIN_15
#define DISPLAY_D_GPIO_Port GPIOC
#define DISPLAY_E_Pin GPIO_PIN_0
#define DISPLAY_E_GPIO_Port GPIOA
#define HEATER_Pin GPIO_PIN_1
#define HEATER_GPIO_Port GPIOA
#define DS18B20_Pin GPIO_PIN_2
#define DS18B20_GPIO_Port GPIOA
#define DISPLAY_B_Pin GPIO_PIN_4
#define DISPLAY_B_GPIO_Port GPIOA
#define ENCODER_KEY_Pin GPIO_PIN_5
#define ENCODER_KEY_GPIO_Port GPIOA
#define ENCODER_A_Pin GPIO_PIN_6
#define ENCODER_A_GPIO_Port GPIOA
#define ENCODER_B_Pin GPIO_PIN_7
#define ENCODER_B_GPIO_Port GPIOA
#define DISPLAY_A_Pin GPIO_PIN_0
#define DISPLAY_A_GPIO_Port GPIOB
#define DISPLAY_C_Pin GPIO_PIN_11
#define DISPLAY_C_GPIO_Port GPIOA
#define DISPLAY_G_Pin GPIO_PIN_12
#define DISPLAY_G_GPIO_Port GPIOA
#define DISPLAY_F_Pin GPIO_PIN_3
#define DISPLAY_F_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
