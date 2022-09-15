#include <stdio.h>

int main(){
    int num1=10,num2=40,temp;
    int *ptr1,*ptr2;
    ptr1 = &num1;
    ptr2 = &num2;

    //swapping number
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("x value is %d\n", num1);
    printf("y value is %d\n", num2);

}