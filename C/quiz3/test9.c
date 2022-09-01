#include<stdio.h>

int main() {

    int n,i,j;
    printf("Enter a number (1-16) : ");
    scanf("%d",&n);
    if(n>0 && n<=16) {
        for(i=0; i<n; i++) {
            if(i==0 || i==n-1) {
                for(j=n; j>=1; j--) {
                    printf("%X",j);
                }
            }
            else {
                printf("%X",n);
                for(j=1; j<n-1; j++) {
                    printf(" ");
                }
                printf("1");
            }
            
            printf("\n");
        }
    }
    else {
        printf("Out of range ! ! !");
    }

    return 0;
}