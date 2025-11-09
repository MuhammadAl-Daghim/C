#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   int s[5], s1,s2,s3,s4,s5, tp1=0, tp2=0;
   
   printf("1.Sayý Giriniz = "); scanf("%d",&s1);//34  56  78  45   56 =   269
   printf("2.Sayý Giriniz = "); scanf("%d",&s2);
   printf("3.Sayý Giriniz = "); scanf("%d",&s3);
   printf("4.Sayý Giriniz = "); scanf("%d",&s4);
   printf("5.Sayý Giriniz = "); scanf("%d",&s5);
   tp1=s1+s2+s3+s4+s5;
   printf("Sayýlarýn Toplamý = %d\n",tp1);
   
   
   printf("1.Sayý Giriniz = "); scanf("%d",&s[0]);
   printf("2.Sayý Giriniz = "); scanf("%d",&s[1]);
   printf("3.Sayý Giriniz = "); scanf("%d",&s[2]);
   printf("4.Sayý Giriniz = "); scanf("%d",&s[3]);
   printf("5.Sayý Giriniz = "); scanf("%d",&s[4]);
   tp2=s[0]+s[1]+s[2]+s[3]+s[4];
   printf("Sayýlarýn Toplamý = %d",tp2);
   
   getch();
   }
