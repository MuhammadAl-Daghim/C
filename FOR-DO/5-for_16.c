#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int i1,sonuc=0;
    for (i1=1;i1<=10;i1++)
        {
        if (i1%2==1)
           sonuc=sonuc+i1;
        }
    printf("Sonuç      :%d",sonuc);
    getch();
    }
