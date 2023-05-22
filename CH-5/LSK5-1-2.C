#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("type any valu : ");
	scanf("%d",&a);
	if (a<0)
	{
		printf("negative");
	}
	else if (a>0)
	{
		printf("positive");
	}
	else
	{
		printf("netural");
	}
	getch();
}
