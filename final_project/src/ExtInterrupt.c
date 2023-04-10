#include <std_types.h>
#include <Macros.h>
#include <Registers.h>
#include <Interrupts.h>
#include <ExtInterrupt_private.h>
#include <ExtInterrupt_cfg.h>
#include <ExtInterrupt.h>

/******************************************************************
 * External Interrupt ISRs
 *****************************************************************/

void (*ExtInterrupt_Int0Callback)(void);
void (*ExtInterrupt_Int1Callback)(void);
void (*ExtInterrupt_Int2Callback)(void);

ISR(VECTOR_INT0)
{
    ExtInterrupt_Int0Callback();
}

ISR(VECTOR_INT1)
{
    ExtInterrupt_Int1Callback();
}

ISR(VECTOR_INT2)
{
    ExtInterrupt_Int2Callback();
}

/******************************************************************
 * Functions Implementations
 *****************************************************************/

void ExtInterrupt_Init(void)
{

#if (EXTERNAL_INTERRUPT_INT0_STATUS == EXTERNAL_INTERRUPT_FALLING)
    CLR_BIT(MCUCR, MCUCR_ISC00);
    SET_BIT(MCUCR, MCUCR_ISC01);
#elif (EXTERNAL_INTERRUPT_INT0_STATUS == EXTERNAL_INTERRUPT_RISING)

    SET_BIT(MCUCR, MCUCR_ISC00);
    SET_BIT(MCUCR, MCUCR_ISC01);
#elif (EXTERNAL_INTERRUPT_INT0_STATUS == EXTERNAL_INTERRUPT_ON_CHANGE)
    SET_BIT(MCUCR, MCUCR_ISC00);
    CLR_BIT(MCUCR, MCUCR_ISC01);
#elif (EXTERNAL_INTERRUPT_INT0_STATUS == EXTERNAL_INTERRUPT_LOW_LEVEL)

    CLR_BIT(MCUCR, MCUCR_ISC00);
    CLR_BIT(MCUCR, MCUCR_ISC01);
#elif (EXTERNAL_INTERRUPT_INT0_STATUS == EXTERNAL_INTERRUPT_OFF)
    // Do Nothing
#else
#error "Invalid Sense Control for INT0"
#endif

#if (EXTERNAL_INTERRUPT_INT1_STATUS == EXTERNAL_INTERRUPT_FALLING)
    CLR_BIT(MCUCR, MCUCR_ISC10);
    SET_BIT(MCUCR, MCUCR_ISC11);
#elif (EXTERNAL_INTERRUPT_INT1_STATUS == EXTERNAL_INTERRUPT_RISING)
    // TODO
    SET_BIT(MCUCR, MCUCR_ISC10);
    SET_BIT(MCUCR, MCUCR_ISC11);
#elif (EXTERNAL_INTERRUPT_INT1_STATUS == EXTERNAL_INTERRUPT_ON_CHANGE)
    // TODO
    SET_BIT(MCUCR, MCUCR_ISC10);
    CLR_BIT(MCUCR, MCUCR_ISC11);
#elif (EXTERNAL_INTERRUPT_INT1_STATUS == EXTERNAL_INTERRUPT_LOW_LEVEL)
    // TODO
    CLR_BIT(MCUCR, MCUCR_ISC10);
    CLR_BIT(MCUCR, MCUCR_ISC11);
#elif (EXTERNAL_INTERRUPT_INT1_STATUS == EXTERNAL_INTERRUPT_OFF)
    // Do Nothing
#else
#error "Invalid Sense Control for INT1"
#endif

#if (EXTERNAL_INTERRUPT_INT2_STATUS == EXTERNAL_INTERRUPT_FALLING)
    // TODO
    CLR_BIT(MCUCSR, MCUCSR_ISC2);
#elif (EXTERNAL_INTERRUPT_INT2_STATUS == EXTERNAL_INTERRUPT_RISING)
    // TODO
    SET_BIT(MCUCSR, MCUCSR_ISC2);
#elif (EXTERNAL_INTERRUPT_INT2_STATUS == EXTERNAL_INTERRUPT_OFF)
    // Do Nothing
#else
#error "Invalid Sense Control for INT2"
#endif
}

void ExtInterrupt_EnableNotification(ExtInterrupt_ChannelType channel, void (*callback)(void))
{
    switch (channel)
    {
    case EXT_INTERRUPT_INT0:
        ExtInterrupt_Int0Callback = callback;
        SET_BIT(GICR, GICR_INT0);
        break;
    case EXT_INTERRUPT_INT1:
        ExtInterrupt_Int1Callback = callback;
        SET_BIT(GICR, GICR_INT1);
        break;
    case EXT_INTERRUPT_INT2:
        // TODO
        ExtInterrupt_Int2Callback = callback;
        SET_BIT(GICR, GICR_INT2);
        break;
    default:
        break;
    }
}

void ExtInterrupt_DisableNotification(ExtInterrupt_ChannelType channel)
{
    switch (channel)
    {
    case EXT_INTERRUPT_INT0:
        CLR_BIT(GICR, GICR_INT0);
        break;
    case EXT_INTERRUPT_INT1:
        // TODO
        CLR_BIT(GICR, GICR_INT1);
        break;
    case EXT_INTERRUPT_INT2:
        // TODO
        CLR_BIT(GICR, GICR_INT2);
        break;
    default:
        break;
    }
}
void ExtInterrupt_SetDetectEdge(ExtInterrupt_ChannelType channel, ExtInterrupt_EdgeType edge)
{
    switch (channel)
    {
    case EXT_INTERRUPT_INT0:
        switch (edge)
        {
        case EXT_INT_DETECT_FALLING:
            CLR_BIT(MCUCR, MCUCR_ISC00);
            SET_BIT(MCUCR, MCUCR_ISC01);
            break;
        case EXT_INT_DETECT_RISING:
            SET_BIT(MCUCR, MCUCR_ISC00);
            SET_BIT(MCUCR, MCUCR_ISC01);
            break;
        default:
            break;
        }
        break;

    default:
        break;
    }
}