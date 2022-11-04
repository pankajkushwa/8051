#include "mc51.h"
void delay(unsigned char time)
{
	unsigned int i,j;
	for(i=0;i<time;i++)
	{
		for(j=0;j<1275;j++)
		{
			
		}
	}
}
void main()
{
	P3=0x00;
	while(1)
	{
	
	P3=0x00;
	delay(100);
	P3=0xff;
	delay(100);
}
	}