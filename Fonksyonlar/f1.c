#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int emre1(int s1, int s2)
{
	return s1*s2;
}

float emre1(int s1, int s2)
{
	return (float)s1/s2;
}

main(void)
{
	setlocale(LC_ALL, "Turkish");
	int s1,s2;
	printf("1. Sayýyý Giriniz :");
	scanf("%d",&s1);
	printf("2. Sayýyý Giriniz :");
	scanf("%d",&s2);
	printf("Sonuç : %d\n",emre1(s1,s2));
	printf("Sonuç : %5.2f\n",emre1(s1,s2));	
    getch();
}
