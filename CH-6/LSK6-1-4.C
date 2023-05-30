#include<conio.h>
#include<stdio.h>
main()
{
	int i=1,n;
	clrscr();

	printf("enter any valu : ");
	scanf("%d",&n);


	while(i<=n)
	{
		if(n%2==1)
		{
			printf("%d ",n);
		}
		n--;
	}
	getch();
}
