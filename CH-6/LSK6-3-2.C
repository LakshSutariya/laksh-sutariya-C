#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum = 1;
	clrscr();
	printf("enter ending point : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		sum =sum*i;

	}
	printf("mult : %d",sum);
	getch();

}