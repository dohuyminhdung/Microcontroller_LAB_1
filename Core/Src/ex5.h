#ifndef SRC_EX5_H_
#define SRC_EX5_H_
#include "main.h"
#include "ex4.h"

#define LED_RED2_GPIO_Port	 	GPIOA
#define LED_RED2_Pin 			GPIO_PIN_12
#define LED_YELLOW2_GPIO_Port 	GPIOA
#define LED_YELLOW2_Pin 		GPIO_PIN_11
#define LED_GREEN2_GPIO_Port 	GPIOA
#define LED_GREEN2_Pin			GPIO_PIN_10

#define A_Pin GPIO_PIN_13
#define B_Pin GPIO_PIN_14
#define C_Pin GPIO_PIN_15
#define D_Pin GPIO_PIN_0
#define E_Pin GPIO_PIN_1
#define F_Pin GPIO_PIN_2
#define G_Pin GPIO_PIN_3

#define A_GPIO_Port GPIOA
#define B_GPIO_Port GPIOA
#define C_GPIO_Port GPIOA
#define D_GPIO_Port GPIOB
#define E_GPIO_Port GPIOB
#define F_GPIO_Port GPIOB
#define G_GPIO_Port GPIOB

void display7SEG_2(int num){
	  switch(num){
	  case 0:
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		  HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 1);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 1);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 1);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 1);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 1);
		  HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 1);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 1);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 1);
		  HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 1);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 1);
		  HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 1);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 1);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 1);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		  HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 1);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 1);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		  HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 1);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		  HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 1);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 1);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 1);
		  HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 1);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		  HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 1);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		  HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		  break;
	  default: break;
	  }
  }
int Count = 9;
void ex5()
{
	if(Count < 2){
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 1);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
		display7SEG(Count);

		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 0);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, 1);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 0);
		display7SEG_2(Count);
	}
	else if(Count < 5){
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 1);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
		display7SEG(Count);

		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 0);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, 0);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 1);
		display7SEG_2(Count-2);
	}
	else if(Count < 7){
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 1);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
		display7SEG(Count-5);

		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 1);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, 0);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 0);
		display7SEG_2(Count-5);
	}
	else{
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 1);
		display7SEG(Count-7);

		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 1);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, 0);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 0);
		display7SEG_2(Count-5);
	}
	Count--;
	if(Count < 0){
		Count = 9;
	}
		HAL_Delay(1000);
}

#endif /* SRC_EX5_H_ */
