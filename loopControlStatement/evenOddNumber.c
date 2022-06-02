#include <stdio.h>

int main(){
    int number;
    //even
    for(number=2; number<=100;number+=2){
        printf("%d\n", number);
    }
    //odd
    for(number=1; number<=100;number+=2){
        printf("%d\n", number);
    }
}