#include <stdio.h>
#include <string.h>
int main(){
    char firstName[40];
    char lastName[40];
    int i=0,length=0,value,j=0;
    printf("enter your name : \n");
    fgets(firstName,40,stdin);
    fgets(lastName,40,stdin);

    int d = strcmp(firstName,lastName);

    if(d==0){
        printf("they are equal");
    }else{
        printf("they are not equal");
    }
}