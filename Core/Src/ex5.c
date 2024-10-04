#include "ex5.h"
int hour = 15, minute = 8, second = 50;
int idx = 0;
void updateClockBuffer(){
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}

void ex5_run()
{
	while (1)
	  {
		  second++;
		  if(second >= 60){
			  second = 0;
			  minute++;
		  }
		  if(minute >= 60){
			  minute = 0;
			  hour++;
		  }
		  if(hour >= 24) hour = 0;
		  updateClockBuffer();

		  if (idx > 3) idx = 0;
		  update7seg(idx++);


		  HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);


		  HAL_Delay(1000);
	    /* USER CODE END WHILE */

	    /* USER CODE BEGIN 3 */
	  }
}
