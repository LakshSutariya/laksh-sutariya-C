#include<conio.h>
#include<stdio.h>
main()
{
	int choice;
	clrscr();
	printf("1 for english\n");
	printf("2 for hindi\n");
	printf("3 for gujarati\n");
	printf("enter your choice : ");
	scanf("%d",&choice);
	printf("=============================================\n");
	switch(choice)
	{
		case 1:
			printf("1 for internet recharge\n");
			printf("2 for top-up recharge\n");
			printf("3 for special recharge\n");
			printf("enter your choice : ");
			scanf("%d",&choice);
			printf("======================================================\n");
			switch(choice)
			{
				case 1:
					printf("you have done internet recharge");
					break;
				case 2:
					printf("you have done top-up recharge");
					break;
				case 3:
					printf("you have done special recharge");
					break;
				default:
					printf("invit number");
					break;


			}
		break;
		case 2:
			printf("internet recharge ke liya 1\n");
			printf("top-up recharge ke liya 2\n");
			printf("special recharge ke liya 3\n");
			printf("enter your choice : ");
			scanf("%d",&choice);
			printf("====================================================================\n");
			switch(choice)
			{
				case 1:
					printf("aapne safaltapurvak internet recharge kar liya he");
					break;

				case 2:
					printf("aapne safaltapurvak top-up recharge kar liya he");
					break;
				case 3:
					printf("aapne safaltapurvak special recharge kar liya he");
					break;
				default:
					printf("invit number");
					break;


			}
		break;
		case 3:
			printf("internet recharge mate 1\n");
			printf("top-up recharge mate 2\n");
			printf("special rechargemate 3\n");
			printf("enter your choice : ");
			printf("===================================================================\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					printf("tame safaltapurvak internet recharge karyu chhe");
					break;
				case 2:
					printf("tame safaltapurvak top-up recharge karyu chhe");
					break;
				case 3:
					printf("tame safaltapurvak special recharge karyu chhe");
					break;
				default:
					printf("invit number");
					break;

			}
		break;


	}

	getch();
}