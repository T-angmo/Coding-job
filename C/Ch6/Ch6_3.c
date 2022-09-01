#include<stdio.h>

int main() {

    int n1, n2, i, j, count=0, sum=0;
    printf(" *** Show prime number ***\n");
    printf("Enter 2 positive numbers : ");
    scanf("%d %d", &n1, &n2);
    if(n1>n2) {
        i = n1;
        n1 = n2;
        n2 = i;
    }
    printf("\nprime number(s) from %d to %d :", n1,n2);
    for(i=n1; i<=n2; i++) {
        count=0;
        for(j=1; j<=i; j++) {
            if(i%j==0) {
                count++;
            }
        }
        if(count==2) {
            printf(" %d", i);
            sum++;
        }
    }
    printf("\ntotal prime numbers : %d",sum);

    return 0;
}