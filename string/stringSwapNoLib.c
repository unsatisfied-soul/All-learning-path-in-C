#include <stdio.h>

int main(){
    char string1[40],string2[40],temporalString[40];
    int i=0;

    printf("enter string value : \n");
    fgets(string1,40,stdin);
    printf("\n");
    fgets(string2,40,stdin);

    //string1 value add in temporal string
    while(string1[i] != '\0'){
        temporalString[i]= string1[i];
        i++;
    }
    temporalString[i] = '\0';
    i=0;


    //string2 value add in string1
    while(string2[i] != '\0'){
        string1[i]= string2[i];
        i++;
    }
    string1[i] = '\0';
    i=0;

    //temporal string value add in string2
    while(temporalString[i] != '\0'){
        string2[i]= temporalString[i];
        i++;
    }
    string2[i] = '\0';
    printf("%s%s",string1,string2);
}