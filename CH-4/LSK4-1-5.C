#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	clrscr();
	printf("type valu of X : ");
	scanf("%d",&x);
	printf("type valu of Y : ");
	scanf("%d",&y);
	printf("(X+Y)^3 : %d",(x*x*x)+(y*y*y)+(3*x*y)*(x-y));
	getch();
}