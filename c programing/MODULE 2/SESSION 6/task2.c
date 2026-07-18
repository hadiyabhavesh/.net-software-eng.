#include<stdio.h>
main(){
	int choice;
	printf("choice 1 for view your favorite 3 ipl team");
	printf("\nchoice 2 for add new team");
	printf("\nchoice 3 for exit");
	printf("\nenter your choice:");
	scanf("%d",&choice);
	if(choice==1){
		printf("\nteam 1=Chennai Super Kings (CSK)");
		printf("\nteam 2=Gujarat Titans (GT)");
		printf("\nteam 3=Mumbai Indians (MI)");
	}
	else if(choice==2){
		printf("\nteam 1=Chennai Super Kings (CSK)");
		printf("\nteam 2=Gujarat Titans (GT)");
		printf("\nteam 3=Mumbai Indians (MI)");
		printf("\nteam 4=Kolkata Knight Riders (KKR)");
	}
	else if(choice==3){
		printf("\nexit...");
	}
	else{
		printf("\nyour choice is wrong enter right choice");
	}
	
}
