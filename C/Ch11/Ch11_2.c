#include<stdio.h>

int main() {

    int x, y, x1, y1, distance;
    printf("Enter x,y,x1,y1 respectively : ");
    scanf("%d %d %d %d", &x, &y, &x1, &y1);
    distance = (x-x1)*(x-x1) + (y-y1)*(y-y1);
    printf("Distance between %d,%d to %d,%d is %d", x, y, x1, y1, distance);


    return 0;
}