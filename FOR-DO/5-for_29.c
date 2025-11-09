#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL, "Turkish");
	
	int s;
	unsigned char i1,eb=0,ek=255;
	for (i1=1;i1<=10;i1++)
	{
		printf("%d.Sayýyý Giriniz=");
		scanf("%d",&s);
		if (s>eb)
			eb=s;
		if (s<ek)
			ek=s;
	}
	printf("En büyük sayý=%d\nEn küçük sayý=%d",eb,ek);
	getch();
}
