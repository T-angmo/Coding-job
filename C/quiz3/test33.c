/*Enter a number : 28
7       14      21      28*/
#include<stdio.h>

int main() {

    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        if(i%7 == 0) {
            printf("%d\t",i);
        }
    }

    return 0;
}