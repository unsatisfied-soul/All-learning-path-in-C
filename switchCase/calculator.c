#include <stdio.h>

int main(){
    double num1,num2;
    char opera;
    printf("what do you want ? like (+,-,*,/) \nEnter a operator \n");
    scanf("%c", &opera);
    printf("enter two numbers: %c",opera);
    scanf("%lf  %lf", &num1, &num2);
    

    switch(opera){
        case'+': {
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1+num2);
            break;
        }
            
        case'-': {
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1+num2);
            break;
        }
            
        case'*': {
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1+num2);
            break;
        }
            
        case'/': {
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1+num2);
            break;
        }
            
        case'%': {
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1+num2);
            break;
        }
            
        default :
            printf("result 0");

    }
}