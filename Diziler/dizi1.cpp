#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

main(void)

{
	setlocale (LC_ALL, "Turkish");
	srand(time(NULL));
	int s[10], i1, min=100, mak=0;
	printf("Sýra Sayý Karesi Yarýsý Faktöriyel Asal? Mükemmel?\n");
	for (i1=0;i1<=9;i1++)
	{
		s[i1]=rand()%10+1; //1 ile 10 arasý
	    printf("%4d %4d %6d %6.2f\n ",i1+1,s[i1],s[i1]*s[i1],(float)s[i1]/2);
	}
	getch();
}
