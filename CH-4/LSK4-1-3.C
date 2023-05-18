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
	printf("(X+Y)^2 : %d",(x*x)+(y*y)+(2*x*y));
	getch();
}