#include <stdio.h>

int main(){
    int num1=0,num2=1,i=1,multiply=1,value,sum=0;
    printf("enter a number :");
    scanf("%d", &value);
    for(i=1; i<=value; i++){
        num1++;
        num2 ++;
        multiply= num1 * num2;
        printf("%d * %d +",num1,num2);
        sum+=multiply;
    }
    printf("=%d",sum);
}