#include<stdio.h>
struct Expense{
	char category[30];
	float amount; 
};
main(){
	struct Expense s[10];
	int i=0,ch;
	printf("\npress 1 for add expence:");
	printf("\npress 2 for  View All Expenses:");
	printf("\nprsss 3 for Save & Exit.");

	for(;;){
	printf("\nenter your choice:");
	scanf("%d",&ch);
	if(ch==1){
		if(i<10){
		printf("\nenter day %d category and amount:",i);
		scanf("%s %f",s[i].category,&s[i].amount);
		i++;
		}
	}
	if(ch==2){
		int j;
		int total=0;
		for(j=0;j<i;j++){
		printf("\nday %d expense category= %s and amount=%f",j,s[j].category,s[j].amount);
		total += s[j].amount;
	}
	printf("\n\ntotal amount expence=%d",total);
	}
	if(ch==3){
		int i;
		FILE *fp = fopen("expenses.txt", "w");
            for (i = 0; i < 10; i++) {
        	fprintf(fp, "%s,%.2f\n",s[i].category,s[i].amount);
            }
        fclose(fp);
        printf("Expenses saved to expenses.txt\n");
        printf("Program exited.\n");
		break;
	}
	if(ch>3){
		printf("\nenter right number and number is between 1,2,3 only...");
	}
}
}

