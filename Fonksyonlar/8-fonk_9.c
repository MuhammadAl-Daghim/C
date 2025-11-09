#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int vz[10],fnl[10];

void topluKayitAtama()
{
	int i1;
	for (i1=0;i1<=9;i1++)
	{
		vz[i1]=rand()%71+30;
		fnl[i1]=rand()%101;
	}
}

void kayitDegistirme()
{
	int i1;
	printf("Kaçýncý Sýradaki Kiþinin Kaydýný Deðiþtirmek Ýstiyorsunuz = ");
	scanf("%d",&i1);
	printf("%d. Kiþinin Vize Notunu Giriniz [%d]  = ",i1,vz[i1-1]);
	scanf("%d",&vz[i1-1]);
	printf("%d. Kiþinin Final Notunu Giriniz [%d] = ",i1,fnl[i1-1]);
	scanf("%d",&fnl[i1-1]);
}

void kayitSilme()
{
	int i1,cvp;
	printf("Kaçýncý Sýradaki Kiþinin Kaydýný Silmek Ýstiyorsunuz = ");
	scanf("%d",&i1);
	printf("%d. Kiþinin Vize Notu  = %d\n",i1,vz[i1-1]);
	printf("%d. Kiþinin Final Notu = %d\n",i1,fnl[i1-1]);
	printf("Silmek Ýstediðinizden Emin misiniz? (1-Evet)");
	scanf("%d",&cvp);
	if (cvp==1)
	{
		vz[i1-1]=-1;
		fnl[i1-1]=-1;
	}
}

void vizeFinalDegistirme()
{
	int i1,tmp;
	printf("Kaçýncý Sýradaki Kiþinin Vize Final Notunu Deðiþtirmek Ýstiyorsunuz = ");
	scanf("%d",&i1);
	tmp=vz[i1-1];
	vz[i1-1]=fnl[i1-1];
	fnl[i1-1]=tmp;
}

void kayitGoruntuleme()
{
	int i1;
	printf("Kaçýncý Sýradaki Kiþinin Kaydýný Görüntüleme Ýstiyorsunuz = ");
	scanf("%d",&i1);
	printf("%d. Kiþinin Vize Notu  = %d\n",i1,vz[i1-1]);
	printf("%d. Kiþinin Final Notu = %d",i1,fnl[i1-1]);
}

void topluKayitGoruntuleme()
{
	int i1,sr=0;
	printf("SIRA VÝZE FÝNAL ORTALAMA DURUM\n");
	printf("---- ---- ----- -------- -----\n");
	for (i1=0;i1<=9;i1++)
	{
		if (vz[i1]>=0 && vz[i1]<=100)
		{
			sr++;
			float ort=vz[i1]*0.4+fnl[i1]*0.6;
			printf("%4d %4d %5d %8.2f ",sr,vz[i1],fnl[i1],ort);
			if (fnl[i1]>=50 && ort>=60)
				printf("GEÇTÝ\n");
			else
				printf("KALDI\n");
		}
	}
}

main(void)
{	
   	setlocale(LC_ALL, "Turkish");
   	srand(time(NULL));
   
   	int sec;
	do
	{
		system("cls");
		printf("1-Toplu Kayýt Atama\n");
		printf("2-Kayýt Deðiþtirme\n");		
		printf("3-Kayýt Silme\n");
		printf("4-Vize Final Deðiþtir\n");
		printf("5-Kayýt Görüntüleme\n");
		printf("6-Toplu Kayýt Görüntüleme\n");
		printf("7-Çýkýþ\n");
		printf("Seçiminiz (1,2,3,4,5,6,7)=");
		scanf("%d",&sec);
		if (sec==1)
			topluKayitAtama();
		else if (sec==2)
			kayitDegistirme();
		else if (sec==3)
			kayitSilme();
		else if (sec==4)
			vizeFinalDegistirme();
		else if (sec==5)
			kayitGoruntuleme();
		else if (sec==6)
			topluKayitGoruntuleme();
		if (sec>=2)
			getch();				
	} while (sec!=7);
}
