#include<stdio.h>

int main() {

    int n1,n2,i,j;
    printf("Input row and column : ");
    scanf("%d %d",&n1,&n2);
    printf("*");
        for(j=0; j<n2; j++) {
            printf("******");
        }
        printf("\n");
    for(i=0; i<n1; i++) {
        printf("*");
        for(j=0; j<n2; j++) {
            printf("     *");
        }
        printf("\n");
        printf("*");
        for(j=0; j<n2; j++) {
            printf("******");
        }
        printf("\n");
    }

    return 0;
}