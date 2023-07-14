#include<stdio.h>
#include<string.h>
struct st{
	 int rn;
	 char name[10];
	 int c;
	 int m;
	 int p;
	 float per;

};
void main(){
	FILE *ma;
	int i;
	ma=fopen("marks.text","w");
	struct st a[5];
	for(i=0;i<5;i++){
		printf("Enter details of Student %d\n",i+1);
		printf("enter roll_no ");
		scanf("%d",&a[i].rn);
		printf("enter name ");
		scanf("%s",&a[i].name);
		printf("enter chemistry marks ");
		scanf("%d",&a[i].c);
		printf("enter physic marks ");
		scanf("%d",&a[i].p);
		printf("enter maths marks ");
		scanf("%d",&a[i].m);
		a[i].per=(a[i].c+a[i].m+a[i].p)/3;
	}
	fprintf(ma,"Roll no\tname\tchemistry\tphysic\tmaths\tpercentage\n");
	for(i=0;i<5;i++){
		fprintf(ma,"%d\t%s\t%d\t\t%d\t%d\t%f\t \n",a[i].rn,a[i].name,a[i].c,a[i].p,a[i].m,a[i].per);
	}
	fclose(ma);
}
