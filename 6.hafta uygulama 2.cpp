#include <stdio.h>
main()
{
	for(int i=100;i<=999;i++)
	{ 
	if(i%3==1&&i%4==1&&i%5==1&&i%7==0)
	{printf("Oglunun biriktirdigi para %d TL dir\n",i);
	}
	}
}
