#include<stdio.h>

int main() {

    int num;
    printf("ASCII number (66-91) : ");
    scanf("%d", &num);
    printf("Previous character --> %c (%d)", num-1, num-1);


    return 0;
}