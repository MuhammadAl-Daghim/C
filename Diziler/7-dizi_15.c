/*10 elemanlý diziye 0-100 rast., sonra bunlarý yazalým, sonra bunlardan asal olanlarý yazalým,
sonra bunlardan mükemel olanlarý yazalým*/
#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   srand(time(NULL));
   
   int i1,i2,s[10],sn;
   
   for (i1=0;i1<=9;i1++)
      {
      s[i1]=rand()%15;
      }
   
   printf("Sayýlar\n");
   for (i1=0;i1<=9;i1++)
      {
      printf("%2d. Sayý= %4d\n",i1+1,s[i1]);
      }
   getch();
   system("cls");
   
   printf("Asal Sayýlar\n");   
   for (i1=0;i1<=9;i1++)
      {
      for (i2=2;i2<=(s[i1]-1);i2++)
      	{
      	   if (s[i1]%i2==0)
      	   	 break;
      	}
      if (s[i1]==i2)
      	printf("%d Sayýsý Asal'dýr\n",s[i1]);
      
      }
      
   getch();
   system("cls");
   
   printf("Mükemmel Sayýlar\n");   
   for (i1=0;i1<=9;i1++)
      {
      sn=0;
      for (i2=1;i2<=(s[i1]-1);i2++)
      	{
      	   if (s[i1]%i2==0)
      	   	 sn=sn+i2;
      	}
      if (s[i1]==sn)
      	printf("%d Sayýsý Mükemmel'dir\n",s[i1]);      
      }
      
   getch();
   system("cls");
   
   printf("Sayýlarýn Faktöriyeli\n");   
   for (i1=0;i1<=9;i1++)
      {
      sn=1;
      for (i2=2;i2<=(s[i1]-1);i2++)
      	{
      	  sn=sn*i2;
      	}
      printf("%d Sayýsýnýn Faktöriyeli %d'dir\n",s[i1],sn);      
      }
   getch();
   }
