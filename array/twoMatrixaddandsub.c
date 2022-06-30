#include <stdio.h>

int main(){
    int firstrowNum,secondrowNum,firstColNum,secondColNum,row,col;
    printf("enter row and col number that you want :\n");
    scanf("%d\n",&firstrowNum);
    scanf("%d\n",&firstColNum);
    scanf("%d\n",&secondrowNum);
    scanf("%d",&secondColNum);
    int firstArry[firstrowNum][firstColNum],secondArray[secondrowNum][secondColNum];
    printf("%d",firstArry[firstrowNum][firstColNum]);
    //here add first array value
    printf("please add first %d row and %d column value\n",firstrowNum,firstColNum);
    for(row=0;row<firstrowNum;row++){
        for(col=0;col<firstColNum;col++){
            scanf("%d",&firstArry[row][col]);
        }
        printf("\n");
    }

    //here add second array value

    printf("please add second %d row and %d column value\n",secondrowNum,secondColNum);
    for(row=0;row<secondrowNum;row++){
        for(col=0;col<secondColNum;col++){
            scanf("%d",&secondArray[row][col]);
        }
        printf("\n");
    }

    //addition two array
    //also substration

    printf("addition two array value is: \n");
    for(row=0;row<firstrowNum && row<secondrowNum ;row++){
        printf("[");
        for(col=0;col<firstColNum && col<secondColNum;col++){
            printf("%d ",firstArry[row][col]+secondArray[row][col]);
        }
        printf("]\n");
    }
}