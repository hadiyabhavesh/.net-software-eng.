#include<stdio.h>
main(){
	int num,i,digit,min=0,max=9;
	printf("enter a number:");
	scanf("%d",&num);
	while(num>0){
		digit=num%10;
		if(digit>min){
			min=digit;
		}
		if(digit<max){
			max=digit;
		}
		num=num/10;
}
printf("max=%d",min);
printf("min=%d",max);
}
