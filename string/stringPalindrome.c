#include <stdio.h>
#include <string.h>
int main(){
    char normalName[40];
    char reverseName[40];
    printf("enter your name : \n");
    fgets(normalName,40,stdin);
    int i=0,j,length=0,k=0,flag=0;

    while (normalName[i] !='\0')
    {
        i++;
        length++;
    }

    for(j=0,length=i-1;length>=0;length--,j++){
        reverseName[j]= normalName[length];
    }
    reverseName[j] = '\0';

    while(normalName[k] !='\0' && reverseName[k] !='\0'){
        if(normalName[k] != reverseName[k]){
            flag = 1;
            break;
        }
        k++;
    }
    if(flag == 0){
        printf("it's  a palindrome number");
    }else{
        printf("it's not a palindrome number");
    }

}
    

