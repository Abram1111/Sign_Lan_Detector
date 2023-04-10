/*
 * Interrupts.h
 *
 *  Created on: Sep 12, 2022
 *      Author: abram
 */

#ifndef INC_INTERRUPTS_H_
#define INC_INTERRUPTS_H_

/***************EXternal Interrupt***************/
#define VECTOR_INT0           __vector_1
#define VECTOR_INT1           __vector_2
#define VECTOR_INT2           __vector_3
/*****************ADC Interrupt *****************/
#define VECTOR_ADC            __vector_16
/***************** Timer Vector *****************/
#define VECTOR_TIM2_COMP      __vector_4
#define VECTOR_TIM2_OV        __vector_5
#define VECTOR_ICU            __vector_6
#define VECTOR_TIM1A_COMP     __vector_7
#define VECTOR_TIM1B_COMP     __vector_8
#define VECTOR_TIM1_OV        __vector_9
#define VECTOR_TIM0_COMP      __vector_10
#define VECTOR_TIM0_OV        __vector_11

/* USART Vector */
#define VECTOR_USART_RX     __vector_13
#define VECTOR_USART_EMPTY  __vector_14
#define VECTOR_USART_TX     __vector_15
/* SPI Vector */
#define VECTOR_SPI          __vector_12


#define ISR(vector) \
void vector(void) __attribute__((signal)); \
void vector(void)

#endif /* INC_INTERRUPTS_H_ */
