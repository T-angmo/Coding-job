#include<stdio.h>

int main() {

    int num1, num2, num3;
    float ans, a, b;
    printf("Enter numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num3 >=1 && num3<=4) {
        printf(" Result = ");
        if(num3 == 1) {
            ans = num1+num2;
            printf("%d + %d = %.2f", num1,num2,ans);
        }
        else if(num3 == 2) {
            ans = num1-num2;
            printf("%d - %d = %.2f", num1,num2,ans);
        }
        else if(num3 == 3) {
            ans = num1*num2;
            printf("%d * %d = %.2f", num1,num2,ans);
        }

        else if(num3 == 4) {
            a=num1, b=num2;
            ans = a/b;
            printf("%d / %d = %.2f", num1,num2,ans);
        }
    }
    else {
        printf("Bye....");
    }
    

    return 0;
}