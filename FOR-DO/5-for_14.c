#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int tbn,us,i1,sonuc=1; /*sonuc=1 yap�lmas�n�n sebebi 1'in �arpmaya g�re etkisiz olmas�ndand�r*/
    printf("Taban� Giriniz    :"); scanf("%d",&tbn);
    printf("�ss� Giriniz      :"); scanf("%d",&us);
    for (i1=1;i1<=us;i1++)
        {
        sonuc=sonuc*tbn;
        }
    printf("Sonu�      :%d",sonuc);
    getch();
    }
    
