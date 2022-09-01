#include<stdio.h>

int main() {

    char input[200];
    printf(" *** Get input from keyboard as atring ***\n");
    printf("Please inout a string : ");
    scanf("%[^\n]", &input);
    printf("string : %s\n", input);
    printf("string : %.7s\n", input);
    printf("string : %.15s", input);

    return 0;
}