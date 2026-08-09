#include <stdio.h>
void formatFollowersCount(float count){
    if (count >= 1000 && count < 1000000){
        printf("%.1fK", count / 1000.0);
    }
    else if (count >= 1000000){
        printf("%.1fM", count / 1000000.0);
    }
    else{
        printf("%d", count);
    }
}
int main(){
    float num;
    printf("enter your number:");
    scanf("%f",&num);
    formatFollowersCount(num);
    
}
