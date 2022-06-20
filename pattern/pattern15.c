#include <stdio.h>

int main(){
    int num,row,col;
    printf("enter a number:");
    scanf("%d", &num);
    for(row=1;row<=num;row++){
        for(col=1;col<=row;col++){
            if(row==1||row==2||row==5||col==1||col==row){
            printf("*");  
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}