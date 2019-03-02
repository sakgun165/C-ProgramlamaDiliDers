#include <stdio.h>
#include <stdlib.h>
main()
{
int sayi,sayac=0;
printf("Bir sayi giriniz: ");
scanf("%d",&sayi);
for(int i=2;i<sayi;i++)
{
	if(sayi%i==0)
	{
		sayac++;
	}
}
if(sayi<2)
{
	printf("Sayi asal degildir");
}
else if(sayac==0)
{
	printf("Sayi asaldir");
}

else
{
printf("Sayi asal degildir.");
}
return 0;
}
