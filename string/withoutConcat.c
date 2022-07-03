#include <stdio.h>
#include <string.h>
int main(){
    char firstName[40];
    char lastName[40];
    char fullName[40];
    int i=0,length=0,value,j=0;
    printf("enter your name : \n");
    fgets(firstName,40,stdin);
    fgets(lastName,40,stdin);

    //store first name
    while(firstName[i] != '\0'){
        fullName[i]= firstName[i];
        i++;
        length++;
    }

    //store last name
    while(lastName[j] != '\0'){
        fullName[length+j]= lastName[j];
        j++;
    }

    fullName[length+j] = '\0'; //for garbage remove
    printf("%s",fullName);
    
    
}