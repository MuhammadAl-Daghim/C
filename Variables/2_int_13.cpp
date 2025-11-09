#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL,"Turkish");
	int s1 = 10, s2 = 3;
	printf("%d + %d = %d\n",s1,s2,s1+s2);
	s1 = 20;
	s2 = 5;
	printf("%d * %d = %d\n",s1,s2,s1 * s2);
	getch();
	
}
