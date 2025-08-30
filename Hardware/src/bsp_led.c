/**
  ******************************************************************************
  * @file    bsp_led.c
  * @brief   LED驱动源文件
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "bsp_led.h"
#include "cmsis_os2.h"

/* Private includes ----------------------------------------------------------*/

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

/**
  * @brief  LED初始化函数
  * @param  None
  * @retval None
  */
void BSP_LED_Init(void)
{
  /* LED初始状态设置为关闭（高电平） */
  LED0_OFF();
  LED1_OFF();
}

/**
  * @brief  LED交替闪烁函数
  * @param  None
  * @retval None
  */
void BSP_LED_Alternate_Blink(void)
{
  /* LED0点亮，LED1熄灭 */
  LED0_ON();
  LED1_OFF();
  
  /* 延时500ms */
  osDelay(500);
  
  /* LED0熄灭，LED1点亮 */
  LED0_OFF();
  LED1_ON();
  
  /* 延时500ms */
  osDelay(500);
}
