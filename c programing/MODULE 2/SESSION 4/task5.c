#include<stdio.h>
main(){
	int a=10;
	printf("initial value of a=%d",a);
	printf("\npre increment value=%d",++a);
	printf("\nintial value of a=%d",a);
	printf("\npost increment value=%d",a++);
}

/*
++count=increases the value first,then uses it.
count++=uses the current value first,then increases it.*/
