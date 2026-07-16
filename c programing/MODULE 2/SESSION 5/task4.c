#include<stdio.h>
main(){
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age>=18&&age<21){
		printf("eligible for driving license");
	}
	else if(age>=21 && age<25){
		printf("eligible for credit card");
	}
	else if(age>=25){
		printf("eligible for car rental");
	}
	else{
		printf("you are not eligible for driving license");
	}
}
