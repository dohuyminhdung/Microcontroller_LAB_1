#ifndef SRC_EX10_H_
#define SRC_EX10_H_
#include "main.h"
#include "ex6.h"
#include "ex7.h"
#include "ex8.h"
#include "ex9.h"
int sec = 0, min = 0, hour = 0;
void ex10_init(){
	clearAllClock();
	setNumberOnClock(0);
}
void ex10(){
	HAL_Delay(100);
	clearNumberOnClock(sec/5);
	clearNumberOnClock(min/5);
	clearNumberOnClock(hour);

	sec++;
	if(sec >= 60){
		sec = 0;
		min++;
	}

	if(min >= 60){
		min = 0;
		hour++;
	}

	if(hour >= 12){
		hour = 0;
	}
	setNumberOnClock(sec/5);
	setNumberOnClock(min/5);
	setNumberOnClock(hour);
}
#endif /* SRC_EX10_H_ */
