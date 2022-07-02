#include <stdio.h>

int main(){
    char name[40];
    int i=0;
    printf("enter your name : \n");
    fgets(name,40,stdin);

    while (name[i]!='\0'){
        i++;
    }
    printf("%d",i);
}