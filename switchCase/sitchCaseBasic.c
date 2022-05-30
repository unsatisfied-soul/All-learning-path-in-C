//core is : switch case break default
#include <stdio.h>

int main(){
    int number;
    printf("enter a number :");
    scanf("%d", &number);

    switch (number)
    {
        case 0: 
            printf("it's zero \n");
        case 1: 
            printf("it's one \n");
        case 2: 
            printf("it's two \n");
        case 3: 
            printf("it's three \n");
        case 4: 
            printf("it's four \n");
        case 5: 
            printf("it's five \n");
        case 6: 
            printf("it's six \n");
        
        default:
            printf("number is no match");
    }
}