#include <stdio.h>

int main(){
    int num,row,col,k;
    printf("enter a number:");
    scanf("%d", &num);
    for(row=1;row<=num;row++){
        for(col=1;col<=row;col++){
            printf("%d",col);
        }
        for(col=num;col>=row;col--){
            printf("%d",col);
        }
        printf("\n");
    }
    
}