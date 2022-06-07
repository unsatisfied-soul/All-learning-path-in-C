#include<stdio.h>

int main(){
    int number,i,sum=0;
    printf("enter last number :");
    scanf("%d", &number);
    for(i=1; i<=number; i++){
        sum = sum+i;
        printf("%d +",i);
    }
    // for(i=100; i>=number; i-=5){
    //     sum = sum+i;
    //     printf("%d +",i);
    // }
    printf("=%d", sum);
}