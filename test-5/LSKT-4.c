#include<stdio.h>

main()
{
	
	int r,c;
	printf("enter the row = ");
	scanf("%d",&r);
	printf("enter the column = ");
	scanf("%d",&c);
	
	int a[r][c],i,j,row,col,sum,sum2;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter Row Number :- ");
	scanf("%d",&row);
	
	printf("Elements Of %d Row :- ",row);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i == row)
			{
					printf("%d",a[i][j]);
					sum += a[i][j];
			}
		}
	}
	
	printf("Sum Of %d Row Is :- %d",row,sum);	
	
	printf("Enter Columm Number :- ");
	scanf("%d",&col);
	
	printf("Elements Of %d Column :- ",col);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j == col)
			{
					printf("%d",a[i][j]);
					sum2 += a[i][j];
			}
		}
	}
	printf("Sum Of %d Columm Is :- %d",col,sum2);
}
