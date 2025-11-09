#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    int i1;
    setlocale(LC_ALL, "Turkish");
    for (i1=1;i1<=10;i1++)
       {
       printf("   1*%2d=%3d",i1,i1*1);
       printf("   2*%2d=%3d",i1,i1*2);
       printf("   3*%2d=%3d",i1,i1*3);
       printf("   4*%2d=%3d",i1,i1*4);
       printf("   5*%2d=%3d",i1,i1*5);
       printf("   6*%2d=%3d",i1,i1*6);
       printf("   7*%2d=%3d",i1,i1*7);
       printf("   8*%2d=%3d",i1,i1*8);
       printf("   9*%2d=%3d",i1,i1*9);
       printf("   10*%2d=%3d\n",i1,i1*10);
       
      
     }  printf("\n\n"); 
    getch();
    }

