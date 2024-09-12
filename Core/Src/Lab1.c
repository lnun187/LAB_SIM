/*
 * Lab1.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Admin
 */
#include "Lab1.h"

//int State_1;
//int count_1;
//
//void init_exercise_1(){
//	HAL_GPIO_WritePin ( LED_RED_GPIO_Port , LED_RED_Pin , GPIO_PIN_SET );
//	HAL_GPIO_WritePin ( LED_YELLOW_GPIO_Port , LED_YELLOW_Pin , GPIO_PIN_SET );
//	State_1 = LED_RED;
//	count_1 = 2;
//}
//
//void exercise_1_run(){
//	switch(State_1){
//		  case LED_RED:
//			  HAL_GPIO_WritePin ( LED_RED_GPIO_Port , LED_RED_Pin , GPIO_PIN_RESET );
//			  HAL_GPIO_WritePin ( LED_YELLOW_GPIO_Port , LED_YELLOW_Pin , GPIO_PIN_SET );
//			  count_1 --;
//			  if(count_1 <= 0){
//				 State_1 = LED_YELLOW;
//				 count_1 = 2;
//			  }
//			  break;
//		  case LED_YELLOW:
//			  HAL_GPIO_WritePin ( LED_RED_GPIO_Port , LED_RED_Pin , GPIO_PIN_SET );
//			  HAL_GPIO_WritePin ( LED_YELLOW_GPIO_Port , LED_YELLOW_Pin , GPIO_PIN_RESET );
//			  count_1 --;
//			  if(count_1 <= 0){
//				 State_1 = LED_RED;
//				 count_1 = 2;
//			  }
//			  break;
//		  default:
//			  break;
//		  }
//}
//
//int State_2;
//int count_2;
//
//void init_exercise_2(){
//	HAL_GPIO_WritePin ( LED_RED_GPIO_Port , LED_RED_Pin , GPIO_PIN_SET );
//	HAL_GPIO_WritePin ( LED_YELLOW_GPIO_Port , LED_YELLOW_Pin , GPIO_PIN_SET );
//	HAL_GPIO_WritePin ( LED_GREEN_GPIO_Port , LED_GREEN_Pin , GPIO_PIN_SET );
//	State_2 = LED_GREEN;
//	count_2 = 3;
//}
//void exercise_2_run(){
//	switch(State_2){
//		  case LED_RED:
//			HAL_GPIO_WritePin ( LED_RED_GPIO_Port , LED_RED_Pin , GPIO_PIN_RESET );
//			HAL_GPIO_WritePin ( LED_YELLOW_GPIO_Port , LED_YELLOW_Pin , GPIO_PIN_SET );
//			HAL_GPIO_WritePin ( LED_GREEN_GPIO_Port , LED_GREEN_Pin , GPIO_PIN_SET );
//			count_2 --;
//			if(count_2 <= 0){
//				State_2 = LED_GREEN;
//				count_2 = 3;
//			}
//			break;
//		  case LED_YELLOW:
//			HAL_GPIO_WritePin ( LED_RED_GPIO_Port , LED_RED_Pin , GPIO_PIN_SET );
//			HAL_GPIO_WritePin ( LED_YELLOW_GPIO_Port , LED_YELLOW_Pin , GPIO_PIN_RESET );
//			HAL_GPIO_WritePin ( LED_GREEN_GPIO_Port , LED_GREEN_Pin , GPIO_PIN_SET );
//			count_2 --;
//			if(count_2 <= 0){
//				State_2 = LED_RED;
//				count_2 = 5;
//			}
//			break;
//		  case LED_GREEN:
//			HAL_GPIO_WritePin ( LED_RED_GPIO_Port , LED_RED_Pin , GPIO_PIN_SET );
//			HAL_GPIO_WritePin ( LED_YELLOW_GPIO_Port , LED_YELLOW_Pin , GPIO_PIN_SET );
//			HAL_GPIO_WritePin ( LED_GREEN_GPIO_Port , LED_GREEN_Pin , GPIO_PIN_RESET );
//			count_2 --;
//			if(count_2 <= 0){
//				State_2 = LED_YELLOW;
//				count_2 = 2;
//			}
//			break;
//		  }
//}

int State_A;
int State_B;
int count_A;
int count_B;
int count_prev_A;
int count_prev_B;

void init_exercise_3(){
	HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , GPIO_PIN_SET );
	State_A = LED_GREEN;
	count_A = 3;
	State_B = LED_RED;
	count_B = 5;
	count_prev_A = count_A;
	count_prev_B = count_B;
}
void exercise_3_run(){
	switch(State_A){
		case LED_RED:
			HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , GPIO_PIN_RESET );
			HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , GPIO_PIN_SET );
			count_prev_A = count_A;
			count_A --;
			if(count_A <= 0){
				 State_A = LED_GREEN;
				 count_A = 3;
			}
			break;
		case LED_YELLOW:
			HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin , GPIO_PIN_RESET );
			HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , GPIO_PIN_SET );
			count_prev_A = count_A;
			count_A --;
			if(count_A <= 0){
				State_A = LED_RED;
				count_A = 5;
			}
			break;
		case LED_GREEN:
			HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_2_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , GPIO_PIN_RESET );
			count_prev_A = count_A;
			count_A --;
			if(count_A <= 0){
				State_A = LED_YELLOW;
				count_A = 2;
			}
			break;
		}
	switch(State_B){
		case LED_RED:
			HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin , GPIO_PIN_RESET );
			HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin , GPIO_PIN_SET );
			count_prev_B = count_B;
			count_B --;
			if(count_B <= 0){
				 State_B = LED_GREEN;
				 count_B = 3;
			}
			break;
		case LED_YELLOW:
			HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin , GPIO_PIN_RESET );
			HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin , GPIO_PIN_SET );
			count_prev_B = count_B;
			count_B --;
			if(count_B <= 0){
				State_B = LED_RED;
				count_B = 5;
			}
			break;
		case LED_GREEN:
			HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin , GPIO_PIN_RESET );
			count_prev_B = count_B;
			count_B --;
			if(count_B <= 0){
				State_B = LED_YELLOW;
				count_B = 2;
			}
			break;
	}
}

int count_4;

void init_exercise_4(){
	HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin , GPIO_PIN_SET );
	count_4 = 0;
}
void init_exercise_5(){
	init_exercise_4();
	init_exercise_3();
}
void display7SEG(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin , GPIO_PIN_SET );
		break;
	case 1:
		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin , GPIO_PIN_SET );
		break;
	case 2:
		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin , GPIO_PIN_RESET );
		break;
	case 3:
		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin , GPIO_PIN_RESET );
		break;
	case 4:
		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin , GPIO_PIN_RESET );
		break;
	case 5:
		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin , GPIO_PIN_RESET );
		break;
	case 6:
		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin , GPIO_PIN_RESET );
		break;
	case 7:
		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin , GPIO_PIN_SET );
		break;
	case 8:
		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin , GPIO_PIN_RESET );
		break;
	case 9:
		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin , GPIO_PIN_RESET );
		break;
	default:
		break;
	}
}
void display7SEGB(int num){
switch(num){
	case 0:
		HAL_GPIO_WritePin ( SEG_0_B_GPIO_Port , SEG_0_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_1_B_GPIO_Port , SEG_1_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_2_B_GPIO_Port , SEG_2_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_B_GPIO_Port , SEG_3_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_4_B_GPIO_Port , SEG_4_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_5_B_GPIO_Port , SEG_5_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_6_B_GPIO_Port , SEG_6_B_Pin , GPIO_PIN_SET );
		break;
	case 1:
		HAL_GPIO_WritePin ( SEG_0_B_GPIO_Port , SEG_0_B_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_1_B_GPIO_Port , SEG_1_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_2_B_GPIO_Port , SEG_2_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_B_GPIO_Port , SEG_3_B_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_4_B_GPIO_Port , SEG_4_B_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_5_B_GPIO_Port , SEG_5_B_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_6_B_GPIO_Port , SEG_6_B_Pin , GPIO_PIN_SET );

		break;
	case 2:
		HAL_GPIO_WritePin ( SEG_0_B_GPIO_Port , SEG_0_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_1_B_GPIO_Port , SEG_1_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_2_B_GPIO_Port , SEG_2_B_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_3_B_GPIO_Port , SEG_3_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_4_B_GPIO_Port , SEG_4_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_5_B_GPIO_Port , SEG_5_B_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_6_B_GPIO_Port , SEG_6_B_Pin , GPIO_PIN_RESET );

		break;
	case 3:
		HAL_GPIO_WritePin ( SEG_0_B_GPIO_Port , SEG_0_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_1_B_GPIO_Port , SEG_1_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_2_B_GPIO_Port , SEG_2_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_B_GPIO_Port , SEG_3_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_4_B_GPIO_Port , SEG_4_B_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_5_B_GPIO_Port , SEG_5_B_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_6_B_GPIO_Port , SEG_6_B_Pin , GPIO_PIN_RESET );

		break;
	case 4:
		HAL_GPIO_WritePin ( SEG_0_B_GPIO_Port , SEG_0_B_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_1_B_GPIO_Port , SEG_1_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_2_B_GPIO_Port , SEG_2_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_B_GPIO_Port , SEG_3_B_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_4_B_GPIO_Port , SEG_4_B_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_5_B_GPIO_Port , SEG_5_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_6_B_GPIO_Port , SEG_6_B_Pin , GPIO_PIN_RESET );

		break;
	case 5:
		HAL_GPIO_WritePin ( SEG_0_B_GPIO_Port , SEG_0_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_1_B_GPIO_Port , SEG_1_B_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_2_B_GPIO_Port , SEG_2_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_3_B_GPIO_Port , SEG_3_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_4_B_GPIO_Port , SEG_4_B_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG_5_B_GPIO_Port , SEG_5_B_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG_6_B_GPIO_Port , SEG_6_B_Pin , GPIO_PIN_RESET );

		break;
	default:
		break;
	}
}
void exercise_4_run(){
	display7SEG(count_4);
	count_4 = (count_4 + 1) % 10;
}
void exercise_5_run(){
	exercise_3_run();
	display7SEG(count_prev_A);
	display7SEGB(count_prev_B);
}
int count_6;
void clearAllClock (){
	GPIOB->ODR |= (0b111111111111 << 4);
}

void setNumberOnClock(int num){
	num = num % 12;
	GPIOB->ODR &= ~(1 << (num+4));
}

void clearNumberOnClock(int num){
	num = num % 12;
	GPIOB->ODR |= (1 << (num+4));
}

void init_exercise_6(){
	clearAllClock();
	count_6 = 0;
}
void exercise_6_run(){
	setNumberOnClock(count_6++);
	if(count_6 >= 12) count_6 = 0;
	clearNumberOnClock(count_6);
}

int hour;
int minute;
int second;

void init_exercise_10(){
	clearAllClock();
	hour = 12;
	minute = 59;
	second = 50;
}
void exercise_10_run(){
	clearAllClock();
	setNumberOnClock(second / 5 + 11);
	setNumberOnClock(minute / 5 + 11);
	setNumberOnClock(hour + 11);
	second++;
	if(second >= 60) {
		second = 0;
		minute++;
	}
	if(minute >= 60){
		minute = 0;
		hour ++;
	}
	if(hour >= 12) hour = 0;
}
