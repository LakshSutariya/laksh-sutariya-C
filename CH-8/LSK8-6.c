#include<stdio.h>
main()
{
	int r,c;
	printf("Enter number  of raw: ");
	scanf("%d",&r);
	printf("Enter number  of column: ");
	scanf("%d",&c);

	int a[r][c],i,j,b[r][c],sum=0;


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
			 printf("b[%d][%d]: ",i,j);
   			 scanf("%d",&b[i][j]);
		}

	}

  	for(i=0;i<r;i++)
  	{
  		for(j=0;j<c;j++)
  		{
  			sum=a[i][j]+b[i][j]; 
  			printf(" %d ",sum);
		}printf("\n");
    }
}