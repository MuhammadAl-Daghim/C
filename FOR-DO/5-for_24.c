#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

main(void)
   {
   setlocale(LC_ALL, "Turkish");
   int i1,tp=0,adt=0;
   srand(time(NULL));
   for (i1=1;i1<=1;i1++)
      {
	      int s=rand()%101+105;
	      if (s%3==0 && s%4!=0)
	      {
	      	printf("Sayý=%d\n",s);
	      	tp=tp+s;
	      	adt++;
	      }
      }
   printf("%d adet sayýnýn ortalamasý %5.2f'dir.",adt,(float)tp/adt);
   getch();
   }
