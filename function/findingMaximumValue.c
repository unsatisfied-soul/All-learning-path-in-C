#include <stdio.h>
void maxNum(int x[]){
    int i = 0;
    
    for(i; i<5;i++){
        if(x[0]<x[i]){
            x[0]= x[i];
        }
    }
    printf("maximum number is %d", x[0]);
}

int main(){
    int num[]={15,16,45,10,14};
    maxNum(num);
}