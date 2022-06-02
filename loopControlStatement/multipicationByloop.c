#include <stdio.h>

int main(){
    int num, i=1;
    printf("enter a number which are show table : \n");
    scanf("%d", &num);
    //for loop
    // for(i; i<=10; i++){
    //     printf("%d X %d = %d\n", num, i, num*i);
    // }

    //while loop
    while(i<=10){
        printf("%d X %d = %d\n", num, i, num*i);
        i++;
    }
}