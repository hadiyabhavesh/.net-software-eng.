#include<stdio.h>
main(){
	int likes,comments,shares;
	printf("enter youe likes:");
	scanf("%d",&likes);
	printf("\nyour likes=%d",likes);
	printf("\nenter your comments:");
	scanf("%d",&comments);
	printf("\nyoue comment=%d",comments);
	printf("\nenter your shares:");
	scanf("%d",&shares);
	printf("\nyour shares=%d",shares);
	if(likes>=1000||comments>=200&&shares>=50){
		printf("\ntending");
	}
	else{
		printf("\nnot tending");
	}
}
