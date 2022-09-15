#include<stdio.h>
void swapping(int *ptr1, int *ptr2){
     int temp;

     temp = *ptr1;
     *ptr1 = *ptr2;
      *ptr2 = temp;
}
int main(){
    int x = 20,y=10;
    swapping(&x,&y);
    printf("x value is %d y value is %d", x,y);
}