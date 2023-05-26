#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("type valu of a : ");
	scanf("%d",&a);
	printf("type valu of b : ");
	scanf("%d",&b);
	printf("type valu of c : ");
	scanf("%d",&c);
	(a<b)
		?(a<c)
			?printf("a is min")
			:printf("c is min")
		:(b<c)
			?printf("b is min")
			:printf("c is min");
	getch();
}