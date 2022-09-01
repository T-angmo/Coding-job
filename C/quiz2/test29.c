//    1
//    3   5
//    7   9  11
//   13  15  17  19
//   21  23  25  27  29
#include<stdio.h>

int main() {

    int num,i,j,count=1;
    printf("Input : ");
    scanf("%d", &num);
    if(num<1) {
        printf("No Answer  ");
    }
    else {
        for(i=0; i<num; i++) {
            for(j=0; j<=i; j++) {
                printf("%4d", count);
                count += 2;
                
            }
            printf("\n");
        }
    }

    return 0;
}