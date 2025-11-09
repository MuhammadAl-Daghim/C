#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL, "Turkish");
	int s[6],tp1=0;
	
	for (int i1=1;i1<=5;i1++)
	{
		printf("%d.Sayý Giriniz = ",i1);
		scanf("%d",&s[i1]);
		tp1=tp1+s[i1]; /*tp1+=s[i1];*/
	}
	printf("Sayýlarýn Toplamý = %d",tp1);
		
	getch();
}
