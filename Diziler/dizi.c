#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{	
   	setlocale(LC_ALL, "Turkish");
   	srand(time(NULL));
   	int st, sn;
   	printf("Satýr Sayýsýný Giriniz :"); scanf("%d",&st);
   	printf("Sütun Sayýsýný Giriniz :"); scanf("%d",&sn);
   	int a[st][sn], b[st][sn],i1,i2;
   	for (i1=0;i1<=(st-1);i1++) //Matrisler oluþturuluyor
   	{
   	   for (i2=0;i2<=(sn-1);i2++)
   	   {
   	      a[i1][i2]=rand()%20+1; //5-17 arasý için örnek: rand()%13+5
   	      b[i1][i2]=rand()%20+1;
   	   }
   	}
   	printf("A MATRÝSÝ:\n");
	for (i1=0;i1<=(st-1);i1++) //A matrisi yazdýrýlýyor
   	{
   	   for (i2=0;i2<=(sn-1);i2++)
   	   {
   	      printf("%4d",a[i1][i2]);
   	   }
   	   printf("\n");
   	}
   	printf("B MATRÝSÝ:\n");
	for (i1=0;i1<=(st-1);i1++) //A matrisi yazdýrýlýyor
   	{
   	   for (i2=0;i2<=(sn-1);i2++)
   	   {
   	      printf("%4d",b[i1][i2]);
   	   }
   	   printf("\n");
   	}
   	
   	printf("TOPLAM MATRÝSÝ:\n");
	for (i1=0;i1<=(st-1);i1++) //A matrisi yazdýrýlýyor
   	{
   	   for (i2=0;i2<=(sn-1);i2++)
   	   {
   	      printf("%4d",a[i1][i2]+b[i1][i2]);
   	   }
   	   printf("\n");
   	}
   	int syc=0,aSyc[st],aStn[sn];
   	for (i2=0;i2<=(sn-1);i2++)
   	   aStn[i2]=0;
   	printf("KARÞILAÞTIRMA MATRÝSÝ:\n");
	for (i1=0;i1<=(st-1);i1++) //A matrisi yazdýrýlýyor
   	{
   	   aSyc[i1]=0;
   	   for (i2=0;i2<=(sn-1);i2++)
   	   {
   	      if (a[i1][i2]>=b[i1][i2])
   	      {
   	         printf("  +");
   	         aSyc[i1]++;
   	         aStn[i2]++;
   	         syc++;
   	      }
   	      else
   	         printf("  -");
   	   }
   	   printf("   aSyc[%d] =%d\n",i1,aSyc[i1]);
   	}
   	for (i2=0;i2<=(sn-1);i2++)
   	{
   	   printf("%3d",aStn[i2]);
   	}
   	printf("\n\n+ Sayacý : %d\n",syc);
   	printf("- Sayacý : %d\n",st*sn-syc);
	getch();
}
