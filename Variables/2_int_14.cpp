#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL,"Turkish");
	int dYil;
	printf("Dogum Yiliniz Giriniz :");
	scanf("%d",&dYil);
	printf("%d Yiliniz Dogdunuz %d ",dYil,2024-dYil);
	
}
