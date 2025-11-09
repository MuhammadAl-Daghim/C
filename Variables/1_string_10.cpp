#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL,"Turkish");
	char *c1,c2;
	c1 = "selam";
	c2 = 's';
	printf("%s\n",c1);
	printf("%c%c%c%c%c\n",c1[0],c1[1],c1[2],c1[3],c1[4]);
	printf("%c%c%c%c%c\n",c1[4],c1[3],c1[2],c1[1],c1[0]);
	printf("%c\n",c1[2]);
	printf("%c",c2);
	getch();
	
}
