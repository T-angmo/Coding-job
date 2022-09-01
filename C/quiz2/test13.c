
// 11111
// 2222
// 333
// 44
// 5
#include<stdio.h>

int main() {

    int num, i, j, count;
    printf("input : ");
    scanf("%d", &num);
    count = num;
    printf("\n");
    for(i=1; i<=num; i++) {
        for(j=0; j<count; j++) {
            printf("%d", i);
        }
        count--;
        printf("\n");
    }

    return 0;
}