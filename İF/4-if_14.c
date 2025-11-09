#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    char ad[10],sad[10];
    int cns,vz,fnl;
    float ort;
    printf("Adýnýzý Giriniz\t\t: "); gets(ad);
    printf("Soyadýnýzý Giriniz\t: "); gets(sad);
    printf("Cinsiyetinizi Giriniz\t: "); scanf("%d",&cns);
    printf("Vize Notunuzu Giriniz\t: "); scanf("%d",&vz);
    printf("Final Notunuzu Giriniz\t: "); scanf("%d",&fnl);
    ort=vz*0.4+fnl*0.6;
    system("cls");
    printf("Adýnýz\t\t: %s\n",ad);
    printf("Soyadýnýz\t: %s\n",sad);
    if (cns==1)
       {
       printf("Cinsiyetiniz\t: Erkek\n");
       }
    else
       {
       printf("Cinsiyetiniz\t: Kadýn\n");
       }
    printf("Vize Notunuz\t: %d\n",vz);
    printf("Final Notunuz\t: %d\n",fnl);
    printf("Ortalamanýz\t: %5.2f\n",ort);
    if (ort>=60 && fnl>=50)
       {
       printf("Durumunuz\t: Geçti");
       }
    else
       {
       printf("Durumunuz\t: Kaldý");
       }
    getch();
    }
