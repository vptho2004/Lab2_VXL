//#include "ex3.h"
//#include "ex6.h"
//#include "ex5.h"
//#include "ex7.h"
////int idx = 0;
////int hour = 15, minute = 8, second = 50;
////int timer_counter = 0;
////int timer_flag = 0;
////int timer_counter_dot = 0;
////int timer_flag_dot = 0;
////int TIMER_CYCLE = 10;
//int timer_counter_clock = 0;
//int timer_flag_clock = 0;
//
//void setTimer(int duration){
//	timer_counter = duration / TIMER_CYCLE;
//	timer_flag = 0;
//}
//void timerRun(){
//	if(timer_counter > 0){
//		timer_counter--;
//		if(timer_counter == 0) timer_flag = 1;
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
//void ex7_run(){
//	while (1)
//		  {
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
//
//
//			  HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
//
//
//		    /* USER CODE END WHILE */
//
//		    /* USER CODE BEGIN 3 */
//		  }
//}
