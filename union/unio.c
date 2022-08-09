#include<stdio.h>

union students{
    char name[20];
    int roll;
    float cgpa;
};

int main(){
    union students student;
    student.roll = 25;
    printf("%c \n", student.name);
    printf("%d \n", sizeof(student));
    printf("%.1f", student.cgpa);
}