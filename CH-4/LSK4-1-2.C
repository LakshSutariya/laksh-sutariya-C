#include<stdio.h>
#include<conio.h>
main()
{
	int a ,b;
	clrscr();
	printf("type any valu of A: ");
	scanf("%d",&a);
	printf("type any valu of B: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("A:%d\nB:%d",a,b);
	getch();
}
