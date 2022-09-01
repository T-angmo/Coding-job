#include<stdio.h>

int main() {

    int num1;
    float num2, sum;
    printf(" *** integer and float summation ***\n");
    printf("input  : ");
    scanf("%d %f", &num1, &num2);
    sum = (num1%10)+num2;
    printf("output : %.3f", sum);


    return 0;
}