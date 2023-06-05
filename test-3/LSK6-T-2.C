#include<stdio.h>
#include<conio.h>
main()
{
	int a,c=0;
	clrscr();
	printf("type any valu : ");
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		c++;
	}
	printf("total number of digits is %d",c);
	getch();
}



