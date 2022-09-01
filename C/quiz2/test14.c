#include<stdio.h>

int main() {

    int num, check;
    printf(" *** switch control structure ***\n");
    printf("Enter a number : ");
    scanf("%d", &num);
    check = num%7;
    switch (check)
    {
    case 0:
        printf("Hello, world!");
        break;
    case 1:
        printf("Hello, what a wonderful world!");
        break;
    case 2:
        printf("Hello, it is a beautiful day.");
        break;
    default:
        printf("You are the wind beneath my wings.");
        break;
    }

    return 0;
}