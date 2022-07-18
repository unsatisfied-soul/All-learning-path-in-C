#include <stdio.h>
double trianleArea(double base,double height){
    return 0.5*base*height;
}
int main(){
    double base,height;
    printf("enter base and height : \n");
    scanf("%lf \n",&base);
    scanf("%lf",&height);

    printf("Are is %.1lf",trianleArea(base,height));
}