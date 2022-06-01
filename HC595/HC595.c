#include "HC595.h"

void HC595_Out(unsigned char data)
{
	unsigned char check, i;
	
	for(i=0; i<8; i++)
	{
		check = data & (0x80>>i);
		check = check!=0?1:0;
		
		DS(check);
		SH_CP(0);
		SH_CP(1); // dich bit data vao thanh ghi
	}
	ST_CP(0);
	ST_CP(1); // tao xung chot ngo ra
}

void HC595_Outs(unsigned char ardata[], unsigned int count)
{
	unsigned char check, i;
	unsigned char data;
	
	for(signed char index=count-1; index>=0; index--)
	{
		data = ardata[index];
		for(i=0; i<8; i++)
		{
			check = data & (0x80>>i);
			check = check!=0?1:0;
			
			DS(check);
			SH_CP(0);
			SH_CP(1); // dich bit data vao thanh ghi
		}
	}	
	ST_CP(0);
	ST_CP(1); // tao xung chot ngo ra
}

void HC595_Set(unsigned char stt)
{
	MR(0); 
	MR(1);
	//HAL_Delay(10);
	
	DS(1);
	SH_CP(0);
	SH_CP(1);
	
	for(unsigned char i=0; i<<stt; i++)
	{
		DS(0);
		SH_CP(0);
		SH_CP(1);
	}
	ST_CP(0);
	ST_CP(1);
}

void HC595_Clear(unsigned char stt)
{
	MR(0);
	MR(1);
	
	DS(0);
	SH_CP(0);
	SH_CP(1);
	
	for (unsigned char i=0; i<stt; i++)
	{
		DS(0);
		SH_CP(0);
		SH_CP(1);
	}
	ST_CP(0);
	ST_CP(1);
}