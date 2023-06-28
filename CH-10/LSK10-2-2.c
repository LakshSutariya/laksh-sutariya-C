#include<stdio.h>
int strlen(char*str){
	int len=0;
	while (*str!='\0'){
		len++;
		str++;
	}
	return len;
}
int main(){
	char str[100];
	printf("enter the string : ");
	scanf("%[^\n]%*c",str);
	int len=strlen(str);
	printf("length of name is %d",len);
	return 0;
}
