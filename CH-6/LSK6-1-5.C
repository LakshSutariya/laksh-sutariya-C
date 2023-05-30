#include<conio.h>
#include<stdio.h>
main()
{
	int i,n;
	clrscr();
	printf("enter start year : ");
	scanf("%d",&i);
	printf("enter end year : ");
	scanf("%d",&n);


	while(i<=n)
	{
		if(i%4==0)
		{
			printf("%d ",i);
		}
		i++;
	}
	getch();
}
