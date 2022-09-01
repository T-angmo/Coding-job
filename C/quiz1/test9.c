#include<stdio.h>

int main() {

    char input[100] = " ", i;
    printf("Enter your string : ");
    scanf("%[^\n]", &input);
    printf("First twelve character = ");
    for(i=0; i<12; i++) {
        printf("%c", input[i]);
    }

    return 0;
}