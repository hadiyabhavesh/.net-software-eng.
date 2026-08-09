#include<stdio.h>
struct product{
	char pname[20];
	float price;
	int qty;
}p[3];
void addtocart(struct product p1){
	printf("\n your cart item:\n");
	printf("\n %s %f",p1.pname,p1.price);
}
main(){
	int i,choice;
	for(i=0;i<3;i++){
		printf("\nenter product details");
	scanf("%s %f %d",p[i].pname,&p[i].price,&p[i].qty);
	}
	
	for(i=0;i<3;i++){
	printf("\n enter %d for",i+1);
	printf("\t %s %f ",p[i].pname,p[i].price);
}
printf("\n enter your choice witch product want to buy");
scanf("%d",&choice);
addtocart(p[choice -1]);
}

