#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int karesi(int s) {return s*s;}
float yarisi(int s) {return (float)s/2;}
int faktoriyel(int s) 
{
	int f=1,i1;
    for (i1=s;i1>=1;i1--)
	  	f=f*i1;
	return f;
}

int asalMi(int s) 
{
	int i1;
	for (i1=2;i1<=(s-1); i1++)
	{
    	if (s%i1==0)
			return 0;
	}
	return 1;
}
int mukemmelMi(int s) 
{
	int tp=0,i1; //8		
    for (i1=1;i1<=(s-1); i1++)
	{
    	if (s%i1==0) tp=tp+i1;
	}
	return tp;
}

main(void)

{
	setlocale (LC_ALL, "Turkish");
	srand(time(NULL));
	int s[10], i1, min=100, mak=0;
	printf("Sýra Sayý Karesi Yarýsý Faktöriyel Asal? Mükemmel?\n");
	for (i1=0;i1<=9;i1++)
	{
		s[i1]=rand()%10+1; //1 ile 10 arasý
	    printf("%4d %4d %6d %6.2f ",i1+1,s[i1],s[i1]*s[i1],(float)s[i1]/2);
		printf("%10d",faktoriyel(s[i1]));
		
    	if(asalMi(s[i1])==1) printf("     +");
		else printf("     -");		
    	
		if(s[i1]==mukemmelMi(s[i1])) printf("         +\n");
		else printf("         -\n");
	}
	printf("Girilen Sayýlardan En Küçük Olan %d'dir.\n", min);
	printf("Girilen Sayýlardan En Büyük Olan %d'dir.\n", mak); 
	getch();
}
