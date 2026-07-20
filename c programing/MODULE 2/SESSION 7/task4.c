#include<stdio.h>
main(){
	int i,j,n;
	n=4;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",(i+j)%2);
		}
		printf("\n");
	}
}
