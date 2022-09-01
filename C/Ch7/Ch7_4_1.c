#include <stdio.h>

int has_lower_case(char string[]);
int has_upper_case(char string[]);
int has_number(char string[]);
int check_length(char string[]);

int main() {
    char password[20];
    printf("Enter password : ");
    scanf("%s", &password);
    printf("verifying . . .");
    if(has_lower_case(password)+has_upper_case(password)+has_number(password)+check_length(password) >= 4) {
        printf("\n> Your password is strong!");
    }
    else {
        printf("\n> Your password is weak!");
    }
}

int has_lower_case(char string[]) {
    int i,flag=0;
    for(i=0; string[i]!='\0'; i++) {
        if(string[i] >= 'a' && string[i] <= 'z') {
            return 1;
        }
    }
    return 0;
}

int has_upper_case(char string[]) {
    int i,flag=0;
    for(i=0; string[i]!='\0'; i++) {
        if(string[i] >= 'A' && string[i] <= 'Z') {
            return 1;
        }
    }
    return 0;
}

int has_number(char string[]) {
    int i,flag=0;
    for(i=0; string[i]!='\0'; i++) {
        if(string[i] >= '0' && string[i] <= '9') {
            return 1;
        }
    }
    return 0;
}

int check_length(char string[]) {
    int i,flag=0;
    for(i=0; string[i]!='\0'; i++);
    if(i>=8) {
        return 1;
    }
    return 0;
}