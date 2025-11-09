#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

main(void)

{
	//50 elemanlý tek boyutlu bir diziye -100 ile 100 arasýnda rastgele deðer atayan, 
	//dizi elemanlarýný, pozitif ve nagatif olma durumunu yazan (pozitif ise +, negatif ise -), 
	//pozitif olanlarý ayrý bir diziye, negatif olanlarý ayrý bir diziye aktaran; 
	//sonrasýnda pozitif olanlarý tutan diziyi alt alta yazdýran; sonrasýnda negatif olanlarý tutan diziyi alt alta
	setlocale (LC_ALL, "Turkish");
	srand(time(NULL));
	int s[50], p[50], n[50], sP=-1, sN=-1, i1;
	for (i1=0;i1<=49;i1++)
	{
		s[i1]=rand()%201-100;
		if (s[i1]>=0)
		{
			sP++;
			p[sP]=s[i1];
			
		}			
		else
		{
			sN++;
			n[sN]=s[i1];			
		}
	}
	printf("Sýra Sayý Pozitif/Negatif\n");	
	printf("---- ---- ---------------\n");
	for (i1=0;i1<=49;i1++)
	{
		printf("%4d %4d",i1+1,s[i1]);
		if (s[i1]>=0)
			printf("               +\n");
		else
			printf("               -\n");
	}
	getch();
	printf("POZÝTÝFLER\n");
	printf("Sýra Sayý\n");	
	printf("---- ----\n");
	for (i1=0;i1<=sP;i1++)
	{
		printf("%4d %4d\n",i1+1,p[i1]);
	}
	getch();
	printf("NEGATÝFLER\n");
	printf("Sýra Sayý\n");	
	printf("---- ----\n");
	for (i1=0;i1<=sN;i1++)
	{
		printf("%4d %4d\n",i1+1,n[i1]);
	}
	getch();
}
