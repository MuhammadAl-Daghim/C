#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL,"Turkish");
	int vz, fnl;
	printf("Viza Notunuz Giriniz = "); scanf("%d",&vz);
	printf("Final Noutunuz Giriniz ="); scanf("%d",&fnl);
	printf("Ortalama = %6.2f",vz * 0.40 + fnl * 0.6);
}
