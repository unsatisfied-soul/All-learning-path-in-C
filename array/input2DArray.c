#include <stdio.h>

int main(){
    int rowNumber,colNumber,i,j;

    printf("please enter first rowNumber and column Number :\n");
    scanf("%d \n", &rowNumber);
    scanf("%d", &colNumber);
    int doubleValue[rowNumber][colNumber];

    printf("please add %d row and %d column value\n",rowNumber,colNumber);
    for(i=0;i<rowNumber;i++){
        for(j=0;j<colNumber;j++){
            scanf("%d",&doubleValue[i][j]);
        }
        printf("\n");
    }

    printf("row column value is: \n");
    for(i=0;i<rowNumber;i++){
        printf("[");
        for(j=0;j<colNumber;j++){
            printf("%d ",doubleValue[i][j]);
        }
        printf("]\n");
    }
}