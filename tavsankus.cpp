#include <stdio.h>
main()
{
	int tavsan=845,kus=300,yil=2017;
	while(tavsan>kus)
	{
		tavsan*=1.043;
		kus*=1.014;
		yil++;
	}
	printf("Tavsan sayisi kus sayisini %d yilda gecmistir.",yil);
	return 0;
}
