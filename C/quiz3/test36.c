/*Enter : 5
*
**
***
**
**/
#include<stdio.h>

int main() {

    int num,i,j;
    printf("Enter : ");
    scanf("%d",&num);
    if(num%2 == 0) {
        for(i=0; i<num/2; i++) {
            for(j=num/2-i; j<=num/2; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    else {
        for(i=0; i<=num/2; i++) {
            for(j=num/2-i; j<=num/2; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    for(i=0; i<num/2; i++) {
        for(j=0; j<num/2-i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}