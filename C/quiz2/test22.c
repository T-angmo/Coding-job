#include<stdio.h>

int main() {

    int num1, num2, num3,ans;
    printf("Enter 3 Number : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    ans = num1+num2+num3;
    printf("ANSWER = %d\n", ans);
    ans = ans/100;
    ans = ans%10;
    if(ans%2 == 0) {
        printf("EVEN");
    }
    else {
        printf("ODD");
    }
    

    return 0;
}