#include<stdio.h>
main()
{
	int r,c;
	printf("Enter number  of raw: ");
	scanf("%d",&r);
	printf("Enter number  of column: ");
	scanf("%d",&c);

	int a[r][c],i,j,sum=10;


	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			 printf("a[%d][%d]: ",i,j);
   			 scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];

		   	}
		   	else
		   	{
		   		printf(" ");
			}
		}
		printf("\n");	
	}
	printf(" The sum of diagonal elements:%d ",sum);
}