//yaþ ile ilgili if örneði
#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int dyil,yas;
	yas=2021-dyil;
	printf("Yaþýnýz = %d\n",yas);
	if (yas>=20)
		{
		printf("Genç");
		}
	else if (yas<=10)
		{
		printf("Çocuk");
		}
	else if (yas==15)
		{
		printf("Adam");
		}
    getch();
    }
