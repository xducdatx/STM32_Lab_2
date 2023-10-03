/*
 * led.c
 *
 *  Created on: Oct 2, 2023
 *      Author: datph
 */
#include"led.h"
#include"main.h"
void display7SEG(int num)
{
   	if (num == 0)
    {
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 1);
   	}
   	else if (num == 1)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 1);
   	}
   	else if (num == 2)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
   	else if (num == 3)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
   	else if (num == 4)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
   	else if (num == 5)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
   	else if (num == 6)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
   	else if (num == 7)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 1);
   	}
   	else if (num == 8)
    {
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
   	else if (num == 9)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
}
const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};
void unEnableAll()
{
	HAL_GPIO_WritePin(EN_0_GPIO_Port, EN_0_Pin, 1);
	HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, 1);
	HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, 1);
	HAL_GPIO_WritePin(EN_3_GPIO_Port, EN_3_Pin, 1);
}
void update7SEG(int index)
{
	switch (index)
	{
		case 0:
			unEnableAll();
			HAL_GPIO_WritePin(EN_0_GPIO_Port, EN_0_Pin, 0);
			display7SEG(led_buffer[0]);
			break;
		case 1:
			unEnableAll();
			HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, 0);
			display7SEG(led_buffer[1]);
			break;
		case 2:
			unEnableAll();
			HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, 0);
			display7SEG(led_buffer[2]);
			break;
		case 3:
			unEnableAll();
			HAL_GPIO_WritePin(EN_3_GPIO_Port, EN_3_Pin, 0);
			display7SEG(led_buffer[3]);
			break;
	}
}
int hour;
int minute;
int second;
void updateClockBuffer()
{
	if (hour <= 9)
	{
		led_buffer[0] = 0;
		led_buffer[1] = hour;
	}
	else
	{
		led_buffer[0] = hour / 10;
		led_buffer[1] = hour % 10;
	}
	if (minute <= 9)
	{
		led_buffer[2] = 0;
		led_buffer[3] = minute;
	}
	else
	{
		led_buffer[2] = minute / 10;
		led_buffer[3] = minute % 10;
	}

}
