#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	
   	setlocale(LC_ALL, "Turkish");
   	srand(time(NULL));
   
   	unsigned short int i1,i2,s[5],tmp;
   
   	for (i1=0;i1<=4;i1++)
   	{
	   s[i1]=rand()%51+20;
	   printf("%d. Sayý =%d\n",i1+1,s[i1]);
	}
	
	for(i1=0;i1<=3;i1++)
	{
		for (i2=i1+1;i2<=4;i2++)
		{
			if (s[i1]>s[i2])
			{
				tmp=s[i1];
				s[i1]=s[i2];
				s[i2]=tmp;
			}
		}		
	}
	
	for (i1=0;i1<=4;i1++)
   	{
	   printf("%d. Sayý =%d\n",i1+1,s[i1]);
	}
	
   	getch();
}
