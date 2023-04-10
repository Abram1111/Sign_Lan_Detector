/*
 * ExtInterrupt.h
 *
 *  Created on: Sep 10, 2022
 *      Author: abram
 */

#ifndef INC_EXTINTERRUPT_H_
#define INC_EXTINTERRUPT_H_

typedef enum
{
    EXT_INTERRUPT_INT0,
    EXT_INTERRUPT_INT1,
    EXT_INTERRUPT_INT2
} ExtInterrupt_ChannelType;
typedef enum
{
    EXT_INT_DETECT_FALLING,
    EXT_INT_DETECT_RISING,
    EXT_INT_DETECT_ON_CHANGE,
    EXT_INT_DETECT_LOW
} ExtInterrupt_EdgeType;

void ExtInterrupt_Init(void);
void ExtInterrupt_EnableNotification(ExtInterrupt_ChannelType channel, void (*callback)(void));
void ExtInterrupt_DisableNotification(ExtInterrupt_ChannelType channel);
void ExtInterrupt_SetDetectEdge(ExtInterrupt_ChannelType channel, ExtInterrupt_EdgeType edge);
#endif /* INC_EXTINTERRUPT_H_ */
