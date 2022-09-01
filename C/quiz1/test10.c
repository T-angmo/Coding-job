#include<stdio.h>

int main() {

    int num1, num2;
    printf("Enter the number and Denominator : ");
    scanf("%d %d", &num1, &num2);
    printf("The answer is");
    printf("\n\t%d", num1%num2);
    printf("\n      %2d-", num1/num2);
    printf("\n\t%d", num2);

    return 0;
}