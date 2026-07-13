#include<stdio.h>
main(){
	int math,phy,chem,subtotal,total;
	printf("enter your mark math,phy,chem");
	scanf("%d %d %d",&math,&phy,&chem);
	if(math>65&&phy>55&&chem>50){
		subtotal=math+phy;
		total=math+phy+chem;
		if(subtotal>135||total>175){
			printf("\nyou are elligible");
		}
		else{
			printf("\nyou are not elligible inner");
		}
	}
	else {
		printf("\nyou are not elligible outer");
	}
}
