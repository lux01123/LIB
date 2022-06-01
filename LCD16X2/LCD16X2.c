#include "LCD16X2.h"

void lcd16x2_init_8bits
(
	GPIO_TypeDef* port_rs_e, uint16_t rs_pin, uint16_t e_pin,
	GPIO_TypeDef* port_0_3, uint16_t d0_pin, uint16_t d1_pin, uint16_t d2_pin, uint16_t d3_pin,
	GPIO_TypeDef* port_4_7, uint16_t d4_pin, uint16_t d5_pin, uint16_t d6_pn, uint16_t d7_pin)
	
)