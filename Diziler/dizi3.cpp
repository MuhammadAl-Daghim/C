#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

main(void)

{
	//Kullanýcýdan 5 kiþi için vize, final notu alan; sonrasýnda vize, final, ortalama ve sonuç bilgilerini yazdýran;
	//sonrasýnda geçen öðrencilerin listesini; sonrasýnda ise kalan öðrencilerin listesini ekrana yazdýran kodu yazýnýz.
	setlocale (LC_ALL, "Turkish");
	srand(time(NULL));
	int nt[10][2], i1;
	for (i1=0;i1<=9;i1++)
	{
		/*printf("%.d Kiþinin Vize Notunu Giriniz :",i1+1);
		scanf("%d",&vz[i1]);
		printf("%.d Kiþinin Final Notunu Giriniz :",i1+1);
		scanf("%d",&nt[i1][1]);*/
		nt[i1][0]=rand()%101;
		nt[i1][1]=rand()%101;
	}
	printf("Sýra Vize Final Ortalama +Final +Ortalama Durum\n");	
	printf("---- ---- ----- -------- ------ --------- -----\n");
	for (i1=0;i1<=9;i1++)
	{
		printf("%4d %4d %5d %8.2f",i1+1,nt[i1][0],nt[i1][1],nt[i1][0]*0.4+nt[i1][1]*0.6);
		if (nt[i1][1]>=50)
			printf("      +");
		else
			printf("      -");
		if ((nt[i1][0]*0.4+nt[i1][1]*0.6)>=60)
			printf("         +");
		else
			printf("         -");
		if (nt[i1][1]>=50 && (nt[i1][0]*0.4+nt[i1][1]*0.6)>=60)
			printf("     +\n");
		else
			printf("     -\n");
	}
	getch();
	printf("GEÇENLERÝN LÝSTESÝ\n");
	printf("Sýra Vize Final Ortalama +Final +Ortalama Durum\n");	
	printf("---- ---- ----- -------- ------ --------- -----\n");
	int i2=0;
	for (i1=0;i1<=9;i1++)
	{
		if (nt[i1][1]>=50 && (nt[i1][0]*0.4+nt[i1][1]*0.6)>=60)
		{
			i2++;
			printf("%4d %4d %5d %8.2f",i2,nt[i1][0],nt[i1][1],nt[i1][0]*0.4+nt[i1][1]*0.6);
			if (nt[i1][1]>=50)
				printf("      +");
			else
				printf("      -");
			if ((nt[i1][0]*0.4+nt[i1][1]*0.6)>=60)
				printf("         +");
			else
				printf("         -");
			if (nt[i1][1]>=50 && (nt[i1][0]*0.4+nt[i1][1]*0.6)>=60)
				printf("     +\n");
			else
				printf("     -\n");
		}
	}
	getch();
	printf("KALAN LÝSTESÝ\n");
	printf("Sýra Vize Final Ortalama +Final +Ortalama Durum\n");	
	printf("---- ---- ----- -------- ------ --------- -----\n");
	i2=0;
	for (i1=0;i1<=9;i1++)
	{
		if (!(nt[i1][1]>=50 && (nt[i1][0]*0.4+nt[i1][1]*0.6)>=60))
		{
			i2++;
			printf("%4d %4d %5d %8.2f",i2,nt[i1][0],nt[i1][1],nt[i1][0]*0.4+nt[i1][1]*0.6);
			if (nt[i1][1]>=50)
				printf("      +");
			else
				printf("      -");
			if ((nt[i1][0]*0.4+nt[i1][1]*0.6)>=60)
				printf("         +");
			else
				printf("         -");
			if (nt[i1][1]>=50 && (nt[i1][0]*0.4+nt[i1][1]*0.6)>=60)
				printf("     +\n");
			else
				printf("     -\n");
		}
	}
	getch();
}
