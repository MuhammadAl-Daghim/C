#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	int sat,gun,haf,ay;
	printf("Saat Sayi Giriniz "); scanf("%d",&sat);
	gun = sat / 24 ;
	haf = gun / 7;
	ay = haf / 4 ;
	printf("Gunlar Sayi %d\n",gun);
	printf("Haftalar Sayi %d\n",haf);
	printf("Aylar Sayi %d\n",ay);
	
}
