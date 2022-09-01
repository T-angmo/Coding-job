#include<stdio.h>

int main() {

    float width, height, area;
    printf("Enter width and height : ");
    scanf("%f %f", &width, &height);
    area = width*height/2;
    printf("Area is %.2f", area);
    if(area>100) {
        printf("\nArea over 100 units.");
    }

    return 0;
}