#include <stdio.h>

int main(){
    int number, sum=0, i=1;
    printf("enter last number :");
    scanf("%d", &number);
    while(i<=number){
        sum= sum+i;
        printf("%d +",i);
        i+=2;
    }
    printf("=%d", sum);
}