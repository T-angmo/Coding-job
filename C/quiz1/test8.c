#include<stdio.h>

int main() {

    char input[3];
    printf("Input 3 characters : ");
    scanf("%c %c %c", &input[0], &input[1], &input[2]);
    printf("Result : %c %c %c", input[0]+3, input[1]+3, input[2]+3);

    return 0;
}