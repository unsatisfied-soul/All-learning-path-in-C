#include <stdio.h>
#include <string.h>
int main(){
    char name[40];
    char target[40];
    int i=0;
    printf("enter your name : \n");
    fgets(name,40,stdin);
    strcpy(target,name);
    printf("%s",target);

}