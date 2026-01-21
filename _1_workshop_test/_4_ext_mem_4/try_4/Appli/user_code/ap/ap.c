/*
 * ap.c
 *
 *  Created on: 2026. 1. 21.
 *      Author: ksj10
 */


#include "ap.h"
#include "raw_lcd.h"


void apInit(void)
{
	rawLcdInit();
}

void apLoop(void)
{
	rawLcdLoop();
}
