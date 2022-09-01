#include<stdio.h>
#include <math.h>

int main() {

    int a, b;
    float c;
    printf("Enter input : ");
    scanf("%d %d", &a, &b);
    c = sqrt(a*a+b*b);
    printf("%.2f", c);

    return 0;
}