#include <stdio.h>
#include <stdlib.h>
main()
{
	int elsaya,elsayb,elemana[BUFSIZ],elemanb[BUFSIZ];
	printf("A kumesinin eleman sayisini giriniz: ");
	scanf("%d",&elsaya);
	for(int i=1;i<=elsaya;i++)
	{
		printf("%d. eleman: ",i);
		scanf("%d",&elemana);
	}
		printf("B kumesinin eleman sayisini giriniz: ");
	scanf("%d",&elsayb);
	for(int i=1;i<=elsayb;i++)
	{
		printf("%d. eleman: ",i);
			scanf("%d",&elemanb);
	}
if(elemana==elemanb)
	{
		printf("A kesisim B={%d}",elemana==elemanb);
	}
}

