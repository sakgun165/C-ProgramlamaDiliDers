#include <stdio.h>
#include <stdlib.h>
main()
{
	int n,eleman;
	printf("Eleman sayisini giriniz: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%d. eleman: ",i+1);
		scanf("%d",&eleman);
	}
	for(i=0;i<(n-1);i++)
	{
		for(int j=i+1;j<n;j++) 
		if(araSinav[i]>araSinav[j])
		{
			int gecici;
			gecici=araSinav[i];
			araSinav[i]=araSinav[j];
			araSinav[j]=gecici;
		}
	}
	for(int i=0;i<32;i++)
	{
		printf("%")
	}
}
