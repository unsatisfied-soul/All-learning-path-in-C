#include <stdio.h>

int main(){
    int i,num[4],sum=0;
    printf("enter five number \n");
    for(i=0;i<4;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<4;i++){
        sum= sum+num[i];
    }
    printf("%d d",sum);
}