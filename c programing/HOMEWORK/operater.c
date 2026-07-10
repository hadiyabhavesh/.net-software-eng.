#include<stdio.h>
main(){
	int a,b,c;
	float div;
	printf("enter the number:");
	scanf("%d %d",&a,&b);
	printf("\na+b=%d",a+b);
	printf("\na-b=%d",a-b);
	printf("\na*b=%d",a*b);
	div=a/b;
	printf("\na/b=%f",div);
	printf("\na%b=%d",a%b);
	printf("\na>b=%d",a>b);
	printf("\na<b=%d",a<b);
	printf("\na==b=%d",a==b);
	printf("\na>=b=%d",a>=b);
	printf("\na<=b=%d",a<=b);
	printf("\na!=b=%d",a!=b);
	a=5;
	a++;
	printf("\na=%d",a);
	a=10;
	a--;
	printf("\na=%d",a);
	printf("\n(5>3)&&(5!=3)=%d",5>3 && 5!=3);
	printf("\n(5>3)||(5<=3)=%d",5>3 || 5<=3);
}

