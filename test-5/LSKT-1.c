#include<stdio.h>

main()
{
	
	int n;
	printf("enter the array size = ");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("negetive elements ");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
		else
		{
			printf(" ");
		}
	}
}
