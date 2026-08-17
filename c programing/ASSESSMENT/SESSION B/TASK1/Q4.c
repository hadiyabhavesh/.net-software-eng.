#include<stdio.h>
main(){
	float mark;
	for(;;){
	printf("\n\n\nenter the marks:");
	scanf("%f",&mark);
	printf("\nmark=%.2f",mark);
	if(mark>0&&mark<100){
	if(mark>=90){
		printf("\nyour grade=A");
		printf("\nexcellent work!keep it up!");
		break;
	}
	else if(mark>=75&&mark<90){
		printf("\nyour grade=B");
		printf("\ngood work!keep pushing!");
		break;
	}
	else if(mark>=60&&mark<75){
		printf("\nyour grade=C");
		printf("\nnice effort!you can do even better!");
		break;
}
	else if(mark>=45&&mark<60){
		printf("\nyour grade=D");
		printf("\nkeep practicing!don't give up!");
		break;
	}
	else if(mark<45){
		printf("\nyour grade=F");
		printf("\ndon't worry!work harder and improve!");
	break;
	}
}
else{
	printf("\ninvalid mark! plz enter mark between 0 and 100");
}}
}
