#include<stdio.h>
main(){
	int a[7];
	int i,j;
	for(i=0;i<7;i++){
		printf("enter your %d value:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++){
		printf("\nday %d =",i+1);
			for(j=0;j<a[i];j++){
		printf("*");
	}
	printf("\n");
}
}
