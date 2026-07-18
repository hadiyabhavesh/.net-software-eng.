#include<stdio.h>
main(){
	char song[50];
	char song1[50]="GehraHua";
	char song2[50]="jaanseguzartehain";
	char song3[50]="phirse";
	printf("\nguess the song:");
	scanf("%s",&song);
		if(strcmp(song,song1)==0){
			printf("\nsong is gehra hua");
		}
			else if(strcmp(song,song2)==0){
				printf("\nsong is jaan se guzarte hain");
			}
			else if(strcmp(song,song3)==0){
				printf("\nsong is phir se");
			}
			else{
				printf("\nyour song is wrong");
				printf("\nguess the new song");
				scanf("%s",&song);
			}
	}
