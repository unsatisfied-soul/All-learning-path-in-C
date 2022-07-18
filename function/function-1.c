#include<stdio.h>
int sum(int num1, int num2){
    return num1 + num2;
}
int main(){
    // printf("%d", sum(10,20)); //without scanf 

    int num1,num2;
    printf("enter two number : \n");
    scanf("%d %d", &num1,&num2);
    printf("%d\n",sum(num1,num2));

}