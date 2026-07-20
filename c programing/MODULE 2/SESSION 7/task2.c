#include<stdio.h>
main(){
	int i,j,k,n;
	printf("enter a numbre:");
	scanf("%d",&n);
	k=1;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d ",k);
		}
		printf("\n");
		k++;
	}
}
