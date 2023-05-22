#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("type your marks : ");
	scanf("%d",&a);
	if (a>=90 && a<=100)
	{
		printf("A1");
	}
	else if (a>=89 && a<=80)
	{
		printf("A2");
	}
	else if (a>=79 && a<=34)
	{
		printf("PASS");
	}
	else if (a>=33 && a<=0)
	{
		printf("FAIL");
	}
	else
	{
		printf("INVALIDE MARKS");
	}


	getch();
}
