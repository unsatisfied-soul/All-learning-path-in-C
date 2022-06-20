#include <stdio.h>

int main(){
    int num,row,col,k;
    printf("enter a number:");
    scanf("%d", &num);
    for(row=1;row<=num;row++){
        for(k=num; k>=row;k--){
            printf(" ");
        }
        for(col=1;col<=row;col++){
                printf("%d ",col);
        }
        printf("\n");
    }
   
}