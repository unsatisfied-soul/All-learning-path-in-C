#include<stdio.h>
int main(){
    int n,i;
    printf("enter a number:");
    scanf("%d", &n);
    // for(i=1; i<=n;i++){
    //     printf("%d, ",i);
    // }

    // for(i=1; i<=n;i++){
    //     if(i%2 ==0){
    //         printf("%d ", i);
    //     }
    // }

    for(i=1; i<=n;i++){
        if(i%2 !=0){
            printf("%d ", i);
        }
    }
}