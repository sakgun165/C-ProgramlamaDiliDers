#include <stdio.h>
#include <stdlib.h>
main()
{
	int tavsan=845;
	int kus=1655;
	int yil=2017;
	while(tavsan<kus)
	{
		tavsan=tavsan*1.043;
		kus=kus*1.014;
		yil++;
	}
	printf("Tavsanlarin sayisi kuslarin sayisini %d yilinda gecmistir.",yil);
}

