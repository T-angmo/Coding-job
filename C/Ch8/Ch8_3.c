#include<stdio.h>

int main() {

    int num[10], i, diff1=0, diff2=0;
    printf(" *** Maximum diference of adjacent number ***\n");
    printf("Enter 10 integers : ");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }
    for(i=0; i<9; i++) {
        diff1 = 0;
        if(num[i] > num[i+1]) {
            diff1 = num[i] - num[i+1];
        }
        else {
            diff1 = num[i+1] - num[i];
        }
        if(diff1 > diff2) {
            diff2 = diff1;
        }
    }
    printf("Maximum differnce is %d", diff2);

    return 0;
}