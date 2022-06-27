#include <stdio.h>

int main(){
    int arraValue[100],i,firstValue,secondValue,value,n,fibonacciValue=0;
    printf("how many value do you want to add? ");
    scanf("%d",&n);
    // printf("enter array number here: \n");
    // for(i=0; i<n;i++){
    //     scanf("%d", &arraValue[i]); 
    // }
    
    arraValue[0] =0;
    arraValue[1] = 1;
    for(i=2;i<n;i++){
        arraValue[i]= arraValue[i-1] + arraValue[i-2];
    }
    
    for(i=0;i<n;i++){
        printf("%d",arraValue[i]);
    }

}