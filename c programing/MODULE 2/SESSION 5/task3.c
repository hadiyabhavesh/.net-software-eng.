#include<stdio.h>
main(){
	int totalcartamount;
	printf("enter your totalcartamount:");
	scanf("%d",&totalcartamount);
	printf("\ntotalcartamount=%d",totalcartamount);
	if(totalcartamount>2000){
		printf("\ndiscount 20%");
		totalcartamount=totalcartamount-20*totalcartamount/100;
		printf("\ntotalcartamont=%d",totalcartamount);
	}
	else if(totalcartamount>1000){
		printf("\ndiscount 10%");
		totalcartamount=totalcartamount-10*totalcartamount/100;
		printf("\ntotalcartamont=%d",totalcartamount);
	}
	else{
		printf("\nno discount");
		printf("\ntotalcartamount=%d",totalcartamount);
	}
	
}
