#include <stdio.h>

int main(){
    int num,row,col;
    printf("enter a number:");
    scanf("%d", &num);
    for(row=num;row>=1;row--){
        for(col=row;col>=1 ;col--){
            printf("%d",col);
        }
        printf("\n");
    }

}