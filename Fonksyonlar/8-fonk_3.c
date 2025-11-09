#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Islem(int s1)
{
	return 2*s1;
}

main(void)
{
	setlocale(LC_ALL, "Turkish");
	int s1;
	printf("Sayý Giriniz = ");
	scanf("%d",&s1);
	printf("Sayýnýn 2 Katý = %d",Islem(s1));
	getch();
}
