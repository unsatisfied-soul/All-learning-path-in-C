#include <stdio.h>

int main(){
    int n,i,num[100],sum=0;
    printf("enter how many number you want :\n");
    scanf("%d",&n);
    printf("enter %d number :",n);
    int maxMini = num[0];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    //maximum value
    for(i=1;i<n;i++){
        if(num[i]>maxMini){
            printf("maximum number is %d",num[i]);
        }
    }

    //minimum value

    for(i=1;i<n;i++){
        if(num[i]<maxMini){
            printf("minimum number is %d",num[i]);
            
        }
    }
}