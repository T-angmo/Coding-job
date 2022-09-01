#include<stdio.h>

int main() {

    char input;
    printf(" *** Show a character in variety formats. ***\n");
    printf("Enter a character : ");
    scanf("%c", &input);
    printf("\n\tInput  : %c", input);
    printf("\n\tASCII  : %d", input);
    printf("\n\tSquare : %d", input*input);

    return 0;
}