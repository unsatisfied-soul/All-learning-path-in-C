#include <stdio.h>
#include <string.h>

int main(){
    char name[40];
    printf("enter your name : \n");
    fgets(name,40,stdin);

    int stringLength = strlen(name);
    printf("%d \n",stringLength);
}