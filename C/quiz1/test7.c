#include<stdio.h>

int main() {

    int second=0, minute=0, hour=0;
    printf("Input seconds: ");
    scanf("%d", &second);
    
    if(second >= 60) {
        minute = second/60;
        second = second%60;
        if(minute >= 60) {
            hour = minute/60;
            minute = minute%60;
        }

    }
    printf("H:M:S - %d:%d:%d", hour, minute, second);

    return 0;
}