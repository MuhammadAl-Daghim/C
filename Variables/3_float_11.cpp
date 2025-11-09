#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL,"Turkish");
	int bolunen,bolen,bolum,kalan;
	printf("Bolnene ve Bolen Sayalar Sarayla Girinz =");
	scanf("%d%d",&bolunen,&bolen);
	bolum = bolunen / bolen;
	kalan = bolunen % bolen;
	printf("%d = %d * %d + %d ",bolunen,bolen,bolum,kalan);
}
