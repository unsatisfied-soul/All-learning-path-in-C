#include <stdio.h>

int main(){
    int row,col,i,j;
    printf("enter row and column number : \n");
    scanf("%d\n %d",&row,&col);

    int arrayValue[row][col], transpose[row][col];

    //value add here
    printf("please add %d row %d column \n",row,col);

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arrayValue[i][j]);
        }
        printf("\n");
    }

    //print array value

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            transpose[j][i]=arrayValue[i][j];
        }
        printf("\n");
    }

    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}