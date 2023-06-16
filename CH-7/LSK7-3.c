#include<stdio.h>
#include<conio.h>
main()
{
	 int i,j,s;
	 clrscr();

	 for(i=5;i>=1;i--)
	 {
		for(s=1;s<=5-i;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	 }
		printf("\n");


	 getch();

}
