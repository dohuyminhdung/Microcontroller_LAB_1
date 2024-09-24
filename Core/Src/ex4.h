#ifndef SRC_EX4_H_
#define SRC_EX4_H_

#include "main.h"

#define a_Pin GPIO_PIN_3
#define b_Pin GPIO_PIN_4
#define c_Pin GPIO_PIN_5
#define d_Pin GPIO_PIN_6
#define e_Pin GPIO_PIN_7
#define f_Pin GPIO_PIN_8
#define g_Pin GPIO_PIN_9

#define a_GPIO_Port GPIOA
#define b_GPIO_Port GPIOA
#define c_GPIO_Port GPIOA
#define d_GPIO_Port GPIOA
#define e_GPIO_Port GPIOA
#define f_GPIO_Port GPIOA
#define g_GPIO_Port GPIOA
void display7SEG(int num){
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 1);
		break;
	case 1:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 1);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 1);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 1);
		break;
	case 2:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 1);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
		break;
	case 3:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 1);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 1);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 1);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 1);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 1);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 1);
		break;
	case 8:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
		break;
	case 9:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
		break;
	default: break;
	}
}
int counter = 0;
void ex4(){
	if(counter >= 10) counter = 0;
	display7SEG(counter++);
	HAL_Delay(1000);
}
#endif /* SRC_EX4_H_ */
