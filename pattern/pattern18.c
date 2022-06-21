#include <stdio.h>

int main(){
    int num,row,col,k;
    printf("enter a number:");
    scanf("%d", &num);
    for(row=1; row<=num; row++){
        //space create
        for(k=num;k>=row;k--){
            printf(" ");
        }
        //increment row column value pass
        for(col=1; col<row;col++){
            printf("%d",col);
        }
        printf("\n");
    }

    for(row=num;row>=1;row--){
        for(k=1;k<=num-row;k++){
            printf(" ");
        }
        //decrement row value
        for(col=1;col<=row;col++){
            printf("%d",col);
        }
        printf("\n");
    }
}