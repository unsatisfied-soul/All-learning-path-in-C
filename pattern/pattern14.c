#include <stdio.h>

int main(){
    int num,row,col;
    printf("enter a number:");
    scanf("%d", &num);
    for(row=1;row<=num;row++){
        for(col=1;col<=num;col++){
            if(row==1||col==1||row==5||col==5){
            printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}