#include<stdio.h>

int main() {

    int num, i, j, k, count, num1[20], count2=0;
    printf(" *** Prime factor of a number ***\n");
    printf("Enter number : ");
    scanf("%d", &num);
    printf("Result :");
    while(num != 1) {
        for(i=2; i<=num; i++) {     
            if(num%i == 0) {
                count2=0;
                for(j=1; j<=i; j++) {
                    if(i%j == 0) {
                        count2++;
                    }
                }
                if(count2 == 2) {
                    printf(" %d", i);
                    num = num/i;
                    i=1;
                }
            }
        }
    }

    return 0;
}