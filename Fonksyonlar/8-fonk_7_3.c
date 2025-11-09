//fG; kullanýcýdan sayý alýnacak ve mainDeki deðiþkene atanacak
//fF; faktöriyel hesaplanýp yazýlsýn
//fM; mükemmel olup olmadýðý mainDe yazýlsýn
#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int fG();
void fF(int);
int fM(int);

main(void)
{
	setlocale(LC_ALL, "Turkish");
	int s=fG();
	fF(s);
	if (fM(s)==1)
	   printf("%d sayýsý mükemmeldir.\n",s);
	else
	   printf("%d sayýsý mükemmel deðildir.\n",s);
	getch();
}

int fG(void)
{
   int x;
   printf("Bir Sayý Giriniz : ");
   scanf("%d",&x);
   return x;
}

void fF(int x)
{
   int f=1,i1;
   for (i1=2;i1<=x;i1++)
      f=f*i1;
   printf("%d sayýsýnýn faktöriyeli = %d\n",x,f);
}

int fM(int x)
{
   int tp=0,i1;
   for (i1=x-1;i1>=1;i1--)
   {
      if (x%i1==0)
         tp=tp+i1;
   }
   if (x==tp)
      return 1;
   else
      return 0;
}
