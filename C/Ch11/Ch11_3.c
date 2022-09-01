#include<stdio.h>

int main() {

    char input1, input2;
    printf("input      : ");
    scanf("%c %c", &input1, &input2);
    printf("Result     : %d", input2-input1);
                       
    return 0;
}