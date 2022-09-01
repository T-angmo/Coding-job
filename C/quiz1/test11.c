#include<stdio.h>

int main() {

    int base, height;
    float area;
    printf("input base height : ");
    scanf("%d %d", &base, &height);
    area = base*height;
    printf("Area : %.2f", area/2);

    return 0;
}