#include <stdio.h>
struct Students{
    char name[20];
    int roll;
    float cgpa;
};

void displayData(struct Students data){
    printf("%s ",data.name);
    printf("%d ",data.roll);
    printf("%.1f ",data.cgpa);
}

int main(){
    struct Students student[3];
    int i;

    for(i=0; i<3; i++){
        printf("Enter all student information here \n");
        printf("Enter %d student name: \n",i+1);
        scanf(" %[^\n]s",student[i].name);
        printf("Enter %d student roll: \n",i+1);
        scanf("%d", &student[i].roll);
        printf("Enter %d student cgpa: \n",i+1);
        scanf("%f", &student[i].cgpa);
    }
    printf("\n \n");
    for(i=0; i<3; i++){
        displayData(student[i]); 
    }
    

}