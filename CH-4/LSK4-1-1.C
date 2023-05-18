#include<stdio.h>
#include<conio.h>
main()
{
	int a ,b ,c;
	clrscr();
	printf("type any valu of A: ");
	scanf("%d",&a);
	printf("type any valu of B: ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("A:%d\nB:%d",a,b);
	getch();
}
