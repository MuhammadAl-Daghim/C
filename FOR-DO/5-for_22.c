#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   int i1;
   srand(time(NULL));
   for (i1=1;i1<=10;i1++)
      {
      int s=rand()%100; //0-99 arasý
      printf("%3d. Sayý : %3d\n",i1,s);
      }
   getch();
   }
