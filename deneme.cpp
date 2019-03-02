#include <stdio.h>
#include <stdlib.h>
main()
{
int b=1,sayi;
printf("Bir sayi giriniz: ");
scanf("%d",&sayi);
for(int i=0;i<10;i++)
{
	if(i%sayi==0)
b/=sayi;
printf("%d",b);
}
}
