#ifndef DELAY_H__
#define DELAY_H__

#include "stm32f1xx.h"

void Delay_Init(void);
void Delay_ms(uint32_t u32DelayInMs);
void delay_us(uint32_t delay);

#endif