#include<stdio.h>
main(){
	int productprice,ismember;
	float discountpr,totalamount;
	printf("enter product price:");
	scanf("%d",&productprice);
	printf("\nproduct price=%d",productprice);
	printf("\nenter discount:");
	scanf("%f",&discountpr);
	printf("\ndiscount=%f",discountpr);
	printf("\nare you member?:");
	scanf("%d",&ismember);
	printf("are you member?=%d",ismember);
	if(ismember==1){
		discountpr=discountpr+5;
		
	}
	printf("\ntotaldiscontpr=%f",discountpr);
	totalamount=productprice-discountpr*productprice/100;
	printf("\ntotalamount=%f",totalamount);
}
