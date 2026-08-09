#include<stdio.h>
void increbyref(int *flw1){
	*flw1=*flw1+1;
}
void increbyval(int flw2){
	flw2++;
}
main(){
	int flw1=1000;
	increbyref(&flw1);
	printf("\nflower after ref incre=%d",flw1);
	int flw2=1000;
	increbyval(flw2);
	printf("\nflower after ref incre=%d",flw2);
	
}
