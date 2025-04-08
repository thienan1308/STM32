/*
 * LED.h
 *
 *  Created on: Mar 30, 2025
 *      Author: 84903
 */

#ifndef INC_LED_H_
#define INC_LED_H_
#include "stm32f4xx_hal.h"
#include "base_address_register.h"

#define LED3_pin 13
#define LED4_pin 12
#define LED5_pin 14
#define LED6_pin 15

void LEDinit();
void LEDblink(int on_off,uint8_t inputLEDpin);


#endif /* INC_LED_H_ */
