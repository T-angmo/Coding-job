#include<stdio.h>

int main() {

    int num, ans=1, num1[4], i=0;
    printf("Enter number < 1000 : ");
    scanf("%d", &num);
    if(num<1000) {
        printf("Result = ");
        if(num == 0) {
            printf("0");
        }
        else if(num>=10) {
            while(num != 0) {
                num1[i] = num%10;
                ans = ans*(num%10);
                num = num/10;
                i++;
            }
            printf("%d", num1[i-1]);
            for(i; i>1; i--) {
                printf(" * %d", num1[i-2]);
            }
                printf(" = %d", ans);
        }   
        else if(num<10) {
            printf("%d", num);
        }     
    }

    return 0;
}