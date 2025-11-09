#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int s1,s2;

int topla()
{
	return s1+s2;
}

int cikar()
{
	return s1-s2;
}

main(void)
{	
	setlocale(LC_ALL, "Turkish");
	printf("1.Sayýyý Giriniz  = "); scanf("%d",&s1);
	printf("2.Sayýyý Giriniz  = "); scanf("%d",&s2);
	printf("Sayýlarýn Toplamý = %d\n",topla());
	printf("Sayýlarýn Farký   = %d\n",cikar());
	getch();
}
