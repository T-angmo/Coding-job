#include<stdio.h>

int main() {

    int num[4], distance;
    printf("Enter x,y,x1,y1 respectively : ");
    scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);
    distance = (num[0]-num[2])*(num[0]-num[2]) + (num[1]-num[3])*(num[1]-num[3]);
    printf("Distance between %d,%d to %d,%d is %d", num[0], num[1], num[2], num[3], distance);


    return 0;
}