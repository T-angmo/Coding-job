#include<stdio.h>

int main() {

    int num1,num2, temp,i,sum=0;
    printf(" *** Display Summation (skip 2 number)***\n");
    printf("Enter 2 whole numbers : ");
    scanf("%d %d", &num1,&num2);
    if(num1>num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("Summation = %d", num1);
    sum = num1;
    for(i=num1+2; i<=num2; i++,i++) {
        printf(" + %d", i);
        sum += i;
    }
    printf(" = %d",sum);
    

    return 0;
}