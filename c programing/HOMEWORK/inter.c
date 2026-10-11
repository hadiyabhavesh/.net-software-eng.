#include<stdio.h>
main(){
	int num,i,sum=0;
	printf("enter a number:");
	scanf("%d",&num);
	while(num>0){
		sum=sum+num%10;
		num=num/10;
	}
	printf("sum=%d",sum);
}
