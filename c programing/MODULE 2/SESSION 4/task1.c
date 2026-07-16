#include<stdio.h>
main(){
	int itemprice,quatity,totalbillamount;
	printf("enter itemprice:");
	scanf("%d",&itemprice);
	printf("\nitemprice=%d",itemprice);
	printf("\nenter quatity:");
	scanf("%d",&quatity);
	printf("\nquatity=%d",quatity);
	totalbillamount=itemprice*quatity;
	printf("\ntotalbillamount=%d",totalbillamount);
}
