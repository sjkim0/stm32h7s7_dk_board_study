/*
 * hw.c
 *
 *  Created on: 2026. 2. 9.
 *      Author: ksj10
 */


#include "hw.h"


void hwInit(void)
{
	bspInit();

	// MX INIT START
	MX_GPIO_Init();
	MX_LTDC_Init();
	MX_ICACHE_GPU2D_Init();
	// MX INIT EMD
}
