#include<stdio.h>
main(){
	int ch;
	printf("press 1 for breckfast");
	printf("\npress 2 for lunch");
	printf("\npress 3 for snack");
	printf("\npress 4 for dinner");
	printf("\nenter your choice");
	scanf("%d",&ch);
	printf("\nchoice=%d",ch);
	switch(ch){
		case 1:
		printf("\njalebi & fafda");
		break;
		case 2:
		printf("\ndal bhat sak rotli");
		break;
		case 3:
		printf("\npizza");
		case 4:
		printf("\nkhichdi");
		break;
		default:
		printf("\ntry some fruits");
	}
}
