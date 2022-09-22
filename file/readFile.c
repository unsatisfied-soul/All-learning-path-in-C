#include <stdio.h>

int main(){
    int x;
    FILE *readFile;
    if((readFile = fopen("program.txt","r")) == NULL){
        printf("error openning file");
    }else{
        fscanf(readFile,"%d",&x);
    }
    printf("value of %d",x);
    fclose(readFile);

    return 0;
}