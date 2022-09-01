#include<stdio.h>

int main() {

    int fah;
    float fah1, cel;
    printf(" *** Fahrenheit 2 Celsius converter ***\n");
    printf("input Fahrenheit : ");
    scanf("%d", &fah);
    fah1 = fah;
    cel = (fah1-32)*5/9;
    printf("output Celsius : %.2f", cel);

    return 0;
}