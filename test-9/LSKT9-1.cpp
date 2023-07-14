#include<stdio.h>
main(){
	FILE *e;
	FILE *o;
	int i;
	e=fopen("even.txt","a");
	o=fopen("odd.txt","a");
	for(i=50;i<=70;i++){
		if(i%2==0){
			fprintf(e,"%d,",i);
		}
		else
			fprintf(o,"%d,",i);
	}
}
