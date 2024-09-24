#ifndef SRC_EX2_H_
#define SRC_EX2_H_

#include "main.h"
int count = 9;
void ex2(){
	  if(count < 5){
		  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 1);
		  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
	  }
	  else if(count < 7){
		  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
		  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 1);
		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
	  }
	  else{
		  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
		  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 1);
	  }
	  count--;
	  if(count < 0){
		  count = 9;
	  }
	  HAL_Delay(1000);
}

#endif /* SRC_EX2_H_ */
