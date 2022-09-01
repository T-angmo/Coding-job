/*input number : 20
2 2 5*/
#include<stdio.h>

int main() {

    int n,i,j,count=0;
    printf("input number : ");
    scanf("%d",&n);
    for(j=1; j<=n; j++) {
        count=0;
        //printf("a");
        for(i=1; i<=j; i++) {
            if(j%i == 0) {
                count++;
            }
        }
        //printf("%d ", count);
        if(count == 2) {
            if(n%j == 0) {
                printf("%d ",j);
                n=n/j;
                j=1;
                //printf("-%d ",n);
            }
        }
    }
    


    return 0;
}