#include <stdio.h>
#include <string.h>
int main(){
    char firstName[40];
    printf("enter your name : \n");
    fgets(firstName,40,stdin);
   strrev(firstName);
   printf("%s",firstName);
}