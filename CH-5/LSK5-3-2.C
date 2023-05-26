#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	printf("type valu of a : ");
	scanf("%d",&a);
	printf("type valu of b : ");
	scanf("%d",&b);
	printf("type valu of c : ");
	scanf("%d",&c);
	printf("type valu of d : ");
	scanf("%d",&d);
	(a>b)
		?(a>c)
			?(a>d)
				?printf("a is max")
				:printf("d is max")
			:(c>d)
				?printf("c is max")
				:printf("d is max")
		:(b>c)
			?(b>d)
				?printf("b is max")
				:printf("d is max")
			:(c>d)
				?printf("c is max")
				:printf("d is max");

	getch();
}