#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    int i1;
    setlocale(LC_ALL, "Turkish");
    for (i1=1;i1<=10;i1=i1+3)
       printf("%d\n",i1);
    getch();
    }
