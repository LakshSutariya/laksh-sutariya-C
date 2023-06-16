#include<stdio.h>

main()
{
	int n1,n2;
	printf("Enter number 1: ");
	scanf("%d",&n1);
	printf("Enter number 2: ");
	scanf("%d",&n2);


	int a[n1],i,b[n2],c[i],m;

	for(i=0;i<n1;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}


	for(i=0;i<n2;i++)	
	{
		printf("Enter b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}

    for(i=0;i<n2;i++)
	{
		c[n1+n2]=b[i];
   }
   c[i+n1]=m;
	printf("%d, ",m);
}