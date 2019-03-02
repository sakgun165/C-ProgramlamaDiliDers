//silindirin hacmini hesaplama(formül pi r kare.h
#include <stdio.h>
#include <math.h>
#define PI 3.14
main()
{
	int r,h;
	float hacim;
	printf("Yaricapi giriniz: ");
	scanf("%d",&r);
	printf("Yuksekligi giriniz: ");
	scanf("%d",&h);
	hacim=PI*pow(r,2)*h;
	printf("Silindirin Hacmi: %5.2f",hacim);
	
}
