#include<stdio.h>
int case1(int a,int b){
	return a+b;
}
int case2(int a,int b){
	return a-b;
}
int case3(int a,int b){
	return a*b;
}
float case4(int a,int b){
	return (float)a/b;
}
int case5(int a,int b){
	return a%b;
}
int main(){
	int N1,N2,m,choice,ans;
	m:
	while(1){
		printf("press 1 for +\n");
		printf("press 2 for -\n");
		printf("press 3 for *\n");
		printf("press 4 for /\n");
		printf("press 5 for %\n");
		printf("press 6 for end\n");
		printf("enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter A : ");
				scanf("%d",&N1);
				printf("enter B : ");
				scanf("%d",&N2);
				printf("%d\n",case1(N1,N2));
				break;
				goto m;
			case 2:
				printf("enter A : ");
				scanf("%d",&N1);
				printf("enter B : ");
				scanf("%d",&N2);
				printf("%d\n",case2(N1,N2));
				break;
				goto m;
			case 3:
				printf("enter A : ");
				scanf("%d",&N1);
				printf("enter B : ");
				scanf("%d",&N2);
				printf("%d\n",case3(N1,N2));
				break;
				goto m;
			case 4:
				printf("enter A : ");
				scanf("%d",&N1);
				printf("enter B : ");
				scanf("%d",&N2);
				if (N2 != 0){
         	           printf("Result: %.2f\n", case4(N1, N2));
         	  	 }
          	      else{
         	           printf("Error: Cannot divide by zero\n");
          	 	 }
				break;
				goto m;
			case 5:
				printf("enter A : ");
				scanf("%d",&N1);
				printf("enter B : ");
				scanf("%d",&N2);
				printf("%d\n",case5(N1,N2));
				break;
				goto m;
			case 6:
				break;
			default:
      	   		printf("ice! Please try again.\n");	
       			break;
       	}
       	printf("\n");
	}
	return 0;
}
