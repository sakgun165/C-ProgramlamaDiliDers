#include <stdio.h>
#include <math.h>
main()
{
	int s1,s2,toplam,fark,carpim;
	float bolum,mod,karekok;
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&s1);
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&s2);
	toplam=s1+s2;
	fark=s1-s2;
	carpim=s1*s2;
	bolum=s1/s2;
	mod=s1%s2;
	karekok=sqrt(toplam);
	printf("Toplam: %d\n",toplam);
	printf("Fark: %d\n",fark);
	printf("Carpim: %d\n",carpim);
	printf("Bolum: %5.2f\n",bolum);
	printf("Mod: %5.2f\n",mod);
	printf("Toplamlarinin karekoku: %5.2f\n",karekok);
	return 0;
}
