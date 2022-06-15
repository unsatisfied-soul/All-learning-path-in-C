#include <stdio.h>

int main(){
    int numValue,i,sum=0;
    printf("enter a number value:");
    scanf("%d",&numValue);
    for(i=1; i<=numValue;i++){
        if(i%2 !=0 ){
            sum+=i;
            printf("%d -", i);
        }else{
            sum-=i;
            printf("%d +", i);
        }
    }
    printf("= %d",sum);
}