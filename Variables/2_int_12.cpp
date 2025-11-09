#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL,"Turkish");
	int s1,s2;
	printf("Birici Sayiniz Giriniz =");
	scanf("%d",&s1);
	printf("Ikinci Sayiniz Giriniz =");
	scanf("%d",&s2);
	printf("Toplam = %d\n",s1 + s2);
	printf("Cikarma = %d\n",s1 - s2);
	printf("Carbma = %d\n",s1 * s2);
	printf("Bolme = %d\n",s1 / s2);
	printf("Kalan = %d\n",s1 % s2);
	getch();
	
}
