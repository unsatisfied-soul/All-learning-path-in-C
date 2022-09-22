#include<stdio.h>
#include <string.h>

int main(){
    char name[20] = "Doglas Costa";
    int nameLength = strlen(name),i;

    FILE *nameAdd;
    nameAdd = fopen("program.txt","a");

    if(nameAdd == NULL){
        printf("file doesnot exist");
    }else{
        for(i=0; i<nameLength;i++){
            fputc(name[i] ,nameAdd);   
        }
        printf("file write succesfully \n");
        fclose(nameAdd);
    }

    //character file read
    nameAdd = fopen("program.txt","r");
    char receiveStringRead[20];
    fgets(receiveStringRead,20,nameAdd);
    printf("%s",receiveStringRead);
    fclose(nameAdd);

    return 0;
}