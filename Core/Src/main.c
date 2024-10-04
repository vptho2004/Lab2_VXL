/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "ex1.h"
#include "ex3.h"
#include "ex5.h"
#include "ex6.h"
#include "ex9.h"
//#include "ex7.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
TIM_HandleTypeDef htim2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM2_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
//int time_flag = 0;
//int counter = 0;
//int counter_dot = 0;
//int time_flag_dot = 0;
//int time_flag_clock = 0;
//int counter_clock = 0;

enum DotState {OFF = 0, ON = 1};
enum DotState dot_status = OFF;
int counter = 25;
int timer_flag = 0;
int timer_counter_dot = 50;
int timer_flag_dot = 0;
int timer_counter_clock = 100;
int timer_flag_clock = 0;
int TIMER_CYCLE = 10;

int counter_led_matrix = 0;
int time_flag_led_matrix = 0;
const int MAX_LED = 4;
//int index_led = 0;
//int Led_buffer[4] = {1, 2, 3, 4};
//int hour = 15, minute = 8, second = 50;
//int TIMER_CYCLE = 1;
const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0xFF, 0x03, 0x01, 0xCC, 0xCC, 0x01, 0x03, 0xFF};
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM2_Init();
  /* USER CODE BEGIN 2 */
//  enum DotState {OFF = 0, ON = 1};
//  enum DotState dot_status = OFF;
  HAL_TIM_Base_Start_IT(&htim2);
//  setTimer(250);
//  setTimerClock(1000);
//  setTimerDot(500);
//  setTimerLedMatrix(5);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
//  ex6_run();
  while (1)
  {
//	  /bai8
if (timer_flag == 1) {
				  updateClockBuffer();
				  update7seg(index_led++);
				  if (index_led > 3) index_led = 0;
//				  update7seg(index_led++);
				  setTimer(250);

			  }

		 if (timer_flag_clock == 1){
				  second++;
				  if ( second >= 60) {
					  second = 0;
					  minute ++;
				  }
				  if( minute >= 60) {
					   minute = 0;
					   hour ++;
				   }
				   if( hour >=24){
					   hour = 0;
				   }
//				   update7seg(idx++);
				  updateClockBuffer();
				  setTimerClock(1000);
			  }

			  switch (dot_status){
			  	  case OFF:
			  		  HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, GPIO_PIN_SET);

			  		  if (timer_flag_dot == 1){
			  			  setTimerDot(500);
			  			  dot_status = ON;
			  		  }
				  break;

			  	  case ON:
			  		  HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, GPIO_PIN_RESET);

			  		  if (timer_flag_dot == 1){
			  			  setTimerDot(500);
			  			  dot_status = OFF;
			  		  }
				  break;
			  }
//			  /bai8
	  /*second++;
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

	  if(time_flag == 1){
		  update7seg(index_led++);
		  time_flag = 0;
		  if (index_led > 3) index_led = 0;
		  counter = 100;
	  }

	  switch(dot_status){
	  	  case OFF:
	  		  HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, GPIO_PIN_SET);
	  		  if(time_flag_dot == 1){
	  			  time_flag_dot = 0;
	  			  counter_dot = 50;
	  			  dot_status = ON;
	  		  }
	  		 break;
	  	  case ON:
	  		  HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, GPIO_PIN_RESET);
	  		  if(time_flag_dot == 1){
	  			  time_flag_dot = 0;
	  			  counter_dot = 50;
	  			  dot_status = OFF;
	  		  }
	  		 break;
	  }
	  HAL_Delay(1000);*/
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 7999;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 9;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, ENM0_Pin|ENM1_Pin|DOT_Pin|led_red_Pin
                          |EN0_Pin|EN1_Pin|EN2_Pin|EN3_Pin
                          |ENM2_Pin|ENM3_Pin|ENM4_Pin|ENM5_Pin
                          |ENM6_Pin|ENM7_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, seg0_Pin|seg1_Pin|seg2_Pin|ROW2_Pin
                          |ROW3_Pin|ROW4_Pin|ROW5_Pin|GPIO_PIN_14
                          |ROW7_Pin|seg3_Pin|seg4_Pin|seg5_Pin
                          |seg6_Pin|ROW0_Pin|ROW1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : ENM0_Pin ENM1_Pin DOT_Pin led_red_Pin
                           EN0_Pin EN1_Pin EN2_Pin EN3_Pin
                           ENM2_Pin ENM3_Pin ENM4_Pin ENM5_Pin
                           ENM6_Pin ENM7_Pin */
  GPIO_InitStruct.Pin = ENM0_Pin|ENM1_Pin|DOT_Pin|led_red_Pin
                          |EN0_Pin|EN1_Pin|EN2_Pin|EN3_Pin
                          |ENM2_Pin|ENM3_Pin|ENM4_Pin|ENM5_Pin
                          |ENM6_Pin|ENM7_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : seg0_Pin seg1_Pin seg2_Pin ROW2_Pin
                           ROW3_Pin ROW4_Pin ROW5_Pin PB14
                           ROW7_Pin seg3_Pin seg4_Pin seg5_Pin
                           seg6_Pin ROW0_Pin ROW1_Pin */
  GPIO_InitStruct.Pin = seg0_Pin|seg1_Pin|seg2_Pin|ROW2_Pin
                          |ROW3_Pin|ROW4_Pin|ROW5_Pin|GPIO_PIN_14
                          |ROW7_Pin|seg3_Pin|seg4_Pin|seg5_Pin
                          |seg6_Pin|ROW0_Pin|ROW1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef * htim)
{
	timerRun();
	timerRunDot();
	timerRunClock();
//	TimerRunLedMatrix();
//	counter--;
//	counter_dot--;
//
//	if(counter <= 0) time_flag = 1;
//	if(counter_dot <= 0) time_flag_dot = 1;
}
void setTimer(int duration){
	counter = duration / TIMER_CYCLE;
	timer_flag = 0;
}
void timerRun(){
	if(counter > 0){
		counter--;
		if(counter == 0) timer_flag = 1;
	}
}
void setTimerDot(int duration){
	timer_counter_dot = duration / TIMER_CYCLE;
	timer_flag_dot = 0;
}
void timerRunDot(){
	if(timer_counter_dot > 0){
		timer_counter_dot--;
		if(timer_counter_dot == 0) timer_flag_dot = 1;
	}
}
void setTimerClock(int duration){
	timer_counter_clock = duration / TIMER_CYCLE;
	timer_flag_clock = 0;
}
void timerRunClock(){
	if(timer_counter_clock > 0){
		timer_counter_clock--;
		if(timer_counter_clock == 0) timer_flag_clock = 1;
	}
}
/*void updateClockBuffer(){
	Led_buffer[0] = hour / 10;
	Led_buffer[1] = hour % 10;
	Led_buffer[2] = minute / 10;
	Led_buffer[3] = minute % 10;
}*/

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
