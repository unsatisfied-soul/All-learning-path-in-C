#include<stdio.h>

//warning 
void red (){
    printf("\033[1;31m");
}
//color reset
void reset() {
    printf("\033[0m");
}

int main(){
    int row,col,i,j,sum=0;
    red();
    printf("warning if you don't add row and column equal it doesn't print anything \n");
    reset();
    printf("print your row and column number\n");
    scanf("%d\n %d",&row,&col);

    int diagonalArray[row][col];

    //array value add
    printf("please add %d row %d column \n",row,col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d row %d col= ",i,j);
            scanf("%d",&diagonalArray[i][j]);
            printf("\n");
        }
    }

    //diagonal sum here
    for(i=0;i<row;i++){
        for(j=i;j==i;j++){
            sum+=diagonalArray[i][j];
        }
    }

     printf("\n %d",sum);


}