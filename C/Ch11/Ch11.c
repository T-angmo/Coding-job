#include<stdio.h>

int main() {

    double r, pi = 3.14, temp;

    printf("Enter radius of the circle : ");
    scanf("%lf", &r);
    printf("Diameter = %.2f", r*2);
    printf("\nCircle Circumference = %.2f", 2*pi*r);
    temp = (int)(pi*r*r*100);
    printf("\nCircle Area = %.2f", temp/100);

    return 0;
}