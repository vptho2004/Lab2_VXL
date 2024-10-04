#include "ex3.h"
#include "ex6.h"
#include "ex5.h"
//int idx = 0;
//int hour = 15, minute = 8, second = 50;
//int counter = 25;
//int timer_counter = 0;
//enum DotState {OFF = 0, ON = 1};
//enum DotState dot_status = OFF;
//int timer_flag = 0;
//int timer_counter_dot = 50;
//int timer_flag_dot = 0;
//int timer_counter_clock = 100;
//int timer_flag_clock = 100;
//int TIMER_CYCLE = 10;
//void setTimer(int duration){
//	counter = duration / TIMER_CYCLE;
//	timer_flag = 0;
//}
//void timerRun(){
//	if(counter > 0){
//		counter--;
//		if(counter == 0) timer_flag = 1;
//	}
//}
//void setTimerDot(int duration){
//	timer_counter_dot = duration / TIMER_CYCLE;
//	timer_flag_dot = 0;
//}
//void timerRunDot(){
//	if(timer_counter_dot > 0){
//		timer_counter_dot--;
//		if(timer_counter_dot == 0) timer_flag_dot = 1;
//	}
//}
//void setTimerClock(int duration){
//	timer_counter_clock = duration / TIMER_CYCLE;
//	timer_flag_clock = 0;
//}
//void timerRunClock(){
//	if(timer_counter_clock > 0){
//		timer_counter_clock--;
//		if(timer_counter_clock == 0) timer_counter_clock = 1;
//	}
//}
void ex6_run(){
	while (1)
		  {
//			  second++;
//			  if(second >= 60){
//				  second = 0;
//				  minute++;
//			  }
//			  if(minute >= 60){
//				  minute = 0;
//				  hour++;
//			  }
//			  if(hour >= 24) hour = 0;
//			  updateClockBuffer();
//
//			  if (idx > 3) idx = 0;
//			  update7seg(idx++);
//			  if(timer_flag == 1){
//			 		  update7seg(index_led++);
//			 		  timer_flag = 0;
//			 		  if (index_led > 3) index_led = 0;
//			 		  counter = 100;
//			 	  }
//		 if (timer_flag == 1) {
//				  updateClockBuffer();
//				  update7seg(index_led++);
//				  if (index_led > 3) index_led = 0;
//				  update7seg(index_led++);
//				  setTimer(250);
//
//			  }
//
//		 if (timer_flag_clock == 1){
//				  second++;
//				  if ( second >= 60) {
//					  second = 0;
//					  minute ++;
//				  }
//				  if( minute >= 60) {
//					   minute = 0;
//					   hour ++;
//				   }
//				   if( hour >=24){
//					   hour = 0;
//				   }
////				   update7seg(idx++);
//				  updateClockBuffer();
//				  setTimerClock(1000);
//			  }
//
//			  switch (dot_status){
//			  	  case OFF:
//			  		  HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, GPIO_PIN_SET);
//
//			  		  if (timer_flag_dot == 1){
//			  			  setTimerDot(500);
//			  			  dot_status = ON;
//			  		  }
//				  break;
//
//			  	  case ON:
//			  		  HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, GPIO_PIN_RESET);
//
//			  		  if (timer_flag_dot == 1){
//			  			  setTimerDot(500);
//			  			  dot_status = OFF;
//			  		  }
//				  break;
//			  }
//			  if(timer_flag_clock == 1){
//				  	  update7seg(index_led++);
//				  	  timer_flag_clock = 0;
//				  	  if(index_led > 3) index_led = 0;
//				  	  counter = 100;
//			  }
//			  HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);

//			  HAL_Delay(1000);

		    /* USER CODE END WHILE */

		    /* USER CODE BEGIN 3 */
		  }
}
