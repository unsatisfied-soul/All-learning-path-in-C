#include <stdio.h>

int main(){
    int b = 10;
    int c = 20;
    int *a = &b;
    printf("%d\n", a);
    int *d = &c;
    printf("%d\n", d);
    a=d;
    printf("%d\n", a);
}