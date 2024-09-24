#ifndef SRC_EX9_H_
#define SRC_EX9_H_
#include "main.h"
	void clearNumberOnClock(int num){
		switch (num){
		case 0:
			HAL_GPIO_WritePin(T12_GPIO_Port, T12_Pin, 0);
			break;
		case 1:
			HAL_GPIO_WritePin(T1_GPIO_Port, T1_Pin, 0);
			break;
		case 2:
			HAL_GPIO_WritePin(T2_GPIO_Port, T2_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(T3_GPIO_Port, T3_Pin, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(T4_GPIO_Port, T4_Pin, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(T5_GPIO_Port, T5_Pin, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(T6_GPIO_Port, T6_Pin, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(T7_GPIO_Port, T7_Pin, 0);
			break;
		case 8:
			HAL_GPIO_WritePin(T8_GPIO_Port, T8_Pin, 0);
			break;
		case 9:
			HAL_GPIO_WritePin(T9_GPIO_Port, T9_Pin, 0);
			break;
		case 10:
			HAL_GPIO_WritePin(T10_GPIO_Port, T10_Pin, 0);
			break;
		case 11:
			HAL_GPIO_WritePin(T11_GPIO_Port, T11_Pin, 0);
			break;
		default: break;
		}
	}
#endif /* SRC_EX9_H_ */
