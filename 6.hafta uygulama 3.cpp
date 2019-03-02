#include <stdio.h>
#include <string.h>
main()
{// cumleyi tersten yazdýran fonksiiyon strrev, butun hepsini buyuk yazan fonksiyon strupr
	char cumle[100];
	printf("En fazla 100 karakterlik bir cumle giriniz: ");
	gets(cumle);
	printf("Cumlenin tersten yazilisi:");
	printf("%s\n",strrev(cumle));
	printf("%s",strupr(cumle));
}
