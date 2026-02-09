/*
 * main.c
 *
 *  Created on: 2026. 2. 9.
 *      Author: ksj10
 */


#include "main.h"


int main(void)
{
	hwInit();

	apInit();
	apLoop();

	return 0;
}
