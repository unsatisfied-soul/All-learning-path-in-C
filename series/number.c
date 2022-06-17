#include <stdio.h>

int main(){
    float A,B,result;
    float sum;
    scanf("%f %f", &A, &B);
    sum = (A + B);
    result = sum / 2;
    printf("%.5f", result);
}