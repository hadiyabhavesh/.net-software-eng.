#include<stdio.h>
main(){
	int i,j,k,n;
	printf("enter your number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf(" ");
		
		}
			for(k=0;k<n;k++){
				printf("*");
			}
		printf("\n");
	}
}
