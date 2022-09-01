//12      24      36      48      60      72
#include<stdio.h>

int main() {

    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        if(i%12 == 0) {
            printf("%d\t",i);
        }
    }

    return 0;
}