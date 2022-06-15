#include <stdio.h>

int main(){
    double numValue,i,sum=0;

    printf("enter a float number: ");
    scanf("%lf", &numValue);
    for(i=1.5; i<=numValue; i++){
        sum+= i;
        printf("%.1lf +", i);
    }
    printf("= %.1lf", sum);

}