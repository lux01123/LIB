#define HC595_H

#include "stm32f1xx_hal.h"

#define SH_CP(x) HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, x);
#define DS(x)    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, x);
#define ST_CP(x) HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, x);
#define MR(x)    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, x);

void HC595_Out(unsigned char data);
void HC595_Outs(unsigned char ardata[], unsigned int count);
void HC595_Set(unsigned char stt);
void HC595_Clear(unsigned char stt);