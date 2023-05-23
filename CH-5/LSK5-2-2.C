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



	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is big");
			}
			else
			{
				printf("d is big");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is big");
			}
			else
			{
				printf("d is big");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is big");
			}
			else
			{
				printf("d is big");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is big");
			}
			else
			{
				printf("d is big");
			}
		}

	}
	getch();

}