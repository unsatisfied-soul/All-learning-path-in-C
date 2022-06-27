#include <stdio.h>

int main(){
    int array1[5]={20,21,54,55,21},array2[5],i,j;
    for(i=0;i<5;i++){
        // printf("%d",array1[i]);
        array2[i]=array1[i];
        printf("%d ",array2[i]);
    }
}