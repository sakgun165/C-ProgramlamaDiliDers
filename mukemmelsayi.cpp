#include <stdio.h>
#include <conio.h>
main()
{
int sayi, i, toplam=0;
printf("Bir sayi giriniz : ");
scanf("%d",&sayi);
for(i=1; i<sayi; i++) {
if(sayi%i == 0)
toplam += i;
}
if(toplam == sayi) printf("Mukemmel sayidir.");
else printf("Mukemmel sayi degildir.");
getche();
}
