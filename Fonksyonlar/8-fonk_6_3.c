#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int s1,s2;

void topla()
{
	printf("Sayýlarýn Toplamý = %d\n",s1+s2);
}

void cikar()
{
	printf("Sayýlarýn Farký   = %d\n",s1-s2);
}

main(void)
{	
	setlocale(LC_ALL, "Turkish");
	printf("1.Sayýyý Giriniz = "); scanf("%d",&s1);
	printf("2.Sayýyý Giriniz = "); scanf("%d",&s2);
	topla();
	cikar();
	getch();
}
