#include <stdio.h>

int main(){
    char name[40];
    printf("enter your name : \n");
    fgets(name,40,stdin);
    int i=0; //default value

    while(name[i]!='\0'){ // while loop use because it just loopint how many strin add here.
    if(name[i]==' ') printf("");
    else printf("%c \n",name[i]);
        i++;
    }

}