#include<stdio.h>

int main() {

    int num1, num2, num3, result;
    printf("Enter 3 number (large to small number) : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result = num1+num2-num3;
    printf("Result are  %d = %c", result, result);

    return 0;
}