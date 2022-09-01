#include<stdio.h>
#include <string.h>
#define SIZE 20

int main() {

    struct student {
        char name[30];
        char surname[30];
    } st[SIZE];

    int i, j;
    char temp1[30], temp2[30];
    for(i=0; i<SIZE; i++) {
        printf("Enter name, surname of student%d : ",i+1);
        scanf("%s %s", st[i].name, st[i].surname);
    }
    for(i=0; i<SIZE; i++) {
        if(st[i].name[0] >= 'a' && st[i].name[0] <= 'z') {
            st[i].name[0] -= 32;
        }
        for (j = 1; st[i].name[j] != '\0'; j++) {
            if(st[i].name[j] >= 'A' && st[i].name[j] <= 'Z') {
                st[i].name[j] += 32;
            }
        }
        if(st[i].surname[0] >= 'a' && st[i].surname[0] <= 'z') {
            st[i].surname[0] -= 32;
        }
        for (j = 1; st[i].surname[j] != '\0'; j++) {
            if(st[i].surname[j] >= 'A' && st[i].surname[j] <= 'Z') {
                st[i].surname[j] += 32;
            }
        }
    }
    for(i=0; i<SIZE-1; i++) {
        for (j = 0; st[i].name[j] != '\0'; j++) {
            if(st[i].name[i] > st[i+1].name[i]) {
                strcpy(temp1, st[i].name);
                strcpy(temp2, st[i].surname);
                strcpy(st[i].name, st[i+1].name);
                strcpy(st[i].surname, st[i+1].surname);
                strcpy(st[i+1].name, temp1);
                strcpy(st[i+1].surname, temp2);
                break;
            }
        }
        
    }
    for(i=0; i<SIZE; i++) {
        printf("%s %s\n", st[i].name, st[i].surname);
    }
    
    return 0;
}