#include<stdio.h>

struct students{
    char studentName[30];
    int roll;
    float studentCGPA;
};

int main(){
    struct students student[3];
    int i;

    //coleact data
    for(i=0; i<3; i++){
        printf("Enter your student information student%d : \n",i+1);
        printf("enter student name : \n");
        scanf(" %[^\n]s",student[i].studentName);
        printf("enter student roll : \n");
        scanf("%d",&student[i].roll);
        printf("enter student cgpa : \n");
        scanf("%f",&student[i].studentCGPA);
    }
     printf("\n\n");
    //show data
    for(i=0; i<3; i++){
        printf("student name %s \n",student[i].studentName);
        printf("student roll %d\n", student[i].roll);
        printf("enter student cgpa %f\n", student[i].studentCGPA); 
    }
}