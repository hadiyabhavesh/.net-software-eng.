#include<stdio.h>
main(){
	int amount[5]={354,234,635,872,374};
	int *ptramount;
	int i;
	for(i=0;i<5;i++){
		ptramount=&amount[i];
		printf("each amount memory address:amountaddress[%d]=%p",i,*ptramount);
		printf("\n");
	}
}
