#include <stdio.h>

int main(){
    int num,row,col,k;
    printf("enter a number:");
    scanf("%d", &num);
    for(row=num;row>=1;row--){
        for(col=5;col>=1;col--){
            if(col==row||(col+row==num+1)){
                printf("*");
            }else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}