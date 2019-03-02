#include <stdio.h>
#include <math.h>
main()
{ float denklem;
for(float x=0.5;x<=10;x+=0.5)
{
	denklem=4*pow(x,3)-2*pow(x,2)+3*(x,1)-2+3*pow(x,-1);
	printf("x= %5.2f icin f(x)= %5.2f\n",x,denklem);	
}
}
