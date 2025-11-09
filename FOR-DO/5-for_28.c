#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main(void)
{
	setlocale(LC_ALL, "Turkish");
	//Kullanýcýnýn gireceði sayýya kaaar olan sayýlarýn faktöriyeli
	//4ENTER; 4!=24 3!=6 2!=2
	int s,i1,i2,f=1;
	printf("Sayý Giriniz :"); scanf("%d",&s);
	for (i1=s;i1>=1;i1--)
	{
		for (i2=i1;i2>=1;i2--)
		   f=f*i2;
		printf("%d!=%d\n",i1,f);
	}
	getch();
}
