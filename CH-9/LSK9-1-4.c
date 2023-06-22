#include<stdio.h>

main(){
	char str1[40];
	int i;
	printf("enter your name : ");
	scanf("%[^\n]",&str1);
	for(i=0;i<40;i++){
		if(str1[i] == ' '){
			if(str1[i+1]>=97 && str1[i+1]<=122){
				str1[i+1] -=32;
			}
		}else{
			if(i==0){
				str1[i] -=32;
			}
		}
		
	}
	printf("name is : %s",str1);
}
