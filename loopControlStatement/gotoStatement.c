//goto statement just see where is label
//

#include<stdio.h>

int main() {
    int num,i=1;
    //multification table
    printf("enter a number whose table you want to print\n");
    scanf("%d", &num);
    table :
        printf("%d X %d = %d\n", num, i, num*i);
        i++;
    if(i<=10){
        goto table;
    }


}