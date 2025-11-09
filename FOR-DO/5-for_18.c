#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int i1,tp=0,adt=0;
    for (i1=1;i1<=10;i1++)
        {
        if (i1%3==0)
           {
           tp=tp+i1; /*+i1 denilirse sayýnýn kendisi toplanýr*/
           adt=adt+1; /*+1 denilirse sayý 1 arttýrýlýr, yani sayma iþlemi yapar*/
           }
        }
    printf("3'ün Katý Olanlarýn Toplamý 	:%d\n",tp);
    printf("3'ün Katý Olanlarýn Adedi   	:%d\n",adt);
    printf("3'ün Katý Olanlarýn Ortalamasý	:%5.2f\n",(float)tp/adt);
    getch();
    }
