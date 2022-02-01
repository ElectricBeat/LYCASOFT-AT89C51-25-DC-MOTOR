#include<reg51.h>

void main()
{
	P2=0xFF;
	while(1)
	{
		P2=0x01;
	}
}