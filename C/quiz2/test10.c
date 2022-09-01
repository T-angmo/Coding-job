#include<stdio.h>

int main() {

    int a1,a2,n, num[100],i;
    printf("******** Fibonacci series ********\n");
    printf("*  A(1) and A(2) are assigned.   *\n");
    printf("*     A(n) = A(n-1) + A(n-2)     *\n");
    printf("*--------------------------------*\n\n");
    printf("Enter A1 A2 n : ");
    scanf("%d %d %d", &a1,&a2,&n);
    num[0] = a1,num[1] = a2;
    printf("\n%d %d ",num[0],num[1]);
    for(i=2; i<n; i++) {
        num[i] = num[i-1]+num[i-2];
        printf("%d ",num[i]);
    }


    return 0;
}