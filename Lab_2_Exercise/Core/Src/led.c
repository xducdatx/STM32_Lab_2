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


