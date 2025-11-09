#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   int s,i1,thm;
   srand(time(NULL));
   s=rand()%10; /*0 ile 9 arasý rastgele bir sayý*/
   printf("Sayý= %d\n",s);
   for (i1=1;i1<=3;i1++)
      {
      printf("%d. Tamhininizi Giriniz =",i1);
      scanf("%d",&thm);
      if (s==thm)
         break;
      }
   if (i1<4)
      {
      printf("Tebrikler!\n");
      printf("%d. Tahminde Bildiniz.",i1);
      }
   else
      printf("Bilemediniz!",i1);
   getch();
   }
