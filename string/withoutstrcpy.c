#include <stdio.h>
#include <string.h>
int main(){
    char name[40];
    char target[40];
    printf("enter your name : \n");
    fgets(name,40,stdin);
    int i=0;

    while (name[i]!='\n'){
        target[i]=name[i];
        i++;
    }
    target[i]='\0';
    printf("%s",target);
}