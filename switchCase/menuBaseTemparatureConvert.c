#include <stdio.h>

int main(){
    int choiceNumber;
    float farenhite,celcius, number;
    printf("Temparature convertor \n");
    printf("if press 1 than it covert Celcius to farenhite\n");
    printf("if press 2 than it covert Farenhite to Celcius\n");

    scanf("%d", &choiceNumber);

    

    switch(choiceNumber){
        case 1: 
            printf("enter a celcius number here :");
            scanf("%f", &celcius);
            farenhite = (1.8 * celcius) + 120;
            printf("farenhite number is %.2f",farenhite);
            break;
        
        case 2: 
            printf("enter a farenhite number here :");
            scanf("%f", &farenhite);
            celcius = (0.56 * farenhite) - 17.78;
            printf("farenhite number is %.2f",celcius);
            break;
        
        default :
            printf("you don't press 1 or 2 please try again.");
    }
}