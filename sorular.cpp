#include <stdio.h>
#include <stdlib.h>
struct ogrenci{
	char ad[25];
	char soyad[25];
	char no[5];
	char bolum[10];
	char cinsiyet[5];
    char dog_yer[30];
    char yas[3];
    char tel[11];
};
main()
{ struct ogrenci ogr; char cevap;
do{
printf("OGRENCI BILGILERI GIRIS EKRANI\n");
printf("-------------------------------\n");
printf("\n|ADI: ");
scanf("%s",ogr.ad);
printf("\n|SOYADI: ");
scanf("%s",ogr.soyad);
printf("\n|NO: ");
scanf("%s",ogr.no);
printf("\n|BOLUMU: ");
scanf("%s",ogr.bolum);
printf("\n|CINSIYET: ");
scanf("%s",ogr.cinsiyet);
printf("\n|DOGUM YERI: ");
scanf("%s",ogr.dog_yer);
printf("\n|YASI: ");
scanf("%s",ogr.yas);
printf("\n|TELEFON: ");
scanf("%s",ogr.tel);
printf("Kayit yapmaya devam etmek istiyormusunuz[E-H]: ");
do{
scanf("%c",&cevap);
}while(cevap=='\n');
FILE *dosya;
dosya=fopen("ogrencikayit.txt","a");
fprintf(dosya,"ADI:\t%s\nSOYADI:\t%s\nNO:\t%s\nBOLUMU:\t%s\nCINSIYETI:\t%s\nDOGUM YERI:\t%s\nYASI:\t%s\nTELEFON:\t%s\n",ogr.ad,ogr.soyad,ogr.no,ogr.bolum,ogr.cinsiyet,ogr.dog_yer,ogr.yas,ogr.tel);
}while(cevap=='E'||cevap=='e');
if(cevap=='H'||cevap=='h')
{ FILE *dosya;
dosya=fopen("ogrencikayit.txt","r");
while(!feof(dosya));
{
	fscanf(dosya,"%s%s%s%s%s%s%s%s",ogr.ad,ogr.soyad,ogr.no,ogr.bolum,ogr.cinsiyet,ogr.dog_yer,ogr.yas,ogr.tel);
	
}printf("ADI:\t%s\nSOYADI:\t%s\nNO:\t%s\nBOLUMU:\t%s\nCINSIYETI:\t%s\nDOGUM YERI:\t%s\nYASI:\t%s\nTELEFON:\t%s\n",ogr.ad,ogr.soyad,ogr.no,ogr.bolum,ogr.cinsiyet,ogr.dog_yer,ogr.yas,ogr.tel);


}return 0;
}
