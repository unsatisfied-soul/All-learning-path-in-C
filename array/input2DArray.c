#include <stdio.h>

int main(){
    int doubleValue[20][20],rowNumber,colNumber,rowData,colData,i,j,rowDatapub,colDataPub;

    printf("please enter first rowNumber and column Number :\n");
    scanf("%d \n", &rowNumber);
    scanf("%d", &colNumber);

    printf("please add %d row and %d column value\n",rowNumber,colNumber);
    for(i=0;i<rowNumber;i++){
        for(j=0;j<colNumber;j++){
            scanf("%d",&doubleValue[i][j]);
        }
        printf("\n");
    }

    printf("row column value is: \n");
    for(rowDatapub=0;rowDatapub<rowNumber;rowDatapub++){
        for(colDataPub=0;colDataPub<colNumber;colDataPub++){
            printf("[%d ]",doubleValue[rowDatapub][colDataPub]);
        }
        printf("\n");
    }
}