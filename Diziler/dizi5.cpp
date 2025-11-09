#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

main(void)

{
	//Satýr ve sütun sayýsý (en fazla 10) kullanýcý tarafýndan girilen bir matrise 10 ile 50 arasýnda ve 
	//5'in katý olan rastgele deðer atayan; sonrasýnda matrisi, satýr ve sütun toplamlarýný aþaðýdaki örnekteki gibi
	setlocale (LC_ALL, "Turkish");
	srand(time(NULL));
	int st,sn,i1,i2;
	printf("Satýr Sayýsýný Giriniz :"); scanf("%d",&st);
	printf("Sütun Sayýsýný Giriniz :"); scanf("%d",&sn);
	int s[st][sn];
	for (i1=0;i1<=(st-1);i1++)
	{		
		for (i2=0;i2<=(sn-1);i2++)
		{
			do
			{
				s[i1][i2]=rand()%41+10;
			} while (s[i1][i2]%5!=0);			
			printf(" %3d",s[i1][i2]);
		}
		printf("\n");
	}
	getch();
}
