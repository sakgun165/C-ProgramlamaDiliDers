#include <stdio.h>
void giris(int ogrno[],int notu[],int N);
void goruntule(int ogrno[],int notu[],int N);
float ortalama(int N,int notu[]);
main()
{int N,ogrNo[BUFSIZ],ogrnot[BUFSIZ];
float ort;
printf("Ogrenci sayisini giriniz: ");
scanf("%d",&N);
giris(ogrNo,ogrnot,N);
goruntule(ogrNo,ogrnot,N);
printf("\nNot Ortalamasi:%5.2f",ortalama(N,ogrnot));	
}
void giris(int ogrno[],int notu[],int N)
{    for(int i=0;i<N;i++)
{
	printf("%d.Ogrenci numarasini giriniz: ",i+1);
	scanf("%d",&ogrno[i]);
	printf("%d.Ogrencinin notu: ",i+1);
	scanf("%d",&notu[i]);
}
}
void goruntule(int ogrno[],int notu[],int N)
{
	printf("OgrNo-----Notu\n");
	for(int i=0;i<N;i++)
	{
		printf("\n%d--%d",ogrno[i],notu[i]);
	}	
}
float ortalama(int N,int notu[])
{int toplam=0; float ort;
for(int i=0;i<N;i++)
{ toplam+=notu[i];
ort=toplam/N;
}return ort;
}
