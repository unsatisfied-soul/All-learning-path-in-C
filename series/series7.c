#include <stdio.h>

int main(){
    int numValue,i;
    float sum =1.0;
    printf("enter a numer:");
    scanf("%d", &numValue);
    for(i=1; i<=numValue; i++){
        sum+= (1/i);
        if(i==1){
            printf("1 +");
        }else{
            printf("1/%d + ", i);
        }
        
    }
    printf("=%.1f", sum);
}