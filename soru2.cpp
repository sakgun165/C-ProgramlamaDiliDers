#include <stdio.h>
#include <stdlib.h>
main()
{//2.soru
	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	for(int i=2;i>1;i++)
	{
		while(sayi%i==0)
		{
			printf("%d--",i);
			sayi/=i;
		}
	}
}
