#include <stdio.h>
#include <string.h>
main()
{
	char cumle[BUFSIZ];
	printf("Bir cumle giriniz ve cumlenizin sonuna bir bosluk koyunuz: ");
	gets(cumle);
	int sayac=0;
for(int i = 0;i<strlen(cumle);i++)
{
if(cumle[i]==' ')
{
cumle[i+1];
sayac++;
}
}
printf("Cumle %d kelimeden olusuyor",sayac);
return 0;	
}
