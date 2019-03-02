#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{//soru3
char cumle[100];
printf("Metni giriniz\t");
gets(cumle);
int kelimesayisi=1;
for(int i=0;cumle[i]!='\0';i++)
{
	if(cumle[i]==' ')
	{
		kelimesayisi++;
	}
}
printf("Kelime sayisi: %d",kelimesayisi);
}
