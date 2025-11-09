#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL,"Turkish");
	int s1;
	short int s2;
	unsigned short int s3;
	printf("s1 degirikeni:\n");
	s1 = 321;
	printf("%d\n",s1);
	s1 = 33000;
	printf("%d\n",s1);
	s1 = -321;
	printf("%d\n",s1);
	printf("\n s2 degikeni:\n");
	s2 = 321;
	printf("%d\n",s2);
	s2 = 33000;
	printf("%d\n",s2);
	s2 -321;
	printf("%d\n",s2);
	printf("\n s3 degikeni:\n");
	s3 = 321;
	printf("%d\n",s3);
	s3 = 33000;
	printf("%d\n",s3);
	s3 = -321;
	printf("%d\n",s3);
	getch();
	 
}
