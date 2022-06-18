#include<stdio.h>

int main(){
    int num,row,col;
    printf("enter a number:");
    scanf("%d",&num);
    for(row=num; row>=1; row--){
        for(col=1; col<=row; col++){
            printf("%c", col+64);
        }
        printf("\n");
    }
}