#include<stdio.h>

int main() {

    int n,i,count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        if(i%2 == 1) {
            count++;
        }
    }
    printf("Odd numbers between 1 and %d : %d",n,count);

    return 0;
}