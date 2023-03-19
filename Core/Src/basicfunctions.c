#include "basicfunctions.h"

void digital_write(GPIO_TypeDef* type,uint16_t pin, bool state)
{
	// type - GPIOA, GPIOB...
	// pin - GPIO_Pin_0
	// bool state - '1' or '0'
	/*char str1[]= "a";
	char str2[]= "b";
	char* str3 = str1 + str2;*/
	printf("hello world");

	HAL_GPIO_WritePin(type,pin,state);
}




/* DEBUGGER MAIN */
/*int main(void)
{
    
}
*/
