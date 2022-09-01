// 1  
// 1  2
// 1  2  3
// 1  2  3  4
// 1  2  3  4  5
#include<stdio.h>

int main() {

    int num, i, j;
    printf("Enter Number : ");
    scanf("%d", &num);
    for(i=1; i<=num; i++) {
        for(j=1; j<i+1; j++) {
            printf("%d  ", j);
        }
        printf("\n");
    }

    return 0;
}