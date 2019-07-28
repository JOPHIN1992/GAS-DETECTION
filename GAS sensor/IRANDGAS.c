#include<pic.h>
#define _XTAL_FREQ 16000000
__CONFIG(0X1932);
void main()
{
	TRISA0=0;//op
	TRISA1=0;//op
	TRISA2=1;//ip ir
	TRISA3=1;//ip gas
	while(1)
	{
		if (RA2==1)
		{
			RA0=1;
			}
			else
			{
				RA0=0;
				}
				if (RA3==1)
				{
					RA1=1;
					}
					else
					{
						RA1=0;
						}
						}
}						
