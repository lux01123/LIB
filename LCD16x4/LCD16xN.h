#ifndef __LCD_H
#define __LCD_H

#include "stm32f1xx.h"

#define LCD20xN

#define RS_PORT GPIOB
#define RS_PIN  GPIO_PIN_3

#define EN_PORT GPIOB
#define EN_PIN	GPIO_PIN_5

#define D7_PORT GPIOA
#define D7_PIN GPIO_PIN_7


#define D6_PORT GPIOA
#define D6_PIN GPIO_PIN_6

#define D5_PORT GPIOA
#define D5_PIN GPIO_PIN_5

#define D4_PORT GPIOA
#define D4_PIN GPIO_PIN_4

#define PIN_LOW(PORT,PIN)  HAL_GPIO_WritePin(PORT, PIN, GPIO_PIN_RESET);
#define PIN_HIGH(PORT,PIN) HAL_GPIO_WritePin(PORT, PIN, GPIO_PIN_SET);

void lcd_init(void);
void lcd_write(uint8_t type, uint8_t data);
void lcd_puts(uint8_t x, uint8_t y, int8_t *string);
void lcd_clear(void);
#endif 