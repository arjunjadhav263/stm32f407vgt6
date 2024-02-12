#include "stm32f4xx.h"
#include "Board_LED.h"
#include "Board_Buttons.h"

void stm_delay_ms(void)
{
	uint32_t i;
  for(i=0;i<50000;i++)
	{
	}
}
int main(void)
{
	LED_Initialize();
	Buttons_Initialize();
	//whenever button pressed led get toggled
	while(1){
	if(Buttons_GetState()==1)
	{
		LED_On (0);
		stm_delay_ms();
		LED_Off (0);
		LED_On (1);
		stm_delay_ms();
		LED_Off (1);
		LED_On (2);
		stm_delay_ms();
		LED_Off (2);
		LED_On (3);
		stm_delay_ms();
		LED_Off (3);
		stm_delay_ms();
	}
  }
	return 0;
}
