
// 1
// 12
// 123
// 1234
// 12345
#include<stdio.h>

int main() {

    int num, i, j, count;
    printf("input : ");
    scanf("%d", &num);
    printf("\n");
        for(i=1; i<=num; i++) {
            for(j=1, count=1; count<i+1; j++, count++) {
                printf("%d", j);
            }
            printf("\n");
        }
   

    return 0;
}