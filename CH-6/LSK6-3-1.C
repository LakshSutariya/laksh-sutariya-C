#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum = 0;
	clrscr();
	printf("enter ending point : ");
	scanf("%d",&n);
	for(i=0; i<=n; i++)
	{
		sum+=i;

	}
	printf("sum : %d",sum);
	getch();

}