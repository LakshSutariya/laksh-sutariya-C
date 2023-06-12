#include<stdio.h>
#include<conio.h>
main()
{
	int j,i;
	clrscr();
	for(i=41;i<=45;i++)
	{
		for(j=41;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();

}