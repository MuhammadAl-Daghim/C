#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main(void)
{
	setlocale(LC_ALL, "Turkish");
	
	int i1,s;
	
	printf("Sayiniz Giriniz : "); scanf("%d",&s);
	printf("Sayý   Sayý    Yarýsý   2 Katý   5 katý   Karesi\n"); 
	for (i1=1;i1<=10;i1++)
	{
		printf("%4d   %4d    %6.1f   %6d  %6d  %6d\n",i1,s,(float)s/2,2*s,s*5,s*s);
	}
	
	getch();
}
