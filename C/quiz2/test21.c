#include<stdio.h>

int main() {

    int num, check,a,b;
    printf(" *** Conditional Test ***\n");
    printf("Enter a number : ");
    scanf("%d", &num);

    if(num>=10 && num<=99) {
        a=num%10;
        num = num/10;
        b=num%10;
        num = a+b;
        check = num%3;
        switch (check)
        {
        case 0:
            printf("Hello, do good to people for no reason.");
            break;
        case 1:
            printf("Hello, what a wonderful world!");
            break;
        case 2:
            printf("Hello, it is a beautiful day.");
            break;
        default:
            break;
        }
    }
    else{
        printf("You're done !!!");
    }
    

    return 0;
}