#include<stdio.h>

main(){
	char str1[20];
	int i;
	printf("enter your name : ");
	scanf("%[^\n]",&str1);
	for(i=0;i<40;i++){
		if(str1[i]>=97 && str1[i]<=122){
			str1[i] -=32;
		}
		else if(str1[i]>=65 && str1[i]<=90){
			str1[i] +=32;
		}
	}
	printf("name is : %s",str1);
}
