#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e;
	clrscr();
	printf("type valu of a : ");
	scanf("%d",&a);
	printf("type valu of b : ");
	scanf("%d",&b);
	printf("type valu of c : ");
	scanf("%d",&c);
	printf("type valu of d : ");
	scanf("%d",&d);
	printf("type valu of e : ");
	scanf("%d",&e);



	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("a is big");
				}
				else
				{
					printf("e is big");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is big");
				}
				else
				{
					printf("e is big");
				}
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("b is big");
				}
				else
				{
					printf("e is big");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is big");
				}
				else
				{
					printf("e is big");
				}
			}
		}
	}

	getch();

}