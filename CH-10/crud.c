#include<stdio.h>

int crud(int a[],int n){
	int choice;
	printf("Enter 1 To Insert In Array\n");
	printf("Enter 2 To Update In Array\n");
	printf("Enter 3 To Delete In Array\n");
	printf("Enter 4 To Display In Array\n");
	printf("Enter 5 To Exit !!\n");
	printf("Enter Your Choice :- \n");
	scanf("%d",&choice);

	switch(choice){
		case 1:
			ins(a,n);
			system("clear");
			break;
		case 2:
			upd(a,n);
			system("clear");
			break;
		case 3:
			n = min(a,n);
			system("clear");
			break;
		case 4:
			dis(a,n);
			system("clear");
			break;
		case 5:
			break;
		default:
			printf("Invalid Choice | Try Again !!");
			system("clear");
			break;	
	}
	return choice;

}
int ins(int a[],int n){
	int i,pos,val;

	printf("Enter Position :- ");
	scanf("%d",&pos);
	printf("Enter Value :- ");
	scanf("%d",&val);

	for(i=n;i>=pos;i--){
		a[i] = a[i-1]; 
	}
	a[pos] = val;
	n++;
	return n;
}
void upd(int a[],int n){
	int i,pos,val;

	printf("Enter Position :- ");
	scanf("%d",&pos);
	printf("Enter Value :- ");
	scanf("%d",&val);

	for(i=n;i>pos;i--){
		a[i+1] = a[i]; 
	}
	a[pos] = val;
	n++;
}
void dis(int a[],int n{
	int i;
	for(i=0;i<n;i++){
		printf("a[%d] :- %d\n",i,a[i]);
	}
}
int min(int a[],int n){
	int i,pos,val;
	printf("Enter Position :- ");
	scanf("%d",&pos);
	printf("Enter Value :- ");
	scanf("%d",&val);

	for(i=n;i>=pos;i--){
		a[i] = a[i-1]; 
	}
	n--;
	return n;
}

void arrayInp (int a[],int n){
	int i;

	for(i=0;i<n;i++){
		printf("Enter Element :- ");
		scanf("%d",&a[i]);
	}
}

void main(){
	int n,choice;
	printf("Enter Length Of Array :- ");
	scanf("%d",&n);

	int a[n];

	arrayInput(a,n);

	do{
		 choice = crud(a,n);
	}
	while(choice!=5);
}

