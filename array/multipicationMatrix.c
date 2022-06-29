#include <stdio.h>

int main(){
    int rowNumber,colNumber,row,col,sum=0,loopThrough;

    printf("enter row and column number : \n");
    scanf("%d\n",&rowNumber);
    scanf("%d",&colNumber);

    int firstArray[rowNumber][colNumber],secondArray[rowNumber][colNumber];

    //first array data add here

    printf("Add %d row and %d column value in first array",rowNumber,colNumber);

    for(row=0;row<rowNumber;row++){
        for(col=0;col<colNumber;col++){
            scanf("%d",&firstArray[row][col]);
        }
        printf("\n");
    }

    //second array data add here

    printf("Add %d row and %d column value in second array",rowNumber,colNumber);

    for(row=0;row<rowNumber;row++){
        for(col=0;col<colNumber;col++){
            scanf("%d",&secondArray[row][col]);
        }
        printf("\n");
    }

    int newArray[rowNumber][colNumber];
    //multipication array
    int defaultValue=0;
    for(loopThrough=0;loopThrough<(rowNumber);loopThrough++){
        for(row=0;row<rowNumber;row++){
            for(col=0;col<colNumber;col++){
                sum += firstArray[row][col]*secondArray[col][defaultValue];
            }
            printf("%d ",sum);
            sum=0;
            printf("\n");
        }
        defaultValue++;
    }
    

}