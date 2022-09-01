#include<stdio.h>

int main() {

    int num1, num2, num3;
    float sum, average=0;
    printf(" *** Average of 3 integers ***\n");
    printf("input   : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    sum = num1+num2+num3;
    average = sum/3;
    printf("Average : %.3f", average);

    return 0;
}