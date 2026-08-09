#include<stdio.h>
#include<string.h>
getUserInitials(){
	int i;
	char userfullname[50];
	fgets(userfullname,sizeof(userfullname),stdin);
	strupr(userfullname);
	for(i=0;userfullname[i] !='\0';i++){
	if(userfullname[i]==' '){
		printf("\nuserfullname[0]=%c",userfullname[0]);
		printf("\nuserfullname[i]=%c",userfullname[i+1]);
		printf("\n%c%c",userfullname[0],userfullname[i+1]);
	}
	}
}
main(){
	printf("\nenter your name=");
	
	getUserInitials();
}
