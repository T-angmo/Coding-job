#include<stdio.h>

int main() {

    char input;
    printf("Input : ");
    scanf("%c", &input);
    printf("Prev char : %c(%d)", input-2, input-2);

    return 0;
}