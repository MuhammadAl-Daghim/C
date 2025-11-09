#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL,"Turkish");
	float s1 = 13 , s2 = 2;
	float f1;
	f1 = s1 / s2;
	printf("Sonuc : %f",f1);
}
