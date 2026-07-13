#include<stdio.h>
main(){
	int age;
	printf("enter your age");
	scanf("%d",&age);
	if(age<18 && age >0){
		printf("school guy");
	}
	else if(age<25 && age>18){
		printf("college guy");
	}
	else if(age<60 && age>25){
		printf("guy doing job");
	}
	else if(age>60){
		printf("guy is retired");
	}
	else{
		printf("guy is not born");
	}
}
