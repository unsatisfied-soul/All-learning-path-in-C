#include <stdio.h>
int fabo(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    return fabo(n-1)+fabo(n-2);
}
int main(){
    printf("%d",fabo(6));
}