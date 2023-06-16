#include<stdio.h>

main()
{
	int n;
	printf("Enter Array size: ");
	scanf("%d",&n);

	int a[n],i;
	float sum=0,average;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
		sum+=a[i];
		average=sum/n;
	}

	printf("Average of 1D Array: %.2f",average);
}