#include<stdio.h>
void main(){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			if((j==1&&i<=5)||(j==9&&i>=5)||(i==5&&j>=2&&j<=8)||(j==5&&i>=2&&i<=8)||(i==1&&j>=5)||(i==9&&j<=5)||((i==3||i==7)&&(j==3))||((i==3||i==7)&&(j==7))){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}	
}
