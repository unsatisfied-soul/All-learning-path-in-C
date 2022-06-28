#include <stdio.h>

int main(){
    int doubleArray[2][4]={{55,56,60,62},{2,5,6,9}},i,j;

    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("%d ",doubleArray[i][j]);
        }
        printf("\n");
    }
}