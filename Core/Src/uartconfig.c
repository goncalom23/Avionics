/**
 * \file:   %<%NAME%>%.%<%EXTENSION%>%
 * \author: %<%USER%>%
 *
 * \date %<%DATE%>%, %<%TIME%>%
 */

#include "uartconfig.h"
#include "main.h"

int _write(int file, char *ptr, int len)
{
	HAL_UART_Transmit(&huart3, (uint8_t*)ptr, len, HAL_MAX_DELAY);
	return len;
}

/* DEBUGGER MAIN */
/*int main(void)
{
    
}
*/
