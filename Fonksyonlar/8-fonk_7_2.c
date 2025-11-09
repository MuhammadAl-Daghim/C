//fGiris; dikdödrtgenin kenar uzunluklarý alýnsýn
//fAlan; alan hesaplanýp yazýlsýn
//fCevre; çevre hesaplansýn ve sonuç mainDe yazýlsýn
#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int ks, uz;

void fGiris();
void fAlan();
int fCevre();

main(void)
{
	setlocale(LC_ALL, "Turkish");
	fGiris();
	fAlan();
	printf("Çevre = %d\n",fCevre());
	getch();
}

void fGiris()
{
   printf("Kýsa kenarý giriniz : ");
   scanf("%d",&ks);
   printf("Uzun kenarý giriniz : ");
   scanf("%d",&uz);
}

void fAlan()
{
   printf("Alan = %d\n",ks*uz);
}

int fCevre()
{
   return 2*(ks+uz);
}
