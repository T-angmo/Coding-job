//find odd number from 0 to input
#include<stdio.h>

int main() {

    int sumOdd=0,i=0,inputValue;
    printf("Enter inputs : ");
    scanf("%d", &inputValue);
    while(i<=inputValue) {
        if(i%2 != 0) {
            sumOdd = sumOdd+1;
        }
        i=i+1;
    }
    printf("%d",sumOdd);

    return 0;
}