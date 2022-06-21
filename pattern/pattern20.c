#include <stdio.h>

int main(){
    int num,row,col,k;
    printf("enter a number:");
    scanf("%d", &num);

    for(row=1;row<=num;row++){
        for(col=1;col<=row;col++){
            if(col==1||row==num||row==col){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}