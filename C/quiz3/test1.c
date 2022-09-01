#include<stdio.h>

int main() {

    int n,i,num=1;
    printf("Input the number of bits : ");
    scanf("%d",&n);
    if(n>0 && n<=16) {
        for(i=0; i<=n; i++) {
            printf("%5d\n",num);
            num = num*2;
            if(n==1) {
                break;
            }
        }
    }
    else {
        printf("The number is over range");
    }

    return 0;
}