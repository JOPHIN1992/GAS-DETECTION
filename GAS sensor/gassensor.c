#include<pic.h>
#define _XTAL_FREQ 16000000
__CONFIG(0X1932);
void main()
{
	TRISA0=1;//INPUT
	TRISA1=0;//OUTPUT
	while(1)
	{
		if (RA0==1)
		{
			RA1=1;//HIGH
			}
			else
			{
				RA1=0;//LOW
				}
				}
				}