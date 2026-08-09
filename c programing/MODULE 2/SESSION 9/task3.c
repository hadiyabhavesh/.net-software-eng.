#include<stdio.h>
float aveamount(int order[],int n){
	int i;
	float sum=0;
	for(i=0;i<n;i++){
		sum=sum+order[i];
	}
	sum=sum/n;
	return sum;
}
main(){
	int n,i;
	int order[n];
	printf("enter a number:");
	scanf("\n%d",&n);
	for(i=0;i<n;i++){
		printf("\norder[%d]=",i);
		scanf("\n%d",&order[i]);	
	}
	printf("average of all element=%.3f",aveamount(order,n));
}
