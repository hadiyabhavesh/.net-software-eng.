#include<stdio.h>
struct Expense{
	char category[30];
	float amount; 
};
main(){
	struct Expense s[10];
	int i;
	for(i=0;i<10;i++){
		printf("\nenter day %d category and amount:",i+1);
		scanf("%s %f",s[i].category,&s[i].amount);
	}
	for(i=0;i<10;i++){
		printf("\nday %d expense category= %s and amount=%f",i,s[i].category,s[i].amount);
	}
}
