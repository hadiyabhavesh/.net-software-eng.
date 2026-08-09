#include<stdio.h>
main(){
	float playlistrating[3][5]={{3.5 , 4 , 4.5 , 4.1 , 3.5},{4.7, 3.8, 2.4, 3.2, 4.2},{3.6, 4.3, 2.9, 3.6, 3}};
	int i;
	for(i=0;i<5;i++){
		printf("\nday %d=%.2f",i+1,playlistrating[1][i]);
	}
}
