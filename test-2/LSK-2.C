#include<stdio.h>
#include<conio.h>
main()
{
	float unit,bill,a;
	clrscr();
	printf("enter your unit : ");
	scanf("%f",&unit);
	if(unit<=50.0 && unit>=0.0)
	{
		bill=unit*0.5;
	}
	else if(unit<=150.0 && unit>50.0)
	{
		bill=(unit-50)*0.75+25;
	}
	else if(unit<=250.0 && unit>150.0)
	{
		bill=(unit-150)*1.2+100;
	}
	else if(unit>250.0)
	{
		bill=(unit-250)*1.5+220;
	}
	else
	{
		printf("invited unit");
	}
	a=bill*20/100+bill;
	printf("your bill is %f",a);
	getch();
}
