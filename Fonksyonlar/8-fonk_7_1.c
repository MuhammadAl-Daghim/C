//Girilen sayýnýn faktöriyelini hesaplayan ve sonucu yazdýran fonksiyon f1
//Girilen sayýnýn faktöriyelini hesaplayan ve sonucu main'de yazdýran fonksiyon f2
#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void f1(int x)
{
   int i1,f=1;
   for (i1=2;i1<=x;i1++)
      f=f*i1;
   printf("Faktöriyel Sonucu = %d\n",f);
}
int f2(int x)
{
   int i1,f=1;
   for (i1=2;i1<=x;i1++)
      f=f*i1;
   return f;
}
main(void)
{
	setlocale(LC_ALL, "Turkish");
	int s1;
	printf("Bir Sayýnýn Giriniz = ");
	scanf("%d",&s1);
	f1(s1);
	printf("Faktöriyel Sonucu = %d\n",f2(s1));
	getch();
}
