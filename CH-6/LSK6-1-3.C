#include<conio.h>
#include<stdio.h>
main()
{
	int i=1,n;
	clrscr();
	printf("enter any number : ");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
	getch();
}
