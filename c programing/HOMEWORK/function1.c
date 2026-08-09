#include<stdio.h>
/*int factorial(int n){
	1
	if(n== 1){
		return 1;
	}
	return n*factorial(n-1);
}
main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("factorial of %d=%d",n,factorial(n));*/
	
	main(){
		int fact=1,num,i;
		printf("enter a number:");
		scanf("%d",&num);
		for(i=1;i<=num;i++){
			fact=i*fact;
		}
		
		printf("factorial=%d",fact);
	}
