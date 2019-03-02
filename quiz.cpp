#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{//1. soru
	char isim[25];
	printf("›sminizi giriniz: ");
	gets(isim);
	FILE *dosya;
	dosya=fopen("benimismim.txt","a");
	if(dosya==NULL)
	{
		printf("Dosya olusturalamadi.");
	}
	else 
	{
		fprintf(dosya,"\n›sim: %s",isim);
		fclose(dosya);
	}
	dosya=fopen("benimismim.txt","r");
	while(!feof(dosya))
	{
		fscanf(dosya,"%s",isim);
	}	printf("\n›sim: %s",isim);
	fclose(dosya);
}
