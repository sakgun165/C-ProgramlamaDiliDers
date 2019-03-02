/* Asal Sayýlarýn bulunmasý*/
#include <stdio.h>
int asal(int);
main()
{
int i ;
int kac;
int j;
printf("ilk kac asal sayi listelenecek : ");
scanf("%d", &kac);
i = 2;
for (j = 1; j<=kac;i++)
if (asal(i))
 {
 printf("%d \t", i);
 j++;
}
}
int asal(int n)
{
 int i;
 if (n % 2 == 0)
 return (n==2);
 if (n % 3 == 0)
 return (n==3);
 if (n % 5 == 0)
 return (n==5);
 for (i=7; i*i <= n; i+=2)
 if (n % i == 0)
 return 0;
 return 1; /* sayý asal ise, 1 deðil ise 0 deðerini alýr */
} 
