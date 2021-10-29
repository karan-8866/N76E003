#include "N76E003.h"
#include "Common.h"
#include "Delay.h"
#include "SFR_Macro.h"
#include "Function_define.h"

#define DISP_0	0xC0
#define DISP_1	0xF9
#define DISP_2	0xA4
#define DISP_3	0xB0
#define DISP_4	0x99
#define DISP_5	0x92
#define DISP_6	0x82
#define DISP_7	0xF8
#define DISP_8	0x80
#define DISP_9	0x90

sbit a=P0^0;
sbit b=P0^1;
sbit c=P0^3;
sbit d=P0^4;
sbit e=P0^5;
sbit f=P0^6;
sbit g=P0^7;
sbit disp1=P1^3;
sbit disp2=P1^2;
sbit disp3=P1^1;
sbit disp4=P1^0;

void display(uint8_t dispNum, uint8_t num);

void d1();
/*void d2();
void d3();
void d4();*/

void Delay(unsigned int itime)
{
unsigned int i,j;
for (i=0;i<itime;i++) // this is For(); loop delay used to define delay value in Embedded C
{
for (j=0;j<1275;j++);
}
}

void main()
{
	Set_All_GPIO_Quasi_Mode;

	display(1, 1);
	display(2, 2);
	display(3, 3);
	display(4, 4);
	
	//d1();
	/*d2();
	Delay(50);
	d3();
	Delay(50);
	d4();
	Delay(50);*/
}

void display(uint8_t dispNum, uint8_t num)
{
	if(dispNum == 1)
	{
		disp1 = 0;
		disp2 = 1;
		disp3 = 1;
		disp4 = 1;
	}
	else if(dispNum == 2)
	{
		disp1 = 1;
		disp2 = 0;
		disp3 = 1;
		disp4 = 1;
	}
	else if (dispNum == 3)
	{
		disp1 = 1;
		disp2 = 1;
		disp3 = 0;
		disp4 = 1;
	}
	else if (dispNum == 4)
	{
		disp1 = 1;
		disp2 = 1;
		disp3 = 1;
		disp4 = 0;
	}
	else
	{
		return;
	}
	switch(num)
	{
		case 0:
		{
			a = (DISP_0 & (1 << 0)) ? 1 : 0;
			b = (DISP_0 & (1 << 1)) ? 1 : 0;
			c = (DISP_0 & (1 << 2)) ? 1 : 0;
			d = (DISP_0 & (1 << 3)) ? 1 : 0;
			e = (DISP_0 & (1 << 4)) ? 1 : 0;
			f = (DISP_0 & (1 << 5)) ? 1 : 0;
			g = (DISP_0 & (1 << 6)) ? 1 : 0;
		}
		break;
		
		case 1:
		{
			a = (DISP_1 & (1 << 0)) ? 1 : 0;
			b = (DISP_1 & (1 << 1)) ? 1 : 0;
			c = (DISP_1 & (1 << 2)) ? 1 : 0;
			d = (DISP_1 & (1 << 3)) ? 1 : 0;
			e = (DISP_1 & (1 << 4)) ? 1 : 0;
			f = (DISP_1 & (1 << 5)) ? 1 : 0;
			g = (DISP_1 & (1 << 6)) ? 1 : 0;
		}
		break;
		
		case 2:
		{
			a = (DISP_2 & (1 << 0)) ? 1 : 0;
			b = (DISP_2 & (1 << 1)) ? 1 : 0;
			c = (DISP_2 & (1 << 2)) ? 1 : 0;
			d = (DISP_2 & (1 << 3)) ? 1 : 0;
			e = (DISP_2 & (1 << 4)) ? 1 : 0;
			f = (DISP_2 & (1 << 5)) ? 1 : 0;
			g = (DISP_2 & (1 << 6)) ? 1 : 0;
		}
		break;
		
		case 3:
		{
			a = (DISP_3 & (1 << 0)) ? 1 : 0;
			b = (DISP_3 & (1 << 1)) ? 1 : 0;
			c = (DISP_3 & (1 << 2)) ? 1 : 0;
			d = (DISP_3 & (1 << 3)) ? 1 : 0;
			e = (DISP_3 & (1 << 4)) ? 1 : 0;
			f = (DISP_3 & (1 << 5)) ? 1 : 0;
			g = (DISP_3 & (1 << 6)) ? 1 : 0;
		}
		break;
		
		case 4:
		{
			a = (DISP_4 & (1 << 0)) ? 1 : 0;
			b = (DISP_4 & (1 << 1)) ? 1 : 0;
			c = (DISP_4 & (1 << 2)) ? 1 : 0;
			d = (DISP_4 & (1 << 3)) ? 1 : 0;
			e = (DISP_4 & (1 << 4)) ? 1 : 0;
			f = (DISP_4 & (1 << 5)) ? 1 : 0;
			g = (DISP_4 & (1 << 6)) ? 1 : 0;
		}
		break;
		
		case 5:
		{
			a = (DISP_5 & (1 << 0)) ? 1 : 0;
			b = (DISP_5 & (1 << 1)) ? 1 : 0;
			c = (DISP_5 & (1 << 2)) ? 1 : 0;
			d = (DISP_5 & (1 << 3)) ? 1 : 0;
			e = (DISP_5 & (1 << 4)) ? 1 : 0;
			f = (DISP_5 & (1 << 5)) ? 1 : 0;
			g = (DISP_5 & (1 << 6)) ? 1 : 0;
		}
		break;
		
		case 6:
		{
			a = (DISP_6 & (1 << 0)) ? 1 : 0;
			b = (DISP_6 & (1 << 1)) ? 1 : 0;
			c = (DISP_6 & (1 << 2)) ? 1 : 0;
			d = (DISP_6 & (1 << 3)) ? 1 : 0;
			e = (DISP_6 & (1 << 4)) ? 1 : 0;
			f = (DISP_6 & (1 << 5)) ? 1 : 0;
			g = (DISP_6 & (1 << 6)) ? 1 : 0;
		}
		break;
		
		case 7:
		{
			a = (DISP_7 & (1 << 0)) ? 1 : 0;
			b = (DISP_7 & (1 << 1)) ? 1 : 0;
			c = (DISP_7 & (1 << 2)) ? 1 : 0;
			d = (DISP_7 & (1 << 3)) ? 1 : 0;
			e = (DISP_7 & (1 << 4)) ? 1 : 0;
			f = (DISP_7 & (1 << 5)) ? 1 : 0;
			g = (DISP_7 & (1 << 6)) ? 1 : 0;
		}
		break;
		
		case 8:
		{
			a = (DISP_8 & (1 << 0)) ? 1 : 0;
			b = (DISP_8 & (1 << 1)) ? 1 : 0;
			c = (DISP_8 & (1 << 2)) ? 1 : 0;
			d = (DISP_8 & (1 << 3)) ? 1 : 0;
			e = (DISP_8 & (1 << 4)) ? 1 : 0;
			f = (DISP_8 & (1 << 5)) ? 1 : 0;
			g = (DISP_8 & (1 << 6)) ? 1 : 0;
		}
		break;
		
		case 9:
		{
			a = (DISP_9 & (1 << 0)) ? 1 : 0;
			b = (DISP_9 & (1 << 1)) ? 1 : 0;
			c = (DISP_9 & (1 << 2)) ? 1 : 0;
			d = (DISP_9 & (1 << 3)) ? 1 : 0;
			e = (DISP_9 & (1 << 4)) ? 1 : 0;
			f = (DISP_9 & (1 << 5)) ? 1 : 0;
			g = (DISP_9 & (1 << 6)) ? 1 : 0;
		}
		break;
		
		default:
		{
		}
		break;
	}
	
		disp1 = 0;
		disp2 = 0;
		disp3 = 0;
		disp4 = 0;
}



/*void d1()
{
	disp1=0;
	
	a=1;
	b=0;
	c=0;
	d=1;
	e=1;
	f=1;
	g=1;
}
*/