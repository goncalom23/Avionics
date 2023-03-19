/**
 * \file:   %<%NAME%>%.%<%EXTENSION%>%
 * \author: %<%USER%>%
 *
 * \date %<%DATE%>%, %<%TIME%>%
 */

#ifndef basicfunctions_H
#define basicfunctions_H

#include <stdint.h>
#include <stdbool.h>
#include "stm32f4xx_hal.h"
#include <stdio.h>
#include <string.h>



void digital_write(char *type,uint16_t pin, bool state);

#endif
