/*
 * raw_lcd.c
 *
 *  Created on: 2026. 1. 21.
 *      Author: ksj10
 */


#include "raw_lcd.h"


typedef struct
{

}raw_lcd_t;


raw_lcd_t raw_lcd_inst;


static void _lcdOn(void);


void rawLcdInit(void)
{
	_lcdOn();
//	__HAL_LTDC_LAYER_ENABLE(hltdc, 0);
}

void rawLcdLoop(void)
{

}

static void _lcdOn(void)
{
	HAL_GPIO_WriteMultipleStatePin(GPIOG, GPIO_PIN_15, GPIO_PIN_SET);
	HAL_GPIO_WriteMultipleStatePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
}
