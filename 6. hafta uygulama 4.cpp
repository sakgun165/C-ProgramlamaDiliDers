#include <stdio.h>
main()
{
	for(int i=1;i<=10;i++)
	{
		printf("--%d ler carpim tablosu--\n",i);
		for(int j=1;j<=10;j++)
		{
			printf("%d x %d = %d\n",i,j,(i*j));
		}
	}
}
