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
	if(a==b && b==c && c==a)
	{
		printf("all are min");
	}
	else if(a==b)
	{
		if(a>c)
		{
			printf("c is min");
		}
		else
		{
			printf("a and b is min");
		}
	}
		else if(b==c)
	{
		if(b>a)
		{
			printf("a is min");
		}
		else
		{
			printf("c and b is min");
		}
	}
		else if(a==c)
	{
		if(a>b)
		{
			printf("b is min");
		}
		else
		{
			printf("a and c is min");
		}
	}



	else if(a<b)
	{
		if(a<c)
		{
			printf("a is min");
		}
		else
		{
			printf("c is min");
		}
	}
	else
	{
		if(b<c)
		{
			printf("b is min");
		}
		else
		{
			printf("b is min");
		}
	}
	getch();

}