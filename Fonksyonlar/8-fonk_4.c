#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void topla(int x, int y)
{
	printf("Sayýlarýn Toplamý = %d\n",x+y);
}

void cikar(int x, int y)
{
	printf("Sayýlarýn Farký  = %d\n",x-y);
}

void carp(int x, int y)
{
	printf("Sayýlarýn Çarpýmý = %d\n",x*y);
}

main(void)
{
	setlocale(LC_ALL, "Turkish");
	int s1,s2;
	printf("1.Sayýyý Giriniz  = "); scanf("%d",&s1);
	printf("2.Sayýyý Giriniz  = "); scanf("%d",&s2);
	topla(s1,s2);
	cikar(s1,s2);
	carp(s1,s2);
	getch();
}
