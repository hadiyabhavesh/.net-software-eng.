#include<stdio.h>
main(){
	int iplteam;
	printf("enter iplteam number:");
	scanf("%d",&iplteam);
	printf("\niplteam=%d",iplteam);
	if(iplteam==1){
		printf("\nChennai Super Kings");
		printf("\nWhistle Podu! Yellove is in the air, let’s roar!");
	}
	else if(iplteam==2){
		printf("\nMumbai Indians");
		printf("\nDuniya hila denge hum! One family, one roar, let’s make it four!");
	}
	else if(iplteam==3){
		printf("\nKolkata Knight Riders");
		printf("\nKorbo, Lorbo, Jeetbo Re! Ami KKR, let's claim the trophy!");
	}
	else if(iplteam==4){
		printf("\nRoyal Challengers Bengaluru");
		printf("\n Ee Sala Cup Namde! Play bold and bring the gold!");
	}
	else if(iplteam==5){
		printf("\nRajasthan Royals");
		printf(" \nHalla Bol! Show your royal pride and let the pink army ride!");
	}
	else if(iplteam==6){
		printf("\nDelhi Capitals");
		printf("\n Roar Macha! Dilli boys, let's dominate!");
	}
	else if(iplteam==7){
		printf("\nPunjab Kings");
		printf("\n Sadde naal tu vi nach! Put up a show and lets go!");
	}
	else if(iplteam==8){
		printf("\nSunrisers Hyderabad");
		printf("\nOrange Army, let’s fire up the stadium and orange the town!");
	}
	else if(iplteam==9){
		printf("\nLucknow Super Giants");
		printf("\nAb Apni Baari Hai! Show the grit and own the pitch!");
	}
	else if(iplteam==10){
		printf("\nGujarat Titans");
		printf("\nAava De! Roar with the champions and conquer the game!");
	}
	else {
		printf("\nteam not found");
	}
}
