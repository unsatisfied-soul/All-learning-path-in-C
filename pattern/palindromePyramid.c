#include <stdio.h>

int main(){
    int num,row,col,rowRev,colRev;
    printf("enter a number: ");
    scanf("%d",&num);

    //normal paindrome
    for(row=1;row<=num;row++){
        for(col=1;col<row;col++){
            printf("%d",col);
        }

        //reverse number
        for(colRev=row;colRev>=1;colRev--){
                printf("%d",colRev);
            }
        printf("\n");
    }
   
        
       
}