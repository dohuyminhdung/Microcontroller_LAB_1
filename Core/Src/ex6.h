#ifndef SRC_EX6_H_
#define SRC_EX6_H_
#define start	GPIO_PIN_4
#define end		GPIO_PIN_15
#define port	GPIOA
#include "main.h"
//#include "ex7.h"
void ex6(){
//	clearAllClock ();
	for(int i = start; i <= end; i *= 2){
		HAL_GPIO_WritePin(GPIOA, i, 1);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(GPIOA, i, 0);
	}
}
#endif /* SRC_EX6_H_ */
