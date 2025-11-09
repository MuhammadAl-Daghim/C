#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int s1;
    printf("Bir Sayý Giriniz    :"); scanf("%d",&s1);
    if (s1>0)
       {
       printf("Pozitif");      
       }
    else if (s1<0)
       {
       printf("Negatif");
       }
    else /*else if (s1==0)*/
       {
       printf("Sýfýr");
       }
    getch();
    }
