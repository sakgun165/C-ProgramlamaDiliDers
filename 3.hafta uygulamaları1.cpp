#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{   srand(time(NULL));
	int tahmin,rastgele;
	rastgele=rand()%100+1;
	
	int i=0;
	do{
	printf("\n1 ile 100 arasinda tuttugum sayiyi tahmin ediniz: ");
	scanf("%d",&tahmin);
	i++;
		if(tahmin>rastgele)
		{
			printf("Girdiginiz sayi buyuk");
		}
		else if(tahmin<rastgele)
		{
			printf("Girdiginiz sayi kucuk");
		}
	}while(tahmin!=rastgele);
	printf("Tebrikler %d denemede buldunuz.",i);
}
