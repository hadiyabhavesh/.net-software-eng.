#include<stdio.h>
main(){
	int a,b,c,d;
	printf("enter number of a:");
	scanf("%d",&a);
	printf("\na=%d",a);
	while(a!=0){
		b=a%10;
		c=(a/1000)%10;
		printf("\nb+c=%d",b+c);
		d=(a/10)%10;
		printf("\n3rd digit=%d",d);
		break;
	}
}
