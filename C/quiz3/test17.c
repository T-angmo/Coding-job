#include<stdio.h>

int main() {

    int n,i,j,num=9;
    printf("input (1-20) : ");
    scanf("%d",&n);
    printf("\n");
    if(n>0 && n<=20) {
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++,num--) {
                while(num<=0) {
                    num=9;
                }
                printf("  %d",num);
            }
            printf("\n");
        }
    }
    else {
        printf("No Answer");
    }

    return 0;
}