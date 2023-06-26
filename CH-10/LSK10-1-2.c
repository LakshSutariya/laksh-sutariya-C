#include<stdio.h>
void D(){
	int a;
	printf("enter any number : ");
	scanf("%d",&a);
	if(a%3==0){
		if(a%5==0){
			printf("%d is divisible by 5&3",a);
		}
	}else{
		printf("%d is not divisible by 5&3",a);
	}		
}
void main(){
	D();
}
