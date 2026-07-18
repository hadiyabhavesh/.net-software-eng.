#include<stdio.h>
main(){
	int i,j,k,n;
	printf("enter your number:");
	scanf("%d",&n);
	//top triagle//
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			printf("_");
		}
		printf("*");
		if(i!=0){
			for(k=0;k<(2*i-1);k++){
				printf("_");
			}
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<i+1;j++){
			printf("_");
		}
		printf("*");
		if(i!=n-2){
			for(j=0;j<2*(n-i-2)-1;j++){
				printf("_");
			}
			printf("*");
		}
		printf("\n");
	}
		
}
