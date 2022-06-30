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
    int row,col,i,j,sumUp=0,sumLow=0;
    red();
    printf("warning if you don't add row and column equal it doesn't print anything \n");
    reset();
    printf("print your row and column number\n");
    scanf("%d\n %d",&row,&col);

    int triangleArray[row][col];

    //array value add
    printf("please add %d row %d column \n",row,col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d row %d col= ",i,j);
            scanf("%d",&triangleArray[i][j]);
            printf("\n");
        }
    }

    //sumuppertriangle and lowertriangle

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(j>i){
                sumUp+=triangleArray[i][j];
            }else if(j<i){
                sumLow+=triangleArray[i][j];
            }else{
                sumUp+=0;
                sumLow+=0;
            }
        }
    }
    printf("%d \n",sumUp);
    printf("%d \n",sumLow);
}