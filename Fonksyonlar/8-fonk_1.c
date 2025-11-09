#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Islem(void)
{
	int s1;
	printf("Sayý Giriniz = ");
	scanf("%d",&s1);
	printf("Sayýnýn 2 Katý = %d",2*s1);
}

main(void)
{
	setlocale(LC_ALL, "Turkish");
	Islem();
	getch();
}
