#include <stdio.h>

int main(){
    int num,row,col,k;
    printf("enter a number:");
    scanf("%d", &num);

    //increasing row
    for(row=1; row<num;row++){
        if(row%2==0){
            printf("");
        }else{
            for(k=num; k>row;k--){
                printf(" ");
            }
            for(col=1;col<=row;col++){
                printf("* ");
            }
        }
        printf("\n");
        
    }

    //decreasing row
    for(row=num;row>=1;row--){
        if(row%2==0){
            printf("");
        }else{
            for(k=1;k<=num-row;k++){
                printf(" ");
            }
             for(col=1;col<=row;col++){
                printf("* ");
            }
        }
        printf("\n");
    }
}