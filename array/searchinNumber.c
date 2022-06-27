#include<stdio.h>

int main(){
    int numValue,i,array[100],n;

    printf("how many value want to add ? \n");
    scanf("%d",&n);

    printf("please add %d value in array",n);

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    printf("what number do you want to searching?");
    scanf("%d",&numValue);

    for(i=0;i<n;i++){
        if(array[i]==numValue){
            printf("your %d value have %d index",numValue,i);
        }
    }

}