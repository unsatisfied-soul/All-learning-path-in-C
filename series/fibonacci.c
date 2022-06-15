#include <stdio.h>

int main(){
    int numbValue,i,firstNumber=0,secondNumber=1,fibonacciNumber;
    printf("enter a number :");
    scanf("%d", &numbValue);
    printf("%d, %d,", firstNumber,secondNumber);
    for(i=0; i<=numbValue; i++){
        if(i==0)
        fibonacciNumber = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = fibonacciNumber;
        printf("%d,", fibonacciNumber);
    }
    return 0;
}