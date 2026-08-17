#include<stdio.h>
main(){
	float a[7];
	int i;
	for(i=0;i<7;i++){
		printf("enter your %d value:",i);
		scanf("%f",&a[i]);
	}
	for(i=0;i<7;i++){
		printf("\na[%d]=%.2f",i,a[i]);
	}
}
