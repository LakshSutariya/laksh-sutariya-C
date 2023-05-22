#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("type any valu of A : ");
	scanf("%d",&a);
	printf("type any valu of B : ");
	scanf("%d",&b);
	if (a<=b)
	{
		printf("the minimum valu is %d",a);
	}
	else
	{
		printf("the minimum valu is %d",b);
	}
	getch();
}
