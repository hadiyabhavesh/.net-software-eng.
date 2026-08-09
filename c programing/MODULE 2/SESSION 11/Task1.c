#include<stdio.h>
main(){
	int likes=1000;
	int *prtlikes;
	prtlikes=&likes;
	printf("likes=%d",likes);
	printf("\nprtlikes=%d",prtlikes);//addresss of likes.
	
}
