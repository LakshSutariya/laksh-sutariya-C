#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("enter table number : ");
	scanf("%d",&n);

	for(i=1; i<=10; i++)

	{

		printf("\t|%d|\t*\t|%d|\t=\t|%d|\t",n,i,n*i);
	}

	getch();

}