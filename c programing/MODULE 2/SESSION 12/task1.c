#include<stdio.h>
struct playlist{
	char title[100];
	char artist[100];
	float duration;
};
main(){
	struct playlist song={"tum hi ho","Arijit Singh",3.14};
	printf("playlist title song=%s",song.title);
	printf("\nsong artist=%s",song.artist);
	printf("\nsong duration=%.2f",song.duration);
}
