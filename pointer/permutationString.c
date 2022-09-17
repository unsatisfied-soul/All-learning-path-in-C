#include <stdio.h>
#include <string.h>

int main(){
    char stringValue[10], i;

    printf("please add string value \n");
    scanf("%s",stringValue);
    
    int n = strlen(stringValue);
    printf("%d", n);
    return 0;
}