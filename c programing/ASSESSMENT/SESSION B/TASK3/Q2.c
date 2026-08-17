#include<stdio.h>
struct Student{
	char name[50];
	int rollno;
	float mark;
	char grade;
}; 
 void assignGrade(struct Student s1){
 		if(s1.mark>=90){
		printf("\nyour grade=A");
		printf("\nexcellent work!keep it up!");
	}
	else if(s1.mark>=75&&s1.mark<90){
		printf("\nyour grade=B");
		printf("\ngood work!keep pushing!");
	}
	else if(s1.mark>=60&&s1.mark<75){
		printf("\nyour grade=C");
		printf("\nnice effort!you can do even better!");
	}
	else if(s1.mark>=45&&s1.mark<60){
		printf("\nyour grade=D");
		printf("\nkeep practicing!don't give up!");
	}
	else if(s1.mark<45){
		printf("\nyour grade=F");
		printf("\ndon't worry!work harder and improve!");
	}
 }
main(){
	struct Student s1;
	printf("\nenter your name,rollno,marks and grade:");
	scanf("%s %d %f", s1.name,&s1.rollno,&s1.mark);
	printf("\nname=%s",s1.name);
	printf("\nrollno=%d",s1.rollno);
	printf("\nmarks=%f",s1.mark);
	assignGrade(s1);
}

