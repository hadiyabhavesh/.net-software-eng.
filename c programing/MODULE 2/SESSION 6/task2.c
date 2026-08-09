#include<stdio.h>
main(){
	int choice;
	char addteam[50];
	for(;;){

	printf("choice 1 for view your favorite 3 ipl team");
	printf("\nchoice 2 for add new team");
	printf("\nchoice 3 for exit");
	printf("\nenter your choice:");
	scanf("\n%d",&choice);
	if(choice==1){
		printf("\nteam 1=Chennai Super Kings (CSK)");
		printf("\nteam 2=Gujarat Titans (GT)");
		printf("\nteam 3=Mumbai Indians (MI)");
		printf("\n");
}
	else if(choice==2){
		printf("\nenter a new tean:");
		scanf("\n%s",&addteam);
		printf("\nteam 1=Chennai Super Kings (CSK)");
		printf("\nteam 2=Gujarat Titans (GT)");
		printf("\nteam 3=Mumbai Indians (MI)");
		printf("\nnew team4=%s",addteam);
		printf("\n");
	}


	 else if(choice==3){
		printf("\nexit...");
		printf("\n");
		break;
	}
	else{
		printf("\nyour choice is wrong enter right choice");
		printf("\n");
	}
}
}
