#include<stdio.h>

int main() {

    char input[100], i;
    printf(" *** Get input from keyboard as string ***\n");
    printf("Please input a string : ");
    scanf("%[^\n]", &input);
    printf("string : %s", input);
    printf("\nstring : ");
    for(i=0; i<7; i++) {
        printf("%c", input[i]);
    }
    printf("\nstring : ");
    for(i=0; i<15; i++) {
        printf("%c", input[i]);
    }


    return 0;
}