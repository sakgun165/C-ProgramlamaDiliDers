#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
void rastgele(int s[])
{
	srand(time(NULL));
	for(int i=0;i<3;i++)
	{
		s[i]=rand()%99+1;
	}
}
int kural1(int toplam)// kural 1
{ int kontrol1=0;
	if(toplam<150)
	{
	kontrol1=1;
	}
	return kontrol1;
}
int kural2(int toplam) //kural2
{
	int kontrol2=0,sayac=0;
	for(int i=2;i<toplam;i++)
	{
		if(toplam%i==0)
		sayac++;
		else if(sayac==0)
		{
			kontrol2=1;
		}
	} return kontrol2;
}
int kural3(int s[])//kural 3
{int gecici, kontrol3=0;
	for(int i=1;i<3;i++)
	{ for(int j=0;j<3;j++)
	{
	if(s[j]>s[j+1])	
	{
		gecici=s[j];
		s[j]=s[j+1];
		s[j+1]=gecici;
	}
}
}
	if((s[2]-s[0])>s[1])
	{kontrol3=1;
	} return kontrol3;
}
main()
{ int sayi[2],i,toplam=0; char cevap;
printf("Oyuna baslamak icin herhangi bir tusa basiniz...");
getch();
tekrar: 
rastgele(sayi);
for(i=0;i<3;i++)
printf("\nPul %d = %d",i+1,sayi[i]);
toplam=sayi[0]+sayi[1]+sayi[2];	
	int kontrol1=kural1(toplam);
	int kontrol2=kural2(toplam);
	int kontrol3=kural3(sayi);
	if(kontrol1==1)
	printf("\nTebrikler kazandiniz(1.kural)");
	else if(kontrol2==1)
	printf("\nTebrikler kazandiniz(2.kural)");
	else if(kontrol3==1)
    printf("\nTebrikler kazandiniz(3.kural)");
    else 
    printf("\nMalesef kaybettiniz");
    printf("\nOyuna devam icin [E\H]?");
    cevap=getche();
    if(cevap=='e'||cevap=='E')
    goto tekrar;
    return 0;	
}
