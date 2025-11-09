#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void toplama(int s1,int s2)
{
	printf("%d ile %d nin Toplamý=%d.\n",s1,s2,s1+s2);
}
void cikarma(int s1,int s2)
{
	printf("%d ile %d nin Farký=%d.\n",s1,s2,s1-s2);
}
void carpma(int s1,int s2)
{
	printf("%d ile %d nin Çarpýmý=%d.\n",s1,s2,s1*s2);
}
main(void)
{
	int x,y,sc;
	setlocale(LC_ALL, "Turkish");
	printf("1.Sayý Giriniz="); scanf("%d",&x);
	printf("2.Sayý Giriniz="); scanf("%d",&y);
	printf("Seçiminiz nedir=");scanf("%d",&sc);
	if (sc==1)
		toplama(x,y);
	else if (sc==2)
		cikarma(x,y);
	else if (sc==3)
		carpma(x,y);
	else
		printf("Yanlýþ Seçim");
	getch();
}
