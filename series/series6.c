#include<stdio.h>
#include<math.h>

int main(){
    int numbValue, i, sum=0;
    printf("enter a numer:");
    scanf("%d", &numbValue);
    for(i=1; i<= numbValue; i++){
        sum += pow(i,2);
        printf("%d^2 +", i);
    }
    printf("= %d", sum);
}