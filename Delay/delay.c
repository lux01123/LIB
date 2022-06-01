#include "delay.h"

void Delay_Init(void)
{
	TIM_TimeBaseInitTypeDef timerInit;
	
	timerInit.TIM_CounterMode = TIM_CounterMode_Up;
	timerInit.TIM_Perid = 0xFFFF;
	timerInit.TIM_Prescaler = 72 -1;
	
	TIM_TimeBaseInit(TIM2, &timerInit);
	
	TIM_Cmd(TIM2, ENABLE);
}

static void Delay1Ms(void)
{
	TIM_SetCounter(TIM2, 0);
	while (TIM_GetCounter(TIM2) < 1000)
	{}
}

void delay_us(uint32_t delay)
{
	TIM_SetCounter(TIM2, 0);
	while(TIM_GetCounter(TIM2) < delay)
	{}
}

void Delay_Ms(uint32_t u32DelayInMs)
{
	while (u32DelayInMs)
	{
		Delay(1Ms);
		--u32DelayInMs;
	}
}

