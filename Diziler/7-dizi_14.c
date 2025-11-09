#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	
   	setlocale(LC_ALL, "Turkish");
   	srand(time(NULL));
   
   	unsigned short int i1,s[20],adt3=0,tp4=0,adt5=0,tp5=0,eb=0,ek=65536;
   
   	for (i1=0;i1<=19;i1++)
   	{
   		s[i1]=rand()%51;
	}
	
	for(i1=0;i1<=19;i1++)
	{
		if (s[i1]%3==0)
			adt3++;
		if (s[i1]%4==0)
			tp4=tp4+s[i1];
		if (s[i1]%5==0)
		{
			adt5++;
			tp5=tp5+s[i1];
		}		
		if (s[i1]>eb)
			eb=s[i1];
		if (s[i1]<ek)
			ek=s[i1];
	}
	
	printf("3'ün katý olan sayýlarýn sayýsý     = %d\n",adt3);
	printf("4'ün katý olan sayýlarýn toplamý    = %d\n",tp4);
	printf("5'in katý olan sayýlarýn ortalamasý = %5.2f\n",(float)tp5/adt5);
	printf("En büyük sayý                       = %d\n",eb);
	printf("En küçük sayý                       = %d\n",ek);
	
   	getch();
}
