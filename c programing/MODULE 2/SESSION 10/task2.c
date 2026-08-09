#include<stdio.h>
#include<string.h>
main(){
	char user1[50],user2[50];
	printf("enter username1=");
	scanf("%s",user1);
	printf("\nenter username2=");
	scanf("%s",user2);
	if(strcmp(user1,user2)==0){
		printf("both username is same change username.");
	}
	else{
		printf("both username is different. ");
	}
}
