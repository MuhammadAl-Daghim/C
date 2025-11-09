#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	
   	setlocale(LC_ALL, "Turkish");
   	srand(time(NULL));
   
   	unsigned short int i1,vz[5],fnl[5];
   
   	for (i1=0;i1<=1;i1++)
   	{
   		printf("%d. Kiþinin Vize Notunu Giriniz  = ",i1+1);
   		scanf("%d",&vz[i1]);
   		printf("%d. Kiþinin Final Notunu Giriniz = ",i1+1);
   		scanf("%d",&fnl[i1]);
   	}
	system("cls");
	printf("SIRA  VÝZE  FÝNAL  ORTALAMA  DURUM  F O = S\n");
	printf("----  ----  -----  --------  -----  -------\n");
	for(i1=0;i1<=1;i1++)
	{
		printf("%4d  %4d  %5d  %8.2f",i1+1,vz[i1],fnl[i1],vz[i1]*0.4+fnl[i1]*0.6);
		if (fnl[i1]>=50 && (vz[i1]*0.4+fnl[i1]*0.6)>=60)
			printf("  GEÇTÝ");
		else
			printf("  KALDI");
		if (fnl[i1]>=50)
			printf("  +");
		else
			printf("  -");
			
		if ((vz[i1]*0.4+fnl[i1]*0.6)>=60)
			printf(" +");
		else
			printf(" -");
		if (fnl[i1]>=50 && (vz[i1]*0.4+fnl[i1]*0.6)>=60)
			printf(" = +\n");
		else
			printf(" = -\n");
	}	
   	getch();
}
