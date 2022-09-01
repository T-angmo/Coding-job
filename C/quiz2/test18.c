#include<stdio.h>

int main() {

    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    while(num>360) {
        num -= 360;
    }
    while(num<0) {
        num += 360;
    }
    if(num>0 && num<90) {
        printf("Quadrant 1");
    }
    else if(num>90 && num<180) {
        printf("Quadrant 2");
    }
    else if(num>180 && num<270) {
        printf("Quadrant 3");
    }
    else if(num>270 && num<360) {
        printf("Quadrant 4");
    }
    else if(num == 0 || num == 180) {
        printf("X-axis");
    }
    else if(num == 90 || num == 360) {
        printf("Y-axis");
    }

    return 0;
}