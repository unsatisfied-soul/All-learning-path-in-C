#include<stdio.h>

int main(){
    int num;
    FILE *bginner;
    bginner = fopen("program.txt","w");

    if(bginner ==NULL){
        printf("error occered here");
    }else{
        printf("enter a num:\n");
        scanf("%d\n",&num);
    }
    fprintf(bginner,"%d",num);
    fclose(bginner);
    return 0;
}