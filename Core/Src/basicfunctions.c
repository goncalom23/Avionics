#include "basicfunctions.h"

void digital_write(char* type,uint16_t pin, bool state)
{
	// type - A, B... H
	// pin - GPIO_Pin_0
	// bool state - '1' or '0'
	GPIO_TypeDef* aux = NULL;
	switch(*type)
	{
	case 'A':
		aux = GPIOA;
		break;
	case 'B':
		aux = GPIOB;
		break;
	case 'C':
		aux = GPIOC;
		break;
	case 'D':
		aux = GPIOD;
		break;
	case 'E':
		aux = GPIOE;
		break;
	case 'F':
		aux = GPIOF;
		break;
	case 'G':
		aux = GPIOG;
		break;
	case 'H':
		aux = GPIOH;
		break;
	default:
	    Error_Handler();
	}

	printf("debug1\r\n");
	HAL_GPIO_WritePin(aux ,pin,state);

	//printf("valor da variavel %lu\r\n",a);
	//char aux[6] = "GPIO";
	//strcat(aux,type);
	//printf(aux);
}

