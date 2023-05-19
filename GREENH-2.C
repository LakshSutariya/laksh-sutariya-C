#include<stdio.h>
#include<conio.h>
main()
{
	int salary;
	float HRA,DA,TA,Gsalary;
	clrscr();
	printf("type your salary : ");
	scanf("%d",&salary);
	HRA=salary*0.1;
	DA=salary*0.05;
	TA=salary*0.08;
	Gsalary=salary+HRA+DA+TA;
	printf("your gross salary is %f",Gsalary);
	getch();
}