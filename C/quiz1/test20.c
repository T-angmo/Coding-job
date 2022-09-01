#include<stdio.h>

int main() {

    int num;
    printf(" *** Show a number in variety formats. ***\n");
    printf("Enter a whole number : ");
    scanf("%d", &num);
    printf("Input  : %d", num);
    printf("\nSquare : %d", num*num);
    printf("\nCube   : %d", num*num*num);
    printf("\n   %3d / 17  =  %.1f", num, num*0.1*10/17);
    printf("\n   %3d / 23  =  %.2f", num, num*0.1*10/23);
    printf("\n   %3d / 37  =  %.3f", num, num*0.1*10/37);

    return 0;
}