#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int i1,sonuc=0; /*sonuc=0 yapýlmasýnýn sebebi 0'ýn toplamaya göre etkisiz olmasýndandýr*/
    for (i1=1;i1<=10;i1++)
        sonuc=sonuc=i1;
    printf("Sonuç      :%d",sonuc);
    getch();
    }
