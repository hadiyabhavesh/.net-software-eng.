#include<stdio.h>
main(){
		int i,j,n;
	printf("enter your number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=n-i-1;j++){
			printf("* ");
		}
		printf("\n");
	}
}

