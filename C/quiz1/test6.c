#include<stdio.h>

int main() {

    int num, num1;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num>=0) {
        num1 = (num/100)%10;
        printf("Number is %d", num1);
    }
    else {
        printf("Number is 0");
    }
    

    return 0;
}