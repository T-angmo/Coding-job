#include<stdio.h>

int main() {

    int i,n ,count=0;
    printf(" *** Checking for PRIME number. ***\n");
    printf("Enter a counting number : ");
    scanf("%d",&n);
    if(n>0) {
            for(i=1; i<=n; i++) {
                if(n%i == 0) {
                    count++;
                }
            }
            //printf("%d\n",count);
            if(count == 2) {
                printf("%d is a PRIME number.",n);
            }
            else {
                printf("%d is NOT a prime number.",n);
            }
    }
    else {
        printf("Only positive whole number !!!");
    }
        
    return 0;
}