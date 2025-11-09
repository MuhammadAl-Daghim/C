#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL,"Turkish");
	printf("-Selam.");
	printf("Selam Nasilsiniz.");
	getch();
	printf("Selam \n Nasilisiniz \n Iyiyim \n Teskkurler");
	getch();
	printf("Selam.");
	printf("\n");
	printf("Nasilisinz");
	printf("\n");
	printf("Iyiyim teskkurler");
	getch();
	
}
