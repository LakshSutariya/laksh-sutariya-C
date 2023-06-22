#include<stdio.h>
main(){
	char i,pass[20],u=0,s=0,d=0,l=0,length ;
	printf("create your password: ");
	gets(pass);

	length=strlen(pass);

	for(i=0;i<length;i++){
		if(pass[i]>=65 && pass[i]<=90){
			u++;
		}
		else if(pass[i]>=97 && pass[i]<=122){
			l++;
		}
		else if(pass[i]>=48 && pass[i]<=57){
			d++;
		}

		else{
			s++;
		}
	}

	if(u>0 && d>0 && s>0 && l>0 &&length>=6){
		printf("your password is strong..");
	}
	else{
		printf("your password is not strong..");
	}
}
