#include<stdio.h>
void main(){
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	int a[n],i;
	int *ptr;
	ptr=a;
	for(i=0;i<n;i++){
		printf("Enter a[%d] : ",i);
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++){
		printf("a[%d] : %d\n",i,*(ptr+i)**(ptr+i));
	}
}
