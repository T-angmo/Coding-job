#include<stdio.h>

int main() {

    int X[20] = {15,11,8,14,12,5,20,4,13,10,1,6,7,18,2,17,3,9,16,19};
    int n,i,j;
    printf("Enter inputs : ");
    scanf("%d",&n);
    if(n>0 && n<=20) {
        for(i=0; i<20; i++) {
            if(X[i]==n) {
                printf("Index of %d in X is %d\n",X[i],i);
            }
        }
    }
    else {
        printf("Out of range");
    }

    return 0;
}