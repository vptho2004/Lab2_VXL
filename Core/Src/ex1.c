#include "ex1.h"
void display7seg(int num){
	if(num == 0)
	{
		HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
	}
	if(num == 1)
	{
		HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
	}
	if(num == 2)
	{
		HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
	}
	if(num == 3)
	{
		HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
	}
	if(num == 4)
	{
		HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
	}
	if(num == 5)
	{
		HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
	}
	if(num == 6)
	{
		HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
	}
	if(num == 7)
	{
		HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
	}
	if(num == 8)
	{
		HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
	}
	if(num == 9)
	{
		HAL_GPIO_WritePin(seg0_GPIO_Port, seg0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
	}
}
