#include<stdio.h>

int main(){
    int num = 10;

    int *point;
    point = &num;

    printf("%d \n", &num);
    printf("%d", *point);
    return 0;
}