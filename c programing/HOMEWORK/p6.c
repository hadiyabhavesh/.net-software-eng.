#include<stdio.h>
main(){
	int i,j,k,n;
	n=3;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			printf("_");
		}
		for(k=0;k<2*i+1;k++){
			printf("*");
		}
		printf("\n");
	}
	n=2;
	for(i=0;i<n;i++){
		for(j=0;j<i+1;j++)
		printf("_");
		for(k=0;k<(2*(2-i))-1;k++){
		printf("*");
	}
		printf("\n");
}
}







