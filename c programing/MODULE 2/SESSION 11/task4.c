#include <stdio.h>

void incrementFollowers(int *followers, int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        *(followers + i) = *(followers + i) + 100;
    }
}
int main(){
    int followers[5] = {459,637,628,752,246};
	int i;
    incrementFollowers(followers, 5);

    printf("Updated follower counts:\n");

    for (i = 0; i < 5; i++){
        printf("%d\n", followers[i]);
    }
}
