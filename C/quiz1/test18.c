#include<stdio.h>

int main() {

    char name[20], surname[20];
    int i;
    printf("Enter full name : ");
    scanf("%s %s", name, surname);
    printf("Result is ");
    for(i=0; i<3; i++) {
        printf("%c", surname[i]);
    }
    printf("KMITL");
    for(i=0; i<2; i++) {
        printf("%c", name[i]);
    }

    return 0;
}