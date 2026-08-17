#include<stdio.h>
main(){
	int a[7];
	int i,highnum,j,temp;
	float davg=0;
	for(i=0;i<7;i++){
		printf("enter your %d value:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
	for(i=0;i<7;i++){
		davg=davg+a[i];
	}
	printf("\ndaily avg=%.2f",davg/7);
	for(i=0;i<7;i++){
		for(j=1;j<7;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nhighest value=%d",a[0]);
}
