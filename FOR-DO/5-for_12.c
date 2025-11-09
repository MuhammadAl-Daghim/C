#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    int i1,s;
    printf("Sayý giriniz:");
    scanf("%d",&s);
    for(i1=s;i1<=10;i1++)
        printf("%d + %d = %d\n",i1,s,i1+s);
    getch();
    }

