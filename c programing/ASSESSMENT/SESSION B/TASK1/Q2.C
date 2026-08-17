#include<stdio.h>
main(){
	float mark;
	printf("enter the marks:");
	scanf("%f",&mark);
	printf("\nmark=%.2f",mark);
	if(mark>=90){
		printf("\nyour grade=A");
	}
	else if(mark>=75&&mark<90){
		printf("\nyour grade=B");
	}
	else if(mark>=60&&mark<75){
		printf("\nyour grade=C");
	}
	else if(mark>=45&&mark<60){
		printf("\nyour grade=D");
	}
	else if(mark<45){
		printf("\nyour grade=F");
	}
}
