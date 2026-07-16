#include<stdio.h>
main(){
	int userage,totalvalue;
	printf("enter userage:");
	scanf("%d",&userage);
	printf("\nuserage=%d",userage);
	printf("\nenter totalvalue:");
	scanf("%d",&totalvalue);
	printf("\ntotalvalue=%d",totalvalue);
	if(userage>=18&&totalvalue>500){
		printf("\ntrue");
	}
	else{
		printf("\nfalse");
	}
}
