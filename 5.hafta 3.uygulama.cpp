#include <stdio.h>
main()
{
	int vize,final,odev,proje;
	float b_notu;
	printf("Vize: ");
	scanf("%d",&vize);
	printf("Final: ");
	scanf("%d",&final);
	printf("Odev: ");
	scanf("%d",&odev);
	printf("Proje: ");
	scanf("%d",&proje);
	b_notu=vize*(0.25)+final*(0.30)+odev*(0.20)+proje*(0.25);
	printf("Basari notu: %5.2f",b_notu);
}
