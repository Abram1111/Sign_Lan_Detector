/*
 * registers.h
 *
 *  Created on: Aug 27, 2022
 *      Author: ahmad
 */

#ifndef INC_REGISTERS_H_
#define INC_REGISTERS_H_

/******************************************************************
 * Dio Registers
 *****************************************************************/
#define PORTA	                        *((volatile u8*) 0x3B)
#define DDRA	                        *((volatile u8*) 0x3A)
#define PINA	                        *((volatile u8*) 0x39)
#define PORTB	                        *((volatile u8*) 0x38)
#define DDRB	                        *((volatile u8*) 0x37)
#define PINB	                        *((volatile u8*) 0x36)
#define PORTC	                        *((volatile u8*) 0x35)
#define DDRC	                        *((volatile u8*) 0x34)
#define PINC	                        *((volatile u8*) 0x33)
#define PORTD	                        *((volatile u8*) 0x32)
#define DDRD	                        *((volatile u8*) 0x31)
#define PIND	                        *((volatile u8*) 0x30)

/******************************************************************
 * External Interrupt Registers
 *****************************************************************/
#define MCUCR	                        *((volatile u8*) 0x55)
#define MCUCSR	                        *((volatile u8*) 0x54)
#define GICR	                        *((volatile u8*) 0x5B)
#define GIFR	                        *((volatile u8*) 0x5A)

/******************************************************************
 * Global Interrupt Enable Registers
 *****************************************************************/
#define SREG	                        *((volatile u8*) 0x5F)


/******************************************************************
 * ADC Registers
 *****************************************************************/
#define ADMUX	                         *((volatile u8*) 0x27)
#define ADCSRA	                         *((volatile u8*) 0x26)
#define ADCH	                         *((volatile u8*) 0x25)
#define ADCL	                         *((volatile u8*) 0x24)
#define ADC_DATA                         *((volatile u16*)0x24)
#define SFIOR                            *((volatile u8*) 0x50)
/******************************************************************
 * TIMER0 Registers
 *****************************************************************/
#define TCCR0                            *((volatile u8*) 0x53)       
#define OCR0                             *((volatile u8*) 0x5C)
#define TIMSK                            *((volatile u8*) 0x59)
#define TCNT0                            *((volatile u8*) 0x52)
#define TIFR                             *((volatile u8*) 0x58)
/******************************************************************
 * TIMER1 Registers
 *****************************************************************/
#define TCCR1A                           *((volatile u8*) 0x4F)
#define TCCR1B                           *((volatile u8*) 0x4E)
#define TCNT1H                           *((volatile u8*) 0x4D)
#define TCNT1L                           *((volatile u8*) 0x4C)
#define TCNT1                            *((volatile u16*)0x4C)
#define OCR1AH                           *((volatile u8*) 0x4B)
#define OCR1AL                           *((volatile u8*) 0x4A)
#define OCR1A                            *((volatile u16*)0x4A)
#define OCR1BH                           *((volatile u8*) 0x49)
#define OCR1BL                           *((volatile u8*) 0x48)
#define OCR1B                            *((volatile u16*)0x48)
#define ICR1H                            *((volatile u8*) 0x47)
#define ICR1L                            *((volatile u8*) 0x46)
#define ICR1                             *((volatile u16*)0x46)
/******************************************************************
 * TIMER2 Registers
 *****************************************************************/
#define TCCR2                            *((volatile u8*) 0x45)
#define TCNT2                            *((volatile u8*) 0x44)
#define OCR2                             *((volatile u8*) 0x43)
#define ASSR                             *((volatile u8*) 0x42)

/******************************************************************
 * watch dog Registers
 *****************************************************************/
#define WDTCR                            *((volatile u8*) 0x41)
 /******************************************************************
 * USART Registers
 *****************************************************************/
#define UCSRA                            *((volatile u8*) 0x2B)
#define UCSRB                            *((volatile u8*) 0x2A)
#define UBRRL                            *((volatile u8*) 0x29)
#define UCSRC                            *((volatile u8*) 0x40)
#define UDR                              *((volatile u8*) 0x2C)
#define UBRRH                            *((volatile u8*) 0x40)
 /******************************************************************
 * SPI Registers
 *****************************************************************/
#define SPCR                             *((volatile u8*) 0x2B)
#define SPSR                             *((volatile u8*) 0x2A)
#define SPDR                             *((volatile u8*) 0x29)
/******************************************************************
 * I2C Registers
 *****************************************************************/
#define TWBR                            *((volatile u8*)0x20)
#define TWSR                            *((volatile u8*)0x21)
#define TWAR                            *((volatile u8*)0x22)
#define TWDR                            *((volatile u8*)0x23)
#define TWCR                            *((volatile u8*)0x56)


#endif /* INC_REGISTERS_H_ */
