#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   int i1,bas,bts,tp=0,tmp;
   printf("Baþlangýç Deðerini Giriniz =");
   scanf("%d",&bas);
   printf("Bitiþ Deðerini Giriniz =");
   scanf("%d",&bts);
   for (i1=bas;i1<=bts;i1++)
      {
      if (bas%3==0 && bas%5==0)
         tp=tp+i1;
      }
   printf("Hem 3'ün hem de 5'in Katý Olanlarýn Toplamý :%d\n",tp);
   getch();
   }
