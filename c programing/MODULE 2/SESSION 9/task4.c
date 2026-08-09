#include <stdio.h>

int main()
{
    int cricketscores[3][2] = {{180, 175},{210, 195},{165, 170}};
    printf("highest cricket score: ");
	if(cricketscores[0][0]<cricketscores[0][1]){
		printf("\nmatch 1 highest score=%d",cricketscores[0][1]);
	}
	else{
		printf("\nmatch 1 highest score=%d",cricketscores[0][0]);
	}
		if(cricketscores[1][0]<cricketscores[1][1]){
		printf("\nmatch 2 highest score=%d",cricketscores[1][1]);
	}
	else{
		printf("\nmatch 2 highest score=%d",cricketscores[1][0]);
	}
		if(cricketscores[2][0]<cricketscores[2][1]){
		printf("\nmatch 3 highest score=%d",cricketscores[2][1]);
	}
	else{
		printf("\nmatch 3 highest score=%d",cricketscores[2][0]);
	}
}
