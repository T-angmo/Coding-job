#include<stdio.h>

typedef struct student_info {
    char name[60];
    char sur[60];
    char sex[10];
    int age;
    int id;
    float gpa;
}student;


int main() {

    student s1;
    printf("Enter name, surname, sexual, age, ID, GPA : ");
    scanf("%s %s %s %d %d %f", &s1.name, &s1.sur, &s1.sex, &s1.age, &s1.id, &s1.gpa);
    if(strcmp(s1.sex, "Male") == 0) {
        printf("Mr");
    }
    else if(strcmp(s1.sex, "Female") == 0) {
        printf("Miss");
    }
    printf(" %c %s (%d) ID: %d GPA %.2f", s1.name[0], s1.sur, s1.age, s1.id, s1.gpa);
    return 0;
}