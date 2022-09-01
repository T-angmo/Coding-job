#include<stdio.h>

int  main() {

    int num1, num2, check=0;
    char cal;
    printf("Enter Num1 : ");
    scanf("%d",&num1);
    printf("Enter Num2 : ");
    scanf("%d",&num2);
    printf("Calcutator Menu : \n 1. +\n 2. -\n 3. *\n 4. /\n");
    do {
        check++;
        printf("Choose menu : ");
        scanf("%c",&cal);
        if(cal == '+' || cal == '-' || cal == '*' || cal == '/') {
            break;
        }
    } while (1);
    printf("Ans: ");
    switch (cal) {
    case '+':
        printf("%d + %d = %d", num1,num2,num1+num2);
        break;
    case '-':
        printf("%d - %d = %d", num1,num2,num1-num2);
        break;
    case '*':
        printf("%d * %d = %d", num1,num2,num1*num2);
        break;
    case '/':
        printf("%d / %d = %d", num1,num2,num1/num2);
        break;
    default:
        break;
    }
    printf("\nPress any key to continue . . .");
}