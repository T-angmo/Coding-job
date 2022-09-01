#include<stdio.h>

int main() {

    char name[20],sur[20];
    float score;
    printf("Enter name : ");
    scanf("%s %s", name, sur);
    printf("Enter score : ");
    scanf("%f", &score);
    printf("\n=== SORE ===\n");
    printf("Name: %s %s Score = %.2f",name,sur ,score);
    printf("\nGrade is ");
    if(score>=90 && score<=100) {
        printf("A");
    }
    else if(score>=80 && score<=89.99) {
        printf("B");
    }
    else if(score>=70 && score<=79.99) {
        printf("C");
    }
    else if(score>=60 && score<=69.99) {
        printf("D");
    }
    else if(score>=0 && score<=59.99) {
        printf("F");
    }
    printf("\n------------------------");
}