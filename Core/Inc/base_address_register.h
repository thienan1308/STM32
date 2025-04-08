/*
 * base_address_register.h
 *
 *  Created on: Mar 30, 2025
 *      Author: 84903
 */

#ifndef INC_BASE_ADDRESS_REGISTER_H_
#define INC_BASE_ADDRESS_REGISTER_H_

#define GPIOA_BASE_ADDR 	0x40020000
#define GPIOB_BASE_ADDR 	0X40020400
#define GPIOC_BASE_ADDR 	0x40020800
#define GPIOD_BASE_ADDR 	0x40020C00
#define GPIOE_BASE_ADDR 	0x40021000
#define GPIOH_BASE_ADDR 	0x40021C00

#define EXTI_BASE_ADDR		0x40013C00



//OFFSET
#define offset_MODER_ADDR   	0x00
#define offset_OTYPER_ADDR  	0x04
#define offset_OSPEEDR_ADDR 	0x08
#define offset_PUPDR_ADDR   	0x0C
#define offset_IDR_ADDR     	0x10
#define offset_ODR_ADDR     	0x14
#define offset_BSRR_ADDR		0x18

//EXTI and EXTI0 offset
#define offset_IMR				0x00
#define offset_EMR				0x04
#define offset_RTSR				0x08
#define offset_FTSR				0x0C
#define offset_SWIER			0x10
#define offset_PR				0x14

//MODER
#define GPIOA_MODER		((volatile uint32_t*)(GPIOA_BASE_ADDR + offset_MODER_ADDR))
#define GPIOB_MODER		((volatile uint32_t*)(GPIOB_BASE_ADDR + offset_MODER_ADDR))
#define GPIOC_MODER		((volatile uint32_t*)(GPIOC_BASE_ADDR + offset_MODER_ADDR))
#define GPIOD_MODER		((volatile uint32_t*)(GPIOD_BASE_ADDR + offset_MODER_ADDR))
#define GPIOE_MODER		((volatile uint32_t*)(GPIOE_BASE_ADDR + offset_MODER_ADDR))
#define GPIOH_MODER		((volatile uint32_t*)(GPIOH_BASE_ADDR + offset_MODER_ADDR))

//OTYPER
#define GPIOA_OTYPER	((volatile uint32_t*)(GPIOA_BASE_ADDR + offset_OTYPER_ADDR))
#define GPIOB_OTYPER	((volatile uint32_t*)(GPIOB_BASE_ADDR + offset_OTYPER_ADDR))
#define GPIOC_OTYPER	((volatile uint32_t*)(GPIOC_BASE_ADDR + offset_OTYPER_ADDR))
#define GPIOD_OTYPER	((volatile uint32_t*)(GPIOD_BASE_ADDR + offset_OTYPER_ADDR))
#define GPIOE_OTYPER	((volatile uint32_t*)(GPIOE_BASE_ADDR + offset_OTYPER_ADDR))
#define GPIOH_OTYPER	((volatile uint32_t*)(GPIOH_BASE_ADDR + offset_OTYPER_ADDR))

//OSPEEDR
#define GPIOA_OSPEEDR	((volatile uint32_t*)(GPIOA_BASE_ADDR + offset_OSPEEDR_ADDR))
#define GPIOB_OSPEEDR	((volatile uint32_t*)(GPIOB_BASE_ADDR + offset_OSPEEDR_ADDR))
#define GPIOC_OSPEEDR	((volatile uint32_t*)(GPIOC_BASE_ADDR + offset_OSPEEDR_ADDR))
#define GPIOD_OSPEEDR	((volatile uint32_t*)(GPIOD_BASE_ADDR + offset_OSPEEDR_ADDR))
#define GPIOE_OSPEEDR	((volatile uint32_t*)(GPIOE_BASE_ADDR + offset_OSPEEDR_ADDR))
#define GPIOH_OSPEEDR	((volatile uint32_t*)(GPIOH_BASE_ADDR + offset_OSPEEDR_ADDR))

//PUPDR
#define GPIOA_PUPDR		((volatile uint32_t*)(GPIOA_BASE_ADDR + offset_PUPDR_ADDR))
#define GPIOB_PUPDR		((volatile uint32_t*)(GPIOB_BASE_ADDR + offset_PUPDR_ADDR))
#define GPIOC_PUPDR		((volatile uint32_t*)(GPIOC_BASE_ADDR + offset_PUPDR_ADDR))
#define GPIOD_PUPDR		((volatile uint32_t*)(GPIOD_BASE_ADDR + offset_PUPDR_ADDR))
#define GPIOE_PUPDR		((volatile uint32_t*)(GPIOE_BASE_ADDR + offset_PUPDR_ADDR))
#define GPIOH_PUPDR		((volatile uint32_t*)(GPIOH_BASE_ADDR + offset_PUPDR_ADDR))

//IDR
#define GPIOA_IDR		((volatile uint32_t*)(GPIOA_BASE_ADDR + offset_IDR_ADDR))
#define GPIOB_IDR		((volatile uint32_t*)(GPIOB_BASE_ADDR + offset_IDR_ADDR))
#define GPIOC_IDR		((volatile uint32_t*)(GPIOC_BASE_ADDR + offset_IDR_ADDR))
#define GPIOD_IDR		((volatile uint32_t*)(GPIOD_BASE_ADDR + offset_IDR_ADDR))
#define GPIOE_IDR		((volatile uint32_t*)(GPIOE_BASE_ADDR + offset_IDR_ADDR))
#define GPIOH_IDR		((volatile uint32_t*)(GPIOH_BASE_ADDR + offset_IDR_ADDR))

//ODR
#define GPIOA_ODR		((volatile uint32_t*)(GPIOA_BASE_ADDR + offset_ODR_ADDR))
#define GPIOB_ODR		((volatile uint32_t*)(GPIOB_BASE_ADDR + offset_ODR_ADDR))
#define GPIOC_ODR		((volatile uint32_t*)(GPIOC_BASE_ADDR + offset_ODR_ADDR))
#define GPIOD_ODR		((volatile uint32_t*)(GPIOD_BASE_ADDR + offset_ODR_ADDR))
#define GPIOE_ODR		((volatile uint32_t*)(GPIOE_BASE_ADDR + offset_ODR_ADDR))
#define GPIOH_ODR		((volatile uint32_t*)(GPIOH_BASE_ADDR + offset_ODR_ADDR))

//BSRR
#define GPIOA_BSRR		((volatile uint32_t*)(GPIOA_BASE_ADDR + offset_BSRR_ADDR))
#define GPIOB_BSRR		((volatile uint32_t*)(GPIOB_BASE_ADDR + offset_BSRR_ADDR))
#define GPIOC_BSRR		((volatile uint32_t*)(GPIOC_BASE_ADDR + offset_BSRR_ADDR))
#define GPIOD_BSRR		((volatile uint32_t*)(GPIOD_BASE_ADDR + offset_BSRR_ADDR))
#define GPIOE_BSRR		((volatile uint32_t*)(GPIOE_BASE_ADDR + offset_BSRR_ADDR))
#define GPIOH_BSRR		((volatile uint32_t*)(GPIOH_BASE_ADDR + offset_BSRR_ADDR))

//EXTI
#define EXTI_IMR		((volatile uint32_t*)(EXTI_BASE_ADDR + offset_IMR))
#define EXTI_EMR		((volatile uint32_t*)(EXTI_BASE_ADDR + offset_EMR))
#define EXTI_RTSR		((volatile uint32_t*)(EXTI_BASE_ADDR + offset_RTSR))
#define EXTI_FTSR		((volatile uint32_t*)(EXTI_BASE_ADDR + offset_FTSR))
#define EXTI_SWIER		((volatile uint32_t*)(EXTI_BASE_ADDR + offset_SWIER))
#define EXTI_PR			((volatile uint32_t*)(EXTI_BASE_ADDR + offset_PR))

#define EXTI0_IMR		((volatile uint32_t*)(EXTI0_BASE_ADDR + offset_IMR))
#define EXTI0_EMR		((volatile uint32_t*)(EXTI0_BASE_ADDR + offset_EMR))
#define EXTI0_RTSR		((volatile uint32_t*)(EXTI0_BASE_ADDR + offset_RTSR))
#define EXTI0_FTSR		((volatile uint32_t*)(EXTI0_BASE_ADDR + offset_FTSR))
#define EXTI0_SWIER		((volatile uint32_t*)(EXTI0_BASE_ADDR + offset_SWIER))
#define EXTI0_PR		((volatile uint32_t*)(EXTI0_BASE_ADDR + offset_PR))

#define NVIC_ISER0  	((volatile uint32_t*)(0xE000E100))
#endif /* INC_BASE_ADDRESS_REGISTER_H_ */
