#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Islem(int x)
{
	printf("Sayýnýn 2 Katý = %d",2*x);
}

main(void)
{
	setlocale(LC_ALL, "Turkish");
	int s1;
	printf("Sayý Giriniz = ");
	scanf("%d",&s1);
	Islem(s1);
	getch();
}
