#include <stdio.h>

void increment(int i){
    i= i+1;
}

void incrementWorking(int *i){
    *i= *i+1;
}

int main(){
    int i = 765;
    printf("Orginal value: %d\n", i);
    increment(i);
    printf("After the increment %d\n", i); //there is same i value you find because function is a scope variable which are not working in other function
    incrementWorking(&i);
    printf("After the increment %d\n", i);

}