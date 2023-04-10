/*
 * ExtInterrupt_cfg.h
 *
 *  Created on: Sep 12, 2022
 *      Author: abram
 */

#ifndef INC_EXTINTERRUPT_CFG_H_
#define INC_EXTINTERRUPT_CFG_H_

/************************************************************************
    OPTIONS:
    -> EXTERNAL_INTERRUPT_RISING
    -> EXTERNAL_INTERRUPT_FALLING
    -> EXTERNAL_INTERRUPT_ON_CHANGE
    -> EXTERNAL_INTERRUPT_LOW_LEVEL
    -> EXTERNAL_INTERRUPT_OFF
*/
#define EXTERNAL_INTERRUPT_INT0_STATUS EXTERNAL_INTERRUPT_FALLING

/************************************************************************
    OPTIONS:
    -> EXTERNAL_INTERRUPT_RISING
    -> EXTERNAL_INTERRUPT_FALLING
    -> EXTERNAL_INTERRUPT_ON_CHANGE
    -> EXTERNAL_INTERRUPT_LOW_LEVEL
    -> EXTERNAL_INTERRUPT_OFF
*/
#define EXTERNAL_INTERRUPT_INT1_STATUS EXTERNAL_INTERRUPT_OFF

/************************************************************************
    OPTIONS:
    -> EXTERNAL_INTERRUPT_RISING
    -> EXTERNAL_INTERRUPT_FALLING
    -> EXTERNAL_INTERRUPT_OFF
*/
#define EXTERNAL_INTERRUPT_INT2_STATUS EXTERNAL_INTERRUPT_OFF

#endif /* INC_EXTINTERRUPT_CFG_H_ */
