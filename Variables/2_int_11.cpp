#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL,"Turkish");
	int s1 = 10 ,s2 = 5 , sonuc;
	printf("Toplaam1 = %d\n",s1 + s2);
	printf("Cikarma1 = %d\n",s1 - s2);
	printf("Carbma1 = %d\n",s1 * s2);
	printf("Bolme1 = %d\n",s1 / s2);
	printf("Kalan1 = %d\n",s1 % s2);
//	getch();
//	system("cls");
	s1 = 30;
	s2 = 20;
	sonuc = s1 + s2;
	printf("Toplama2 = %d\n",sonuc);
	sonuc = s1 - s2;
	printf("Cikarma2 = %d\n",sonuc);
	sonuc= s1 * s2;
	printf("Carbma2 = %d\n",sonuc);
	sonuc = s1 / s2;
	printf("Bolme2 = %d\n",sonuc);
	sonuc = s1 % s2;
	printf("Kalan2 =%d\n",sonuc);
	
	
	
}
