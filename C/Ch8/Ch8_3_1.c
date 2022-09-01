#include<stdio.h>

int main() {

    int a, b, temp=0, num;
    int count[10], i, j;
    for(i=0; i<10; i++) {
        count[i] = 0;
    }
    printf(" *** Digit counting ***\n");
    printf("Enter two counting numbers : ");
    scanf("%d %d", &a, &b);
    if(a<0 || b<0) {
        printf("Invalid input !!!");
    }
    else {
        if(a>b) {
            temp =a;
            a=b;
            b=temp;
        }
        for(i=a; i<=b; i++) {
            num = i;
            while(num != 0) {
                temp = 0;
                temp = num%10;
                count[temp]++;
                num = num/10;
            }
        }
        for(i=0; i<10; i++) {
            printf("%d --> %d\n", i, count[i]);
        }
    }

    return 0;
}