/*
 * Gie.c
 *
 *  Created on: Sep 12, 2022
 *      Author: abram
 */
#include <std_types.h>
#include <Macros.h>
#include <Registers.h>
#include <Gie.h>

#define SREG_I 7

void Gie_Enable(void)
{
    SET_BIT(SREG, SREG_I);
}

void Gie_Disable(void)
{
    CLR_BIT(SREG, SREG_I);
}

