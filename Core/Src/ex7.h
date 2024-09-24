#ifndef SRC_EX7_H_
#define SRC_EX7_H_
#define start	GPIO_PIN_4
#define end		GPIO_PIN_15
#define port	GPIOA
#include "main.h"
void clearAllClock (){
	for(int i = start; i <= end; i *= 2){
		HAL_GPIO_WritePin(GPIOA, i, 0);
	}
}
#endif /* SRC_EX7_H_ */
