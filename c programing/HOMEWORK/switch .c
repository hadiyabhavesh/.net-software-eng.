#include<stdio.h>
main(){
	int r,l,b,h,base,ch;
	float pie=3.14;
	printf("\npress 1 area find for circle:");
	printf("\npress 2 area find for rectangle:");
	printf("\npress 1 area find for tringle:");
	printf("\nenter your choice");
	scanf("%d",&ch);
	switch(ch){
		case 1:
		printf("\nenter r=");
		scanf("%d",&r);
		printf("\narea of circle=%f",(pie*r*r));
		break;
		
		case 2:
		printf("\nenter value of l and b");
		scanf("%d %d",&l,&b);
		printf("\narea of rectangle=%d",(l*b));
		break;
		
		case 3:
		printf("\nenter value of h and base");
		scanf("%d %d",&h,&base);
		printf("\narea for tringle=%f",((h*base)*0.5));
		break;
	}
	
}
