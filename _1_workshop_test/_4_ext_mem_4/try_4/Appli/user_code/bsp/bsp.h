/*
 * bsp.h
 *
 *  Created on: 2026. 2. 9.
 *      Author: ksj10
 */

#ifndef BSP_BSP_H_
#define BSP_BSP_H_


#include "stm32h7rsxx_hal.h"
#include "icache.h"


void bspInit(void);
void Error_Handler(void);
uint32_t millis(void);


#endif /* BSP_BSP_H_ */
