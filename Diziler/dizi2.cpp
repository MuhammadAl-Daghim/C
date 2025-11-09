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
	int vz[10],fnl[10], i1;
	for (i1=0;i1<=9;i1++)
	{
		/*printf("%.d Kiþinin Vize Notunu Giriniz :",i1+1);
		scanf("%d",&vz[i1]);
		printf("%.d Kiþinin Final Notunu Giriniz :",i1+1);
		scanf("%d",&fnl[i1]);*/
		vz[i1]=rand()%101;
		fnl[i1]=rand()%101;
	}
	printf("Sýra Vize Final Ortalama +Final +Ortalama Durum\n");	
	printf("---- ---- ----- -------- ------ --------- -----\n");
	for (i1=0;i1<=9;i1++)
	{
		printf("%4d %4d %5d %8.2f",i1+1,vz[i1],fnl[i1],vz[i1]*0.4+fnl[i1]*0.6);
		if (fnl[i1]>=50)
			printf("      +");
		else
			printf("      -");
		if ((vz[i1]*0.4+fnl[i1]*0.6)>=60)
			printf("         +");
		else
			printf("         -");
		if (fnl[i1]>=50 && (vz[i1]*0.4+fnl[i1]*0.6)>=60)
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
		if (fnl[i1]>=50 && (vz[i1]*0.4+fnl[i1]*0.6)>=60)
		{
			i2++;
			printf("%4d %4d %5d %8.2f",i2,vz[i1],fnl[i1],vz[i1]*0.4+fnl[i1]*0.6);
			if (fnl[i1]>=50)
				printf("      +");
			else
				printf("      -");
			if ((vz[i1]*0.4+fnl[i1]*0.6)>=60)
				printf("         +");
			else
				printf("         -");
			if (fnl[i1]>=50 && (vz[i1]*0.4+fnl[i1]*0.6)>=60)
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
		if (!(fnl[i1]>=50 && (vz[i1]*0.4+fnl[i1]*0.6)>=60))
		{
			i2++;
			printf("%4d %4d %5d %8.2f",i2,vz[i1],fnl[i1],vz[i1]*0.4+fnl[i1]*0.6);
			if (fnl[i1]>=50)
				printf("      +");
			else
				printf("      -");
			if ((vz[i1]*0.4+fnl[i1]*0.6)>=60)
				printf("         +");
			else
				printf("         -");
			if (fnl[i1]>=50 && (vz[i1]*0.4+fnl[i1]*0.6)>=60)
				printf("     +\n");
			else
				printf("     -\n");
		}
	}
	getch();
}
