/*
 * addTask.c
 *
 *  Created on: Dec 19, 2023
 *      Author: DELL
 */

#include "addTask.h"

void led_Red_test(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port,LED_RED_Pin) ;
}
void led_Yellow_test(){
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin) ;
}
void led_Green_test(){
	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin) ;
}
void led_Purple_test(){
	HAL_GPIO_TogglePin(LED_PURPLE_GPIO_Port, LED_PURPLE_Pin) ;
}
void led_White_test(){
	HAL_GPIO_TogglePin(LED_WHITE_GPIO_Port,LED_WHITE_Pin) ;
}
void led_Blue_test(){
	HAL_GPIO_TogglePin(LED_BLUE_GPIO_Port,LED_BLUE_Pin) ;
}