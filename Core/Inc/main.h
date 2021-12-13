/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2021 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define LCD_RST_Pin GPIO_PIN_10
#define LCD_RST_GPIO_Port GPIOI
#define RH_STK_Pin GPIO_PIN_2
#define RH_STK_GPIO_Port GPIOA
#define RV_STK_Pin GPIO_PIN_3
#define RV_STK_GPIO_Port GPIOA
#define SD_INS_Pin GPIO_PIN_5
#define SD_INS_GPIO_Port GPIOC
#define PWR_BTN_Pin GPIO_PIN_0
#define PWR_BTN_GPIO_Port GPIOJ
#define PWR_ON_Pin GPIO_PIN_1
#define PWR_ON_GPIO_Port GPIOJ
#define TLHL_BTN_Pin GPIO_PIN_8
#define TLHL_BTN_GPIO_Port GPIOB
#define TLHR_BTN_Pin GPIO_PIN_9
#define TLHR_BTN_GPIO_Port GPIOB
#define MDL_BTN_Pin GPIO_PIN_4
#define MDL_BTN_GPIO_Port GPIOI
#define TEL_BTN_Pin GPIO_PIN_5
#define TEL_BTN_GPIO_Port GPIOI
#define RTN_BTN_Pin GPIO_PIN_6
#define RTN_BTN_GPIO_Port GPIOI
#define SYS_BTN_Pin GPIO_PIN_7
#define SYS_BTN_GPIO_Port GPIOI
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
