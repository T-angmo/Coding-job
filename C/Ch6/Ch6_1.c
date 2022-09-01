#include<stdio.h>

int main() {

    int n1, n2, i, j, num, sum = 0;
    printf(" *** Summation of common factor ***\n");
    printf("Enter two positive numbers : ");
    scanf("%d %d", &n1, &n2);
    printf("Summation of common factors between %d and %d ==> ",n1,n2);
    if(n1>n2) {
        i = n1;
        n1 = n2;
        n2 = i;
    }
    for(i=1; i<=n1; i++) {
        if((n1%i == 0) && (n2%i == 0)) {
            sum += i;
        }
    }
    printf("%d",sum);

    return 0;
}