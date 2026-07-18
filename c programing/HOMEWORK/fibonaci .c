#include<stdio.h>
main(){
	int x1=0,x2=1,sum,i;
	for(i=1;i<=10;i++){
		sum=x1+x2;
		printf("\n%d",sum);
		x1=x2;
		x2=sum;	
	}
}
