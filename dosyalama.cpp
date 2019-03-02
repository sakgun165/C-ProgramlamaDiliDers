#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
struct ogrenci{
	char ad[20];
	char soyad[20];
	int no[5];
};
main()
{ struct ogrenci ogr;
	int secim;
	while(1)
	{
		printf("\n1-Ogrenci kaydi\n");
		printf("2-Ogrenci bilgileri goruntuleme\n");
		printf("3-Cikis\n");	
		printf("Tercihiniz: ");
		scanf("%d",&secim);
	
	if(secim==1)
	{
		printf("Adi: ");
		scanf("%s",ogr.ad);
		printf("Soyadi: ");
		scanf("%s",ogr.soyad);
		printf("Numarasi: ");
		scanf("%d",&ogr.no);
		FILE *dosya=fopen("kayit.txt","a");
		fprintf(dosya,"\nADI\t SOYADI\t NO\n");
		fprintf(dosya,"%s\t %s\t %d\t",ogr.ad,ogr.soyad,&ogr.no);
		fclose(dosya);
	}
	else if(secim==2)
	{
		FILE *dosya=fopen("kayit.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s%s%d",ogr.ad,ogr.soyad,&ogr.no);
				printf("\nADI\t SOYADI\t NO\n");
		printf("%s\t %s\t %d\t",ogr.ad,ogr.soyad,&ogr.no);
		}
	}
	else if(secim==3)
	{
		exit(1);
	}
}
}
