#include<stdio.h>
main()
{
	int r=5,c=5;

	int a[r][c],i,j,b[r][c],e[i][j];


	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			 printf("a[%d][%d]: ",i,j);
   			 scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n\n");
	printf("-------------------");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==0||j==0||i==4||j==4)
			{
			 printf("%d ",a[i][j]);
		   	}
		   	else
		   	{
		   		printf(" ");
			}
		}
		printf("\n");

	}
}
