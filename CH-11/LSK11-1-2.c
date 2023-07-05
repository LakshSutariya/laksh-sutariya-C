#include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter x : ");
	scanf("%d",&x);
	printf("Enter y : ");
	scanf("%d",&y);
	int *ptr,*ptr2;
	z=x;
	x=y;
	y=z;
	ptr=x;
	ptr2=y;
	printf("X=%d\n",ptr);
	printf("Y=%d",ptr2);
}
