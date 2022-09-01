#include<stdio.h>

int main() {

    int input;
    printf(" *** Display integer in different styles ***\n");
    printf("Enter an 8-digit integer : ");
    scanf("%d", &input);
    printf("Your number : %d", input);
    printf("\nvariable size = %d bytes", sizeof(input));
    printf("\nlast 3 digits :  %10d", input%1000);
    printf("\nnext 3 digits :  %10d", (input/1000)%1000);
    printf("\nnext 2 digits :  %10d", input/1000000);
    printf("\ncomma format  :  %2d,%3d,%3d", input/1000000, (input/1000)%1000, input%1000);

    return 0;
}