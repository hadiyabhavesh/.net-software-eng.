#include<stdio.h>
main(){
	int i=5;
	printf("entry control loop");
	while (i<5){
		printf("hello");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n--------------------------------------------------");
	printf("\nexit control loop");
	do{
		printf("\nhello");
	}while(i<5);
}
/*entry control loop=condition check entry time when condition is wrong then block of code not execute.
exit cotrol loop=condition check exit time when condition is wroung but block of code is one time execute.*/

