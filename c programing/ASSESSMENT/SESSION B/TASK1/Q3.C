#include<stdio.h>
main(){
	float mark;
	printf("enter the marks:");
	scanf("%f",&mark);
	printf("\nmark=%.2f",mark);
	if(mark>=90){
		printf("\nyour grade=A");
		printf("\nexcellent work!keep it up!");
	}
	else if(mark>=75&&mark<90){
		printf("\nyour grade=B");
		printf("\ngood work!keep pushing!");
	}
	else if(mark>=60&&mark<75){
		printf("\nyour grade=C");
		printf("\nnice effort!you can do even better!");
	}
	else if(mark>=45&&mark<60){
		printf("\nyour grade=D");
		printf("\nkeep practicing!don't give up!");
	}
	else if(mark<45){
		printf("\nyour grade=F");
		printf("\ndon't worry!work harder and improve!");
	}
}
