#ifndef SRC_EX1_H_
#define SRC_EX1_H_

#include "main.h"
int state = 0;
void ex1(){
		if (state <= 1) {
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
		}
		else {
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
		}
		state++;
		if(state >= 4)
		{
			state = 0;
		}
		HAL_Delay (1000) ;
}


#endif /* SRC_EX1_H_ */
