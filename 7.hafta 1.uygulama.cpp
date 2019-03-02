#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int araSinav[32]={45,56,34,23,56,88,23,43,12,5,43,10,76,98,67,94,65,53,20,43,32,41,76,57,45,32,32,12,33,78,65,65};
main()
{
float ortalama,std_sap;
int toplam=0,enb,enk;
for(int i=0;i<32;i++)
{
	toplam+=araSinav[i];
	ortalama=toplam/32.0;
}
for(int i=0;i<32;i++)
{
	toplam+= pow(ortalama-araSinav[i],2.0);
	std_sap=sqrt(toplam/31);
}
enb=araSinav[0];
enk=araSinav[0];
for(int i=0;i<32;i++)
{
	if(araSinav[i]>enb)
	{
	enb=araSinav[i];
}
else if(araSinav[i]<enk)
{
	enk=araSinav[i];
}
}

printf("Ortalama: %5.2f\n",ortalama);
printf("Standart sapma: %5.2f\n",std_sap);
printf("En yuksek not: %d\n",enb);
printf("En dusuk not: %d\n",enk);
}
