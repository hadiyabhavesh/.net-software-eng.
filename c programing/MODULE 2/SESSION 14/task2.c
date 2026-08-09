#include <stdio.h>
int isEven(int num){

    if (num % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int result,n;
    printf("enter your number:");
    scanf("%d",&n);
    result = isEven(n);
    printf("%d\n", result);
}
