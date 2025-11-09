#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	  int fur,virg,ser;
      printf("fatura Fiyati Giriniz : ");
      scanf("%d",&fur);
      printf("Servic Mektari Giriniz :");
      scanf("%d",&ser);
      printf("Virgi Mektari Giriniz : ");
      scanf("%d",&virg);
      fur = ser * .10;
      fur = fur * 0.16;
      
      printf("Fatura Toplama %d",fur );
	
}

