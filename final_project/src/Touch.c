#include <std_types.h>
#include <Macros.h>
#include <Registers.h>
#include <Touch.h>
#include <Touch_cfg.h>
#include <Dio.h>
#include <Lcd.h>

void Touch_sensor_Init(void)
{
    Dio_SetPinMode(TOUCH1_PIN, DIO_PIN_INPUT_PULLUP);
    Dio_SetPinMode(TOUCH2_PIN, DIO_PIN_INPUT_PULLUP);
    Dio_SetPinMode(TOUCH3_PIN, DIO_PIN_INPUT_PULLUP);
    Dio_SetPinMode(TOUCH4_PIN, DIO_PIN_INPUT_PULLUP);
    Dio_SetPinMode(TOUCH5_PIN, DIO_PIN_INPUT_PULLUP);
}
static touch_StateType touch_Read(touch_PostionType postion)
{
    touch_StateType state = TOUCH_OFF;
    switch (postion)
    {
    case TOUCH_ONE:
        state = Dio_ReadPinLevel(TOUCH1_PIN);

        break;
    case TOUCH_TOW:
        state = Dio_ReadPinLevel(TOUCH2_PIN);

        break;
    case TOUCH_THREE:
        state = Dio_ReadPinLevel(TOUCH3_PIN);

        break;
    case TOUCH_FOUR:
        state = Dio_ReadPinLevel(TOUCH4_PIN);

        break;
    case TOUCH_FIVE:
        state = Dio_ReadPinLevel(TOUCH5_PIN);

        break;
    default:
        break;
    }
    return state;
}
touch_CharType touch_ReadAll()
{
    touch_CharType character = 0;

    character |= (((1 & touch_Read(TOUCH_FIVE)) << 4) | ((1 & touch_Read(TOUCH_FOUR)) << 3) | ((1 & touch_Read(TOUCH_THREE)) << 2) | ((1 & touch_Read(TOUCH_TOW)) << 1) | ((1) & touch_Read(TOUCH_ONE)));

    return character;
}
