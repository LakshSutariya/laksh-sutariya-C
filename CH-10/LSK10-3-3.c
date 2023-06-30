#include<stdio.h>
int ara(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d ",&a[i]);
	}
}
int sum(int a[],int n){
	int i,sum=0;
	if(n>0){
		for(i=0;i<n;i++){
			sum+=a[i];
		}
		return sum;
	}
	else{
		return 0;
	}
}
int bara(int b[],int n,int a[],int r){
	int i;
	for(i=0;i<n;i++){
		b[i]=a[i]+sum(a,i);
	}
}
void main(){
	int n,i;
	printf("enter ending point : ");
	scanf("%d",&n);
	int a[n],b[n];
	ara(a,n);
	bara(b,n,a,n);
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}
