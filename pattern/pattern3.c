#include<stdio.h>

int main(){
    int num,col,row;
    printf("enter a number: ");
    scanf("%d", &num);
    for(row=1; row<=num; row++){
        for(col=1; col<=row; col++){
            if(col %2 !=0){
                printf("1");
            }else{
                printf("0");
            }
        }
        printf("\n");
    }
}