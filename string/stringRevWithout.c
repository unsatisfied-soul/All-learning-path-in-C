#include <stdio.h>
#include <string.h>
int main(){
    char firstName[40];
    char store[40];
    int i=0,j,k=0;
    printf("enter your name : \n");
    fgets(firstName,40,stdin);
    while(firstName[i] != '\0'){
        i++;
        k++;
    }
    for(j=0,i=k-1;i>=0;i--,j++){ //there j=0 means it's store 0 index data first  i=k-1 means we add not last element data firstle add last previous index data.
        store[j] = firstName[i];
    }
    store[j] = '\0';
    printf("%s",firstName);
    printf("%s",store);
}