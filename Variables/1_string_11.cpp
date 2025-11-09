#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL,"Turkish");
	char c1[] = "selam";
	printf("%s\n",c1);
	printf("%c",c1[4]);
}
