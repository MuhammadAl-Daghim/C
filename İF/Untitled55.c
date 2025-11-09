#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
main() {
  
//    int s1,onbin,bler,yzle,onl,bile;
//    printf("5 Basamakli Sayi Giriniz :"); scanf("%d",&s1);
//    
//    onbin = s1/10000;
//    bler =(s1%10000)/1000;
//    yzle = (s1%1000)/100;
//    onl =  (s1%100)/10;
//    bile = (s1%10)/1;
//    printf("Sayiniz %d\n :",s1);
//    printf("onbin %d\n ",onbin);
//    printf("binler :%d\n",bler);
//    printf("yuzler:%d\n",yzle);
//    printf("onler :%d\n",onl);
//    printf("biirler : %d\n",bile);
//    printf("Toplam %d",onbin*10000+bler*1000+yzle*100+onl*10+bile*1);
      int s,i1,tp=0;
      printf("Bir Sayiniz Giriniz  : "); scanf("%d",&s);
      
   
      for(i1=1;i1<s;i1++)
      {
      
      	if(s%i1==0)
       {
       	printf("%d\n",i1);
       	tp=tp+i1;
	   }
      	
	  }
	   if(s==tp)
	   printf("mükmel sayi %d\n",s);
	   else
	   printf("degil %d",s);

}
