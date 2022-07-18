#include <stdio.h>
int squireNum(int sqNum){
    return sqNum*sqNum;
}
int main(){
    int mainNumber;
    printf("enter a number : \n");
    scanf("%d", &mainNumber);

    printf("%d\n",squireNum(mainNumber));
}