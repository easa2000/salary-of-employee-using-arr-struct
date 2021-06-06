#include<stdio.h>
struct emp{
	char names[20];
	int id;
	int bpay,allow,ded,npay;
};
void main(){
	struct emp e[10];
	int n,i;
	printf("\nEnter the number of details you enter: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter Employee %d details.\n",i+1);
		printf("\nEnter Employee name:");
		scanf("%s",e[i].names);
		printf("\nEnter Employee ID: ");
		scanf("%d",&e[i].id);
		printf("\nEnter the Balance pay, Allowance, Deduction:");
		scanf("%d %d %d",&e[i].bpay,&e[i].allow,&e[i].ded);
		e[i].npay = e[i].bpay + e[i].allow - e[i].ded;
	}
	
	for(i=0;i<n;i++){
		printf("\nEmployee of %d details.",i+1);
		printf("\nEmployee name : %s",e[i].names);
		printf("\nEmployee ID : %d",e[i].id);
		printf("\nEmployee Salary : %d",e[i].npay);
	}
}
