#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   int i1;
   for (i1=1;i1<=10;i1++)
      {
      int s=100+rand()%119; //210-328 arasý
      printf("%d\n",i1,s);
      }
   getch();
   }
