#include<stdio.h>

int main() {

    int year;
    printf(" *** Leap year checking ***\n");
    printf("Enter year in BC (1000-3000) : ");
    scanf("%d", &year);
    if(year == 543) {
        printf(" %d", year);
        printf(" is NOT in the range (1000-3000).");

    }
    else if(year>=1000 && year<=3000) {
        printf("%d", year);
        if(year%400 == 0) {
            printf(" is a leap year.");
        }
        else if(year%4 == 0 && year%100 == 0) {
            printf(" is a common year.");
        }
        else if(year%4 == 0)  {
            printf(" is a leap year.");
        }
    }
    else {
        printf("%d", year);
        printf(" is NOT in the range (1000-3000).");
    }
    

    return 0;
}