#include<stdio.h>

int main() {

    char name[20], sur[20], id[8], depart[20];
    printf("Enter Name Surname ID Department : ");
    scanf("%s %s %s %s", &name, &sur, &id, &depart);
    printf("%s%76s\n%s%72s", name, sur, id, depart);

    return 0;
}