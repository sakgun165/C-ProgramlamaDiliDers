#include <stdio.h>
#include <stdlib.h>
main()
{
	int i,vize1,toplam=0;
	float ortalama;
	for(i=0;i<10;i++)
	{
		printf("%d.nci ogrencinin vize notunu giriniz: ",i+1);
		scanf("%d",&vize1);
		toplam+=vize1;
		ortalama=toplam/10.0;
	}
	printf("Ogrencilerin vize ortalamalari: %5.2f",ortalama);
	return 0;
}
