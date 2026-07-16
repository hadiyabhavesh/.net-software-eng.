#include<stdio.h>
main(){
	char foodname[20];
	float price;
	float finalprice;
	printf("enter a foodname:");
	scanf("\n%s",&foodname);
	printf("\nfoodname=%s",foodname);
	printf("\nenter a food price:");
	scanf("\n%f",&price);
	printf("food price=%f",price);
	finalprice=price+price*18/100;
	printf("\nfinalprice=%f",finalprice);
}
