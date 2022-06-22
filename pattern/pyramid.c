#include <stdio.h>

int main(){
    int num,row,col,k;
    printf("enter a number:");
    scanf("%d", &num);

    //hollow inverted half pyramid
    // for(row=num;row>=1;row--){
    //     for(col=1;col<=row;col++){
    //         if(row==num||col==1||row==col){
    //             printf("*");
    //         }else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }


    //full pyramid
    // for(row=1;row<=num;row++){
    //before space decreasing
    //     for(k=num;k>=row;k--){
    //         printf(" ");
    //     }

    //star printed and after space
    //     for(col=1;col<row;col++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    
    // for(row=num;row>=1;row--){
        //before space increasing
    //     for(k=1;k<=num-row;k++){
    //         printf(" ");
    //     }
    //     for(col=1;col<=row;col++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    //hollow full pyramid
    for(row=1;row<=num;row++){
    // before space decreasing
        for(k=num;k>row;k--){
            printf(" ");
        }

    // star printed and after space
        for(col=1;col<=row;col++){
            if(row==num||col==1) printf("* ");
            else if(col==row) {
                for(k=1;k<(col*2-5);k++){
                    printf(" ");
                }
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }

}