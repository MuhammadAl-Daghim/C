#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int topla(int x, int y)
{
	return x+y;
}

void cikar(int x, int y)
{
	printf("Sayýlarýn Farký  = %d\n",x-y);
}

int carp(int x, int y)
{
	return x*y;
}

main(void)
{
	int s1,s2;
	setlocale(LC_ALL, "Turkish");
	printf("1.Sayýyý Giriniz  = "); scanf("%d",&s1);
	printf("2.Sayýyý Giriniz  = "); scanf("%d",&s2);
	printf("Sayýlarýn Toplamý = %d",topla(s1,s2));
	cikar(s1,s2);
	printf("Sayýlarýn Çarpýmý = %d",carp(s1,s2));
	getch();
}
