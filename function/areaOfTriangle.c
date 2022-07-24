#include <stdio.h>
double trianleArea(double b,double h){
    return 0.5*b*h;
}
int main(){
    double base,height;
    printf("enter base and height : \n");
    scanf("%lf \n",&base);
    scanf("%lf",&height);

    printf("Are is %.1lf",trianleArea(base,height));
}