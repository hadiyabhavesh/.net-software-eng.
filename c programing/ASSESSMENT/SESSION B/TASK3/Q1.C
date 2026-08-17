#include<stdio.h>
struct Student{
	char name[50];
	int rollno;
	float marks;
	char grade;
}; 
main(){
	Student s1;
	printf("\nenter your name,rollno,marks and grade:");
	scanf("%s %d %f %c",s1.name,&s1.rollno,&s1.marks,&s1.grade);
	printf("\nname=%s",s1.name);
	printf("\nrollno=%d",s1.rollno);
	printf("\nmarks=%f",s1.marks);
	printf("\ngrade=%c",s1.grade);
}
