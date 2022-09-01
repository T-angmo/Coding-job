#include<stdio.h>

int main() {

    int num;
    printf(" *** Com Pro 57 ***\n");
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Result         : ");
    if(num%5 == 0 && num%7 == 0) {
        printf("ComPro");
    }
    else if(num%5 == 0) {
        printf("Com");
    }
    else if(num%7 == 0) {
        printf("Pro");
    }
    
    else {
        printf("%d", num);
    }

    return 0;
}