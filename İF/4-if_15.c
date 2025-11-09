#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    
    int s1,s2,s3;
    
    printf("1.Sayýyý Giriniz="); scanf("%d",&s1);
    printf("2.Sayýyý Giriniz="); scanf("%d",&s2);
    printf("3.Sayýyý Giriniz="); scanf("%d",&s3);
    
    if (s1>=s2 && s1>=s3)
    	printf("En Büyük Sayý=%d",s1);
    else if (s2>=s3) //else if (s2>=s1 && s2>=s3)
    	printf("En Büyük Sayý=%d",s2);
    else //else if (s3>=s1 && s3>=s2)
    	printf("En Büyük Sayý=%d",s3);
    printf("\n\n");
	if (s1<=s2 && s1<=s3)
    	printf("En Küçük Sayý=%d",s1);
    else if (s2<=s3) //else if (s2<=s1 && s2<=s3)
    	printf("En Küçük Sayý=%d",s2);
    else //else if (s3<=s1 && s3<=s2)
    	printf("En Küçük Sayý=%d",s3);
    
    getch();
    }
