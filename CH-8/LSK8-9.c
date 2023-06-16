#include<stdio.h>

main()
{
	int n,i,a[i],choice,v,p;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:- ",i);
		scanf("%d",&a[i]);				
	}

	printf("Enter 1 for Insert\n");
	printf("Enter 2 for Read\n");
	printf("Enter 3 for Update\n");
	printf("Enter 4 for Deleat\n");
	printf("Enter your choice:-");
    scanf("%d",&
	choice);
	switch(choice)
	{
		case 1:
		{
		 	 printf("enter your position:- ");
	 		 scanf("%d",&p);
			 printf("enter your value:- ");
		 	 scanf("%d",&v);
			 if(n>=p)
			 { 
			 printf("your insret is :-a[%d] = %d ",p,v);
			 break;
			 }
			 printf("Array a:-a[%d]",i);
		} 
		case 2:
		{

		}	
		case 3:		
		{		
			 printf("enter your position:- ");
	 		 scanf("%d",&p);
			 printf("enter your value:- ");
		 	 scanf("%d",&v);
			 p=p-1; 
			 printf("your insret is :-a[%d] = %d ",p,v);

		}
	}
}