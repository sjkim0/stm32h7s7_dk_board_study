/*
 * bsp.c
 *
 *  Created on: 2026. 2. 9.
 *      Author: ksj10
 */


#include "bsp.h"


void bspInit(void)
{
	SystemCoreClockUpdate();
	HAL_Init();
}

uint32_t millis(void)
{
	return HAL_GetTick();
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}
