#include<conio.h>
#include<stdio.h>
main()
{
	char i='a';
	clrscr();
	do
	{
		if(i%4==1)
		{
			printf("%c ",i);
		}
		i++;

	}while(i<='z');
	getch();
}


