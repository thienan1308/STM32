/*
 * interrupt.c
 *
 *  Created on: Apr 5, 2025
 *      Author: 84903
 */

#include "interrupt.h"
#include <main.h>

void EXTI0_Init(){
	__HAL_RCC_GPIOD_CLK_ENABLE();
	//Rising edge
		*EXTI_RTSR &= ~(0b11 << 0);
		*EXTI_RTSR |=  (0b01 << 0);
		//Falling edge
		*EXTI_FTSR &= ~(0b11 << 0);
		*EXTI_FTSR |=  (0b01 << 0);
		//Set mask
		*EXTI_IMR &= ~(0b11 << 0);
		*EXTI_IMR |=  (0b01 << 0);

		*NVIC_ISER0 |= (1<<6);
}
