#include<stdio.h>
main(){
	int num,rem,sum=0;
	printf("enter youe number:");
	scanf("%d",&num);
	printf("\nyour number is =%d",num);
	while(num!=0){
		rem=num%10;
		sum=sum+rem;
		printf("\nrem=%d",rem);//
		num=num/10;
		printf("\n num=%d",num);
	}
		printf("sum=%d",sum);
}
