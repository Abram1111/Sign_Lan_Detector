#include <std_types.h>
#include <Macros.h>
#include <cpu_freq.h>
#include <Registers.h>
#include <util/delay.h>
#include <Dio.h>
#include <Gie.h>
#include <Interrupts.h>
#include <ExtInterrupt.h>
#include <Usart.h>
#include <Touch.h>
#include <Lcd.h>

volatile u8 flag = 0;
volatile u8 send_flag = 0;
touch_CharType letter;
void interrupt_handeler(void)
{
	flag++;
}
int main(void)
{
	Touch_sensor_Init();
	Lcd_Init();
	Usart_Init();
	ExtInterrupt_Init();
	ExtInterrupt_EnableNotification(EXT_INTERRUPT_INT0, interrupt_handeler);
	Dio_SetPinLevel(DIO_PORTD, DIO_PIN2, STD_HIGH);
	Gie_Enable();
	Lcd_DisplayClear();
	u8 word[100];
	u8 i = 0;

	while (1)
	{

		while (flag == 1)
		{
			send_flag = 1;
			ExtInterrupt_SetDetectEdge(EXT_INTERRUPT_INT0, EXT_INT_DETECT_RISING);
			letter = touch_ReadAll();
			_delay_ms(1000);
			if (i == 15)
			{
				Lcd_SetCursorPosition(1, 0);
			}

			if (letter == SPACE)
			{
				Lcd_DisplayString(" ");
				// Lcd_DisplayString((char *)word);
				word[i] = ' ';
			}
			else
			{
				Lcd_DisplayCharacter(('a' + letter - 1));
				word[i] = 'a' + letter - 1;
			}
			_delay_ms(1000);
			i++;
		}


		flag = 0;
		ExtInterrupt_SetDetectEdge(EXT_INTERRUPT_INT0, EXT_INT_DETECT_FALLING);
	}
}
