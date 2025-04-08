#include<stdio.h>
#include"LED.h"
#include"Button.h"
#include"interrupt.h"

void EXTI0_IRQHandler(){
	if(buttonState() == 1){
		LEDblink(1, LED5_pin);
	} else{
		LEDblink(0, LED5_pin);
	}
	*EXTI_PR |= (1<<0);
}

//Dang Thien An
// 1
//2

int main (void){

	LEDinit();
	HAL_Init();
	buttoninit();
	EXTI0_Init();
//	while(1){
//		LEDblink(1, LED3_pin);
//		HAL_Delay(200);
//		LEDblink(0, LED3_pin);
//		HAL_Delay(200);
//
//		LEDblink(1, LED4_pin);
//		HAL_Delay(200);
//		LEDblink(0, LED4_pin);
//		HAL_Delay(200);
//

	while(1){
		LEDblink(1, LED3_pin);
		HAL_Delay(100);
		LEDblink(0, LED3_pin);
		HAL_Delay(100);
//		if(buttonState()  == 0){
//			LEDblink(0, LED3_pin);
//		} else{
//			LEDblink(1, LED3_pin);
//		}
	}
}


