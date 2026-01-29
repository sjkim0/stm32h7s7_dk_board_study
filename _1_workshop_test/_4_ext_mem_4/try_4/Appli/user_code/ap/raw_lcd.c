/*
 * raw_lcd.c
 *
 *  Created on: 2026. 1. 21.
 *      Author: ksj10
 */


#include "raw_lcd.h"


#define DEF_LCD_ROW_LENGTH    (480U)
#define DEF_LCD_COLUMN_LENGTH (800U)

__attribute__((section("psram_buffer")))
uint32_t lcd_buffer[DEF_LCD_ROW_LENGTH * DEF_LCD_COLUMN_LENGTH];

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
