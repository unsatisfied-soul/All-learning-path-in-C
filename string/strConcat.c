#include <stdio.h>
#include <string.h>
int main(){
    char firstName[40];
    char lastName[40];
    printf("enter your name : \n");
    fgets(firstName,40,stdin);
    fgets(lastName,40,stdin);

    strcat(firstName,lastName);
    printf("%s\n",firstName);
}