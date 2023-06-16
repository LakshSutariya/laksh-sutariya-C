#include<stdio.h>

main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	int a[n],i,b[n],sum=0;
	printf("\n\n");
		printf("Enter array A's elements\n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
		printf("\n\n");
		printf("Enter array B's elements\n");
		for(i=0;i<n;i++)

	{
		printf("Enter b[%d]: ",i);
		scanf("%d",&b[i]);

    }
    printf("\n\n");
    printf("Array C is:");
    for(i=0;i<n;i++)
	{
		sum=a[i]+b[i];
	printf(" %d, ",sum);
   }
}