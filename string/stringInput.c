#include <stdio.h>

int main(){
    char name[60];
    printf("enter your name :\n");
    fgets(name,60,stdin);
    printf("%s",name);
}