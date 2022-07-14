#include<stdio.h>

int main(){
    char string1[40];
    char string2[40];
    char tempString[40];
    printf("enter string value : \n");
    fgets(string1,40,stdin);
    printf("\n");
    fgets(string2,40,stdin);

    strcpy(tempString,string1);
    strcpy(string1,string2);
    strcpy(string2,tempString);
    printf("%s %s", string1,string2);

}