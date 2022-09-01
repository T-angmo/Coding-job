
// 54321
// 5432
// 543
// 54
// 5
#include<stdio.h>

int main() {

    int num, i, j, count;
    printf("input : ");
    scanf("%d", &num);
    count = num;
    printf("\n");
    for(i=0; i<=num; i++) {
        for(j=0,count=num; j<num-i; j++,count--) {
            printf("%d", count);
        }
        printf("\n");
    }

    return 0;
}